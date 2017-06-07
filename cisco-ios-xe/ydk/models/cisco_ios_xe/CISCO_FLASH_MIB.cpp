
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_FLASH_MIB.hpp"

namespace ydk {
namespace CISCO_FLASH_MIB {

CiscoFlashMib::CiscoFlashMib()
    :
    ciscoflashcfg(std::make_shared<CiscoFlashMib::Ciscoflashcfg>())
	,ciscoflashchiptable(std::make_shared<CiscoFlashMib::Ciscoflashchiptable>())
	,ciscoflashcopytable(std::make_shared<CiscoFlashMib::Ciscoflashcopytable>())
	,ciscoflashdevice(std::make_shared<CiscoFlashMib::Ciscoflashdevice>())
	,ciscoflashdevicetable(std::make_shared<CiscoFlashMib::Ciscoflashdevicetable>())
	,ciscoflashfilebytypetable(std::make_shared<CiscoFlashMib::Ciscoflashfilebytypetable>())
	,ciscoflashfiletable(std::make_shared<CiscoFlashMib::Ciscoflashfiletable>())
	,ciscoflashmiscoptable(std::make_shared<CiscoFlashMib::Ciscoflashmiscoptable>())
	,ciscoflashpartitioningtable(std::make_shared<CiscoFlashMib::Ciscoflashpartitioningtable>())
	,ciscoflashpartitiontable(std::make_shared<CiscoFlashMib::Ciscoflashpartitiontable>())
{
    ciscoflashcfg->parent = this;

    ciscoflashchiptable->parent = this;

    ciscoflashcopytable->parent = this;

    ciscoflashdevice->parent = this;

    ciscoflashdevicetable->parent = this;

    ciscoflashfilebytypetable->parent = this;

    ciscoflashfiletable->parent = this;

    ciscoflashmiscoptable->parent = this;

    ciscoflashpartitioningtable->parent = this;

    ciscoflashpartitiontable->parent = this;

    yang_name = "CISCO-FLASH-MIB"; yang_parent_name = "CISCO-FLASH-MIB";
}

CiscoFlashMib::~CiscoFlashMib()
{
}

bool CiscoFlashMib::has_data() const
{
    return (ciscoflashcfg !=  nullptr && ciscoflashcfg->has_data())
	|| (ciscoflashchiptable !=  nullptr && ciscoflashchiptable->has_data())
	|| (ciscoflashcopytable !=  nullptr && ciscoflashcopytable->has_data())
	|| (ciscoflashdevice !=  nullptr && ciscoflashdevice->has_data())
	|| (ciscoflashdevicetable !=  nullptr && ciscoflashdevicetable->has_data())
	|| (ciscoflashfilebytypetable !=  nullptr && ciscoflashfilebytypetable->has_data())
	|| (ciscoflashfiletable !=  nullptr && ciscoflashfiletable->has_data())
	|| (ciscoflashmiscoptable !=  nullptr && ciscoflashmiscoptable->has_data())
	|| (ciscoflashpartitioningtable !=  nullptr && ciscoflashpartitioningtable->has_data())
	|| (ciscoflashpartitiontable !=  nullptr && ciscoflashpartitiontable->has_data());
}

bool CiscoFlashMib::has_operation() const
{
    return is_set(operation)
	|| (ciscoflashcfg !=  nullptr && ciscoflashcfg->has_operation())
	|| (ciscoflashchiptable !=  nullptr && ciscoflashchiptable->has_operation())
	|| (ciscoflashcopytable !=  nullptr && ciscoflashcopytable->has_operation())
	|| (ciscoflashdevice !=  nullptr && ciscoflashdevice->has_operation())
	|| (ciscoflashdevicetable !=  nullptr && ciscoflashdevicetable->has_operation())
	|| (ciscoflashfilebytypetable !=  nullptr && ciscoflashfilebytypetable->has_operation())
	|| (ciscoflashfiletable !=  nullptr && ciscoflashfiletable->has_operation())
	|| (ciscoflashmiscoptable !=  nullptr && ciscoflashmiscoptable->has_operation())
	|| (ciscoflashpartitioningtable !=  nullptr && ciscoflashpartitioningtable->has_operation())
	|| (ciscoflashpartitiontable !=  nullptr && ciscoflashpartitiontable->has_operation());
}

std::string CiscoFlashMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoFlashMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashCfg")
    {
        if(ciscoflashcfg == nullptr)
        {
            ciscoflashcfg = std::make_shared<CiscoFlashMib::Ciscoflashcfg>();
        }
        return ciscoflashcfg;
    }

    if(child_yang_name == "ciscoFlashChipTable")
    {
        if(ciscoflashchiptable == nullptr)
        {
            ciscoflashchiptable = std::make_shared<CiscoFlashMib::Ciscoflashchiptable>();
        }
        return ciscoflashchiptable;
    }

    if(child_yang_name == "ciscoFlashCopyTable")
    {
        if(ciscoflashcopytable == nullptr)
        {
            ciscoflashcopytable = std::make_shared<CiscoFlashMib::Ciscoflashcopytable>();
        }
        return ciscoflashcopytable;
    }

    if(child_yang_name == "ciscoFlashDevice")
    {
        if(ciscoflashdevice == nullptr)
        {
            ciscoflashdevice = std::make_shared<CiscoFlashMib::Ciscoflashdevice>();
        }
        return ciscoflashdevice;
    }

    if(child_yang_name == "ciscoFlashDeviceTable")
    {
        if(ciscoflashdevicetable == nullptr)
        {
            ciscoflashdevicetable = std::make_shared<CiscoFlashMib::Ciscoflashdevicetable>();
        }
        return ciscoflashdevicetable;
    }

    if(child_yang_name == "ciscoFlashFileByTypeTable")
    {
        if(ciscoflashfilebytypetable == nullptr)
        {
            ciscoflashfilebytypetable = std::make_shared<CiscoFlashMib::Ciscoflashfilebytypetable>();
        }
        return ciscoflashfilebytypetable;
    }

    if(child_yang_name == "ciscoFlashFileTable")
    {
        if(ciscoflashfiletable == nullptr)
        {
            ciscoflashfiletable = std::make_shared<CiscoFlashMib::Ciscoflashfiletable>();
        }
        return ciscoflashfiletable;
    }

    if(child_yang_name == "ciscoFlashMiscOpTable")
    {
        if(ciscoflashmiscoptable == nullptr)
        {
            ciscoflashmiscoptable = std::make_shared<CiscoFlashMib::Ciscoflashmiscoptable>();
        }
        return ciscoflashmiscoptable;
    }

    if(child_yang_name == "ciscoFlashPartitioningTable")
    {
        if(ciscoflashpartitioningtable == nullptr)
        {
            ciscoflashpartitioningtable = std::make_shared<CiscoFlashMib::Ciscoflashpartitioningtable>();
        }
        return ciscoflashpartitioningtable;
    }

    if(child_yang_name == "ciscoFlashPartitionTable")
    {
        if(ciscoflashpartitiontable == nullptr)
        {
            ciscoflashpartitiontable = std::make_shared<CiscoFlashMib::Ciscoflashpartitiontable>();
        }
        return ciscoflashpartitiontable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscoflashcfg != nullptr)
    {
        children["ciscoFlashCfg"] = ciscoflashcfg;
    }

    if(ciscoflashchiptable != nullptr)
    {
        children["ciscoFlashChipTable"] = ciscoflashchiptable;
    }

    if(ciscoflashcopytable != nullptr)
    {
        children["ciscoFlashCopyTable"] = ciscoflashcopytable;
    }

    if(ciscoflashdevice != nullptr)
    {
        children["ciscoFlashDevice"] = ciscoflashdevice;
    }

    if(ciscoflashdevicetable != nullptr)
    {
        children["ciscoFlashDeviceTable"] = ciscoflashdevicetable;
    }

    if(ciscoflashfilebytypetable != nullptr)
    {
        children["ciscoFlashFileByTypeTable"] = ciscoflashfilebytypetable;
    }

    if(ciscoflashfiletable != nullptr)
    {
        children["ciscoFlashFileTable"] = ciscoflashfiletable;
    }

    if(ciscoflashmiscoptable != nullptr)
    {
        children["ciscoFlashMiscOpTable"] = ciscoflashmiscoptable;
    }

    if(ciscoflashpartitioningtable != nullptr)
    {
        children["ciscoFlashPartitioningTable"] = ciscoflashpartitioningtable;
    }

    if(ciscoflashpartitiontable != nullptr)
    {
        children["ciscoFlashPartitionTable"] = ciscoflashpartitiontable;
    }

    return children;
}

void CiscoFlashMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoFlashMib::clone_ptr() const
{
    return std::make_shared<CiscoFlashMib>();
}

std::string CiscoFlashMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoFlashMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoFlashMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoFlashMib::Ciscoflashdevice::Ciscoflashdevice()
    :
    ciscoflashdevicessupported{YType::uint32, "ciscoFlashDevicesSupported"}
{
    yang_name = "ciscoFlashDevice"; yang_parent_name = "CISCO-FLASH-MIB";
}

CiscoFlashMib::Ciscoflashdevice::~Ciscoflashdevice()
{
}

bool CiscoFlashMib::Ciscoflashdevice::has_data() const
{
    return ciscoflashdevicessupported.is_set;
}

bool CiscoFlashMib::Ciscoflashdevice::has_operation() const
{
    return is_set(operation)
	|| is_set(ciscoflashdevicessupported.operation);
}

std::string CiscoFlashMib::Ciscoflashdevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashDevice";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashdevice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdevicessupported.is_set || is_set(ciscoflashdevicessupported.operation)) leaf_name_data.push_back(ciscoflashdevicessupported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashdevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashdevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoFlashMib::Ciscoflashdevice::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoFlashDevicesSupported")
    {
        ciscoflashdevicessupported = value;
    }
}

