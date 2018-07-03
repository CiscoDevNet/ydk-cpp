
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CONFIG_MAN_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CONFIG_MAN_MIB {

CISCOCONFIGMANMIB::CISCOCONFIGMANMIB()
    :
    ccmhistory(std::make_shared<CISCOCONFIGMANMIB::CcmHistory>())
    , ccmclihistory(std::make_shared<CISCOCONFIGMANMIB::CcmCLIHistory>())
    , ccmclicfg(std::make_shared<CISCOCONFIGMANMIB::CcmCLICfg>())
    , ccmctidobjects(std::make_shared<CISCOCONFIGMANMIB::CcmCTIDObjects>())
    , ccmhistoryeventtable(std::make_shared<CISCOCONFIGMANMIB::CcmHistoryEventTable>())
    , ccmclihistorycommandtable(std::make_shared<CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable>())
{
    ccmhistory->parent = this;
    ccmclihistory->parent = this;
    ccmclicfg->parent = this;
    ccmctidobjects->parent = this;
    ccmhistoryeventtable->parent = this;
    ccmclihistorycommandtable->parent = this;

    yang_name = "CISCO-CONFIG-MAN-MIB"; yang_parent_name = "CISCO-CONFIG-MAN-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOCONFIGMANMIB::~CISCOCONFIGMANMIB()
{
}

bool CISCOCONFIGMANMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ccmhistory !=  nullptr && ccmhistory->has_data())
	|| (ccmclihistory !=  nullptr && ccmclihistory->has_data())
	|| (ccmclicfg !=  nullptr && ccmclicfg->has_data())
	|| (ccmctidobjects !=  nullptr && ccmctidobjects->has_data())
	|| (ccmhistoryeventtable !=  nullptr && ccmhistoryeventtable->has_data())
	|| (ccmclihistorycommandtable !=  nullptr && ccmclihistorycommandtable->has_data());
}

bool CISCOCONFIGMANMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ccmhistory !=  nullptr && ccmhistory->has_operation())
	|| (ccmclihistory !=  nullptr && ccmclihistory->has_operation())
	|| (ccmclicfg !=  nullptr && ccmclicfg->has_operation())
	|| (ccmctidobjects !=  nullptr && ccmctidobjects->has_operation())
	|| (ccmhistoryeventtable !=  nullptr && ccmhistoryeventtable->has_operation())
	|| (ccmclihistorycommandtable !=  nullptr && ccmclihistorycommandtable->has_operation());
}

std::string CISCOCONFIGMANMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGMANMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONFIGMANMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccmHistory")
    {
        if(ccmhistory == nullptr)
        {
            ccmhistory = std::make_shared<CISCOCONFIGMANMIB::CcmHistory>();
        }
        return ccmhistory;
    }

    if(child_yang_name == "ccmCLIHistory")
    {
        if(ccmclihistory == nullptr)
        {
            ccmclihistory = std::make_shared<CISCOCONFIGMANMIB::CcmCLIHistory>();
        }
        return ccmclihistory;
    }

    if(child_yang_name == "ccmCLICfg")
    {
        if(ccmclicfg == nullptr)
        {
            ccmclicfg = std::make_shared<CISCOCONFIGMANMIB::CcmCLICfg>();
        }
        return ccmclicfg;
    }

    if(child_yang_name == "ccmCTIDObjects")
    {
        if(ccmctidobjects == nullptr)
        {
            ccmctidobjects = std::make_shared<CISCOCONFIGMANMIB::CcmCTIDObjects>();
        }
        return ccmctidobjects;
    }

    if(child_yang_name == "ccmHistoryEventTable")
    {
        if(ccmhistoryeventtable == nullptr)
        {
            ccmhistoryeventtable = std::make_shared<CISCOCONFIGMANMIB::CcmHistoryEventTable>();
        }
        return ccmhistoryeventtable;
    }

    if(child_yang_name == "ccmCLIHistoryCommandTable")
    {
        if(ccmclihistorycommandtable == nullptr)
        {
            ccmclihistorycommandtable = std::make_shared<CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable>();
        }
        return ccmclihistorycommandtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONFIGMANMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ccmhistory != nullptr)
    {
        children["ccmHistory"] = ccmhistory;
    }

    if(ccmclihistory != nullptr)
    {
        children["ccmCLIHistory"] = ccmclihistory;
    }

    if(ccmclicfg != nullptr)
    {
        children["ccmCLICfg"] = ccmclicfg;
    }

    if(ccmctidobjects != nullptr)
    {
        children["ccmCTIDObjects"] = ccmctidobjects;
    }

    if(ccmhistoryeventtable != nullptr)
    {
        children["ccmHistoryEventTable"] = ccmhistoryeventtable;
    }

    if(ccmclihistorycommandtable != nullptr)
    {
        children["ccmCLIHistoryCommandTable"] = ccmclihistorycommandtable;
    }

    return children;
}

void CISCOCONFIGMANMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONFIGMANMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOCONFIGMANMIB::clone_ptr() const
{
    return std::make_shared<CISCOCONFIGMANMIB>();
}

