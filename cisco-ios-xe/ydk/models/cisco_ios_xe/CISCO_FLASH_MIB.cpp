
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
    ciscoflashcfg(std::make_shared<CISCOFLASHMIB::Ciscoflashcfg>())
	,ciscoflashchiptable(std::make_shared<CISCOFLASHMIB::Ciscoflashchiptable>())
	,ciscoflashcopytable(std::make_shared<CISCOFLASHMIB::Ciscoflashcopytable>())
	,ciscoflashdevice(std::make_shared<CISCOFLASHMIB::Ciscoflashdevice>())
	,ciscoflashdevicetable(std::make_shared<CISCOFLASHMIB::Ciscoflashdevicetable>())
	,ciscoflashfilebytypetable(std::make_shared<CISCOFLASHMIB::Ciscoflashfilebytypetable>())
	,ciscoflashfiletable(std::make_shared<CISCOFLASHMIB::Ciscoflashfiletable>())
	,ciscoflashmiscoptable(std::make_shared<CISCOFLASHMIB::Ciscoflashmiscoptable>())
	,ciscoflashpartitioningtable(std::make_shared<CISCOFLASHMIB::Ciscoflashpartitioningtable>())
	,ciscoflashpartitiontable(std::make_shared<CISCOFLASHMIB::Ciscoflashpartitiontable>())
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

    yang_name = "CISCO-FLASH-MIB"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOFLASHMIB::~CISCOFLASHMIB()
{
}

bool CISCOFLASHMIB::has_data() const
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