CiscoFlashMib::Ciscoflashcfg::Ciscoflashcfg()
    :
    ciscoflashcfgdevinsnotifenable{YType::boolean, "ciscoFlashCfgDevInsNotifEnable"},
    ciscoflashcfgdevremnotifenable{YType::boolean, "ciscoFlashCfgDevRemNotifEnable"},
    ciscoflashpartitionlowspacenotifenable{YType::boolean, "ciscoFlashPartitionLowSpaceNotifEnable"}
{
    yang_name = "ciscoFlashCfg"; yang_parent_name = "CISCO-FLASH-MIB";
}

CiscoFlashMib::Ciscoflashcfg::~Ciscoflashcfg()
{
}

bool CiscoFlashMib::Ciscoflashcfg::has_data() const
{
    return ciscoflashcfgdevinsnotifenable.is_set
	|| ciscoflashcfgdevremnotifenable.is_set
	|| ciscoflashpartitionlowspacenotifenable.is_set;
}

bool CiscoFlashMib::Ciscoflashcfg::has_operation() const
{
    return is_set(operation)
	|| is_set(ciscoflashcfgdevinsnotifenable.operation)
	|| is_set(ciscoflashcfgdevremnotifenable.operation)
	|| is_set(ciscoflashpartitionlowspacenotifenable.operation);
}

std::string CiscoFlashMib::Ciscoflashcfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashCfg";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashcfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashcfgdevinsnotifenable.is_set || is_set(ciscoflashcfgdevinsnotifenable.operation)) leaf_name_data.push_back(ciscoflashcfgdevinsnotifenable.get_name_leafdata());
    if (ciscoflashcfgdevremnotifenable.is_set || is_set(ciscoflashcfgdevremnotifenable.operation)) leaf_name_data.push_back(ciscoflashcfgdevremnotifenable.get_name_leafdata());
    if (ciscoflashpartitionlowspacenotifenable.is_set || is_set(ciscoflashpartitionlowspacenotifenable.operation)) leaf_name_data.push_back(ciscoflashpartitionlowspacenotifenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashcfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashcfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoFlashMib::Ciscoflashcfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoFlashCfgDevInsNotifEnable")
    {
        ciscoflashcfgdevinsnotifenable = value;
    }
    if(value_path == "ciscoFlashCfgDevRemNotifEnable")
    {
        ciscoflashcfgdevremnotifenable = value;
    }
    if(value_path == "ciscoFlashPartitionLowSpaceNotifEnable")
    {
        ciscoflashpartitionlowspacenotifenable = value;
    }
}

CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdevicetable()
{
    yang_name = "ciscoFlashDeviceTable"; yang_parent_name = "CISCO-FLASH-MIB";
}

CiscoFlashMib::Ciscoflashdevicetable::~Ciscoflashdevicetable()
{
}