std::string CISCOCONFIGMANMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOCONFIGMANMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOCONFIGMANMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOCONFIGMANMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOCONFIGMANMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmHistory" || name == "ccmCLIHistory" || name == "ccmCLICfg" || name == "ccmCTIDObjects" || name == "ccmHistoryEventTable" || name == "ccmCLIHistoryCommandTable")
        return true;
    return false;
}

CISCOCONFIGMANMIB::CcmHistory::CcmHistory()
    :
    ccmhistoryrunninglastchanged{YType::uint32, "ccmHistoryRunningLastChanged"},
    ccmhistoryrunninglastsaved{YType::uint32, "ccmHistoryRunningLastSaved"},
    ccmhistorystartuplastchanged{YType::uint32, "ccmHistoryStartupLastChanged"},
    ccmhistorymaxevententries{YType::int32, "ccmHistoryMaxEventEntries"},
    ccmhistoryevententriesbumped{YType::uint32, "ccmHistoryEventEntriesBumped"}
{

    yang_name = "ccmHistory"; yang_parent_name = "CISCO-CONFIG-MAN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONFIGMANMIB::CcmHistory::~CcmHistory()
{
}

bool CISCOCONFIGMANMIB::CcmHistory::has_data() const
{
    if (is_presence_container) return true;
    return ccmhistoryrunninglastchanged.is_set
	|| ccmhistoryrunninglastsaved.is_set
	|| ccmhistorystartuplastchanged.is_set
	|| ccmhistorymaxevententries.is_set
	|| ccmhistoryevententriesbumped.is_set;
}

bool CISCOCONFIGMANMIB::CcmHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccmhistoryrunninglastchanged.yfilter)
	|| ydk::is_set(ccmhistoryrunninglastsaved.yfilter)
	|| ydk::is_set(ccmhistorystartuplastchanged.yfilter)
	|| ydk::is_set(ccmhistorymaxevententries.yfilter)
	|| ydk::is_set(ccmhistoryevententriesbumped.yfilter);
}