bool CISCOFLASHMIB::has_operation() const
{
    return is_set(yfilter)
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
    if(child_yang_name == "ciscoFlashCfg")
    {
        if(ciscoflashcfg == nullptr)
        {
            ciscoflashcfg = std::make_shared<CISCOFLASHMIB::Ciscoflashcfg>();
        }
        return ciscoflashcfg;
    }

    if(child_yang_name == "ciscoFlashChipTable")
    {
        if(ciscoflashchiptable == nullptr)
        {
            ciscoflashchiptable = std::make_shared<CISCOFLASHMIB::Ciscoflashchiptable>();
        }
        return ciscoflashchiptable;
    }

    if(child_yang_name == "ciscoFlashCopyTable")
    {
        if(ciscoflashcopytable == nullptr)
        {
            ciscoflashcopytable = std::make_shared<CISCOFLASHMIB::Ciscoflashcopytable>();
        }
        return ciscoflashcopytable;
    }

    if(child_yang_name == "ciscoFlashDevice")
    {
        if(ciscoflashdevice == nullptr)
        {
            ciscoflashdevice = std::make_shared<CISCOFLASHMIB::Ciscoflashdevice>();
        }
        return ciscoflashdevice;
    }

    if(child_yang_name == "ciscoFlashDeviceTable")
    {
        if(ciscoflashdevicetable == nullptr)
        {
            ciscoflashdevicetable = std::make_shared<CISCOFLASHMIB::Ciscoflashdevicetable>();
        }
        return ciscoflashdevicetable;
    }

    if(child_yang_name == "ciscoFlashFileByTypeTable")
    {
        if(ciscoflashfilebytypetable == nullptr)
        {
            ciscoflashfilebytypetable = std::make_shared<CISCOFLASHMIB::Ciscoflashfilebytypetable>();
        }
        return ciscoflashfilebytypetable;
    }

    if(child_yang_name == "ciscoFlashFileTable")
    {
        if(ciscoflashfiletable == nullptr)
        {
            ciscoflashfiletable = std::make_shared<CISCOFLASHMIB::Ciscoflashfiletable>();
        }
        return ciscoflashfiletable;
    }

    if(child_yang_name == "ciscoFlashMiscOpTable")
    {
        if(ciscoflashmiscoptable == nullptr)
        {
            ciscoflashmiscoptable = std::make_shared<CISCOFLASHMIB::Ciscoflashmiscoptable>();
        }
        return ciscoflashmiscoptable;
    }

    if(child_yang_name == "ciscoFlashPartitioningTable")
    {
        if(ciscoflashpartitioningtable == nullptr)
        {
            ciscoflashpartitioningtable = std::make_shared<CISCOFLASHMIB::Ciscoflashpartitioningtable>();
        }
        return ciscoflashpartitioningtable;
    }

    if(child_yang_name == "ciscoFlashPartitionTable")
    {
        if(ciscoflashpartitiontable == nullptr)
        {
            ciscoflashpartitiontable = std::make_shared<CISCOFLASHMIB::Ciscoflashpartitiontable>();
        }
        return ciscoflashpartitiontable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::get_children() const
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
    if(name == "ciscoFlashCfg" || name == "ciscoFlashChipTable" || name == "ciscoFlashCopyTable" || name == "ciscoFlashDevice" || name == "ciscoFlashDeviceTable" || name == "ciscoFlashFileByTypeTable" || name == "ciscoFlashFileTable" || name == "ciscoFlashMiscOpTable" || name == "ciscoFlashPartitioningTable" || name == "ciscoFlashPartitionTable")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashcfg::Ciscoflashcfg()
    :
    ciscoflashcfgdevinsnotifenable{YType::boolean, "ciscoFlashCfgDevInsNotifEnable"},
    ciscoflashcfgdevremnotifenable{YType::boolean, "ciscoFlashCfgDevRemNotifEnable"},
    ciscoflashpartitionlowspacenotifenable{YType::boolean, "ciscoFlashPartitionLowSpaceNotifEnable"}
{

    yang_name = "ciscoFlashCfg"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashcfg::~Ciscoflashcfg()
{
}

bool CISCOFLASHMIB::Ciscoflashcfg::has_data() const
{
    return ciscoflashcfgdevinsnotifenable.is_set
	|| ciscoflashcfgdevremnotifenable.is_set
	|| ciscoflashpartitionlowspacenotifenable.is_set;
}

bool CISCOFLASHMIB::Ciscoflashcfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashcfgdevinsnotifenable.yfilter)
	|| ydk::is_set(ciscoflashcfgdevremnotifenable.yfilter)
	|| ydk::is_set(ciscoflashpartitionlowspacenotifenable.yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashcfg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashcfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashCfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashcfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashcfgdevinsnotifenable.is_set || is_set(ciscoflashcfgdevinsnotifenable.yfilter)) leaf_name_data.push_back(ciscoflashcfgdevinsnotifenable.get_name_leafdata());
    if (ciscoflashcfgdevremnotifenable.is_set || is_set(ciscoflashcfgdevremnotifenable.yfilter)) leaf_name_data.push_back(ciscoflashcfgdevremnotifenable.get_name_leafdata());
    if (ciscoflashpartitionlowspacenotifenable.is_set || is_set(ciscoflashpartitionlowspacenotifenable.yfilter)) leaf_name_data.push_back(ciscoflashpartitionlowspacenotifenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashcfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashcfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOFLASHMIB::Ciscoflashcfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOFLASHMIB::Ciscoflashcfg::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOFLASHMIB::Ciscoflashcfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashCfgDevInsNotifEnable" || name == "ciscoFlashCfgDevRemNotifEnable" || name == "ciscoFlashPartitionLowSpaceNotifEnable")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchiptable()
{

    yang_name = "ciscoFlashChipTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashchiptable::~Ciscoflashchiptable()
{
}

bool CISCOFLASHMIB::Ciscoflashchiptable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashchipentry.size(); index++)
    {
        if(ciscoflashchipentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::Ciscoflashchiptable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashchipentry.size(); index++)
    {
        if(ciscoflashchipentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashchiptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashchiptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashChipTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashchiptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashchiptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry>();
        c->parent = this;
        ciscoflashchipentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashchiptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashchipentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOFLASHMIB::Ciscoflashchiptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::Ciscoflashchiptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::Ciscoflashchiptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashChipEntry")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry::Ciscoflashchipentry()
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

    yang_name = "ciscoFlashChipEntry"; yang_parent_name = "ciscoFlashChipTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry::~Ciscoflashchipentry()
{
}

bool CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry::has_data() const
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

bool CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashdeviceindex.yfilter)
	|| ydk::is_set(ciscoflashchipindex.yfilter)
	|| ydk::is_set(ciscoflashchipcode.yfilter)
	|| ydk::is_set(ciscoflashchipdescr.yfilter)
	|| ydk::is_set(ciscoflashchiperaseretries.yfilter)
	|| ydk::is_set(ciscoflashchipmaxeraseretries.yfilter)
	|| ydk::is_set(ciscoflashchipmaxwriteretries.yfilter)
	|| ydk::is_set(ciscoflashchipwriteretries.yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashChipTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashChipEntry" <<"[ciscoFlashDeviceIndex='" <<ciscoflashdeviceindex <<"']" <<"[ciscoFlashChipIndex='" <<ciscoflashchipindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.yfilter)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashchipindex.is_set || is_set(ciscoflashchipindex.yfilter)) leaf_name_data.push_back(ciscoflashchipindex.get_name_leafdata());
    if (ciscoflashchipcode.is_set || is_set(ciscoflashchipcode.yfilter)) leaf_name_data.push_back(ciscoflashchipcode.get_name_leafdata());
    if (ciscoflashchipdescr.is_set || is_set(ciscoflashchipdescr.yfilter)) leaf_name_data.push_back(ciscoflashchipdescr.get_name_leafdata());
    if (ciscoflashchiperaseretries.is_set || is_set(ciscoflashchiperaseretries.yfilter)) leaf_name_data.push_back(ciscoflashchiperaseretries.get_name_leafdata());
    if (ciscoflashchipmaxeraseretries.is_set || is_set(ciscoflashchipmaxeraseretries.yfilter)) leaf_name_data.push_back(ciscoflashchipmaxeraseretries.get_name_leafdata());
    if (ciscoflashchipmaxwriteretries.is_set || is_set(ciscoflashchipmaxwriteretries.yfilter)) leaf_name_data.push_back(ciscoflashchipmaxwriteretries.get_name_leafdata());
    if (ciscoflashchipwriteretries.is_set || is_set(ciscoflashchipwriteretries.yfilter)) leaf_name_data.push_back(ciscoflashchipwriteretries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciscoFlashChipEraseRetries")
    {
        ciscoflashchiperaseretries = value;
        ciscoflashchiperaseretries.value_namespace = name_space;
        ciscoflashchiperaseretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashChipMaxEraseRetries")
    {
        ciscoflashchipmaxeraseretries = value;
        ciscoflashchipmaxeraseretries.value_namespace = name_space;
        ciscoflashchipmaxeraseretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashChipMaxWriteRetries")
    {
        ciscoflashchipmaxwriteretries = value;
        ciscoflashchipmaxwriteretries.value_namespace = name_space;
        ciscoflashchipmaxwriteretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashChipWriteRetries")
    {
        ciscoflashchipwriteretries = value;
        ciscoflashchipwriteretries.value_namespace = name_space;
        ciscoflashchipwriteretries.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ciscoFlashChipEraseRetries")
    {
        ciscoflashchiperaseretries.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashChipMaxEraseRetries")
    {
        ciscoflashchipmaxeraseretries.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashChipMaxWriteRetries")
    {
        ciscoflashchipmaxwriteretries.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashChipWriteRetries")
    {
        ciscoflashchipwriteretries.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::Ciscoflashchiptable::Ciscoflashchipentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDeviceIndex" || name == "ciscoFlashChipIndex" || name == "ciscoFlashChipCode" || name == "ciscoFlashChipDescr" || name == "ciscoFlashChipEraseRetries" || name == "ciscoFlashChipMaxEraseRetries" || name == "ciscoFlashChipMaxWriteRetries" || name == "ciscoFlashChipWriteRetries")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopytable()
{

    yang_name = "ciscoFlashCopyTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashcopytable::~Ciscoflashcopytable()
{
}

bool CISCOFLASHMIB::Ciscoflashcopytable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashcopyentry.size(); index++)
    {
        if(ciscoflashcopyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::Ciscoflashcopytable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashcopyentry.size(); index++)
    {
        if(ciscoflashcopyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashcopytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashcopytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashCopyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashcopytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashcopytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry>();
        c->parent = this;
        ciscoflashcopyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashcopytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashcopyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOFLASHMIB::Ciscoflashcopytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::Ciscoflashcopytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::Ciscoflashcopytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashCopyEntry")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopyentry()
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

    yang_name = "ciscoFlashCopyEntry"; yang_parent_name = "ciscoFlashCopyTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::~Ciscoflashcopyentry()
{
}

bool CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::has_data() const
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

bool CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashcopyserialnumber.yfilter)
	|| ydk::is_set(ciscoflashcopycommand.yfilter)
	|| ydk::is_set(ciscoflashcopydestinationname.yfilter)
	|| ydk::is_set(ciscoflashcopyentrystatus.yfilter)
	|| ydk::is_set(ciscoflashcopynotifyoncompletion.yfilter)
	|| ydk::is_set(ciscoflashcopyprotocol.yfilter)
	|| ydk::is_set(ciscoflashcopyremotepassword.yfilter)
	|| ydk::is_set(ciscoflashcopyremoteusername.yfilter)
	|| ydk::is_set(ciscoflashcopyserveraddress.yfilter)
	|| ydk::is_set(ciscoflashcopyserveraddrrev1.yfilter)
	|| ydk::is_set(ciscoflashcopyserveraddrtype.yfilter)
	|| ydk::is_set(ciscoflashcopysourcename.yfilter)
	|| ydk::is_set(ciscoflashcopystatus.yfilter)
	|| ydk::is_set(ciscoflashcopytime.yfilter)
	|| ydk::is_set(ciscoflashcopyverify.yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashCopyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashCopyEntry" <<"[ciscoFlashCopySerialNumber='" <<ciscoflashcopyserialnumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashcopyserialnumber.is_set || is_set(ciscoflashcopyserialnumber.yfilter)) leaf_name_data.push_back(ciscoflashcopyserialnumber.get_name_leafdata());
    if (ciscoflashcopycommand.is_set || is_set(ciscoflashcopycommand.yfilter)) leaf_name_data.push_back(ciscoflashcopycommand.get_name_leafdata());
    if (ciscoflashcopydestinationname.is_set || is_set(ciscoflashcopydestinationname.yfilter)) leaf_name_data.push_back(ciscoflashcopydestinationname.get_name_leafdata());
    if (ciscoflashcopyentrystatus.is_set || is_set(ciscoflashcopyentrystatus.yfilter)) leaf_name_data.push_back(ciscoflashcopyentrystatus.get_name_leafdata());
    if (ciscoflashcopynotifyoncompletion.is_set || is_set(ciscoflashcopynotifyoncompletion.yfilter)) leaf_name_data.push_back(ciscoflashcopynotifyoncompletion.get_name_leafdata());
    if (ciscoflashcopyprotocol.is_set || is_set(ciscoflashcopyprotocol.yfilter)) leaf_name_data.push_back(ciscoflashcopyprotocol.get_name_leafdata());
    if (ciscoflashcopyremotepassword.is_set || is_set(ciscoflashcopyremotepassword.yfilter)) leaf_name_data.push_back(ciscoflashcopyremotepassword.get_name_leafdata());
    if (ciscoflashcopyremoteusername.is_set || is_set(ciscoflashcopyremoteusername.yfilter)) leaf_name_data.push_back(ciscoflashcopyremoteusername.get_name_leafdata());
    if (ciscoflashcopyserveraddress.is_set || is_set(ciscoflashcopyserveraddress.yfilter)) leaf_name_data.push_back(ciscoflashcopyserveraddress.get_name_leafdata());
    if (ciscoflashcopyserveraddrrev1.is_set || is_set(ciscoflashcopyserveraddrrev1.yfilter)) leaf_name_data.push_back(ciscoflashcopyserveraddrrev1.get_name_leafdata());
    if (ciscoflashcopyserveraddrtype.is_set || is_set(ciscoflashcopyserveraddrtype.yfilter)) leaf_name_data.push_back(ciscoflashcopyserveraddrtype.get_name_leafdata());
    if (ciscoflashcopysourcename.is_set || is_set(ciscoflashcopysourcename.yfilter)) leaf_name_data.push_back(ciscoflashcopysourcename.get_name_leafdata());
    if (ciscoflashcopystatus.is_set || is_set(ciscoflashcopystatus.yfilter)) leaf_name_data.push_back(ciscoflashcopystatus.get_name_leafdata());
    if (ciscoflashcopytime.is_set || is_set(ciscoflashcopytime.yfilter)) leaf_name_data.push_back(ciscoflashcopytime.get_name_leafdata());
    if (ciscoflashcopyverify.is_set || is_set(ciscoflashcopyverify.yfilter)) leaf_name_data.push_back(ciscoflashcopyverify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciscoFlashCopyDestinationName")
    {
        ciscoflashcopydestinationname = value;
        ciscoflashcopydestinationname.value_namespace = name_space;
        ciscoflashcopydestinationname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyEntryStatus")
    {
        ciscoflashcopyentrystatus = value;
        ciscoflashcopyentrystatus.value_namespace = name_space;
        ciscoflashcopyentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyNotifyOnCompletion")
    {
        ciscoflashcopynotifyoncompletion = value;
        ciscoflashcopynotifyoncompletion.value_namespace = name_space;
        ciscoflashcopynotifyoncompletion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyProtocol")
    {
        ciscoflashcopyprotocol = value;
        ciscoflashcopyprotocol.value_namespace = name_space;
        ciscoflashcopyprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyRemotePassword")
    {
        ciscoflashcopyremotepassword = value;
        ciscoflashcopyremotepassword.value_namespace = name_space;
        ciscoflashcopyremotepassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyRemoteUserName")
    {
        ciscoflashcopyremoteusername = value;
        ciscoflashcopyremoteusername.value_namespace = name_space;
        ciscoflashcopyremoteusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyServerAddress")
    {
        ciscoflashcopyserveraddress = value;
        ciscoflashcopyserveraddress.value_namespace = name_space;
        ciscoflashcopyserveraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyServerAddrRev1")
    {
        ciscoflashcopyserveraddrrev1 = value;
        ciscoflashcopyserveraddrrev1.value_namespace = name_space;
        ciscoflashcopyserveraddrrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyServerAddrType")
    {
        ciscoflashcopyserveraddrtype = value;
        ciscoflashcopyserveraddrtype.value_namespace = name_space;
        ciscoflashcopyserveraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopySourceName")
    {
        ciscoflashcopysourcename = value;
        ciscoflashcopysourcename.value_namespace = name_space;
        ciscoflashcopysourcename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyStatus")
    {
        ciscoflashcopystatus = value;
        ciscoflashcopystatus.value_namespace = name_space;
        ciscoflashcopystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyTime")
    {
        ciscoflashcopytime = value;
        ciscoflashcopytime.value_namespace = name_space;
        ciscoflashcopytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashCopyVerify")
    {
        ciscoflashcopyverify = value;
        ciscoflashcopyverify.value_namespace = name_space;
        ciscoflashcopyverify.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashCopySerialNumber")
    {
        ciscoflashcopyserialnumber.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyCommand")
    {
        ciscoflashcopycommand.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyDestinationName")
    {
        ciscoflashcopydestinationname.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyEntryStatus")
    {
        ciscoflashcopyentrystatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyNotifyOnCompletion")
    {
        ciscoflashcopynotifyoncompletion.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyProtocol")
    {
        ciscoflashcopyprotocol.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyRemotePassword")
    {
        ciscoflashcopyremotepassword.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyRemoteUserName")
    {
        ciscoflashcopyremoteusername.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyServerAddress")
    {
        ciscoflashcopyserveraddress.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyServerAddrRev1")
    {
        ciscoflashcopyserveraddrrev1.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyServerAddrType")
    {
        ciscoflashcopyserveraddrtype.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopySourceName")
    {
        ciscoflashcopysourcename.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyStatus")
    {
        ciscoflashcopystatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyTime")
    {
        ciscoflashcopytime.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashCopyVerify")
    {
        ciscoflashcopyverify.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashCopySerialNumber" || name == "ciscoFlashCopyCommand" || name == "ciscoFlashCopyDestinationName" || name == "ciscoFlashCopyEntryStatus" || name == "ciscoFlashCopyNotifyOnCompletion" || name == "ciscoFlashCopyProtocol" || name == "ciscoFlashCopyRemotePassword" || name == "ciscoFlashCopyRemoteUserName" || name == "ciscoFlashCopyServerAddress" || name == "ciscoFlashCopyServerAddrRev1" || name == "ciscoFlashCopyServerAddrType" || name == "ciscoFlashCopySourceName" || name == "ciscoFlashCopyStatus" || name == "ciscoFlashCopyTime" || name == "ciscoFlashCopyVerify")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashdevice::Ciscoflashdevice()
    :
    ciscoflashdevicessupported{YType::uint32, "ciscoFlashDevicesSupported"}
{

    yang_name = "ciscoFlashDevice"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashdevice::~Ciscoflashdevice()
{
}

bool CISCOFLASHMIB::Ciscoflashdevice::has_data() const
{
    return ciscoflashdevicessupported.is_set;
}

bool CISCOFLASHMIB::Ciscoflashdevice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashdevicessupported.yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashdevice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashdevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashDevice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashdevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdevicessupported.is_set || is_set(ciscoflashdevicessupported.yfilter)) leaf_name_data.push_back(ciscoflashdevicessupported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashdevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashdevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOFLASHMIB::Ciscoflashdevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoFlashDevicesSupported")
    {
        ciscoflashdevicessupported = value;
        ciscoflashdevicessupported.value_namespace = name_space;
        ciscoflashdevicessupported.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::Ciscoflashdevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashDevicesSupported")
    {
        ciscoflashdevicessupported.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::Ciscoflashdevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDevicesSupported")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdevicetable()
{

    yang_name = "ciscoFlashDeviceTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashdevicetable::~Ciscoflashdevicetable()
{
}

bool CISCOFLASHMIB::Ciscoflashdevicetable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashdeviceentry.size(); index++)
    {
        if(ciscoflashdeviceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::Ciscoflashdevicetable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashdeviceentry.size(); index++)
    {
        if(ciscoflashdeviceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashdevicetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashdevicetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashDeviceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashdevicetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashdevicetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry>();
        c->parent = this;
        ciscoflashdeviceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashdevicetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashdeviceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOFLASHMIB::Ciscoflashdevicetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::Ciscoflashdevicetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::Ciscoflashdevicetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDeviceEntry")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::Ciscoflashdeviceentry()
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

    yang_name = "ciscoFlashDeviceEntry"; yang_parent_name = "ciscoFlashDeviceTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::~Ciscoflashdeviceentry()
{
}

bool CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::has_data() const
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

bool CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashdeviceindex.yfilter)
	|| ydk::is_set(ciscoflashdevicecard.yfilter)
	|| ydk::is_set(ciscoflashdevicechipcount.yfilter)
	|| ydk::is_set(ciscoflashdevicecontroller.yfilter)
	|| ydk::is_set(ciscoflashdevicedescr.yfilter)
	|| ydk::is_set(ciscoflashdeviceinittime.yfilter)
	|| ydk::is_set(ciscoflashdevicemaxpartitions.yfilter)
	|| ydk::is_set(ciscoflashdeviceminpartitionsize.yfilter)
	|| ydk::is_set(ciscoflashdeviceminpartitionsizeextended.yfilter)
	|| ydk::is_set(ciscoflashdevicename.yfilter)
	|| ydk::is_set(ciscoflashdevicenameextended.yfilter)
	|| ydk::is_set(ciscoflashdevicepartitions.yfilter)
	|| ydk::is_set(ciscoflashdeviceprogrammingjumper.yfilter)
	|| ydk::is_set(ciscoflashdeviceremovable.yfilter)
	|| ydk::is_set(ciscoflashdevicesize.yfilter)
	|| ydk::is_set(ciscoflashdevicesizeextended.yfilter)
	|| ydk::is_set(ciscoflashphyentindex.yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashDeviceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashDeviceEntry" <<"[ciscoFlashDeviceIndex='" <<ciscoflashdeviceindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.yfilter)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashdevicecard.is_set || is_set(ciscoflashdevicecard.yfilter)) leaf_name_data.push_back(ciscoflashdevicecard.get_name_leafdata());
    if (ciscoflashdevicechipcount.is_set || is_set(ciscoflashdevicechipcount.yfilter)) leaf_name_data.push_back(ciscoflashdevicechipcount.get_name_leafdata());
    if (ciscoflashdevicecontroller.is_set || is_set(ciscoflashdevicecontroller.yfilter)) leaf_name_data.push_back(ciscoflashdevicecontroller.get_name_leafdata());
    if (ciscoflashdevicedescr.is_set || is_set(ciscoflashdevicedescr.yfilter)) leaf_name_data.push_back(ciscoflashdevicedescr.get_name_leafdata());
    if (ciscoflashdeviceinittime.is_set || is_set(ciscoflashdeviceinittime.yfilter)) leaf_name_data.push_back(ciscoflashdeviceinittime.get_name_leafdata());
    if (ciscoflashdevicemaxpartitions.is_set || is_set(ciscoflashdevicemaxpartitions.yfilter)) leaf_name_data.push_back(ciscoflashdevicemaxpartitions.get_name_leafdata());
    if (ciscoflashdeviceminpartitionsize.is_set || is_set(ciscoflashdeviceminpartitionsize.yfilter)) leaf_name_data.push_back(ciscoflashdeviceminpartitionsize.get_name_leafdata());
    if (ciscoflashdeviceminpartitionsizeextended.is_set || is_set(ciscoflashdeviceminpartitionsizeextended.yfilter)) leaf_name_data.push_back(ciscoflashdeviceminpartitionsizeextended.get_name_leafdata());
    if (ciscoflashdevicename.is_set || is_set(ciscoflashdevicename.yfilter)) leaf_name_data.push_back(ciscoflashdevicename.get_name_leafdata());
    if (ciscoflashdevicenameextended.is_set || is_set(ciscoflashdevicenameextended.yfilter)) leaf_name_data.push_back(ciscoflashdevicenameextended.get_name_leafdata());
    if (ciscoflashdevicepartitions.is_set || is_set(ciscoflashdevicepartitions.yfilter)) leaf_name_data.push_back(ciscoflashdevicepartitions.get_name_leafdata());
    if (ciscoflashdeviceprogrammingjumper.is_set || is_set(ciscoflashdeviceprogrammingjumper.yfilter)) leaf_name_data.push_back(ciscoflashdeviceprogrammingjumper.get_name_leafdata());
    if (ciscoflashdeviceremovable.is_set || is_set(ciscoflashdeviceremovable.yfilter)) leaf_name_data.push_back(ciscoflashdeviceremovable.get_name_leafdata());
    if (ciscoflashdevicesize.is_set || is_set(ciscoflashdevicesize.yfilter)) leaf_name_data.push_back(ciscoflashdevicesize.get_name_leafdata());
    if (ciscoflashdevicesizeextended.is_set || is_set(ciscoflashdevicesizeextended.yfilter)) leaf_name_data.push_back(ciscoflashdevicesizeextended.get_name_leafdata());
    if (ciscoflashphyentindex.is_set || is_set(ciscoflashphyentindex.yfilter)) leaf_name_data.push_back(ciscoflashphyentindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex = value;
        ciscoflashdeviceindex.value_namespace = name_space;
        ciscoflashdeviceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceCard")
    {
        ciscoflashdevicecard = value;
        ciscoflashdevicecard.value_namespace = name_space;
        ciscoflashdevicecard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceChipCount")
    {
        ciscoflashdevicechipcount = value;
        ciscoflashdevicechipcount.value_namespace = name_space;
        ciscoflashdevicechipcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceController")
    {
        ciscoflashdevicecontroller = value;
        ciscoflashdevicecontroller.value_namespace = name_space;
        ciscoflashdevicecontroller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceDescr")
    {
        ciscoflashdevicedescr = value;
        ciscoflashdevicedescr.value_namespace = name_space;
        ciscoflashdevicedescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceInitTime")
    {
        ciscoflashdeviceinittime = value;
        ciscoflashdeviceinittime.value_namespace = name_space;
        ciscoflashdeviceinittime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceMaxPartitions")
    {
        ciscoflashdevicemaxpartitions = value;
        ciscoflashdevicemaxpartitions.value_namespace = name_space;
        ciscoflashdevicemaxpartitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceMinPartitionSize")
    {
        ciscoflashdeviceminpartitionsize = value;
        ciscoflashdeviceminpartitionsize.value_namespace = name_space;
        ciscoflashdeviceminpartitionsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceMinPartitionSizeExtended")
    {
        ciscoflashdeviceminpartitionsizeextended = value;
        ciscoflashdeviceminpartitionsizeextended.value_namespace = name_space;
        ciscoflashdeviceminpartitionsizeextended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceName")
    {
        ciscoflashdevicename = value;
        ciscoflashdevicename.value_namespace = name_space;
        ciscoflashdevicename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceNameExtended")
    {
        ciscoflashdevicenameextended = value;
        ciscoflashdevicenameextended.value_namespace = name_space;
        ciscoflashdevicenameextended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDevicePartitions")
    {
        ciscoflashdevicepartitions = value;
        ciscoflashdevicepartitions.value_namespace = name_space;
        ciscoflashdevicepartitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceProgrammingJumper")
    {
        ciscoflashdeviceprogrammingjumper = value;
        ciscoflashdeviceprogrammingjumper.value_namespace = name_space;
        ciscoflashdeviceprogrammingjumper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceRemovable")
    {
        ciscoflashdeviceremovable = value;
        ciscoflashdeviceremovable.value_namespace = name_space;
        ciscoflashdeviceremovable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceSize")
    {
        ciscoflashdevicesize = value;
        ciscoflashdevicesize.value_namespace = name_space;
        ciscoflashdevicesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashDeviceSizeExtended")
    {
        ciscoflashdevicesizeextended = value;
        ciscoflashdevicesizeextended.value_namespace = name_space;
        ciscoflashdevicesizeextended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPhyEntIndex")
    {
        ciscoflashphyentindex = value;
        ciscoflashphyentindex.value_namespace = name_space;
        ciscoflashphyentindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceCard")
    {
        ciscoflashdevicecard.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceChipCount")
    {
        ciscoflashdevicechipcount.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceController")
    {
        ciscoflashdevicecontroller.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceDescr")
    {
        ciscoflashdevicedescr.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceInitTime")
    {
        ciscoflashdeviceinittime.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceMaxPartitions")
    {
        ciscoflashdevicemaxpartitions.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceMinPartitionSize")
    {
        ciscoflashdeviceminpartitionsize.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceMinPartitionSizeExtended")
    {
        ciscoflashdeviceminpartitionsizeextended.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceName")
    {
        ciscoflashdevicename.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceNameExtended")
    {
        ciscoflashdevicenameextended.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDevicePartitions")
    {
        ciscoflashdevicepartitions.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceProgrammingJumper")
    {
        ciscoflashdeviceprogrammingjumper.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceRemovable")
    {
        ciscoflashdeviceremovable.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceSize")
    {
        ciscoflashdevicesize.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashDeviceSizeExtended")
    {
        ciscoflashdevicesizeextended.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPhyEntIndex")
    {
        ciscoflashphyentindex.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDeviceIndex" || name == "ciscoFlashDeviceCard" || name == "ciscoFlashDeviceChipCount" || name == "ciscoFlashDeviceController" || name == "ciscoFlashDeviceDescr" || name == "ciscoFlashDeviceInitTime" || name == "ciscoFlashDeviceMaxPartitions" || name == "ciscoFlashDeviceMinPartitionSize" || name == "ciscoFlashDeviceMinPartitionSizeExtended" || name == "ciscoFlashDeviceName" || name == "ciscoFlashDeviceNameExtended" || name == "ciscoFlashDevicePartitions" || name == "ciscoFlashDeviceProgrammingJumper" || name == "ciscoFlashDeviceRemovable" || name == "ciscoFlashDeviceSize" || name == "ciscoFlashDeviceSizeExtended" || name == "ciscoFlashPhyEntIndex")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypetable()
{

    yang_name = "ciscoFlashFileByTypeTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashfilebytypetable::~Ciscoflashfilebytypetable()
{
}

bool CISCOFLASHMIB::Ciscoflashfilebytypetable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashfilebytypeentry.size(); index++)
    {
        if(ciscoflashfilebytypeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::Ciscoflashfilebytypetable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashfilebytypeentry.size(); index++)
    {
        if(ciscoflashfilebytypeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashfilebytypetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashfilebytypetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashFileByTypeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashfilebytypetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashfilebytypetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry>();
        c->parent = this;
        ciscoflashfilebytypeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashfilebytypetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashfilebytypeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOFLASHMIB::Ciscoflashfilebytypetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::Ciscoflashfilebytypetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::Ciscoflashfilebytypetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashFileByTypeEntry")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::Ciscoflashfilebytypeentry()
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

    yang_name = "ciscoFlashFileByTypeEntry"; yang_parent_name = "ciscoFlashFileByTypeTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::~Ciscoflashfilebytypeentry()
{
}

bool CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::has_data() const
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

bool CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashfiletype.yfilter)
	|| ydk::is_set(ciscoflashdeviceindex.yfilter)
	|| ydk::is_set(ciscoflashpartitionindex.yfilter)
	|| ydk::is_set(ciscoflashfileindex.yfilter)
	|| ydk::is_set(ciscoflashfilebytypechecksum.yfilter)
	|| ydk::is_set(ciscoflashfilebytypedate.yfilter)
	|| ydk::is_set(ciscoflashfilebytypename.yfilter)
	|| ydk::is_set(ciscoflashfilebytypesize.yfilter)
	|| ydk::is_set(ciscoflashfilebytypestatus.yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashFileByTypeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashFileByTypeEntry" <<"[ciscoFlashFileType='" <<ciscoflashfiletype <<"']" <<"[ciscoFlashDeviceIndex='" <<ciscoflashdeviceindex <<"']" <<"[ciscoFlashPartitionIndex='" <<ciscoflashpartitionindex <<"']" <<"[ciscoFlashFileIndex='" <<ciscoflashfileindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashfiletype.is_set || is_set(ciscoflashfiletype.yfilter)) leaf_name_data.push_back(ciscoflashfiletype.get_name_leafdata());
    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.yfilter)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashpartitionindex.is_set || is_set(ciscoflashpartitionindex.yfilter)) leaf_name_data.push_back(ciscoflashpartitionindex.get_name_leafdata());
    if (ciscoflashfileindex.is_set || is_set(ciscoflashfileindex.yfilter)) leaf_name_data.push_back(ciscoflashfileindex.get_name_leafdata());
    if (ciscoflashfilebytypechecksum.is_set || is_set(ciscoflashfilebytypechecksum.yfilter)) leaf_name_data.push_back(ciscoflashfilebytypechecksum.get_name_leafdata());
    if (ciscoflashfilebytypedate.is_set || is_set(ciscoflashfilebytypedate.yfilter)) leaf_name_data.push_back(ciscoflashfilebytypedate.get_name_leafdata());
    if (ciscoflashfilebytypename.is_set || is_set(ciscoflashfilebytypename.yfilter)) leaf_name_data.push_back(ciscoflashfilebytypename.get_name_leafdata());
    if (ciscoflashfilebytypesize.is_set || is_set(ciscoflashfilebytypesize.yfilter)) leaf_name_data.push_back(ciscoflashfilebytypesize.get_name_leafdata());
    if (ciscoflashfilebytypestatus.is_set || is_set(ciscoflashfilebytypestatus.yfilter)) leaf_name_data.push_back(ciscoflashfilebytypestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciscoFlashFileByTypeChecksum")
    {
        ciscoflashfilebytypechecksum = value;
        ciscoflashfilebytypechecksum.value_namespace = name_space;
        ciscoflashfilebytypechecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileByTypeDate")
    {
        ciscoflashfilebytypedate = value;
        ciscoflashfilebytypedate.value_namespace = name_space;
        ciscoflashfilebytypedate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileByTypeName")
    {
        ciscoflashfilebytypename = value;
        ciscoflashfilebytypename.value_namespace = name_space;
        ciscoflashfilebytypename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileByTypeSize")
    {
        ciscoflashfilebytypesize = value;
        ciscoflashfilebytypesize.value_namespace = name_space;
        ciscoflashfilebytypesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileByTypeStatus")
    {
        ciscoflashfilebytypestatus = value;
        ciscoflashfilebytypestatus.value_namespace = name_space;
        ciscoflashfilebytypestatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ciscoFlashFileByTypeChecksum")
    {
        ciscoflashfilebytypechecksum.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileByTypeDate")
    {
        ciscoflashfilebytypedate.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileByTypeName")
    {
        ciscoflashfilebytypename.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileByTypeSize")
    {
        ciscoflashfilebytypesize.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileByTypeStatus")
    {
        ciscoflashfilebytypestatus.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashFileType" || name == "ciscoFlashDeviceIndex" || name == "ciscoFlashPartitionIndex" || name == "ciscoFlashFileIndex" || name == "ciscoFlashFileByTypeChecksum" || name == "ciscoFlashFileByTypeDate" || name == "ciscoFlashFileByTypeName" || name == "ciscoFlashFileByTypeSize" || name == "ciscoFlashFileByTypeStatus")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfiletable()
{

    yang_name = "ciscoFlashFileTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashfiletable::~Ciscoflashfiletable()
{
}

bool CISCOFLASHMIB::Ciscoflashfiletable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashfileentry.size(); index++)
    {
        if(ciscoflashfileentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::Ciscoflashfiletable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashfileentry.size(); index++)
    {
        if(ciscoflashfileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashfiletable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashfiletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashFileTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashfiletable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashfiletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry>();
        c->parent = this;
        ciscoflashfileentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashfiletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashfileentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOFLASHMIB::Ciscoflashfiletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::Ciscoflashfiletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::Ciscoflashfiletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashFileEntry")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::Ciscoflashfileentry()
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

    yang_name = "ciscoFlashFileEntry"; yang_parent_name = "ciscoFlashFileTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::~Ciscoflashfileentry()
{
}

bool CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::has_data() const
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

bool CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashdeviceindex.yfilter)
	|| ydk::is_set(ciscoflashpartitionindex.yfilter)
	|| ydk::is_set(ciscoflashfileindex.yfilter)
	|| ydk::is_set(ciscoflashfilechecksum.yfilter)
	|| ydk::is_set(ciscoflashfiledate.yfilter)
	|| ydk::is_set(ciscoflashfilename.yfilter)
	|| ydk::is_set(ciscoflashfilesize.yfilter)
	|| ydk::is_set(ciscoflashfilestatus.yfilter)
	|| ydk::is_set(ciscoflashfiletype.yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashFileTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashFileEntry" <<"[ciscoFlashDeviceIndex='" <<ciscoflashdeviceindex <<"']" <<"[ciscoFlashPartitionIndex='" <<ciscoflashpartitionindex <<"']" <<"[ciscoFlashFileIndex='" <<ciscoflashfileindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.yfilter)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashpartitionindex.is_set || is_set(ciscoflashpartitionindex.yfilter)) leaf_name_data.push_back(ciscoflashpartitionindex.get_name_leafdata());
    if (ciscoflashfileindex.is_set || is_set(ciscoflashfileindex.yfilter)) leaf_name_data.push_back(ciscoflashfileindex.get_name_leafdata());
    if (ciscoflashfilechecksum.is_set || is_set(ciscoflashfilechecksum.yfilter)) leaf_name_data.push_back(ciscoflashfilechecksum.get_name_leafdata());
    if (ciscoflashfiledate.is_set || is_set(ciscoflashfiledate.yfilter)) leaf_name_data.push_back(ciscoflashfiledate.get_name_leafdata());
    if (ciscoflashfilename.is_set || is_set(ciscoflashfilename.yfilter)) leaf_name_data.push_back(ciscoflashfilename.get_name_leafdata());
    if (ciscoflashfilesize.is_set || is_set(ciscoflashfilesize.yfilter)) leaf_name_data.push_back(ciscoflashfilesize.get_name_leafdata());
    if (ciscoflashfilestatus.is_set || is_set(ciscoflashfilestatus.yfilter)) leaf_name_data.push_back(ciscoflashfilestatus.get_name_leafdata());
    if (ciscoflashfiletype.is_set || is_set(ciscoflashfiletype.yfilter)) leaf_name_data.push_back(ciscoflashfiletype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciscoFlashFileChecksum")
    {
        ciscoflashfilechecksum = value;
        ciscoflashfilechecksum.value_namespace = name_space;
        ciscoflashfilechecksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileDate")
    {
        ciscoflashfiledate = value;
        ciscoflashfiledate.value_namespace = name_space;
        ciscoflashfiledate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileName")
    {
        ciscoflashfilename = value;
        ciscoflashfilename.value_namespace = name_space;
        ciscoflashfilename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileSize")
    {
        ciscoflashfilesize = value;
        ciscoflashfilesize.value_namespace = name_space;
        ciscoflashfilesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileStatus")
    {
        ciscoflashfilestatus = value;
        ciscoflashfilestatus.value_namespace = name_space;
        ciscoflashfilestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashFileType")
    {
        ciscoflashfiletype = value;
        ciscoflashfiletype.value_namespace = name_space;
        ciscoflashfiletype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ciscoFlashFileChecksum")
    {
        ciscoflashfilechecksum.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileDate")
    {
        ciscoflashfiledate.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileName")
    {
        ciscoflashfilename.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileSize")
    {
        ciscoflashfilesize.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileStatus")
    {
        ciscoflashfilestatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashFileType")
    {
        ciscoflashfiletype.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDeviceIndex" || name == "ciscoFlashPartitionIndex" || name == "ciscoFlashFileIndex" || name == "ciscoFlashFileChecksum" || name == "ciscoFlashFileDate" || name == "ciscoFlashFileName" || name == "ciscoFlashFileSize" || name == "ciscoFlashFileStatus" || name == "ciscoFlashFileType")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscoptable()
{

    yang_name = "ciscoFlashMiscOpTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashmiscoptable::~Ciscoflashmiscoptable()
{
}

bool CISCOFLASHMIB::Ciscoflashmiscoptable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashmiscopentry.size(); index++)
    {
        if(ciscoflashmiscopentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::Ciscoflashmiscoptable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashmiscopentry.size(); index++)
    {
        if(ciscoflashmiscopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashmiscoptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashmiscoptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashMiscOpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashmiscoptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashmiscoptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry>();
        c->parent = this;
        ciscoflashmiscopentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashmiscoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashmiscopentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOFLASHMIB::Ciscoflashmiscoptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::Ciscoflashmiscoptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::Ciscoflashmiscoptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashMiscOpEntry")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopentry()
    :
    ciscoflashmiscopserialnumber{YType::int32, "ciscoFlashMiscOpSerialNumber"},
    ciscoflashmiscopcommand{YType::enumeration, "ciscoFlashMiscOpCommand"},
    ciscoflashmiscopdestinationname{YType::str, "ciscoFlashMiscOpDestinationName"},
    ciscoflashmiscopentrystatus{YType::enumeration, "ciscoFlashMiscOpEntryStatus"},
    ciscoflashmiscopnotifyoncompletion{YType::boolean, "ciscoFlashMiscOpNotifyOnCompletion"},
    ciscoflashmiscopstatus{YType::enumeration, "ciscoFlashMiscOpStatus"},
    ciscoflashmiscoptime{YType::uint32, "ciscoFlashMiscOpTime"}
{

    yang_name = "ciscoFlashMiscOpEntry"; yang_parent_name = "ciscoFlashMiscOpTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::~Ciscoflashmiscopentry()
{
}

bool CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::has_data() const
{
    return ciscoflashmiscopserialnumber.is_set
	|| ciscoflashmiscopcommand.is_set
	|| ciscoflashmiscopdestinationname.is_set
	|| ciscoflashmiscopentrystatus.is_set
	|| ciscoflashmiscopnotifyoncompletion.is_set
	|| ciscoflashmiscopstatus.is_set
	|| ciscoflashmiscoptime.is_set;
}

bool CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashmiscopserialnumber.yfilter)
	|| ydk::is_set(ciscoflashmiscopcommand.yfilter)
	|| ydk::is_set(ciscoflashmiscopdestinationname.yfilter)
	|| ydk::is_set(ciscoflashmiscopentrystatus.yfilter)
	|| ydk::is_set(ciscoflashmiscopnotifyoncompletion.yfilter)
	|| ydk::is_set(ciscoflashmiscopstatus.yfilter)
	|| ydk::is_set(ciscoflashmiscoptime.yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashMiscOpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashMiscOpEntry" <<"[ciscoFlashMiscOpSerialNumber='" <<ciscoflashmiscopserialnumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashmiscopserialnumber.is_set || is_set(ciscoflashmiscopserialnumber.yfilter)) leaf_name_data.push_back(ciscoflashmiscopserialnumber.get_name_leafdata());
    if (ciscoflashmiscopcommand.is_set || is_set(ciscoflashmiscopcommand.yfilter)) leaf_name_data.push_back(ciscoflashmiscopcommand.get_name_leafdata());
    if (ciscoflashmiscopdestinationname.is_set || is_set(ciscoflashmiscopdestinationname.yfilter)) leaf_name_data.push_back(ciscoflashmiscopdestinationname.get_name_leafdata());
    if (ciscoflashmiscopentrystatus.is_set || is_set(ciscoflashmiscopentrystatus.yfilter)) leaf_name_data.push_back(ciscoflashmiscopentrystatus.get_name_leafdata());
    if (ciscoflashmiscopnotifyoncompletion.is_set || is_set(ciscoflashmiscopnotifyoncompletion.yfilter)) leaf_name_data.push_back(ciscoflashmiscopnotifyoncompletion.get_name_leafdata());
    if (ciscoflashmiscopstatus.is_set || is_set(ciscoflashmiscopstatus.yfilter)) leaf_name_data.push_back(ciscoflashmiscopstatus.get_name_leafdata());
    if (ciscoflashmiscoptime.is_set || is_set(ciscoflashmiscoptime.yfilter)) leaf_name_data.push_back(ciscoflashmiscoptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciscoFlashMiscOpEntryStatus")
    {
        ciscoflashmiscopentrystatus = value;
        ciscoflashmiscopentrystatus.value_namespace = name_space;
        ciscoflashmiscopentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashMiscOpNotifyOnCompletion")
    {
        ciscoflashmiscopnotifyoncompletion = value;
        ciscoflashmiscopnotifyoncompletion.value_namespace = name_space;
        ciscoflashmiscopnotifyoncompletion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashMiscOpStatus")
    {
        ciscoflashmiscopstatus = value;
        ciscoflashmiscopstatus.value_namespace = name_space;
        ciscoflashmiscopstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashMiscOpTime")
    {
        ciscoflashmiscoptime = value;
        ciscoflashmiscoptime.value_namespace = name_space;
        ciscoflashmiscoptime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ciscoFlashMiscOpEntryStatus")
    {
        ciscoflashmiscopentrystatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashMiscOpNotifyOnCompletion")
    {
        ciscoflashmiscopnotifyoncompletion.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashMiscOpStatus")
    {
        ciscoflashmiscopstatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashMiscOpTime")
    {
        ciscoflashmiscoptime.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashMiscOpSerialNumber" || name == "ciscoFlashMiscOpCommand" || name == "ciscoFlashMiscOpDestinationName" || name == "ciscoFlashMiscOpEntryStatus" || name == "ciscoFlashMiscOpNotifyOnCompletion" || name == "ciscoFlashMiscOpStatus" || name == "ciscoFlashMiscOpTime")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningtable()
{

    yang_name = "ciscoFlashPartitioningTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashpartitioningtable::~Ciscoflashpartitioningtable()
{
}

bool CISCOFLASHMIB::Ciscoflashpartitioningtable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashpartitioningentry.size(); index++)
    {
        if(ciscoflashpartitioningentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::Ciscoflashpartitioningtable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashpartitioningentry.size(); index++)
    {
        if(ciscoflashpartitioningentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashpartitioningtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashpartitioningtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashPartitioningTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashpartitioningtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashpartitioningtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry>();
        c->parent = this;
        ciscoflashpartitioningentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashpartitioningtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashpartitioningentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOFLASHMIB::Ciscoflashpartitioningtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::Ciscoflashpartitioningtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::Ciscoflashpartitioningtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashPartitioningEntry")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningentry()
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

    yang_name = "ciscoFlashPartitioningEntry"; yang_parent_name = "ciscoFlashPartitioningTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::~Ciscoflashpartitioningentry()
{
}

bool CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::has_data() const
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

bool CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashpartitioningserialnumber.yfilter)
	|| ydk::is_set(ciscoflashpartitioningcommand.yfilter)
	|| ydk::is_set(ciscoflashpartitioningdestinationname.yfilter)
	|| ydk::is_set(ciscoflashpartitioningentrystatus.yfilter)
	|| ydk::is_set(ciscoflashpartitioningnotifyoncompletion.yfilter)
	|| ydk::is_set(ciscoflashpartitioningpartitioncount.yfilter)
	|| ydk::is_set(ciscoflashpartitioningpartitionsizes.yfilter)
	|| ydk::is_set(ciscoflashpartitioningstatus.yfilter)
	|| ydk::is_set(ciscoflashpartitioningtime.yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashPartitioningTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashPartitioningEntry" <<"[ciscoFlashPartitioningSerialNumber='" <<ciscoflashpartitioningserialnumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashpartitioningserialnumber.is_set || is_set(ciscoflashpartitioningserialnumber.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningserialnumber.get_name_leafdata());
    if (ciscoflashpartitioningcommand.is_set || is_set(ciscoflashpartitioningcommand.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningcommand.get_name_leafdata());
    if (ciscoflashpartitioningdestinationname.is_set || is_set(ciscoflashpartitioningdestinationname.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningdestinationname.get_name_leafdata());
    if (ciscoflashpartitioningentrystatus.is_set || is_set(ciscoflashpartitioningentrystatus.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningentrystatus.get_name_leafdata());
    if (ciscoflashpartitioningnotifyoncompletion.is_set || is_set(ciscoflashpartitioningnotifyoncompletion.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningnotifyoncompletion.get_name_leafdata());
    if (ciscoflashpartitioningpartitioncount.is_set || is_set(ciscoflashpartitioningpartitioncount.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningpartitioncount.get_name_leafdata());
    if (ciscoflashpartitioningpartitionsizes.is_set || is_set(ciscoflashpartitioningpartitionsizes.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningpartitionsizes.get_name_leafdata());
    if (ciscoflashpartitioningstatus.is_set || is_set(ciscoflashpartitioningstatus.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningstatus.get_name_leafdata());
    if (ciscoflashpartitioningtime.is_set || is_set(ciscoflashpartitioningtime.yfilter)) leaf_name_data.push_back(ciscoflashpartitioningtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciscoFlashPartitioningEntryStatus")
    {
        ciscoflashpartitioningentrystatus = value;
        ciscoflashpartitioningentrystatus.value_namespace = name_space;
        ciscoflashpartitioningentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitioningNotifyOnCompletion")
    {
        ciscoflashpartitioningnotifyoncompletion = value;
        ciscoflashpartitioningnotifyoncompletion.value_namespace = name_space;
        ciscoflashpartitioningnotifyoncompletion.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ciscoFlashPartitioningTime")
    {
        ciscoflashpartitioningtime = value;
        ciscoflashpartitioningtime.value_namespace = name_space;
        ciscoflashpartitioningtime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ciscoFlashPartitioningEntryStatus")
    {
        ciscoflashpartitioningentrystatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitioningNotifyOnCompletion")
    {
        ciscoflashpartitioningnotifyoncompletion.yfilter = yfilter;
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
    if(value_path == "ciscoFlashPartitioningTime")
    {
        ciscoflashpartitioningtime.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashPartitioningSerialNumber" || name == "ciscoFlashPartitioningCommand" || name == "ciscoFlashPartitioningDestinationName" || name == "ciscoFlashPartitioningEntryStatus" || name == "ciscoFlashPartitioningNotifyOnCompletion" || name == "ciscoFlashPartitioningPartitionCount" || name == "ciscoFlashPartitioningPartitionSizes" || name == "ciscoFlashPartitioningStatus" || name == "ciscoFlashPartitioningTime")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitiontable()
{

    yang_name = "ciscoFlashPartitionTable"; yang_parent_name = "CISCO-FLASH-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashpartitiontable::~Ciscoflashpartitiontable()
{
}

bool CISCOFLASHMIB::Ciscoflashpartitiontable::has_data() const
{
    for (std::size_t index=0; index<ciscoflashpartitionentry.size(); index++)
    {
        if(ciscoflashpartitionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFLASHMIB::Ciscoflashpartitiontable::has_operation() const
{
    for (std::size_t index=0; index<ciscoflashpartitionentry.size(); index++)
    {
        if(ciscoflashpartitionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashpartitiontable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashpartitiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashPartitionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashpartitiontable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashpartitiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry>();
        c->parent = this;
        ciscoflashpartitionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashpartitiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscoflashpartitionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOFLASHMIB::Ciscoflashpartitiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFLASHMIB::Ciscoflashpartitiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFLASHMIB::Ciscoflashpartitiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashPartitionEntry")
        return true;
    return false;
}

CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionentry()
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

    yang_name = "ciscoFlashPartitionEntry"; yang_parent_name = "ciscoFlashPartitionTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::~Ciscoflashpartitionentry()
{
}

bool CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::has_data() const
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

bool CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscoflashdeviceindex.yfilter)
	|| ydk::is_set(ciscoflashpartitionindex.yfilter)
	|| ydk::is_set(ciscoflashpartitionchecksumalgorithm.yfilter)
	|| ydk::is_set(ciscoflashpartitionendchip.yfilter)
	|| ydk::is_set(ciscoflashpartitionfilecount.yfilter)
	|| ydk::is_set(ciscoflashpartitionfilenamelength.yfilter)
	|| ydk::is_set(ciscoflashpartitionfreespace.yfilter)
	|| ydk::is_set(ciscoflashpartitionfreespaceextended.yfilter)
	|| ydk::is_set(ciscoflashpartitionlowspacenotifthreshold.yfilter)
	|| ydk::is_set(ciscoflashpartitionname.yfilter)
	|| ydk::is_set(ciscoflashpartitionneederasure.yfilter)
	|| ydk::is_set(ciscoflashpartitionsize.yfilter)
	|| ydk::is_set(ciscoflashpartitionsizeextended.yfilter)
	|| ydk::is_set(ciscoflashpartitionstartchip.yfilter)
	|| ydk::is_set(ciscoflashpartitionstatus.yfilter)
	|| ydk::is_set(ciscoflashpartitionupgrademethod.yfilter);
}

std::string CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FLASH-MIB:CISCO-FLASH-MIB/ciscoFlashPartitionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFlashPartitionEntry" <<"[ciscoFlashDeviceIndex='" <<ciscoflashdeviceindex <<"']" <<"[ciscoFlashPartitionIndex='" <<ciscoflashpartitionindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscoflashdeviceindex.is_set || is_set(ciscoflashdeviceindex.yfilter)) leaf_name_data.push_back(ciscoflashdeviceindex.get_name_leafdata());
    if (ciscoflashpartitionindex.is_set || is_set(ciscoflashpartitionindex.yfilter)) leaf_name_data.push_back(ciscoflashpartitionindex.get_name_leafdata());
    if (ciscoflashpartitionchecksumalgorithm.is_set || is_set(ciscoflashpartitionchecksumalgorithm.yfilter)) leaf_name_data.push_back(ciscoflashpartitionchecksumalgorithm.get_name_leafdata());
    if (ciscoflashpartitionendchip.is_set || is_set(ciscoflashpartitionendchip.yfilter)) leaf_name_data.push_back(ciscoflashpartitionendchip.get_name_leafdata());
    if (ciscoflashpartitionfilecount.is_set || is_set(ciscoflashpartitionfilecount.yfilter)) leaf_name_data.push_back(ciscoflashpartitionfilecount.get_name_leafdata());
    if (ciscoflashpartitionfilenamelength.is_set || is_set(ciscoflashpartitionfilenamelength.yfilter)) leaf_name_data.push_back(ciscoflashpartitionfilenamelength.get_name_leafdata());
    if (ciscoflashpartitionfreespace.is_set || is_set(ciscoflashpartitionfreespace.yfilter)) leaf_name_data.push_back(ciscoflashpartitionfreespace.get_name_leafdata());
    if (ciscoflashpartitionfreespaceextended.is_set || is_set(ciscoflashpartitionfreespaceextended.yfilter)) leaf_name_data.push_back(ciscoflashpartitionfreespaceextended.get_name_leafdata());
    if (ciscoflashpartitionlowspacenotifthreshold.is_set || is_set(ciscoflashpartitionlowspacenotifthreshold.yfilter)) leaf_name_data.push_back(ciscoflashpartitionlowspacenotifthreshold.get_name_leafdata());
    if (ciscoflashpartitionname.is_set || is_set(ciscoflashpartitionname.yfilter)) leaf_name_data.push_back(ciscoflashpartitionname.get_name_leafdata());
    if (ciscoflashpartitionneederasure.is_set || is_set(ciscoflashpartitionneederasure.yfilter)) leaf_name_data.push_back(ciscoflashpartitionneederasure.get_name_leafdata());
    if (ciscoflashpartitionsize.is_set || is_set(ciscoflashpartitionsize.yfilter)) leaf_name_data.push_back(ciscoflashpartitionsize.get_name_leafdata());
    if (ciscoflashpartitionsizeextended.is_set || is_set(ciscoflashpartitionsizeextended.yfilter)) leaf_name_data.push_back(ciscoflashpartitionsizeextended.get_name_leafdata());
    if (ciscoflashpartitionstartchip.is_set || is_set(ciscoflashpartitionstartchip.yfilter)) leaf_name_data.push_back(ciscoflashpartitionstartchip.get_name_leafdata());
    if (ciscoflashpartitionstatus.is_set || is_set(ciscoflashpartitionstatus.yfilter)) leaf_name_data.push_back(ciscoflashpartitionstatus.get_name_leafdata());
    if (ciscoflashpartitionupgrademethod.is_set || is_set(ciscoflashpartitionupgrademethod.yfilter)) leaf_name_data.push_back(ciscoflashpartitionupgrademethod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ciscoFlashPartitionChecksumAlgorithm")
    {
        ciscoflashpartitionchecksumalgorithm = value;
        ciscoflashpartitionchecksumalgorithm.value_namespace = name_space;
        ciscoflashpartitionchecksumalgorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionEndChip")
    {
        ciscoflashpartitionendchip = value;
        ciscoflashpartitionendchip.value_namespace = name_space;
        ciscoflashpartitionendchip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionFileCount")
    {
        ciscoflashpartitionfilecount = value;
        ciscoflashpartitionfilecount.value_namespace = name_space;
        ciscoflashpartitionfilecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionFileNameLength")
    {
        ciscoflashpartitionfilenamelength = value;
        ciscoflashpartitionfilenamelength.value_namespace = name_space;
        ciscoflashpartitionfilenamelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionFreeSpace")
    {
        ciscoflashpartitionfreespace = value;
        ciscoflashpartitionfreespace.value_namespace = name_space;
        ciscoflashpartitionfreespace.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ciscoFlashPartitionSize")
    {
        ciscoflashpartitionsize = value;
        ciscoflashpartitionsize.value_namespace = name_space;
        ciscoflashpartitionsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionSizeExtended")
    {
        ciscoflashpartitionsizeextended = value;
        ciscoflashpartitionsizeextended.value_namespace = name_space;
        ciscoflashpartitionsizeextended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoFlashPartitionStartChip")
    {
        ciscoflashpartitionstartchip = value;
        ciscoflashpartitionstartchip.value_namespace = name_space;
        ciscoflashpartitionstartchip.value_namespace_prefix = name_space_prefix;
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
}

void CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoFlashDeviceIndex")
    {
        ciscoflashdeviceindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionIndex")
    {
        ciscoflashpartitionindex.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionChecksumAlgorithm")
    {
        ciscoflashpartitionchecksumalgorithm.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionEndChip")
    {
        ciscoflashpartitionendchip.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionFileCount")
    {
        ciscoflashpartitionfilecount.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionFileNameLength")
    {
        ciscoflashpartitionfilenamelength.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionFreeSpace")
    {
        ciscoflashpartitionfreespace.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionFreeSpaceExtended")
    {
        ciscoflashpartitionfreespaceextended.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionLowSpaceNotifThreshold")
    {
        ciscoflashpartitionlowspacenotifthreshold.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionName")
    {
        ciscoflashpartitionname.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionNeedErasure")
    {
        ciscoflashpartitionneederasure.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionSize")
    {
        ciscoflashpartitionsize.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionSizeExtended")
    {
        ciscoflashpartitionsizeextended.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionStartChip")
    {
        ciscoflashpartitionstartchip.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionStatus")
    {
        ciscoflashpartitionstatus.yfilter = yfilter;
    }
    if(value_path == "ciscoFlashPartitionUpgradeMethod")
    {
        ciscoflashpartitionupgrademethod.yfilter = yfilter;
    }
}

bool CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoFlashDeviceIndex" || name == "ciscoFlashPartitionIndex" || name == "ciscoFlashPartitionChecksumAlgorithm" || name == "ciscoFlashPartitionEndChip" || name == "ciscoFlashPartitionFileCount" || name == "ciscoFlashPartitionFileNameLength" || name == "ciscoFlashPartitionFreeSpace" || name == "ciscoFlashPartitionFreeSpaceExtended" || name == "ciscoFlashPartitionLowSpaceNotifThreshold" || name == "ciscoFlashPartitionName" || name == "ciscoFlashPartitionNeedErasure" || name == "ciscoFlashPartitionSize" || name == "ciscoFlashPartitionSizeExtended" || name == "ciscoFlashPartitionStartChip" || name == "ciscoFlashPartitionStatus" || name == "ciscoFlashPartitionUpgradeMethod")
        return true;
    return false;
}

const Enum::YLeaf FlashFileType::unknown {1, "unknown"};
const Enum::YLeaf FlashFileType::config {2, "config"};
const Enum::YLeaf FlashFileType::image {3, "image"};
const Enum::YLeaf FlashFileType::directory {4, "directory"};
const Enum::YLeaf FlashFileType::crashinfo {5, "crashinfo"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopycommand::copyToFlashWithErase {1, "copyToFlashWithErase"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopycommand::copyToFlashWithoutErase {2, "copyToFlashWithoutErase"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopycommand::copyFromFlash {3, "copyFromFlash"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopycommand::copyFromFlhLog {4, "copyFromFlhLog"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopyprotocol::tftp {1, "tftp"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopyprotocol::rcp {2, "rcp"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopyprotocol::lex {3, "lex"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopyprotocol::ftp {4, "ftp"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopyprotocol::scp {5, "scp"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopyprotocol::sftp {6, "sftp"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyOperationPending {0, "copyOperationPending"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyInProgress {1, "copyInProgress"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyOperationSuccess {2, "copyOperationSuccess"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyInvalidOperation {3, "copyInvalidOperation"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyInvalidProtocol {4, "copyInvalidProtocol"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyInvalidSourceName {5, "copyInvalidSourceName"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyInvalidDestName {6, "copyInvalidDestName"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyInvalidServerAddress {7, "copyInvalidServerAddress"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyDeviceBusy {8, "copyDeviceBusy"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyDeviceOpenError {9, "copyDeviceOpenError"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyDeviceError {10, "copyDeviceError"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyDeviceNotProgrammable {11, "copyDeviceNotProgrammable"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyDeviceFull {12, "copyDeviceFull"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyFileOpenError {13, "copyFileOpenError"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyFileTransferError {14, "copyFileTransferError"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyFileChecksumError {15, "copyFileChecksumError"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyNoMemory {16, "copyNoMemory"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyUnknownFailure {17, "copyUnknownFailure"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyInvalidSignature {18, "copyInvalidSignature"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashcopytable::Ciscoflashcopyentry::Ciscoflashcopystatus::copyProhibited {19, "copyProhibited"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::Ciscoflashdeviceprogrammingjumper::installed {1, "installed"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::Ciscoflashdeviceprogrammingjumper::notInstalled {2, "notInstalled"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashdevicetable::Ciscoflashdeviceentry::Ciscoflashdeviceprogrammingjumper::unknown {3, "unknown"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::Ciscoflashfilebytypestatus::deleted {1, "deleted"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::Ciscoflashfilebytypestatus::invalidChecksum {2, "invalidChecksum"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashfilebytypetable::Ciscoflashfilebytypeentry::Ciscoflashfilebytypestatus::valid {3, "valid"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::Ciscoflashfilestatus::deleted {1, "deleted"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::Ciscoflashfilestatus::invalidChecksum {2, "invalidChecksum"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashfiletable::Ciscoflashfileentry::Ciscoflashfilestatus::valid {3, "valid"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopcommand::erase {1, "erase"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopcommand::verify {2, "verify"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopcommand::delete_ {3, "delete"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopcommand::undelete {4, "undelete"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopcommand::squeeze {5, "squeeze"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopcommand::format {6, "format"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpInProgress {1, "miscOpInProgress"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpOperationSuccess {2, "miscOpOperationSuccess"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpInvalidOperation {3, "miscOpInvalidOperation"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpInvalidDestName {4, "miscOpInvalidDestName"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpDeviceBusy {5, "miscOpDeviceBusy"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpDeviceOpenError {6, "miscOpDeviceOpenError"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpDeviceError {7, "miscOpDeviceError"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpDeviceNotProgrammable {8, "miscOpDeviceNotProgrammable"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpFileOpenError {9, "miscOpFileOpenError"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpFileDeleteFailure {10, "miscOpFileDeleteFailure"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpFileUndeleteFailure {11, "miscOpFileUndeleteFailure"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpFileChecksumError {12, "miscOpFileChecksumError"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpNoMemory {13, "miscOpNoMemory"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpUnknownFailure {14, "miscOpUnknownFailure"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpSqueezeFailure {18, "miscOpSqueezeFailure"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpNoSuchFile {19, "miscOpNoSuchFile"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashmiscoptable::Ciscoflashmiscopentry::Ciscoflashmiscopstatus::miscOpFormatFailure {20, "miscOpFormatFailure"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningcommand::partition {1, "partition"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus::partitioningInProgress {1, "partitioningInProgress"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus::partitioningOperationSuccess {2, "partitioningOperationSuccess"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus::partitioningInvalidOperation {3, "partitioningInvalidOperation"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus::partitioningInvalidDestName {4, "partitioningInvalidDestName"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus::partitioningInvalidPartitionCount {5, "partitioningInvalidPartitionCount"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus::partitioningInvalidPartitionSizes {6, "partitioningInvalidPartitionSizes"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus::partitioningDeviceBusy {7, "partitioningDeviceBusy"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus::partitioningDeviceOpenError {8, "partitioningDeviceOpenError"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus::partitioningDeviceError {9, "partitioningDeviceError"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus::partitioningNoMemory {10, "partitioningNoMemory"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitioningtable::Ciscoflashpartitioningentry::Ciscoflashpartitioningstatus::partitioningUnknownFailure {11, "partitioningUnknownFailure"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionchecksumalgorithm::simpleChecksum {1, "simpleChecksum"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionchecksumalgorithm::undefined {2, "undefined"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionchecksumalgorithm::simpleCRC {3, "simpleCRC"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionstatus::readOnly {1, "readOnly"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionstatus::runFromFlash {2, "runFromFlash"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionstatus::readWrite {3, "readWrite"};

const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionupgrademethod::unknown {1, "unknown"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionupgrademethod::rxbootFLH {2, "rxbootFLH"};
const Enum::YLeaf CISCOFLASHMIB::Ciscoflashpartitiontable::Ciscoflashpartitionentry::Ciscoflashpartitionupgrademethod::direct {3, "direct"};


}
}