bool CiscoFlashMib::Ciscoflashdevicetable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashdeviceentry.size(); index++)
    {
        if(ciscoflashdeviceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoFlashMib::Ciscoflashdevicetable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashdeviceentry.size(); index++)
    {
        if(ciscoflashdeviceentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoFlashMib::Ciscoflashdevicetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashDeviceTable";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashdevicetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashdevicetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashDeviceEntry")
    {
        for(auto const & c : ciscoflashdeviceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry>();
        c->parent = this;
        ciscoflashdeviceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashdevicetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashdeviceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoFlashMib::Ciscoflashdevicetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::Ciscoflashdeviceentry()
    :
    ciscoflashdeviceindex{YType::uint32, "ciscoFlashDeviceIndex"},
    ciscoflashdevicecard{YType::str, "ciscoFlashDeviceCard"},
    ciscoflashdevicechipcount{YType::int32, "ciscoFlashDeviceChipCount"},
    ciscoflashdevicecontroller{YType::str, "ciscoFlashDeviceController"},
    ciscoflashdevicedescr{YType::str, "ciscoFlashDeviceDescr"},
    ciscoflashdeviceinittime{YType::uint32, "ciscoFlashDeviceInitTime"},
    ciscoflashdevicemaxpartitions{YType::uint32, "ciscoFlashDeviceMaxPartitions"},
    ciscoflashdeviceminpartitionsize{YType::uint32, "ciscoFlashDeviceMinPartitionSize"},
    ciscoflashdeviceminpartitionsizeextended{YType::uint64, "ciscoFlashDeviceMinPartitionSizeExtended"},
    ciscoflashdevicename{YType::str, "ciscoFlashDeviceName"},
    ciscoflashdevicenameextended{YType::str, "ciscoFlashDeviceNameExtended"},
    ciscoflashdevicepartitions{YType::uint32, "ciscoFlashDevicePartitions"},
    ciscoflashdeviceprogrammingjumper{YType::enumeration, "ciscoFlashDeviceProgrammingJumper"},
    ciscoflashdeviceremovable{YType::boolean, "ciscoFlashDeviceRemovable"},
    ciscoflashdevicesize{YType::uint32, "ciscoFlashDeviceSize"},
    ciscoflashdevicesizeextended{YType::uint64, "ciscoFlashDeviceSizeExtended"},
    ciscoflashphyentindex{YType::int32, "ciscoFlashPhyEntIndex"}
{
    yang_name = "ciscoFlashDeviceEntry"; yang_parent_name = "ciscoFlashDeviceTable";
}

CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::~Ciscoflashdeviceentry()
{
}

bool CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::has_data() const
{
    return ciscoflashdeviceindex.is_set
	|| ciscoflashdevicecard.is_set
	|| ciscoflashdevicechipcount.is_set
	|| ciscoflashdevicecontroller.is_set
	|| ciscoflashdevicedescr.is_set
	|| ciscoflashdeviceinittime.is_set
	|| ciscoflashdevicemaxpartitions.is_set
	|| ciscoflashdeviceminpartitionsize.is_set
	|| ciscoflashdeviceminpartitionsizeextended.is_set
	|| ciscoflashdevicename.is_set
	|| ciscoflashdevicenameextended.is_set
	|| ciscoflashdevicepartitions.is_set
	|| ciscoflashdeviceprogrammingjumper.is_set
	|| ciscoflashdeviceremovable.is_set
	|| ciscoflashdevicesize.is_set
	|| ciscoflashdevicesizeextended.is_set
	|| ciscoflashphyentindex.is_set;
}

bool CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciscoflashdeviceindex.operation)
	|| is_set(ciscoflashdevicecard.operation)
	|| is_set(ciscoflashdevicechipcount.operation)
	|| is_set(ciscoflashdevicecontroller.operation)
	|| is_set(ciscoflashdevicedescr.operation)
	|| is_set(ciscoflashdeviceinittime.operation)
	|| is_set(ciscoflashdevicemaxpartitions.operation)
	|| is_set(ciscoflashdeviceminpartitionsize.operation)
	|| is_set(ciscoflashdeviceminpartitionsizeextended.operation)
	|| is_set(ciscoflashdevicename.operation)
	|| is_set(ciscoflashdevicenameextended.operation)
	|| is_set(ciscoflashdevicepartitions.operation)
	|| is_set(ciscoflashdeviceprogrammingjumper.operation)
	|| is_set(ciscoflashdeviceremovable.operation)
	|| is_set(ciscoflashdevicesize.operation)
	|| is_set(ciscoflashdevicesizeextended.operation)
	|| is_set(ciscoflashphyentindex.operation);
}

std::string CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashDeviceEntry" <<"[ciscoFlashDeviceIndex='" <<ciscoflashdeviceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashDeviceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.operation)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashdevicecard.is_set || is_set(ciscoflashdevicecard.operation)) leaf_name_data.push_back(ciscoflashdevicecard.get_name_leafdata());
    if (ciscoflashdevicechipcount.is_set || is_set(ciscoflashdevicechipcount.operation)) leaf_name_data.push_back(ciscoflashdevicechipcount.get_name_leafdata());
    if (ciscoflashdevicecontroller.is_set || is_set(ciscoflashdevicecontroller.operation)) leaf_name_data.push_back(ciscoflashdevicecontroller.get_name_leafdata());
    if (ciscoflashdevicedescr.is_set || is_set(ciscoflashdevicedescr.operation)) leaf_name_data.push_back(ciscoflashdevicedescr.get_name_leafdata());
    if (ciscoflashdeviceinittime.is_set || is_set(ciscoflashdeviceinittime.operation)) leaf_name_data.push_back(ciscoflashdeviceinittime.get_name_leafdata());
    if (ciscoflashdevicemaxpartitions.is_set || is_set(ciscoflashdevicemaxpartitions.operation)) leaf_name_data.push_back(ciscoflashdevicemaxpartitions.get_name_leafdata());
    if (ciscoflashdeviceminpartitionsize.is_set || is_set(ciscoflashdeviceminpartitionsize.operation)) leaf_name_data.push_back(ciscoflashdeviceminpartitionsize.get_name_leafdata());
    if (ciscoflashdeviceminpartitionsizeextended.is_set || is_set(ciscoflashdeviceminpartitionsizeextended.operation)) leaf_name_data.push_back(ciscoflashdeviceminpartitionsizeextended.get_name_leafdata());
    if (ciscoflashdevicename.is_set || is_set(ciscoflashdevicename.operation)) leaf_name_data.push_back(ciscoflashdevicename.get_name_leafdata());
    if (ciscoflashdevicenameextended.is_set || is_set(ciscoflashdevicenameextended.operation)) leaf_name_data.push_back(ciscoflashdevicenameextended.get_name_leafdata());
    if (ciscoflashdevicepartitions.is_set || is_set(ciscoflashdevicepartitions.operation)) leaf_name_data.push_back(ciscoflashdevicepartitions.get_name_leafdata());
    if (ciscoflashdeviceprogrammingjumper.is_set || is_set(ciscoflashdeviceprogrammingjumper.operation)) leaf_name_data.push_back(ciscoflashdeviceprogrammingjumper.get_name_leafdata());
    if (ciscoflashdeviceremovable.is_set || is_set(ciscoflashdeviceremovable.operation)) leaf_name_data.push_back(ciscoflashdeviceremovable.get_name_leafdata());
    if (ciscoflashdevicesize.is_set || is_set(ciscoflashdevicesize.operation)) leaf_name_data.push_back(ciscoflashdevicesize.get_name_leafdata());
    if (ciscoflashdevicesizeextended.is_set || is_set(ciscoflashdevicesizeextended.operation)) leaf_name_data.push_back(ciscoflashdevicesizeextended.get_name_leafdata());
    if (ciscoflashphyentindex.is_set || is_set(ciscoflashphyentindex.operation)) leaf_name_data.push_back(ciscoflashphyentindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex = value;
    }
    if(value_path == "ciscoFlashDeviceCard")
    {
        ciscoflashdevicecard = value;
    }
    if(value_path == "ciscoFlashDeviceChipCount")
    {
        ciscoflashdevicechipcount = value;
    }
    if(value_path == "ciscoFlashDeviceController")
    {
        ciscoflashdevicecontroller = value;
    }
    if(value_path == "ciscoFlashDeviceDescr")
    {
        ciscoflashdevicedescr = value;
    }
    if(value_path == "ciscoFlashDeviceInitTime")
    {
        ciscoflashdeviceinittime = value;
    }
    if(value_path == "ciscoFlashDeviceMaxPartitions")
    {
        ciscoflashdevicemaxpartitions = value;
    }
    if(value_path == "ciscoFlashDeviceMinPartitionSize")
    {
        ciscoflashdeviceminpartitionsize = value;
    }
    if(value_path == "ciscoFlashDeviceMinPartitionSizeExtended")
    {
        ciscoflashdeviceminpartitionsizeextended = value;
    }
    if(value_path == "ciscoFlashDeviceName")
    {
        ciscoflashdevicename = value;
    }
    if(value_path == "ciscoFlashDeviceNameExtended")
    {
        ciscoflashdevicenameextended = value;
    }
    if(value_path == "ciscoFlashDevicePartitions")
    {
        ciscoflashdevicepartitions = value;
    }
    if(value_path == "ciscoFlashDeviceProgrammingJumper")
    {
        ciscoflashdeviceprogrammingjumper = value;
    }
    if(value_path == "ciscoFlashDeviceRemovable")
    {
        ciscoflashdeviceremovable = value;
    }
    if(value_path == "ciscoFlashDeviceSize")
    {
        ciscoflashdevicesize = value;
    }
    if(value_path == "ciscoFlashDeviceSizeExtended")
    {
        ciscoflashdevicesizeextended = value;
    }
    if(value_path == "ciscoFlashPhyEntIndex")
    {
        ciscoflashphyentindex = value;
    }
}

CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchiptable()
{
    yang_name = "ciscoFlashChipTable"; yang_parent_name = "CISCO-FLASH-MIB";
}

CiscoFlashMib::Ciscoflashchiptable::~Ciscoflashchiptable()
{
}

bool CiscoFlashMib::Ciscoflashchiptable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashchipentry.size(); index++)
    {
        if(ciscoflashchipentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoFlashMib::Ciscoflashchiptable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashchipentry.size(); index++)
    {
        if(ciscoflashchipentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoFlashMib::Ciscoflashchiptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashChipTable";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashchiptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashchiptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashChipEntry")
    {
        for(auto const & c : ciscoflashchipentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry>();
        c->parent = this;
        ciscoflashchipentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashchiptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashchipentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoFlashMib::Ciscoflashchiptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry::Ciscoflashchipentry()
    :
    ciscoflashdeviceindex{YType::str, "ciscoFlashDeviceIndex"},
    ciscoflashchipindex{YType::int32, "ciscoFlashChipIndex"},
    ciscoflashchipcode{YType::str, "ciscoFlashChipCode"},
    ciscoflashchipdescr{YType::str, "ciscoFlashChipDescr"},
    ciscoflashchiperaseretries{YType::uint32, "ciscoFlashChipEraseRetries"},
    ciscoflashchipmaxeraseretries{YType::uint32, "ciscoFlashChipMaxEraseRetries"},
    ciscoflashchipmaxwriteretries{YType::uint32, "ciscoFlashChipMaxWriteRetries"},
    ciscoflashchipwriteretries{YType::uint32, "ciscoFlashChipWriteRetries"}
{
    yang_name = "ciscoFlashChipEntry"; yang_parent_name = "ciscoFlashChipTable";
}

CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry::~Ciscoflashchipentry()
{
}

bool CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry::has_data() const
{
    return ciscoflashdeviceindex.is_set
	|| ciscoflashchipindex.is_set
	|| ciscoflashchipcode.is_set
	|| ciscoflashchipdescr.is_set
	|| ciscoflashchiperaseretries.is_set
	|| ciscoflashchipmaxeraseretries.is_set
	|| ciscoflashchipmaxwriteretries.is_set
	|| ciscoflashchipwriteretries.is_set;
}

bool CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciscoflashdeviceindex.operation)
	|| is_set(ciscoflashchipindex.operation)
	|| is_set(ciscoflashchipcode.operation)
	|| is_set(ciscoflashchipdescr.operation)
	|| is_set(ciscoflashchiperaseretries.operation)
	|| is_set(ciscoflashchipmaxeraseretries.operation)
	|| is_set(ciscoflashchipmaxwriteretries.operation)
	|| is_set(ciscoflashchipwriteretries.operation);
}

std::string CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashChipEntry" <<"[ciscoFlashDeviceIndex='" <<ciscoflashdeviceindex <<"']" <<"[ciscoFlashChipIndex='" <<ciscoflashchipindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashChipTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.operation)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashchipindex.is_set || is_set(ciscoflashchipindex.operation)) leaf_name_data.push_back(ciscoflashchipindex.get_name_leafdata());
    if (ciscoflashchipcode.is_set || is_set(ciscoflashchipcode.operation)) leaf_name_data.push_back(ciscoflashchipcode.get_name_leafdata());
    if (ciscoflashchipdescr.is_set || is_set(ciscoflashchipdescr.operation)) leaf_name_data.push_back(ciscoflashchipdescr.get_name_leafdata());
    if (ciscoflashchiperaseretries.is_set || is_set(ciscoflashchiperaseretries.operation)) leaf_name_data.push_back(ciscoflashchiperaseretries.get_name_leafdata());
    if (ciscoflashchipmaxeraseretries.is_set || is_set(ciscoflashchipmaxeraseretries.operation)) leaf_name_data.push_back(ciscoflashchipmaxeraseretries.get_name_leafdata());
    if (ciscoflashchipmaxwriteretries.is_set || is_set(ciscoflashchipmaxwriteretries.operation)) leaf_name_data.push_back(ciscoflashchipmaxwriteretries.get_name_leafdata());
    if (ciscoflashchipwriteretries.is_set || is_set(ciscoflashchipwriteretries.operation)) leaf_name_data.push_back(ciscoflashchipwriteretries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoFlashMib::Ciscoflashchiptable::Ciscoflashchipentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex = value;
    }
    if(value_path == "ciscoFlashChipIndex")
    {
        ciscoflashchipindex = value;
    }
    if(value_path == "ciscoFlashChipCode")
    {
        ciscoflashchipcode = value;
    }
    if(value_path == "ciscoFlashChipDescr")
    {
        ciscoflashchipdescr = value;
    }
    if(value_path == "ciscoFlashChipEraseRetries")
    {
        ciscoflashchiperaseretries = value;
    }
    if(value_path == "ciscoFlashChipMaxEraseRetries")
    {
        ciscoflashchipmaxeraseretries = value;
    }
    if(value_path == "ciscoFlashChipMaxWriteRetries")
    {
        ciscoflashchipmaxwriteretries = value;
    }
    if(value_path == "ciscoFlashChipWriteRetries")
    {
        ciscoflashchipwriteretries = value;
    }
}

CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitiontable()
{
    yang_name = "ciscoFlashPartitionTable"; yang_parent_name = "CISCO-FLASH-MIB";
}

CiscoFlashMib::Ciscoflashpartitiontable::~Ciscoflashpartitiontable()
{
}

bool CiscoFlashMib::Ciscoflashpartitiontable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashpartitionentry.size(); index++)
    {
        if(ciscoflashpartitionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoFlashMib::Ciscoflashpartitiontable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashpartitionentry.size(); index++)
    {
        if(ciscoflashpartitionentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoFlashMib::Ciscoflashpartitiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashPartitionTable";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashpartitiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashpartitiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashPartitionEntry")
    {
        for(auto const & c : ciscoflashpartitionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry>();
        c->parent = this;
        ciscoflashpartitionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashpartitiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashpartitionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoFlashMib::Ciscoflashpartitiontable::set_value(const std::string & value_path, std::string value)
{
}

CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionentry()
    :
    ciscoflashdeviceindex{YType::str, "ciscoFlashDeviceIndex"},
    ciscoflashpartitionindex{YType::uint32, "ciscoFlashPartitionIndex"},
    ciscoflashpartitionchecksumalgorithm{YType::enumeration, "ciscoFlashPartitionChecksumAlgorithm"},
    ciscoflashpartitionendchip{YType::int32, "ciscoFlashPartitionEndChip"},
    ciscoflashpartitionfilecount{YType::uint32, "ciscoFlashPartitionFileCount"},
    ciscoflashpartitionfilenamelength{YType::int32, "ciscoFlashPartitionFileNameLength"},
    ciscoflashpartitionfreespace{YType::uint32, "ciscoFlashPartitionFreeSpace"},
    ciscoflashpartitionfreespaceextended{YType::uint64, "ciscoFlashPartitionFreeSpaceExtended"},
    ciscoflashpartitionlowspacenotifthreshold{YType::int32, "ciscoFlashPartitionLowSpaceNotifThreshold"},
    ciscoflashpartitionname{YType::str, "ciscoFlashPartitionName"},
    ciscoflashpartitionneederasure{YType::boolean, "ciscoFlashPartitionNeedErasure"},
    ciscoflashpartitionsize{YType::uint32, "ciscoFlashPartitionSize"},
    ciscoflashpartitionsizeextended{YType::uint64, "ciscoFlashPartitionSizeExtended"},
    ciscoflashpartitionstartchip{YType::int32, "ciscoFlashPartitionStartChip"},
    ciscoflashpartitionstatus{YType::enumeration, "ciscoFlashPartitionStatus"},
    ciscoflashpartitionupgrademethod{YType::enumeration, "ciscoFlashPartitionUpgradeMethod"}
{
    yang_name = "ciscoFlashPartitionEntry"; yang_parent_name = "ciscoFlashPartitionTable";
}

CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::~Ciscoflashpartitionentry()
{
}

bool CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::has_data() const
{
    return ciscoflashdeviceindex.is_set
	|| ciscoflashpartitionindex.is_set
	|| ciscoflashpartitionchecksumalgorithm.is_set
	|| ciscoflashpartitionendchip.is_set
	|| ciscoflashpartitionfilecount.is_set
	|| ciscoflashpartitionfilenamelength.is_set
	|| ciscoflashpartitionfreespace.is_set
	|| ciscoflashpartitionfreespaceextended.is_set
	|| ciscoflashpartitionlowspacenotifthreshold.is_set
	|| ciscoflashpartitionname.is_set
	|| ciscoflashpartitionneederasure.is_set
	|| ciscoflashpartitionsize.is_set
	|| ciscoflashpartitionsizeextended.is_set
	|| ciscoflashpartitionstartchip.is_set
	|| ciscoflashpartitionstatus.is_set
	|| ciscoflashpartitionupgrademethod.is_set;
}

bool CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciscoflashdeviceindex.operation)
	|| is_set(ciscoflashpartitionindex.operation)
	|| is_set(ciscoflashpartitionchecksumalgorithm.operation)
	|| is_set(ciscoflashpartitionendchip.operation)
	|| is_set(ciscoflashpartitionfilecount.operation)
	|| is_set(ciscoflashpartitionfilenamelength.operation)
	|| is_set(ciscoflashpartitionfreespace.operation)
	|| is_set(ciscoflashpartitionfreespaceextended.operation)
	|| is_set(ciscoflashpartitionlowspacenotifthreshold.operation)
	|| is_set(ciscoflashpartitionname.operation)
	|| is_set(ciscoflashpartitionneederasure.operation)
	|| is_set(ciscoflashpartitionsize.operation)
	|| is_set(ciscoflashpartitionsizeextended.operation)
	|| is_set(ciscoflashpartitionstartchip.operation)
	|| is_set(ciscoflashpartitionstatus.operation)
	|| is_set(ciscoflashpartitionupgrademethod.operation);
}

std::string CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashPartitionEntry" <<"[ciscoFlashDeviceIndex='" <<ciscoflashdeviceindex <<"']" <<"[ciscoFlashPartitionIndex='" <<ciscoflashpartitionindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashPartitionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.operation)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashpartitionindex.is_set || is_set(ciscoflashpartitionindex.operation)) leaf_name_data.push_back(ciscoflashpartitionindex.get_name_leafdata());
    if (ciscoflashpartitionchecksumalgorithm.is_set || is_set(ciscoflashpartitionchecksumalgorithm.operation)) leaf_name_data.push_back(ciscoflashpartitionchecksumalgorithm.get_name_leafdata());
    if (ciscoflashpartitionendchip.is_set || is_set(ciscoflashpartitionendchip.operation)) leaf_name_data.push_back(ciscoflashpartitionendchip.get_name_leafdata());
    if (ciscoflashpartitionfilecount.is_set || is_set(ciscoflashpartitionfilecount.operation)) leaf_name_data.push_back(ciscoflashpartitionfilecount.get_name_leafdata());
    if (ciscoflashpartitionfilenamelength.is_set || is_set(ciscoflashpartitionfilenamelength.operation)) leaf_name_data.push_back(ciscoflashpartitionfilenamelength.get_name_leafdata());
    if (ciscoflashpartitionfreespace.is_set || is_set(ciscoflashpartitionfreespace.operation)) leaf_name_data.push_back(ciscoflashpartitionfreespace.get_name_leafdata());
    if (ciscoflashpartitionfreespaceextended.is_set || is_set(ciscoflashpartitionfreespaceextended.operation)) leaf_name_data.push_back(ciscoflashpartitionfreespaceextended.get_name_leafdata());
    if (ciscoflashpartitionlowspacenotifthreshold.is_set || is_set(ciscoflashpartitionlowspacenotifthreshold.operation)) leaf_name_data.push_back(ciscoflashpartitionlowspacenotifthreshold.get_name_leafdata());
    if (ciscoflashpartitionname.is_set || is_set(ciscoflashpartitionname.operation)) leaf_name_data.push_back(ciscoflashpartitionname.get_name_leafdata());
    if (ciscoflashpartitionneederasure.is_set || is_set(ciscoflashpartitionneederasure.operation)) leaf_name_data.push_back(ciscoflashpartitionneederasure.get_name_leafdata());
    if (ciscoflashpartitionsize.is_set || is_set(ciscoflashpartitionsize.operation)) leaf_name_data.push_back(ciscoflashpartitionsize.get_name_leafdata());
    if (ciscoflashpartitionsizeextended.is_set || is_set(ciscoflashpartitionsizeextended.operation)) leaf_name_data.push_back(ciscoflashpartitionsizeextended.get_name_leafdata());
    if (ciscoflashpartitionstartchip.is_set || is_set(ciscoflashpartitionstartchip.operation)) leaf_name_data.push_back(ciscoflashpartitionstartchip.get_name_leafdata());
    if (ciscoflashpartitionstatus.is_set || is_set(ciscoflashpartitionstatus.operation)) leaf_name_data.push_back(ciscoflashpartitionstatus.get_name_leafdata());
    if (ciscoflashpartitionupgrademethod.is_set || is_set(ciscoflashpartitionupgrademethod.operation)) leaf_name_data.push_back(ciscoflashpartitionupgrademethod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex = value;
    }
    if(value_path == "ciscoFlashPartitionIndex")
    {
        ciscoflashpartitionindex = value;
    }
    if(value_path == "ciscoFlashPartitionChecksumAlgorithm")
    {
        ciscoflashpartitionchecksumalgorithm = value;
    }
    if(value_path == "ciscoFlashPartitionEndChip")
    {
        ciscoflashpartitionendchip = value;
    }
    if(value_path == "ciscoFlashPartitionFileCount")
    {
        ciscoflashpartitionfilecount = value;
    }
    if(value_path == "ciscoFlashPartitionFileNameLength")
    {
        ciscoflashpartitionfilenamelength = value;
    }
    if(value_path == "ciscoFlashPartitionFreeSpace")
    {
        ciscoflashpartitionfreespace = value;
    }
    if(value_path == "ciscoFlashPartitionFreeSpaceExtended")
    {
        ciscoflashpartitionfreespaceextended = value;
    }
    if(value_path == "ciscoFlashPartitionLowSpaceNotifThreshold")
    {
        ciscoflashpartitionlowspacenotifthreshold = value;
    }
    if(value_path == "ciscoFlashPartitionName")
    {
        ciscoflashpartitionname = value;
    }
    if(value_path == "ciscoFlashPartitionNeedErasure")
    {
        ciscoflashpartitionneederasure = value;
    }
    if(value_path == "ciscoFlashPartitionSize")
    {
        ciscoflashpartitionsize = value;
    }
    if(value_path == "ciscoFlashPartitionSizeExtended")
    {
        ciscoflashpartitionsizeextended = value;
    }
    if(value_path == "ciscoFlashPartitionStartChip")
    {
        ciscoflashpartitionstartchip = value;
    }
    if(value_path == "ciscoFlashPartitionStatus")
    {
        ciscoflashpartitionstatus = value;
    }
    if(value_path == "ciscoFlashPartitionUpgradeMethod")
    {
        ciscoflashpartitionupgrademethod = value;
    }
}

CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfiletable()
{
    yang_name = "ciscoFlashFileTable"; yang_parent_name = "CISCO-FLASH-MIB";
}

CiscoFlashMib::Ciscoflashfiletable::~Ciscoflashfiletable()
{
}

bool CiscoFlashMib::Ciscoflashfiletable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashfileentry.size(); index++)
    {
        if(ciscoflashfileentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoFlashMib::Ciscoflashfiletable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashfileentry.size(); index++)
    {
        if(ciscoflashfileentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoFlashMib::Ciscoflashfiletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashFileTable";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashfiletable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashfiletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashFileEntry")
    {
        for(auto const & c : ciscoflashfileentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry>();
        c->parent = this;
        ciscoflashfileentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashfiletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashfileentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoFlashMib::Ciscoflashfiletable::set_value(const std::string & value_path, std::string value)
{
}

CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::Ciscoflashfileentry()
    :
    ciscoflashdeviceindex{YType::str, "ciscoFlashDeviceIndex"},
    ciscoflashpartitionindex{YType::str, "ciscoFlashPartitionIndex"},
    ciscoflashfileindex{YType::uint32, "ciscoFlashFileIndex"},
    ciscoflashfilechecksum{YType::str, "ciscoFlashFileChecksum"},
    ciscoflashfiledate{YType::str, "ciscoFlashFileDate"},
    ciscoflashfilename{YType::str, "ciscoFlashFileName"},
    ciscoflashfilesize{YType::uint32, "ciscoFlashFileSize"},
    ciscoflashfilestatus{YType::enumeration, "ciscoFlashFileStatus"},
    ciscoflashfiletype{YType::enumeration, "ciscoFlashFileType"}
{
    yang_name = "ciscoFlashFileEntry"; yang_parent_name = "ciscoFlashFileTable";
}

CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::~Ciscoflashfileentry()
{
}

bool CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::has_data() const
{
    return ciscoflashdeviceindex.is_set
	|| ciscoflashpartitionindex.is_set
	|| ciscoflashfileindex.is_set
	|| ciscoflashfilechecksum.is_set
	|| ciscoflashfiledate.is_set
	|| ciscoflashfilename.is_set
	|| ciscoflashfilesize.is_set
	|| ciscoflashfilestatus.is_set
	|| ciscoflashfiletype.is_set;
}

bool CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciscoflashdeviceindex.operation)
	|| is_set(ciscoflashpartitionindex.operation)
	|| is_set(ciscoflashfileindex.operation)
	|| is_set(ciscoflashfilechecksum.operation)
	|| is_set(ciscoflashfiledate.operation)
	|| is_set(ciscoflashfilename.operation)
	|| is_set(ciscoflashfilesize.operation)
	|| is_set(ciscoflashfilestatus.operation)
	|| is_set(ciscoflashfiletype.operation);
}

std::string CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashFileEntry" <<"[ciscoFlashDeviceIndex='" <<ciscoflashdeviceindex <<"']" <<"[ciscoFlashPartitionIndex='" <<ciscoflashpartitionindex <<"']" <<"[ciscoFlashFileIndex='" <<ciscoflashfileindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashFileTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.operation)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashpartitionindex.is_set || is_set(ciscoflashpartitionindex.operation)) leaf_name_data.push_back(ciscoflashpartitionindex.get_name_leafdata());
    if (ciscoflashfileindex.is_set || is_set(ciscoflashfileindex.operation)) leaf_name_data.push_back(ciscoflashfileindex.get_name_leafdata());
    if (ciscoflashfilechecksum.is_set || is_set(ciscoflashfilechecksum.operation)) leaf_name_data.push_back(ciscoflashfilechecksum.get_name_leafdata());
    if (ciscoflashfiledate.is_set || is_set(ciscoflashfiledate.operation)) leaf_name_data.push_back(ciscoflashfiledate.get_name_leafdata());
    if (ciscoflashfilename.is_set || is_set(ciscoflashfilename.operation)) leaf_name_data.push_back(ciscoflashfilename.get_name_leafdata());
    if (ciscoflashfilesize.is_set || is_set(ciscoflashfilesize.operation)) leaf_name_data.push_back(ciscoflashfilesize.get_name_leafdata());
    if (ciscoflashfilestatus.is_set || is_set(ciscoflashfilestatus.operation)) leaf_name_data.push_back(ciscoflashfilestatus.get_name_leafdata());
    if (ciscoflashfiletype.is_set || is_set(ciscoflashfiletype.operation)) leaf_name_data.push_back(ciscoflashfiletype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex = value;
    }
    if(value_path == "ciscoFlashPartitionIndex")
    {
        ciscoflashpartitionindex = value;
    }
    if(value_path == "ciscoFlashFileIndex")
    {
        ciscoflashfileindex = value;
    }
    if(value_path == "ciscoFlashFileChecksum")
    {
        ciscoflashfilechecksum = value;
    }
    if(value_path == "ciscoFlashFileDate")
    {
        ciscoflashfiledate = value;
    }
    if(value_path == "ciscoFlashFileName")
    {
        ciscoflashfilename = value;
    }
    if(value_path == "ciscoFlashFileSize")
    {
        ciscoflashfilesize = value;
    }
    if(value_path == "ciscoFlashFileStatus")
    {
        ciscoflashfilestatus = value;
    }
    if(value_path == "ciscoFlashFileType")
    {
        ciscoflashfiletype = value;
    }
}

CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypetable()
{
    yang_name = "ciscoFlashFileByTypeTable"; yang_parent_name = "CISCO-FLASH-MIB";
}

CiscoFlashMib::Ciscoflashfilebytypetable::~Ciscoflashfilebytypetable()
{
}

bool CiscoFlashMib::Ciscoflashfilebytypetable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashfilebytypeentry.size(); index++)
    {
        if(ciscoflashfilebytypeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoFlashMib::Ciscoflashfilebytypetable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashfilebytypeentry.size(); index++)
    {
        if(ciscoflashfilebytypeentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoFlashMib::Ciscoflashfilebytypetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashFileByTypeTable";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashfilebytypetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashfilebytypetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashFileByTypeEntry")
    {
        for(auto const & c : ciscoflashfilebytypeentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry>();
        c->parent = this;
        ciscoflashfilebytypeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashfilebytypetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashfilebytypeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoFlashMib::Ciscoflashfilebytypetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::Ciscoflashfilebytypeentry()
    :
    ciscoflashfiletype{YType::enumeration, "ciscoFlashFileType"},
    ciscoflashdeviceindex{YType::str, "ciscoFlashDeviceIndex"},
    ciscoflashpartitionindex{YType::str, "ciscoFlashPartitionIndex"},
    ciscoflashfileindex{YType::str, "ciscoFlashFileIndex"},
    ciscoflashfilebytypechecksum{YType::str, "ciscoFlashFileByTypeChecksum"},
    ciscoflashfilebytypedate{YType::str, "ciscoFlashFileByTypeDate"},
    ciscoflashfilebytypename{YType::str, "ciscoFlashFileByTypeName"},
    ciscoflashfilebytypesize{YType::uint32, "ciscoFlashFileByTypeSize"},
    ciscoflashfilebytypestatus{YType::enumeration, "ciscoFlashFileByTypeStatus"}
{
    yang_name = "ciscoFlashFileByTypeEntry"; yang_parent_name = "ciscoFlashFileByTypeTable";
}

CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::~Ciscoflashfilebytypeentry()
{
}

bool CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::has_data() const
{
    return ciscoflashfiletype.is_set
	|| ciscoflashdeviceindex.is_set
	|| ciscoflashpartitionindex.is_set
	|| ciscoflashfileindex.is_set
	|| ciscoflashfilebytypechecksum.is_set
	|| ciscoflashfilebytypedate.is_set
	|| ciscoflashfilebytypename.is_set
	|| ciscoflashfilebytypesize.is_set
	|| ciscoflashfilebytypestatus.is_set;
}

bool CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciscoflashfiletype.operation)
	|| is_set(ciscoflashdeviceindex.operation)
	|| is_set(ciscoflashpartitionindex.operation)
	|| is_set(ciscoflashfileindex.operation)
	|| is_set(ciscoflashfilebytypechecksum.operation)
	|| is_set(ciscoflashfilebytypedate.operation)
	|| is_set(ciscoflashfilebytypename.operation)
	|| is_set(ciscoflashfilebytypesize.operation)
	|| is_set(ciscoflashfilebytypestatus.operation);
}

std::string CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashFileByTypeEntry" <<"[ciscoFlashFileType='" <<ciscoflashfiletype <<"']" <<"[ciscoFlashDeviceIndex='" <<ciscoflashdeviceindex <<"']" <<"[ciscoFlashPartitionIndex='" <<ciscoflashpartitionindex <<"']" <<"[ciscoFlashFileIndex='" <<ciscoflashfileindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashFileByTypeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashfiletype.is_set || is_set(ciscoflashfiletype.operation)) leaf_name_data.push_back(ciscoflashfiletype.get_name_leafdata());
    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.operation)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashpartitionindex.is_set || is_set(ciscoflashpartitionindex.operation)) leaf_name_data.push_back(ciscoflashpartitionindex.get_name_leafdata());
    if (ciscoflashfileindex.is_set || is_set(ciscoflashfileindex.operation)) leaf_name_data.push_back(ciscoflashfileindex.get_name_leafdata());
    if (ciscoflashfilebytypechecksum.is_set || is_set(ciscoflashfilebytypechecksum.operation)) leaf_name_data.push_back(ciscoflashfilebytypechecksum.get_name_leafdata());
    if (ciscoflashfilebytypedate.is_set || is_set(ciscoflashfilebytypedate.operation)) leaf_name_data.push_back(ciscoflashfilebytypedate.get_name_leafdata());
    if (ciscoflashfilebytypename.is_set || is_set(ciscoflashfilebytypename.operation)) leaf_name_data.push_back(ciscoflashfilebytypename.get_name_leafdata());
    if (ciscoflashfilebytypesize.is_set || is_set(ciscoflashfilebytypesize.operation)) leaf_name_data.push_back(ciscoflashfilebytypesize.get_name_leafdata());
    if (ciscoflashfilebytypestatus.is_set || is_set(ciscoflashfilebytypestatus.operation)) leaf_name_data.push_back(ciscoflashfilebytypestatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoFlashFileType")
    {
        ciscoflashfiletype = value;
    }
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex = value;
    }
    if(value_path == "ciscoFlashPartitionIndex")
    {
        ciscoflashpartitionindex = value;
    }
    if(value_path == "ciscoFlashFileIndex")
    {
        ciscoflashfileindex = value;
    }
    if(value_path == "ciscoFlashFileByTypeChecksum")
    {
        ciscoflashfilebytypechecksum = value;
    }
    if(value_path == "ciscoFlashFileByTypeDate")
    {
        ciscoflashfilebytypedate = value;
    }
    if(value_path == "ciscoFlashFileByTypeName")
    {
        ciscoflashfilebytypename = value;
    }
    if(value_path == "ciscoFlashFileByTypeSize")
    {
        ciscoflashfilebytypesize = value;
    }
    if(value_path == "ciscoFlashFileByTypeStatus")
    {
        ciscoflashfilebytypestatus = value;
    }
}

CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopytable()
{
    yang_name = "ciscoFlashCopyTable"; yang_parent_name = "CISCO-FLASH-MIB";
}

CiscoFlashMib::Ciscoflashcopytable::~Ciscoflashcopytable()
{
}

bool CiscoFlashMib::Ciscoflashcopytable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashcopyentry.size(); index++)
    {
        if(ciscoflashcopyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoFlashMib::Ciscoflashcopytable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashcopyentry.size(); index++)
    {
        if(ciscoflashcopyentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoFlashMib::Ciscoflashcopytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashCopyTable";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashcopytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashcopytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashCopyEntry")
    {
        for(auto const & c : ciscoflashcopyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry>();
        c->parent = this;
        ciscoflashcopyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashcopytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashcopyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoFlashMib::Ciscoflashcopytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopyentry()
    :
    ciscoflashcopyserialnumber{YType::int32, "ciscoFlashCopySerialNumber"},
    ciscoflashcopycommand{YType::enumeration, "ciscoFlashCopyCommand"},
    ciscoflashcopydestinationname{YType::str, "ciscoFlashCopyDestinationName"},
    ciscoflashcopyentrystatus{YType::enumeration, "ciscoFlashCopyEntryStatus"},
    ciscoflashcopynotifyoncompletion{YType::boolean, "ciscoFlashCopyNotifyOnCompletion"},
    ciscoflashcopyprotocol{YType::enumeration, "ciscoFlashCopyProtocol"},
    ciscoflashcopyremotepassword{YType::str, "ciscoFlashCopyRemotePassword"},
    ciscoflashcopyremoteusername{YType::str, "ciscoFlashCopyRemoteUserName"},
    ciscoflashcopyserveraddress{YType::str, "ciscoFlashCopyServerAddress"},
    ciscoflashcopyserveraddrrev1{YType::str, "ciscoFlashCopyServerAddrRev1"},
    ciscoflashcopyserveraddrtype{YType::enumeration, "ciscoFlashCopyServerAddrType"},
    ciscoflashcopysourcename{YType::str, "ciscoFlashCopySourceName"},
    ciscoflashcopystatus{YType::enumeration, "ciscoFlashCopyStatus"},
    ciscoflashcopytime{YType::uint32, "ciscoFlashCopyTime"},
    ciscoflashcopyverify{YType::boolean, "ciscoFlashCopyVerify"}
{
    yang_name = "ciscoFlashCopyEntry"; yang_parent_name = "ciscoFlashCopyTable";
}

CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::~Ciscoflashcopyentry()
{
}

bool CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::has_data() const
{
    return ciscoflashcopyserialnumber.is_set
	|| ciscoflashcopycommand.is_set
	|| ciscoflashcopydestinationname.is_set
	|| ciscoflashcopyentrystatus.is_set
	|| ciscoflashcopynotifyoncompletion.is_set
	|| ciscoflashcopyprotocol.is_set
	|| ciscoflashcopyremotepassword.is_set
	|| ciscoflashcopyremoteusername.is_set
	|| ciscoflashcopyserveraddress.is_set
	|| ciscoflashcopyserveraddrrev1.is_set
	|| ciscoflashcopyserveraddrtype.is_set
	|| ciscoflashcopysourcename.is_set
	|| ciscoflashcopystatus.is_set
	|| ciscoflashcopytime.is_set
	|| ciscoflashcopyverify.is_set;
}

bool CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciscoflashcopyserialnumber.operation)
	|| is_set(ciscoflashcopycommand.operation)
	|| is_set(ciscoflashcopydestinationname.operation)
	|| is_set(ciscoflashcopyentrystatus.operation)
	|| is_set(ciscoflashcopynotifyoncompletion.operation)
	|| is_set(ciscoflashcopyprotocol.operation)
	|| is_set(ciscoflashcopyremotepassword.operation)
	|| is_set(ciscoflashcopyremoteusername.operation)
	|| is_set(ciscoflashcopyserveraddress.operation)
	|| is_set(ciscoflashcopyserveraddrrev1.operation)
	|| is_set(ciscoflashcopyserveraddrtype.operation)
	|| is_set(ciscoflashcopysourcename.operation)
	|| is_set(ciscoflashcopystatus.operation)
	|| is_set(ciscoflashcopytime.operation)
	|| is_set(ciscoflashcopyverify.operation);
}

std::string CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashCopyEntry" <<"[ciscoFlashCopySerialNumber='" <<ciscoflashcopyserialnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashCopyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashcopyserialnumber.is_set || is_set(ciscoflashcopyserialnumber.operation)) leaf_name_data.push_back(ciscoflashcopyserialnumber.get_name_leafdata());
    if (ciscoflashcopycommand.is_set || is_set(ciscoflashcopycommand.operation)) leaf_name_data.push_back(ciscoflashcopycommand.get_name_leafdata());
    if (ciscoflashcopydestinationname.is_set || is_set(ciscoflashcopydestinationname.operation)) leaf_name_data.push_back(ciscoflashcopydestinationname.get_name_leafdata());
    if (ciscoflashcopyentrystatus.is_set || is_set(ciscoflashcopyentrystatus.operation)) leaf_name_data.push_back(ciscoflashcopyentrystatus.get_name_leafdata());
    if (ciscoflashcopynotifyoncompletion.is_set || is_set(ciscoflashcopynotifyoncompletion.operation)) leaf_name_data.push_back(ciscoflashcopynotifyoncompletion.get_name_leafdata());
    if (ciscoflashcopyprotocol.is_set || is_set(ciscoflashcopyprotocol.operation)) leaf_name_data.push_back(ciscoflashcopyprotocol.get_name_leafdata());
    if (ciscoflashcopyremotepassword.is_set || is_set(ciscoflashcopyremotepassword.operation)) leaf_name_data.push_back(ciscoflashcopyremotepassword.get_name_leafdata());
    if (ciscoflashcopyremoteusername.is_set || is_set(ciscoflashcopyremoteusername.operation)) leaf_name_data.push_back(ciscoflashcopyremoteusername.get_name_leafdata());
    if (ciscoflashcopyserveraddress.is_set || is_set(ciscoflashcopyserveraddress.operation)) leaf_name_data.push_back(ciscoflashcopyserveraddress.get_name_leafdata());
    if (ciscoflashcopyserveraddrrev1.is_set || is_set(ciscoflashcopyserveraddrrev1.operation)) leaf_name_data.push_back(ciscoflashcopyserveraddrrev1.get_name_leafdata());
    if (ciscoflashcopyserveraddrtype.is_set || is_set(ciscoflashcopyserveraddrtype.operation)) leaf_name_data.push_back(ciscoflashcopyserveraddrtype.get_name_leafdata());
    if (ciscoflashcopysourcename.is_set || is_set(ciscoflashcopysourcename.operation)) leaf_name_data.push_back(ciscoflashcopysourcename.get_name_leafdata());
    if (ciscoflashcopystatus.is_set || is_set(ciscoflashcopystatus.operation)) leaf_name_data.push_back(ciscoflashcopystatus.get_name_leafdata());
    if (ciscoflashcopytime.is_set || is_set(ciscoflashcopytime.operation)) leaf_name_data.push_back(ciscoflashcopytime.get_name_leafdata());
    if (ciscoflashcopyverify.is_set || is_set(ciscoflashcopyverify.operation)) leaf_name_data.push_back(ciscoflashcopyverify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoFlashCopySerialNumber")
    {
        ciscoflashcopyserialnumber = value;
    }
    if(value_path == "ciscoFlashCopyCommand")
    {
        ciscoflashcopycommand = value;
    }
    if(value_path == "ciscoFlashCopyDestinationName")
    {
        ciscoflashcopydestinationname = value;
    }
    if(value_path == "ciscoFlashCopyEntryStatus")
    {
        ciscoflashcopyentrystatus = value;
    }
    if(value_path == "ciscoFlashCopyNotifyOnCompletion")
    {
        ciscoflashcopynotifyoncompletion = value;
    }
    if(value_path == "ciscoFlashCopyProtocol")
    {
        ciscoflashcopyprotocol = value;
    }
    if(value_path == "ciscoFlashCopyRemotePassword")
    {
        ciscoflashcopyremotepassword = value;
    }
    if(value_path == "ciscoFlashCopyRemoteUserName")
    {
        ciscoflashcopyremoteusername = value;
    }
    if(value_path == "ciscoFlashCopyServerAddress")
    {
        ciscoflashcopyserveraddress = value;
    }
    if(value_path == "ciscoFlashCopyServerAddrRev1")
    {
        ciscoflashcopyserveraddrrev1 = value;
    }
    if(value_path == "ciscoFlashCopyServerAddrType")
    {
        ciscoflashcopyserveraddrtype = value;
    }
    if(value_path == "ciscoFlashCopySourceName")
    {
        ciscoflashcopysourcename = value;
    }
    if(value_path == "ciscoFlashCopyStatus")
    {
        ciscoflashcopystatus = value;
    }
    if(value_path == "ciscoFlashCopyTime")
    {
        ciscoflashcopytime = value;
    }
    if(value_path == "ciscoFlashCopyVerify")
    {
        ciscoflashcopyverify = value;
    }
}

CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningtable()
{
    yang_name = "ciscoFlashPartitioningTable"; yang_parent_name = "CISCO-FLASH-MIB";
}

CiscoFlashMib::Ciscoflashpartitioningtable::~Ciscoflashpartitioningtable()
{
}

bool CiscoFlashMib::Ciscoflashpartitioningtable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashpartitioningentry.size(); index++)
    {
        if(ciscoflashpartitioningentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoFlashMib::Ciscoflashpartitioningtable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashpartitioningentry.size(); index++)
    {
        if(ciscoflashpartitioningentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoFlashMib::Ciscoflashpartitioningtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashPartitioningTable";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashpartitioningtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashpartitioningtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashPartitioningEntry")
    {
        for(auto const & c : ciscoflashpartitioningentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry>();
        c->parent = this;
        ciscoflashpartitioningentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashpartitioningtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashpartitioningentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoFlashMib::Ciscoflashpartitioningtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningentry()
    :
    ciscoflashpartitioningserialnumber{YType::int32, "ciscoFlashPartitioningSerialNumber"},
    ciscoflashpartitioningcommand{YType::enumeration, "ciscoFlashPartitioningCommand"},
    ciscoflashpartitioningdestinationname{YType::str, "ciscoFlashPartitioningDestinationName"},
    ciscoflashpartitioningentrystatus{YType::enumeration, "ciscoFlashPartitioningEntryStatus"},
    ciscoflashpartitioningnotifyoncompletion{YType::boolean, "ciscoFlashPartitioningNotifyOnCompletion"},
    ciscoflashpartitioningpartitioncount{YType::uint32, "ciscoFlashPartitioningPartitionCount"},
    ciscoflashpartitioningpartitionsizes{YType::str, "ciscoFlashPartitioningPartitionSizes"},
    ciscoflashpartitioningstatus{YType::enumeration, "ciscoFlashPartitioningStatus"},
    ciscoflashpartitioningtime{YType::uint32, "ciscoFlashPartitioningTime"}
{
    yang_name = "ciscoFlashPartitioningEntry"; yang_parent_name = "ciscoFlashPartitioningTable";
}

CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::~Ciscoflashpartitioningentry()
{
}

bool CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::has_data() const
{
    return ciscoflashpartitioningserialnumber.is_set
	|| ciscoflashpartitioningcommand.is_set
	|| ciscoflashpartitioningdestinationname.is_set
	|| ciscoflashpartitioningentrystatus.is_set
	|| ciscoflashpartitioningnotifyoncompletion.is_set
	|| ciscoflashpartitioningpartitioncount.is_set
	|| ciscoflashpartitioningpartitionsizes.is_set
	|| ciscoflashpartitioningstatus.is_set
	|| ciscoflashpartitioningtime.is_set;
}

bool CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciscoflashpartitioningserialnumber.operation)
	|| is_set(ciscoflashpartitioningcommand.operation)
	|| is_set(ciscoflashpartitioningdestinationname.operation)
	|| is_set(ciscoflashpartitioningentrystatus.operation)
	|| is_set(ciscoflashpartitioningnotifyoncompletion.operation)
	|| is_set(ciscoflashpartitioningpartitioncount.operation)
	|| is_set(ciscoflashpartitioningpartitionsizes.operation)
	|| is_set(ciscoflashpartitioningstatus.operation)
	|| is_set(ciscoflashpartitioningtime.operation);
}

std::string CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashPartitioningEntry" <<"[ciscoFlashPartitioningSerialNumber='" <<ciscoflashpartitioningserialnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashPartitioningTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashpartitioningserialnumber.is_set || is_set(ciscoflashpartitioningserialnumber.operation)) leaf_name_data.push_back(ciscoflashpartitioningserialnumber.get_name_leafdata());
    if (ciscoflashpartitioningcommand.is_set || is_set(ciscoflashpartitioningcommand.operation)) leaf_name_data.push_back(ciscoflashpartitioningcommand.get_name_leafdata());
    if (ciscoflashpartitioningdestinationname.is_set || is_set(ciscoflashpartitioningdestinationname.operation)) leaf_name_data.push_back(ciscoflashpartitioningdestinationname.get_name_leafdata());
    if (ciscoflashpartitioningentrystatus.is_set || is_set(ciscoflashpartitioningentrystatus.operation)) leaf_name_data.push_back(ciscoflashpartitioningentrystatus.get_name_leafdata());
    if (ciscoflashpartitioningnotifyoncompletion.is_set || is_set(ciscoflashpartitioningnotifyoncompletion.operation)) leaf_name_data.push_back(ciscoflashpartitioningnotifyoncompletion.get_name_leafdata());
    if (ciscoflashpartitioningpartitioncount.is_set || is_set(ciscoflashpartitioningpartitioncount.operation)) leaf_name_data.push_back(ciscoflashpartitioningpartitioncount.get_name_leafdata());
    if (ciscoflashpartitioningpartitionsizes.is_set || is_set(ciscoflashpartitioningpartitionsizes.operation)) leaf_name_data.push_back(ciscoflashpartitioningpartitionsizes.get_name_leafdata());
    if (ciscoflashpartitioningstatus.is_set || is_set(ciscoflashpartitioningstatus.operation)) leaf_name_data.push_back(ciscoflashpartitioningstatus.get_name_leafdata());
    if (ciscoflashpartitioningtime.is_set || is_set(ciscoflashpartitioningtime.operation)) leaf_name_data.push_back(ciscoflashpartitioningtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoFlashPartitioningSerialNumber")
    {
        ciscoflashpartitioningserialnumber = value;
    }
    if(value_path == "ciscoFlashPartitioningCommand")
    {
        ciscoflashpartitioningcommand = value;
    }
    if(value_path == "ciscoFlashPartitioningDestinationName")
    {
        ciscoflashpartitioningdestinationname = value;
    }
    if(value_path == "ciscoFlashPartitioningEntryStatus")
    {
        ciscoflashpartitioningentrystatus = value;
    }
    if(value_path == "ciscoFlashPartitioningNotifyOnCompletion")
    {
        ciscoflashpartitioningnotifyoncompletion = value;
    }
    if(value_path == "ciscoFlashPartitioningPartitionCount")
    {
        ciscoflashpartitioningpartitioncount = value;
    }
    if(value_path == "ciscoFlashPartitioningPartitionSizes")
    {
        ciscoflashpartitioningpartitionsizes = value;
    }
    if(value_path == "ciscoFlashPartitioningStatus")
    {
        ciscoflashpartitioningstatus = value;
    }
    if(value_path == "ciscoFlashPartitioningTime")
    {
        ciscoflashpartitioningtime = value;
    }
}

CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscoptable()
{
    yang_name = "ciscoFlashMiscOpTable"; yang_parent_name = "CISCO-FLASH-MIB";
}

CiscoFlashMib::Ciscoflashmiscoptable::~Ciscoflashmiscoptable()
{
}

bool CiscoFlashMib::Ciscoflashmiscoptable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashmiscopentry.size(); index++)
    {
        if(ciscoflashmiscopentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoFlashMib::Ciscoflashmiscoptable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashmiscopentry.size(); index++)
    {
        if(ciscoflashmiscopentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoFlashMib::Ciscoflashmiscoptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashMiscOpTable";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashmiscoptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashmiscoptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoFlashMiscOpEntry")
    {
        for(auto const & c : ciscoflashmiscopentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry>();
        c->parent = this;
        ciscoflashmiscopentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashmiscoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashmiscopentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoFlashMib::Ciscoflashmiscoptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopentry()
    :
    ciscoflashmiscopserialnumber{YType::int32, "ciscoFlashMiscOpSerialNumber"},
    ciscoflashmiscopcommand{YType::enumeration, "ciscoFlashMiscOpCommand"},
    ciscoflashmiscopdestinationname{YType::str, "ciscoFlashMiscOpDestinationName"},
    ciscoflashmiscopentrystatus{YType::enumeration, "ciscoFlashMiscOpEntryStatus"},
    ciscoflashmiscopnotifyoncompletion{YType::boolean, "ciscoFlashMiscOpNotifyOnCompletion"},
    ciscoflashmiscopstatus{YType::enumeration, "ciscoFlashMiscOpStatus"},
    ciscoflashmiscoptime{YType::uint32, "ciscoFlashMiscOpTime"}
{
    yang_name = "ciscoFlashMiscOpEntry"; yang_parent_name = "ciscoFlashMiscOpTable";
}

CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::~Ciscoflashmiscopentry()
{
}

bool CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::has_data() const
{
    return ciscoflashmiscopserialnumber.is_set
	|| ciscoflashmiscopcommand.is_set
	|| ciscoflashmiscopdestinationname.is_set
	|| ciscoflashmiscopentrystatus.is_set
	|| ciscoflashmiscopnotifyoncompletion.is_set
	|| ciscoflashmiscopstatus.is_set
	|| ciscoflashmiscoptime.is_set;
}

bool CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ciscoflashmiscopserialnumber.operation)
	|| is_set(ciscoflashmiscopcommand.operation)
	|| is_set(ciscoflashmiscopdestinationname.operation)
	|| is_set(ciscoflashmiscopentrystatus.operation)
	|| is_set(ciscoflashmiscopnotifyoncompletion.operation)
	|| is_set(ciscoflashmiscopstatus.operation)
	|| is_set(ciscoflashmiscoptime.operation);
}

std::string CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashMiscOpEntry" <<"[ciscoFlashMiscOpSerialNumber='" <<ciscoflashmiscopserialnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashMiscOpTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashmiscopserialnumber.is_set || is_set(ciscoflashmiscopserialnumber.operation)) leaf_name_data.push_back(ciscoflashmiscopserialnumber.get_name_leafdata());
    if (ciscoflashmiscopcommand.is_set || is_set(ciscoflashmiscopcommand.operation)) leaf_name_data.push_back(ciscoflashmiscopcommand.get_name_leafdata());
    if (ciscoflashmiscopdestinationname.is_set || is_set(ciscoflashmiscopdestinationname.operation)) leaf_name_data.push_back(ciscoflashmiscopdestinationname.get_name_leafdata());
    if (ciscoflashmiscopentrystatus.is_set || is_set(ciscoflashmiscopentrystatus.operation)) leaf_name_data.push_back(ciscoflashmiscopentrystatus.get_name_leafdata());
    if (ciscoflashmiscopnotifyoncompletion.is_set || is_set(ciscoflashmiscopnotifyoncompletion.operation)) leaf_name_data.push_back(ciscoflashmiscopnotifyoncompletion.get_name_leafdata());
    if (ciscoflashmiscopstatus.is_set || is_set(ciscoflashmiscopstatus.operation)) leaf_name_data.push_back(ciscoflashmiscopstatus.get_name_leafdata());
    if (ciscoflashmiscoptime.is_set || is_set(ciscoflashmiscoptime.operation)) leaf_name_data.push_back(ciscoflashmiscoptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoFlashMiscOpSerialNumber")
    {
        ciscoflashmiscopserialnumber = value;
    }
    if(value_path == "ciscoFlashMiscOpCommand")
    {
        ciscoflashmiscopcommand = value;
    }
    if(value_path == "ciscoFlashMiscOpDestinationName")
    {
        ciscoflashmiscopdestinationname = value;
    }
    if(value_path == "ciscoFlashMiscOpEntryStatus")
    {
        ciscoflashmiscopentrystatus = value;
    }
    if(value_path == "ciscoFlashMiscOpNotifyOnCompletion")
    {
        ciscoflashmiscopnotifyoncompletion = value;
    }
    if(value_path == "ciscoFlashMiscOpStatus")
    {
        ciscoflashmiscopstatus = value;
    }
    if(value_path == "ciscoFlashMiscOpTime")
    {
        ciscoflashmiscoptime = value;
    }
}

const Enum::YLeaf FlashfiletypeEnum::unknown {1, "unknown"};
const Enum::YLeaf FlashfiletypeEnum::config {2, "config"};
const Enum::YLeaf FlashfiletypeEnum::image {3, "image"};
const Enum::YLeaf FlashfiletypeEnum::directory {4, "directory"};
const Enum::YLeaf FlashfiletypeEnum::crashinfo {5, "crashinfo"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::CiscoflashdeviceprogrammingjumperEnum::installed {1, "installed"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::CiscoflashdeviceprogrammingjumperEnum::notInstalled {2, "notInstalled"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashdevicetable::Ciscoflashdeviceentry::CiscoflashdeviceprogrammingjumperEnum::unknown {3, "unknown"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::CiscoflashpartitionchecksumalgorithmEnum::simpleChecksum {1, "simpleChecksum"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::CiscoflashpartitionchecksumalgorithmEnum::undefined {2, "undefined"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::CiscoflashpartitionchecksumalgorithmEnum::simpleCRC {3, "simpleCRC"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::CiscoflashpartitionstatusEnum::readOnly {1, "readOnly"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::CiscoflashpartitionstatusEnum::runFromFlash {2, "runFromFlash"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::CiscoflashpartitionstatusEnum::readWrite {3, "readWrite"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::CiscoflashpartitionupgrademethodEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::CiscoflashpartitionupgrademethodEnum::rxbootFLH {2, "rxbootFLH"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitiontable::Ciscoflashpartitionentry::CiscoflashpartitionupgrademethodEnum::direct {3, "direct"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::CiscoflashfilestatusEnum::deleted {1, "deleted"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::CiscoflashfilestatusEnum::invalidChecksum {2, "invalidChecksum"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashfiletable::Ciscoflashfileentry::CiscoflashfilestatusEnum::valid {3, "valid"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::CiscoflashfilebytypestatusEnum::deleted {1, "deleted"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::CiscoflashfilebytypestatusEnum::invalidChecksum {2, "invalidChecksum"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::CiscoflashfilebytypestatusEnum::valid {3, "valid"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopycommandEnum::copyToFlashWithErase {1, "copyToFlashWithErase"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopycommandEnum::copyToFlashWithoutErase {2, "copyToFlashWithoutErase"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopycommandEnum::copyFromFlash {3, "copyFromFlash"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopycommandEnum::copyFromFlhLog {4, "copyFromFlhLog"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopyprotocolEnum::tftp {1, "tftp"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopyprotocolEnum::rcp {2, "rcp"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopyprotocolEnum::lex {3, "lex"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopyprotocolEnum::ftp {4, "ftp"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopyprotocolEnum::scp {5, "scp"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopyprotocolEnum::sftp {6, "sftp"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyOperationPending {0, "copyOperationPending"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyInProgress {1, "copyInProgress"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyOperationSuccess {2, "copyOperationSuccess"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyInvalidOperation {3, "copyInvalidOperation"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyInvalidProtocol {4, "copyInvalidProtocol"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyInvalidSourceName {5, "copyInvalidSourceName"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyInvalidDestName {6, "copyInvalidDestName"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyInvalidServerAddress {7, "copyInvalidServerAddress"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyDeviceBusy {8, "copyDeviceBusy"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyDeviceOpenError {9, "copyDeviceOpenError"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyDeviceError {10, "copyDeviceError"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyDeviceNotProgrammable {11, "copyDeviceNotProgrammable"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyDeviceFull {12, "copyDeviceFull"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyFileOpenError {13, "copyFileOpenError"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyFileTransferError {14, "copyFileTransferError"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyFileChecksumError {15, "copyFileChecksumError"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyNoMemory {16, "copyNoMemory"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyUnknownFailure {17, "copyUnknownFailure"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyInvalidSignature {18, "copyInvalidSignature"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashcopytable::Ciscoflashcopyentry::CiscoflashcopystatusEnum::copyProhibited {19, "copyProhibited"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningcommandEnum::partition {1, "partition"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningstatusEnum::partitioningInProgress {1, "partitioningInProgress"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningstatusEnum::partitioningOperationSuccess {2, "partitioningOperationSuccess"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningstatusEnum::partitioningInvalidOperation {3, "partitioningInvalidOperation"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningstatusEnum::partitioningInvalidDestName {4, "partitioningInvalidDestName"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningstatusEnum::partitioningInvalidPartitionCount {5, "partitioningInvalidPartitionCount"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningstatusEnum::partitioningInvalidPartitionSizes {6, "partitioningInvalidPartitionSizes"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningstatusEnum::partitioningDeviceBusy {7, "partitioningDeviceBusy"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningstatusEnum::partitioningDeviceOpenError {8, "partitioningDeviceOpenError"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningstatusEnum::partitioningDeviceError {9, "partitioningDeviceError"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningstatusEnum::partitioningNoMemory {10, "partitioningNoMemory"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::CiscoflashpartitioningstatusEnum::partitioningUnknownFailure {11, "partitioningUnknownFailure"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopcommandEnum::erase {1, "erase"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopcommandEnum::verify {2, "verify"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopcommandEnum::delete_ {3, "delete"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopcommandEnum::undelete {4, "undelete"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopcommandEnum::squeeze {5, "squeeze"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopcommandEnum::format {6, "format"};

const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpInProgress {1, "miscOpInProgress"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpOperationSuccess {2, "miscOpOperationSuccess"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpInvalidOperation {3, "miscOpInvalidOperation"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpInvalidDestName {4, "miscOpInvalidDestName"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpDeviceBusy {5, "miscOpDeviceBusy"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpDeviceOpenError {6, "miscOpDeviceOpenError"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpDeviceError {7, "miscOpDeviceError"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpDeviceNotProgrammable {8, "miscOpDeviceNotProgrammable"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpFileOpenError {9, "miscOpFileOpenError"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpFileDeleteFailure {10, "miscOpFileDeleteFailure"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpFileUndeleteFailure {11, "miscOpFileUndeleteFailure"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpFileChecksumError {12, "miscOpFileChecksumError"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpNoMemory {13, "miscOpNoMemory"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpUnknownFailure {14, "miscOpUnknownFailure"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpSqueezeFailure {18, "miscOpSqueezeFailure"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpNoSuchFile {19, "miscOpNoSuchFile"};
const Enum::YLeaf CiscoFlashMib::Ciscoflashmiscoptable::Ciscoflashmiscopentry::CiscoflashmiscopstatusEnum::miscOpFormatFailure {20, "miscOpFormatFailure"};


}
}