std::string CISCOCONFIGMANMIB::CcmHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONFIGMANMIB::CcmHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmHistory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGMANMIB::CcmHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccmhistoryrunninglastchanged.is_set || is_set(ccmhistoryrunninglastchanged.yfilter)) leaf_name_data.push_back(ccmhistoryrunninglastchanged.get_name_leafdata());
    if (ccmhistoryrunninglastsaved.is_set || is_set(ccmhistoryrunninglastsaved.yfilter)) leaf_name_data.push_back(ccmhistoryrunninglastsaved.get_name_leafdata());
    if (ccmhistorystartuplastchanged.is_set || is_set(ccmhistorystartuplastchanged.yfilter)) leaf_name_data.push_back(ccmhistorystartuplastchanged.get_name_leafdata());
    if (ccmhistorymaxevententries.is_set || is_set(ccmhistorymaxevententries.yfilter)) leaf_name_data.push_back(ccmhistorymaxevententries.get_name_leafdata());
    if (ccmhistoryevententriesbumped.is_set || is_set(ccmhistoryevententriesbumped.yfilter)) leaf_name_data.push_back(ccmhistoryevententriesbumped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONFIGMANMIB::CcmHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONFIGMANMIB::CcmHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCONFIGMANMIB::CcmHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccmHistoryRunningLastChanged")
    {
        ccmhistoryrunninglastchanged = value;
        ccmhistoryrunninglastchanged.value_namespace = name_space;
        ccmhistoryrunninglastchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryRunningLastSaved")
    {
        ccmhistoryrunninglastsaved = value;
        ccmhistoryrunninglastsaved.value_namespace = name_space;
        ccmhistoryrunninglastsaved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryStartupLastChanged")
    {
        ccmhistorystartuplastchanged = value;
        ccmhistorystartuplastchanged.value_namespace = name_space;
        ccmhistorystartuplastchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryMaxEventEntries")
    {
        ccmhistorymaxevententries = value;
        ccmhistorymaxevententries.value_namespace = name_space;
        ccmhistorymaxevententries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventEntriesBumped")
    {
        ccmhistoryevententriesbumped = value;
        ccmhistoryevententriesbumped.value_namespace = name_space;
        ccmhistoryevententriesbumped.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONFIGMANMIB::CcmHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccmHistoryRunningLastChanged")
    {
        ccmhistoryrunninglastchanged.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryRunningLastSaved")
    {
        ccmhistoryrunninglastsaved.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryStartupLastChanged")
    {
        ccmhistorystartuplastchanged.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryMaxEventEntries")
    {
        ccmhistorymaxevententries.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventEntriesBumped")
    {
        ccmhistoryevententriesbumped.yfilter = yfilter;
    }
}

bool CISCOCONFIGMANMIB::CcmHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmHistoryRunningLastChanged" || name == "ccmHistoryRunningLastSaved" || name == "ccmHistoryStartupLastChanged" || name == "ccmHistoryMaxEventEntries" || name == "ccmHistoryEventEntriesBumped")
        return true;
    return false;
}

CISCOCONFIGMANMIB::CcmCLIHistory::CcmCLIHistory()
    :
    ccmclihistorymaxcmdentries{YType::uint32, "ccmCLIHistoryMaxCmdEntries"},
    ccmclihistorycmdentries{YType::uint32, "ccmCLIHistoryCmdEntries"},
    ccmclihistorycmdentriesallowed{YType::uint32, "ccmCLIHistoryCmdEntriesAllowed"}
{

    yang_name = "ccmCLIHistory"; yang_parent_name = "CISCO-CONFIG-MAN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONFIGMANMIB::CcmCLIHistory::~CcmCLIHistory()
{
}

bool CISCOCONFIGMANMIB::CcmCLIHistory::has_data() const
{
    if (is_presence_container) return true;
    return ccmclihistorymaxcmdentries.is_set
	|| ccmclihistorycmdentries.is_set
	|| ccmclihistorycmdentriesallowed.is_set;
}

bool CISCOCONFIGMANMIB::CcmCLIHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccmclihistorymaxcmdentries.yfilter)
	|| ydk::is_set(ccmclihistorycmdentries.yfilter)
	|| ydk::is_set(ccmclihistorycmdentriesallowed.yfilter);
}

std::string CISCOCONFIGMANMIB::CcmCLIHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONFIGMANMIB::CcmCLIHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCLIHistory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGMANMIB::CcmCLIHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccmclihistorymaxcmdentries.is_set || is_set(ccmclihistorymaxcmdentries.yfilter)) leaf_name_data.push_back(ccmclihistorymaxcmdentries.get_name_leafdata());
    if (ccmclihistorycmdentries.is_set || is_set(ccmclihistorycmdentries.yfilter)) leaf_name_data.push_back(ccmclihistorycmdentries.get_name_leafdata());
    if (ccmclihistorycmdentriesallowed.is_set || is_set(ccmclihistorycmdentriesallowed.yfilter)) leaf_name_data.push_back(ccmclihistorycmdentriesallowed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONFIGMANMIB::CcmCLIHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONFIGMANMIB::CcmCLIHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCONFIGMANMIB::CcmCLIHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccmCLIHistoryMaxCmdEntries")
    {
        ccmclihistorymaxcmdentries = value;
        ccmclihistorymaxcmdentries.value_namespace = name_space;
        ccmclihistorymaxcmdentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmCLIHistoryCmdEntries")
    {
        ccmclihistorycmdentries = value;
        ccmclihistorycmdentries.value_namespace = name_space;
        ccmclihistorycmdentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmCLIHistoryCmdEntriesAllowed")
    {
        ccmclihistorycmdentriesallowed = value;
        ccmclihistorycmdentriesallowed.value_namespace = name_space;
        ccmclihistorycmdentriesallowed.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONFIGMANMIB::CcmCLIHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccmCLIHistoryMaxCmdEntries")
    {
        ccmclihistorymaxcmdentries.yfilter = yfilter;
    }
    if(value_path == "ccmCLIHistoryCmdEntries")
    {
        ccmclihistorycmdentries.yfilter = yfilter;
    }
    if(value_path == "ccmCLIHistoryCmdEntriesAllowed")
    {
        ccmclihistorycmdentriesallowed.yfilter = yfilter;
    }
}

bool CISCOCONFIGMANMIB::CcmCLIHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmCLIHistoryMaxCmdEntries" || name == "ccmCLIHistoryCmdEntries" || name == "ccmCLIHistoryCmdEntriesAllowed")
        return true;
    return false;
}

CISCOCONFIGMANMIB::CcmCLICfg::CcmCLICfg()
    :
    ccmclicfgrunconfnotifenable{YType::boolean, "ccmCLICfgRunConfNotifEnable"}
{

    yang_name = "ccmCLICfg"; yang_parent_name = "CISCO-CONFIG-MAN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONFIGMANMIB::CcmCLICfg::~CcmCLICfg()
{
}

bool CISCOCONFIGMANMIB::CcmCLICfg::has_data() const
{
    if (is_presence_container) return true;
    return ccmclicfgrunconfnotifenable.is_set;
}

bool CISCOCONFIGMANMIB::CcmCLICfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccmclicfgrunconfnotifenable.yfilter);
}

std::string CISCOCONFIGMANMIB::CcmCLICfg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONFIGMANMIB::CcmCLICfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCLICfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGMANMIB::CcmCLICfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccmclicfgrunconfnotifenable.is_set || is_set(ccmclicfgrunconfnotifenable.yfilter)) leaf_name_data.push_back(ccmclicfgrunconfnotifenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONFIGMANMIB::CcmCLICfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONFIGMANMIB::CcmCLICfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCONFIGMANMIB::CcmCLICfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccmCLICfgRunConfNotifEnable")
    {
        ccmclicfgrunconfnotifenable = value;
        ccmclicfgrunconfnotifenable.value_namespace = name_space;
        ccmclicfgrunconfnotifenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONFIGMANMIB::CcmCLICfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccmCLICfgRunConfNotifEnable")
    {
        ccmclicfgrunconfnotifenable.yfilter = yfilter;
    }
}

bool CISCOCONFIGMANMIB::CcmCLICfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmCLICfgRunConfNotifEnable")
        return true;
    return false;
}

CISCOCONFIGMANMIB::CcmCTIDObjects::CcmCTIDObjects()
    :
    ccmctid{YType::uint64, "ccmCTID"},
    ccmctidlastchangetime{YType::str, "ccmCTIDLastChangeTime"},
    ccmctidwhochanged{YType::str, "ccmCTIDWhoChanged"},
    ccmctidrolledovernotifenable{YType::boolean, "ccmCTIDRolledOverNotifEnable"}
{

    yang_name = "ccmCTIDObjects"; yang_parent_name = "CISCO-CONFIG-MAN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONFIGMANMIB::CcmCTIDObjects::~CcmCTIDObjects()
{
}

bool CISCOCONFIGMANMIB::CcmCTIDObjects::has_data() const
{
    if (is_presence_container) return true;
    return ccmctid.is_set
	|| ccmctidlastchangetime.is_set
	|| ccmctidwhochanged.is_set
	|| ccmctidrolledovernotifenable.is_set;
}

bool CISCOCONFIGMANMIB::CcmCTIDObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccmctid.yfilter)
	|| ydk::is_set(ccmctidlastchangetime.yfilter)
	|| ydk::is_set(ccmctidwhochanged.yfilter)
	|| ydk::is_set(ccmctidrolledovernotifenable.yfilter);
}

std::string CISCOCONFIGMANMIB::CcmCTIDObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONFIGMANMIB::CcmCTIDObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCTIDObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGMANMIB::CcmCTIDObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccmctid.is_set || is_set(ccmctid.yfilter)) leaf_name_data.push_back(ccmctid.get_name_leafdata());
    if (ccmctidlastchangetime.is_set || is_set(ccmctidlastchangetime.yfilter)) leaf_name_data.push_back(ccmctidlastchangetime.get_name_leafdata());
    if (ccmctidwhochanged.is_set || is_set(ccmctidwhochanged.yfilter)) leaf_name_data.push_back(ccmctidwhochanged.get_name_leafdata());
    if (ccmctidrolledovernotifenable.is_set || is_set(ccmctidrolledovernotifenable.yfilter)) leaf_name_data.push_back(ccmctidrolledovernotifenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONFIGMANMIB::CcmCTIDObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONFIGMANMIB::CcmCTIDObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCONFIGMANMIB::CcmCTIDObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccmCTID")
    {
        ccmctid = value;
        ccmctid.value_namespace = name_space;
        ccmctid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmCTIDLastChangeTime")
    {
        ccmctidlastchangetime = value;
        ccmctidlastchangetime.value_namespace = name_space;
        ccmctidlastchangetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmCTIDWhoChanged")
    {
        ccmctidwhochanged = value;
        ccmctidwhochanged.value_namespace = name_space;
        ccmctidwhochanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmCTIDRolledOverNotifEnable")
    {
        ccmctidrolledovernotifenable = value;
        ccmctidrolledovernotifenable.value_namespace = name_space;
        ccmctidrolledovernotifenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONFIGMANMIB::CcmCTIDObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccmCTID")
    {
        ccmctid.yfilter = yfilter;
    }
    if(value_path == "ccmCTIDLastChangeTime")
    {
        ccmctidlastchangetime.yfilter = yfilter;
    }
    if(value_path == "ccmCTIDWhoChanged")
    {
        ccmctidwhochanged.yfilter = yfilter;
    }
    if(value_path == "ccmCTIDRolledOverNotifEnable")
    {
        ccmctidrolledovernotifenable.yfilter = yfilter;
    }
}

bool CISCOCONFIGMANMIB::CcmCTIDObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmCTID" || name == "ccmCTIDLastChangeTime" || name == "ccmCTIDWhoChanged" || name == "ccmCTIDRolledOverNotifEnable")
        return true;
    return false;
}

CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventTable()
    :
    ccmhistoryevententry(this, {"ccmhistoryeventindex"})
{

    yang_name = "ccmHistoryEventTable"; yang_parent_name = "CISCO-CONFIG-MAN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONFIGMANMIB::CcmHistoryEventTable::~CcmHistoryEventTable()
{
}

bool CISCOCONFIGMANMIB::CcmHistoryEventTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccmhistoryevententry.len(); index++)
    {
        if(ccmhistoryevententry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCONFIGMANMIB::CcmHistoryEventTable::has_operation() const
{
    for (std::size_t index=0; index<ccmhistoryevententry.len(); index++)
    {
        if(ccmhistoryevententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCONFIGMANMIB::CcmHistoryEventTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONFIGMANMIB::CcmHistoryEventTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmHistoryEventTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGMANMIB::CcmHistoryEventTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONFIGMANMIB::CcmHistoryEventTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccmHistoryEventEntry")
    {
        auto c = std::make_shared<CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry>();
        c->parent = this;
        ccmhistoryevententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONFIGMANMIB::CcmHistoryEventTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccmhistoryevententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCONFIGMANMIB::CcmHistoryEventTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONFIGMANMIB::CcmHistoryEventTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCONFIGMANMIB::CcmHistoryEventTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmHistoryEventEntry")
        return true;
    return false;
}

CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::CcmHistoryEventEntry()
    :
    ccmhistoryeventindex{YType::int32, "ccmHistoryEventIndex"},
    ccmhistoryeventtime{YType::uint32, "ccmHistoryEventTime"},
    ccmhistoryeventcommandsource{YType::enumeration, "ccmHistoryEventCommandSource"},
    ccmhistoryeventconfigsource{YType::enumeration, "ccmHistoryEventConfigSource"},
    ccmhistoryeventconfigdestination{YType::enumeration, "ccmHistoryEventConfigDestination"},
    ccmhistoryeventterminaltype{YType::enumeration, "ccmHistoryEventTerminalType"},
    ccmhistoryeventterminalnumber{YType::int32, "ccmHistoryEventTerminalNumber"},
    ccmhistoryeventterminaluser{YType::str, "ccmHistoryEventTerminalUser"},
    ccmhistoryeventterminallocation{YType::str, "ccmHistoryEventTerminalLocation"},
    ccmhistoryeventcommandsourceaddress{YType::str, "ccmHistoryEventCommandSourceAddress"},
    ccmhistoryeventvirtualhostname{YType::str, "ccmHistoryEventVirtualHostName"},
    ccmhistoryeventserveraddress{YType::str, "ccmHistoryEventServerAddress"},
    ccmhistoryeventfile{YType::str, "ccmHistoryEventFile"},
    ccmhistoryeventrcpuser{YType::str, "ccmHistoryEventRcpUser"},
    ccmhistoryclicmdentriesbumped{YType::uint32, "ccmHistoryCLICmdEntriesBumped"},
    ccmhistoryeventcommandsourceaddrtype{YType::enumeration, "ccmHistoryEventCommandSourceAddrType"},
    ccmhistoryeventcommandsourceaddrrev1{YType::str, "ccmHistoryEventCommandSourceAddrRev1"},
    ccmhistoryeventserveraddrtype{YType::enumeration, "ccmHistoryEventServerAddrType"},
    ccmhistoryeventserveraddrrev1{YType::str, "ccmHistoryEventServerAddrRev1"}
{

    yang_name = "ccmHistoryEventEntry"; yang_parent_name = "ccmHistoryEventTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::~CcmHistoryEventEntry()
{
}

bool CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccmhistoryeventindex.is_set
	|| ccmhistoryeventtime.is_set
	|| ccmhistoryeventcommandsource.is_set
	|| ccmhistoryeventconfigsource.is_set
	|| ccmhistoryeventconfigdestination.is_set
	|| ccmhistoryeventterminaltype.is_set
	|| ccmhistoryeventterminalnumber.is_set
	|| ccmhistoryeventterminaluser.is_set
	|| ccmhistoryeventterminallocation.is_set
	|| ccmhistoryeventcommandsourceaddress.is_set
	|| ccmhistoryeventvirtualhostname.is_set
	|| ccmhistoryeventserveraddress.is_set
	|| ccmhistoryeventfile.is_set
	|| ccmhistoryeventrcpuser.is_set
	|| ccmhistoryclicmdentriesbumped.is_set
	|| ccmhistoryeventcommandsourceaddrtype.is_set
	|| ccmhistoryeventcommandsourceaddrrev1.is_set
	|| ccmhistoryeventserveraddrtype.is_set
	|| ccmhistoryeventserveraddrrev1.is_set;
}

bool CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccmhistoryeventindex.yfilter)
	|| ydk::is_set(ccmhistoryeventtime.yfilter)
	|| ydk::is_set(ccmhistoryeventcommandsource.yfilter)
	|| ydk::is_set(ccmhistoryeventconfigsource.yfilter)
	|| ydk::is_set(ccmhistoryeventconfigdestination.yfilter)
	|| ydk::is_set(ccmhistoryeventterminaltype.yfilter)
	|| ydk::is_set(ccmhistoryeventterminalnumber.yfilter)
	|| ydk::is_set(ccmhistoryeventterminaluser.yfilter)
	|| ydk::is_set(ccmhistoryeventterminallocation.yfilter)
	|| ydk::is_set(ccmhistoryeventcommandsourceaddress.yfilter)
	|| ydk::is_set(ccmhistoryeventvirtualhostname.yfilter)
	|| ydk::is_set(ccmhistoryeventserveraddress.yfilter)
	|| ydk::is_set(ccmhistoryeventfile.yfilter)
	|| ydk::is_set(ccmhistoryeventrcpuser.yfilter)
	|| ydk::is_set(ccmhistoryclicmdentriesbumped.yfilter)
	|| ydk::is_set(ccmhistoryeventcommandsourceaddrtype.yfilter)
	|| ydk::is_set(ccmhistoryeventcommandsourceaddrrev1.yfilter)
	|| ydk::is_set(ccmhistoryeventserveraddrtype.yfilter)
	|| ydk::is_set(ccmhistoryeventserveraddrrev1.yfilter);
}

std::string CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/ccmHistoryEventTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmHistoryEventEntry";
    ADD_KEY_TOKEN(ccmhistoryeventindex, "ccmHistoryEventIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccmhistoryeventindex.is_set || is_set(ccmhistoryeventindex.yfilter)) leaf_name_data.push_back(ccmhistoryeventindex.get_name_leafdata());
    if (ccmhistoryeventtime.is_set || is_set(ccmhistoryeventtime.yfilter)) leaf_name_data.push_back(ccmhistoryeventtime.get_name_leafdata());
    if (ccmhistoryeventcommandsource.is_set || is_set(ccmhistoryeventcommandsource.yfilter)) leaf_name_data.push_back(ccmhistoryeventcommandsource.get_name_leafdata());
    if (ccmhistoryeventconfigsource.is_set || is_set(ccmhistoryeventconfigsource.yfilter)) leaf_name_data.push_back(ccmhistoryeventconfigsource.get_name_leafdata());
    if (ccmhistoryeventconfigdestination.is_set || is_set(ccmhistoryeventconfigdestination.yfilter)) leaf_name_data.push_back(ccmhistoryeventconfigdestination.get_name_leafdata());
    if (ccmhistoryeventterminaltype.is_set || is_set(ccmhistoryeventterminaltype.yfilter)) leaf_name_data.push_back(ccmhistoryeventterminaltype.get_name_leafdata());
    if (ccmhistoryeventterminalnumber.is_set || is_set(ccmhistoryeventterminalnumber.yfilter)) leaf_name_data.push_back(ccmhistoryeventterminalnumber.get_name_leafdata());
    if (ccmhistoryeventterminaluser.is_set || is_set(ccmhistoryeventterminaluser.yfilter)) leaf_name_data.push_back(ccmhistoryeventterminaluser.get_name_leafdata());
    if (ccmhistoryeventterminallocation.is_set || is_set(ccmhistoryeventterminallocation.yfilter)) leaf_name_data.push_back(ccmhistoryeventterminallocation.get_name_leafdata());
    if (ccmhistoryeventcommandsourceaddress.is_set || is_set(ccmhistoryeventcommandsourceaddress.yfilter)) leaf_name_data.push_back(ccmhistoryeventcommandsourceaddress.get_name_leafdata());
    if (ccmhistoryeventvirtualhostname.is_set || is_set(ccmhistoryeventvirtualhostname.yfilter)) leaf_name_data.push_back(ccmhistoryeventvirtualhostname.get_name_leafdata());
    if (ccmhistoryeventserveraddress.is_set || is_set(ccmhistoryeventserveraddress.yfilter)) leaf_name_data.push_back(ccmhistoryeventserveraddress.get_name_leafdata());
    if (ccmhistoryeventfile.is_set || is_set(ccmhistoryeventfile.yfilter)) leaf_name_data.push_back(ccmhistoryeventfile.get_name_leafdata());
    if (ccmhistoryeventrcpuser.is_set || is_set(ccmhistoryeventrcpuser.yfilter)) leaf_name_data.push_back(ccmhistoryeventrcpuser.get_name_leafdata());
    if (ccmhistoryclicmdentriesbumped.is_set || is_set(ccmhistoryclicmdentriesbumped.yfilter)) leaf_name_data.push_back(ccmhistoryclicmdentriesbumped.get_name_leafdata());
    if (ccmhistoryeventcommandsourceaddrtype.is_set || is_set(ccmhistoryeventcommandsourceaddrtype.yfilter)) leaf_name_data.push_back(ccmhistoryeventcommandsourceaddrtype.get_name_leafdata());
    if (ccmhistoryeventcommandsourceaddrrev1.is_set || is_set(ccmhistoryeventcommandsourceaddrrev1.yfilter)) leaf_name_data.push_back(ccmhistoryeventcommandsourceaddrrev1.get_name_leafdata());
    if (ccmhistoryeventserveraddrtype.is_set || is_set(ccmhistoryeventserveraddrtype.yfilter)) leaf_name_data.push_back(ccmhistoryeventserveraddrtype.get_name_leafdata());
    if (ccmhistoryeventserveraddrrev1.is_set || is_set(ccmhistoryeventserveraddrrev1.yfilter)) leaf_name_data.push_back(ccmhistoryeventserveraddrrev1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccmHistoryEventIndex")
    {
        ccmhistoryeventindex = value;
        ccmhistoryeventindex.value_namespace = name_space;
        ccmhistoryeventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventTime")
    {
        ccmhistoryeventtime = value;
        ccmhistoryeventtime.value_namespace = name_space;
        ccmhistoryeventtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventCommandSource")
    {
        ccmhistoryeventcommandsource = value;
        ccmhistoryeventcommandsource.value_namespace = name_space;
        ccmhistoryeventcommandsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventConfigSource")
    {
        ccmhistoryeventconfigsource = value;
        ccmhistoryeventconfigsource.value_namespace = name_space;
        ccmhistoryeventconfigsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventConfigDestination")
    {
        ccmhistoryeventconfigdestination = value;
        ccmhistoryeventconfigdestination.value_namespace = name_space;
        ccmhistoryeventconfigdestination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventTerminalType")
    {
        ccmhistoryeventterminaltype = value;
        ccmhistoryeventterminaltype.value_namespace = name_space;
        ccmhistoryeventterminaltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventTerminalNumber")
    {
        ccmhistoryeventterminalnumber = value;
        ccmhistoryeventterminalnumber.value_namespace = name_space;
        ccmhistoryeventterminalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventTerminalUser")
    {
        ccmhistoryeventterminaluser = value;
        ccmhistoryeventterminaluser.value_namespace = name_space;
        ccmhistoryeventterminaluser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventTerminalLocation")
    {
        ccmhistoryeventterminallocation = value;
        ccmhistoryeventterminallocation.value_namespace = name_space;
        ccmhistoryeventterminallocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddress")
    {
        ccmhistoryeventcommandsourceaddress = value;
        ccmhistoryeventcommandsourceaddress.value_namespace = name_space;
        ccmhistoryeventcommandsourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventVirtualHostName")
    {
        ccmhistoryeventvirtualhostname = value;
        ccmhistoryeventvirtualhostname.value_namespace = name_space;
        ccmhistoryeventvirtualhostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventServerAddress")
    {
        ccmhistoryeventserveraddress = value;
        ccmhistoryeventserveraddress.value_namespace = name_space;
        ccmhistoryeventserveraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventFile")
    {
        ccmhistoryeventfile = value;
        ccmhistoryeventfile.value_namespace = name_space;
        ccmhistoryeventfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventRcpUser")
    {
        ccmhistoryeventrcpuser = value;
        ccmhistoryeventrcpuser.value_namespace = name_space;
        ccmhistoryeventrcpuser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryCLICmdEntriesBumped")
    {
        ccmhistoryclicmdentriesbumped = value;
        ccmhistoryclicmdentriesbumped.value_namespace = name_space;
        ccmhistoryclicmdentriesbumped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddrType")
    {
        ccmhistoryeventcommandsourceaddrtype = value;
        ccmhistoryeventcommandsourceaddrtype.value_namespace = name_space;
        ccmhistoryeventcommandsourceaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddrRev1")
    {
        ccmhistoryeventcommandsourceaddrrev1 = value;
        ccmhistoryeventcommandsourceaddrrev1.value_namespace = name_space;
        ccmhistoryeventcommandsourceaddrrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventServerAddrType")
    {
        ccmhistoryeventserveraddrtype = value;
        ccmhistoryeventserveraddrtype.value_namespace = name_space;
        ccmhistoryeventserveraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventServerAddrRev1")
    {
        ccmhistoryeventserveraddrrev1 = value;
        ccmhistoryeventserveraddrrev1.value_namespace = name_space;
        ccmhistoryeventserveraddrrev1.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccmHistoryEventIndex")
    {
        ccmhistoryeventindex.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventTime")
    {
        ccmhistoryeventtime.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventCommandSource")
    {
        ccmhistoryeventcommandsource.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventConfigSource")
    {
        ccmhistoryeventconfigsource.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventConfigDestination")
    {
        ccmhistoryeventconfigdestination.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventTerminalType")
    {
        ccmhistoryeventterminaltype.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventTerminalNumber")
    {
        ccmhistoryeventterminalnumber.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventTerminalUser")
    {
        ccmhistoryeventterminaluser.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventTerminalLocation")
    {
        ccmhistoryeventterminallocation.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddress")
    {
        ccmhistoryeventcommandsourceaddress.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventVirtualHostName")
    {
        ccmhistoryeventvirtualhostname.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventServerAddress")
    {
        ccmhistoryeventserveraddress.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventFile")
    {
        ccmhistoryeventfile.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventRcpUser")
    {
        ccmhistoryeventrcpuser.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryCLICmdEntriesBumped")
    {
        ccmhistoryclicmdentriesbumped.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddrType")
    {
        ccmhistoryeventcommandsourceaddrtype.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddrRev1")
    {
        ccmhistoryeventcommandsourceaddrrev1.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventServerAddrType")
    {
        ccmhistoryeventserveraddrtype.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventServerAddrRev1")
    {
        ccmhistoryeventserveraddrrev1.yfilter = yfilter;
    }
}

bool CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmHistoryEventIndex" || name == "ccmHistoryEventTime" || name == "ccmHistoryEventCommandSource" || name == "ccmHistoryEventConfigSource" || name == "ccmHistoryEventConfigDestination" || name == "ccmHistoryEventTerminalType" || name == "ccmHistoryEventTerminalNumber" || name == "ccmHistoryEventTerminalUser" || name == "ccmHistoryEventTerminalLocation" || name == "ccmHistoryEventCommandSourceAddress" || name == "ccmHistoryEventVirtualHostName" || name == "ccmHistoryEventServerAddress" || name == "ccmHistoryEventFile" || name == "ccmHistoryEventRcpUser" || name == "ccmHistoryCLICmdEntriesBumped" || name == "ccmHistoryEventCommandSourceAddrType" || name == "ccmHistoryEventCommandSourceAddrRev1" || name == "ccmHistoryEventServerAddrType" || name == "ccmHistoryEventServerAddrRev1")
        return true;
    return false;
}

CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandTable()
    :
    ccmclihistorycommandentry(this, {"ccmhistoryeventindex", "ccmclihistorycommandindex"})
{

    yang_name = "ccmCLIHistoryCommandTable"; yang_parent_name = "CISCO-CONFIG-MAN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::~CcmCLIHistoryCommandTable()
{
}

bool CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccmclihistorycommandentry.len(); index++)
    {
        if(ccmclihistorycommandentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::has_operation() const
{
    for (std::size_t index=0; index<ccmclihistorycommandentry.len(); index++)
    {
        if(ccmclihistorycommandentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCLIHistoryCommandTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccmCLIHistoryCommandEntry")
    {
        auto c = std::make_shared<CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry>();
        c->parent = this;
        ccmclihistorycommandentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ccmclihistorycommandentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmCLIHistoryCommandEntry")
        return true;
    return false;
}

CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry::CcmCLIHistoryCommandEntry()
    :
    ccmhistoryeventindex{YType::str, "ccmHistoryEventIndex"},
    ccmclihistorycommandindex{YType::uint32, "ccmCLIHistoryCommandIndex"},
    ccmclihistorycommand{YType::str, "ccmCLIHistoryCommand"}
{

    yang_name = "ccmCLIHistoryCommandEntry"; yang_parent_name = "ccmCLIHistoryCommandTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry::~CcmCLIHistoryCommandEntry()
{
}

bool CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccmhistoryeventindex.is_set
	|| ccmclihistorycommandindex.is_set
	|| ccmclihistorycommand.is_set;
}

bool CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccmhistoryeventindex.yfilter)
	|| ydk::is_set(ccmclihistorycommandindex.yfilter)
	|| ydk::is_set(ccmclihistorycommand.yfilter);
}

std::string CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/ccmCLIHistoryCommandTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCLIHistoryCommandEntry";
    ADD_KEY_TOKEN(ccmhistoryeventindex, "ccmHistoryEventIndex");
    ADD_KEY_TOKEN(ccmclihistorycommandindex, "ccmCLIHistoryCommandIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccmhistoryeventindex.is_set || is_set(ccmhistoryeventindex.yfilter)) leaf_name_data.push_back(ccmhistoryeventindex.get_name_leafdata());
    if (ccmclihistorycommandindex.is_set || is_set(ccmclihistorycommandindex.yfilter)) leaf_name_data.push_back(ccmclihistorycommandindex.get_name_leafdata());
    if (ccmclihistorycommand.is_set || is_set(ccmclihistorycommand.yfilter)) leaf_name_data.push_back(ccmclihistorycommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccmHistoryEventIndex")
    {
        ccmhistoryeventindex = value;
        ccmhistoryeventindex.value_namespace = name_space;
        ccmhistoryeventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmCLIHistoryCommandIndex")
    {
        ccmclihistorycommandindex = value;
        ccmclihistorycommandindex.value_namespace = name_space;
        ccmclihistorycommandindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmCLIHistoryCommand")
    {
        ccmclihistorycommand = value;
        ccmclihistorycommand.value_namespace = name_space;
        ccmclihistorycommand.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccmHistoryEventIndex")
    {
        ccmhistoryeventindex.yfilter = yfilter;
    }
    if(value_path == "ccmCLIHistoryCommandIndex")
    {
        ccmclihistorycommandindex.yfilter = yfilter;
    }
    if(value_path == "ccmCLIHistoryCommand")
    {
        ccmclihistorycommand.yfilter = yfilter;
    }
}

bool CISCOCONFIGMANMIB::CcmCLIHistoryCommandTable::CcmCLIHistoryCommandEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmHistoryEventIndex" || name == "ccmCLIHistoryCommandIndex" || name == "ccmCLIHistoryCommand")
        return true;
    return false;
}

const Enum::YLeaf HistoryEventMedium::erase {1, "erase"};
const Enum::YLeaf HistoryEventMedium::commandSource {2, "commandSource"};
const Enum::YLeaf HistoryEventMedium::running {3, "running"};
const Enum::YLeaf HistoryEventMedium::startup {4, "startup"};
const Enum::YLeaf HistoryEventMedium::local {5, "local"};
const Enum::YLeaf HistoryEventMedium::networkTftp {6, "networkTftp"};
const Enum::YLeaf HistoryEventMedium::networkRcp {7, "networkRcp"};
const Enum::YLeaf HistoryEventMedium::networkFtp {8, "networkFtp"};
const Enum::YLeaf HistoryEventMedium::networkScp {9, "networkScp"};

const Enum::YLeaf CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::CcmHistoryEventCommandSource::commandLine {1, "commandLine"};
const Enum::YLeaf CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::CcmHistoryEventCommandSource::snmp {2, "snmp"};

const Enum::YLeaf CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::CcmHistoryEventTerminalType::notApplicable {1, "notApplicable"};
const Enum::YLeaf CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::CcmHistoryEventTerminalType::unknown {2, "unknown"};
const Enum::YLeaf CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::CcmHistoryEventTerminalType::console {3, "console"};
const Enum::YLeaf CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::CcmHistoryEventTerminalType::terminal {4, "terminal"};
const Enum::YLeaf CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::CcmHistoryEventTerminalType::virtual_ {5, "virtual"};
const Enum::YLeaf CISCOCONFIGMANMIB::CcmHistoryEventTable::CcmHistoryEventEntry::CcmHistoryEventTerminalType::auxiliary {6, "auxiliary"};


}
}

