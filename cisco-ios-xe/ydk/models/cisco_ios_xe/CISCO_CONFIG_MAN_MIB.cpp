
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CONFIG_MAN_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CONFIG_MAN_MIB {

CiscoConfigManMib::CiscoConfigManMib()
    :
    ccmclicfg(std::make_shared<CiscoConfigManMib::Ccmclicfg>())
	,ccmclihistory(std::make_shared<CiscoConfigManMib::Ccmclihistory>())
	,ccmclihistorycommandtable(std::make_shared<CiscoConfigManMib::Ccmclihistorycommandtable>())
	,ccmctidobjects(std::make_shared<CiscoConfigManMib::Ccmctidobjects>())
	,ccmhistory(std::make_shared<CiscoConfigManMib::Ccmhistory>())
	,ccmhistoryeventtable(std::make_shared<CiscoConfigManMib::Ccmhistoryeventtable>())
{
    ccmclicfg->parent = this;

    ccmclihistory->parent = this;

    ccmclihistorycommandtable->parent = this;

    ccmctidobjects->parent = this;

    ccmhistory->parent = this;

    ccmhistoryeventtable->parent = this;

    yang_name = "CISCO-CONFIG-MAN-MIB"; yang_parent_name = "CISCO-CONFIG-MAN-MIB";
}

CiscoConfigManMib::~CiscoConfigManMib()
{
}

bool CiscoConfigManMib::has_data() const
{
    return (ccmclicfg !=  nullptr && ccmclicfg->has_data())
	|| (ccmclihistory !=  nullptr && ccmclihistory->has_data())
	|| (ccmclihistorycommandtable !=  nullptr && ccmclihistorycommandtable->has_data())
	|| (ccmctidobjects !=  nullptr && ccmctidobjects->has_data())
	|| (ccmhistory !=  nullptr && ccmhistory->has_data())
	|| (ccmhistoryeventtable !=  nullptr && ccmhistoryeventtable->has_data());
}

bool CiscoConfigManMib::has_operation() const
{
    return is_set(yfilter)
	|| (ccmclicfg !=  nullptr && ccmclicfg->has_operation())
	|| (ccmclihistory !=  nullptr && ccmclihistory->has_operation())
	|| (ccmclihistorycommandtable !=  nullptr && ccmclihistorycommandtable->has_operation())
	|| (ccmctidobjects !=  nullptr && ccmctidobjects->has_operation())
	|| (ccmhistory !=  nullptr && ccmhistory->has_operation())
	|| (ccmhistoryeventtable !=  nullptr && ccmhistoryeventtable->has_operation());
}

std::string CiscoConfigManMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB";

    return path_buffer.str();

}

const EntityPath CiscoConfigManMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoConfigManMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccmCLICfg")
    {
        if(ccmclicfg == nullptr)
        {
            ccmclicfg = std::make_shared<CiscoConfigManMib::Ccmclicfg>();
        }
        return ccmclicfg;
    }

    if(child_yang_name == "ccmCLIHistory")
    {
        if(ccmclihistory == nullptr)
        {
            ccmclihistory = std::make_shared<CiscoConfigManMib::Ccmclihistory>();
        }
        return ccmclihistory;
    }

    if(child_yang_name == "ccmCLIHistoryCommandTable")
    {
        if(ccmclihistorycommandtable == nullptr)
        {
            ccmclihistorycommandtable = std::make_shared<CiscoConfigManMib::Ccmclihistorycommandtable>();
        }
        return ccmclihistorycommandtable;
    }

    if(child_yang_name == "ccmCTIDObjects")
    {
        if(ccmctidobjects == nullptr)
        {
            ccmctidobjects = std::make_shared<CiscoConfigManMib::Ccmctidobjects>();
        }
        return ccmctidobjects;
    }

    if(child_yang_name == "ccmHistory")
    {
        if(ccmhistory == nullptr)
        {
            ccmhistory = std::make_shared<CiscoConfigManMib::Ccmhistory>();
        }
        return ccmhistory;
    }

    if(child_yang_name == "ccmHistoryEventTable")
    {
        if(ccmhistoryeventtable == nullptr)
        {
            ccmhistoryeventtable = std::make_shared<CiscoConfigManMib::Ccmhistoryeventtable>();
        }
        return ccmhistoryeventtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigManMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ccmclicfg != nullptr)
    {
        children["ccmCLICfg"] = ccmclicfg;
    }

    if(ccmclihistory != nullptr)
    {
        children["ccmCLIHistory"] = ccmclihistory;
    }

    if(ccmclihistorycommandtable != nullptr)
    {
        children["ccmCLIHistoryCommandTable"] = ccmclihistorycommandtable;
    }

    if(ccmctidobjects != nullptr)
    {
        children["ccmCTIDObjects"] = ccmctidobjects;
    }

    if(ccmhistory != nullptr)
    {
        children["ccmHistory"] = ccmhistory;
    }

    if(ccmhistoryeventtable != nullptr)
    {
        children["ccmHistoryEventTable"] = ccmhistoryeventtable;
    }

    return children;
}

void CiscoConfigManMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoConfigManMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoConfigManMib::clone_ptr() const
{
    return std::make_shared<CiscoConfigManMib>();
}

std::string CiscoConfigManMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoConfigManMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoConfigManMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoConfigManMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoConfigManMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmCLICfg" || name == "ccmCLIHistory" || name == "ccmCLIHistoryCommandTable" || name == "ccmCTIDObjects" || name == "ccmHistory" || name == "ccmHistoryEventTable")
        return true;
    return false;
}

CiscoConfigManMib::Ccmhistory::Ccmhistory()
    :
    ccmhistoryevententriesbumped{YType::uint32, "ccmHistoryEventEntriesBumped"},
    ccmhistorymaxevententries{YType::int32, "ccmHistoryMaxEventEntries"},
    ccmhistoryrunninglastchanged{YType::uint32, "ccmHistoryRunningLastChanged"},
    ccmhistoryrunninglastsaved{YType::uint32, "ccmHistoryRunningLastSaved"},
    ccmhistorystartuplastchanged{YType::uint32, "ccmHistoryStartupLastChanged"}
{
    yang_name = "ccmHistory"; yang_parent_name = "CISCO-CONFIG-MAN-MIB";
}

CiscoConfigManMib::Ccmhistory::~Ccmhistory()
{
}

bool CiscoConfigManMib::Ccmhistory::has_data() const
{
    return ccmhistoryevententriesbumped.is_set
	|| ccmhistorymaxevententries.is_set
	|| ccmhistoryrunninglastchanged.is_set
	|| ccmhistoryrunninglastsaved.is_set
	|| ccmhistorystartuplastchanged.is_set;
}

bool CiscoConfigManMib::Ccmhistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccmhistoryevententriesbumped.yfilter)
	|| ydk::is_set(ccmhistorymaxevententries.yfilter)
	|| ydk::is_set(ccmhistoryrunninglastchanged.yfilter)
	|| ydk::is_set(ccmhistoryrunninglastsaved.yfilter)
	|| ydk::is_set(ccmhistorystartuplastchanged.yfilter);
}

std::string CiscoConfigManMib::Ccmhistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmHistory";

    return path_buffer.str();

}

const EntityPath CiscoConfigManMib::Ccmhistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccmhistoryevententriesbumped.is_set || is_set(ccmhistoryevententriesbumped.yfilter)) leaf_name_data.push_back(ccmhistoryevententriesbumped.get_name_leafdata());
    if (ccmhistorymaxevententries.is_set || is_set(ccmhistorymaxevententries.yfilter)) leaf_name_data.push_back(ccmhistorymaxevententries.get_name_leafdata());
    if (ccmhistoryrunninglastchanged.is_set || is_set(ccmhistoryrunninglastchanged.yfilter)) leaf_name_data.push_back(ccmhistoryrunninglastchanged.get_name_leafdata());
    if (ccmhistoryrunninglastsaved.is_set || is_set(ccmhistoryrunninglastsaved.yfilter)) leaf_name_data.push_back(ccmhistoryrunninglastsaved.get_name_leafdata());
    if (ccmhistorystartuplastchanged.is_set || is_set(ccmhistorystartuplastchanged.yfilter)) leaf_name_data.push_back(ccmhistorystartuplastchanged.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoConfigManMib::Ccmhistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigManMib::Ccmhistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoConfigManMib::Ccmhistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccmHistoryEventEntriesBumped")
    {
        ccmhistoryevententriesbumped = value;
        ccmhistoryevententriesbumped.value_namespace = name_space;
        ccmhistoryevententriesbumped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryMaxEventEntries")
    {
        ccmhistorymaxevententries = value;
        ccmhistorymaxevententries.value_namespace = name_space;
        ccmhistorymaxevententries.value_namespace_prefix = name_space_prefix;
    }
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
}

void CiscoConfigManMib::Ccmhistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccmHistoryEventEntriesBumped")
    {
        ccmhistoryevententriesbumped.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryMaxEventEntries")
    {
        ccmhistorymaxevententries.yfilter = yfilter;
    }
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
}

bool CiscoConfigManMib::Ccmhistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmHistoryEventEntriesBumped" || name == "ccmHistoryMaxEventEntries" || name == "ccmHistoryRunningLastChanged" || name == "ccmHistoryRunningLastSaved" || name == "ccmHistoryStartupLastChanged")
        return true;
    return false;
}

CiscoConfigManMib::Ccmclihistory::Ccmclihistory()
    :
    ccmclihistorycmdentries{YType::uint32, "ccmCLIHistoryCmdEntries"},
    ccmclihistorycmdentriesallowed{YType::uint32, "ccmCLIHistoryCmdEntriesAllowed"},
    ccmclihistorymaxcmdentries{YType::uint32, "ccmCLIHistoryMaxCmdEntries"}
{
    yang_name = "ccmCLIHistory"; yang_parent_name = "CISCO-CONFIG-MAN-MIB";
}

CiscoConfigManMib::Ccmclihistory::~Ccmclihistory()
{
}

bool CiscoConfigManMib::Ccmclihistory::has_data() const
{
    return ccmclihistorycmdentries.is_set
	|| ccmclihistorycmdentriesallowed.is_set
	|| ccmclihistorymaxcmdentries.is_set;
}

bool CiscoConfigManMib::Ccmclihistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccmclihistorycmdentries.yfilter)
	|| ydk::is_set(ccmclihistorycmdentriesallowed.yfilter)
	|| ydk::is_set(ccmclihistorymaxcmdentries.yfilter);
}

std::string CiscoConfigManMib::Ccmclihistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCLIHistory";

    return path_buffer.str();

}

const EntityPath CiscoConfigManMib::Ccmclihistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccmclihistorycmdentries.is_set || is_set(ccmclihistorycmdentries.yfilter)) leaf_name_data.push_back(ccmclihistorycmdentries.get_name_leafdata());
    if (ccmclihistorycmdentriesallowed.is_set || is_set(ccmclihistorycmdentriesallowed.yfilter)) leaf_name_data.push_back(ccmclihistorycmdentriesallowed.get_name_leafdata());
    if (ccmclihistorymaxcmdentries.is_set || is_set(ccmclihistorymaxcmdentries.yfilter)) leaf_name_data.push_back(ccmclihistorymaxcmdentries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoConfigManMib::Ccmclihistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigManMib::Ccmclihistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoConfigManMib::Ccmclihistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "ccmCLIHistoryMaxCmdEntries")
    {
        ccmclihistorymaxcmdentries = value;
        ccmclihistorymaxcmdentries.value_namespace = name_space;
        ccmclihistorymaxcmdentries.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoConfigManMib::Ccmclihistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccmCLIHistoryCmdEntries")
    {
        ccmclihistorycmdentries.yfilter = yfilter;
    }
    if(value_path == "ccmCLIHistoryCmdEntriesAllowed")
    {
        ccmclihistorycmdentriesallowed.yfilter = yfilter;
    }
    if(value_path == "ccmCLIHistoryMaxCmdEntries")
    {
        ccmclihistorymaxcmdentries.yfilter = yfilter;
    }
}

bool CiscoConfigManMib::Ccmclihistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmCLIHistoryCmdEntries" || name == "ccmCLIHistoryCmdEntriesAllowed" || name == "ccmCLIHistoryMaxCmdEntries")
        return true;
    return false;
}

CiscoConfigManMib::Ccmclicfg::Ccmclicfg()
    :
    ccmclicfgrunconfnotifenable{YType::boolean, "ccmCLICfgRunConfNotifEnable"}
{
    yang_name = "ccmCLICfg"; yang_parent_name = "CISCO-CONFIG-MAN-MIB";
}

CiscoConfigManMib::Ccmclicfg::~Ccmclicfg()
{
}

bool CiscoConfigManMib::Ccmclicfg::has_data() const
{
    return ccmclicfgrunconfnotifenable.is_set;
}

bool CiscoConfigManMib::Ccmclicfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccmclicfgrunconfnotifenable.yfilter);
}

std::string CiscoConfigManMib::Ccmclicfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCLICfg";

    return path_buffer.str();

}

const EntityPath CiscoConfigManMib::Ccmclicfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccmclicfgrunconfnotifenable.is_set || is_set(ccmclicfgrunconfnotifenable.yfilter)) leaf_name_data.push_back(ccmclicfgrunconfnotifenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoConfigManMib::Ccmclicfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigManMib::Ccmclicfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoConfigManMib::Ccmclicfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccmCLICfgRunConfNotifEnable")
    {
        ccmclicfgrunconfnotifenable = value;
        ccmclicfgrunconfnotifenable.value_namespace = name_space;
        ccmclicfgrunconfnotifenable.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoConfigManMib::Ccmclicfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccmCLICfgRunConfNotifEnable")
    {
        ccmclicfgrunconfnotifenable.yfilter = yfilter;
    }
}

bool CiscoConfigManMib::Ccmclicfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmCLICfgRunConfNotifEnable")
        return true;
    return false;
}

CiscoConfigManMib::Ccmctidobjects::Ccmctidobjects()
    :
    ccmctid{YType::uint64, "ccmCTID"},
    ccmctidlastchangetime{YType::str, "ccmCTIDLastChangeTime"},
    ccmctidrolledovernotifenable{YType::boolean, "ccmCTIDRolledOverNotifEnable"},
    ccmctidwhochanged{YType::str, "ccmCTIDWhoChanged"}
{
    yang_name = "ccmCTIDObjects"; yang_parent_name = "CISCO-CONFIG-MAN-MIB";
}

CiscoConfigManMib::Ccmctidobjects::~Ccmctidobjects()
{
}

bool CiscoConfigManMib::Ccmctidobjects::has_data() const
{
    return ccmctid.is_set
	|| ccmctidlastchangetime.is_set
	|| ccmctidrolledovernotifenable.is_set
	|| ccmctidwhochanged.is_set;
}

bool CiscoConfigManMib::Ccmctidobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccmctid.yfilter)
	|| ydk::is_set(ccmctidlastchangetime.yfilter)
	|| ydk::is_set(ccmctidrolledovernotifenable.yfilter)
	|| ydk::is_set(ccmctidwhochanged.yfilter);
}

std::string CiscoConfigManMib::Ccmctidobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCTIDObjects";

    return path_buffer.str();

}

const EntityPath CiscoConfigManMib::Ccmctidobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccmctid.is_set || is_set(ccmctid.yfilter)) leaf_name_data.push_back(ccmctid.get_name_leafdata());
    if (ccmctidlastchangetime.is_set || is_set(ccmctidlastchangetime.yfilter)) leaf_name_data.push_back(ccmctidlastchangetime.get_name_leafdata());
    if (ccmctidrolledovernotifenable.is_set || is_set(ccmctidrolledovernotifenable.yfilter)) leaf_name_data.push_back(ccmctidrolledovernotifenable.get_name_leafdata());
    if (ccmctidwhochanged.is_set || is_set(ccmctidwhochanged.yfilter)) leaf_name_data.push_back(ccmctidwhochanged.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoConfigManMib::Ccmctidobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigManMib::Ccmctidobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoConfigManMib::Ccmctidobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ccmCTIDRolledOverNotifEnable")
    {
        ccmctidrolledovernotifenable = value;
        ccmctidrolledovernotifenable.value_namespace = name_space;
        ccmctidrolledovernotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmCTIDWhoChanged")
    {
        ccmctidwhochanged = value;
        ccmctidwhochanged.value_namespace = name_space;
        ccmctidwhochanged.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoConfigManMib::Ccmctidobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccmCTID")
    {
        ccmctid.yfilter = yfilter;
    }
    if(value_path == "ccmCTIDLastChangeTime")
    {
        ccmctidlastchangetime.yfilter = yfilter;
    }
    if(value_path == "ccmCTIDRolledOverNotifEnable")
    {
        ccmctidrolledovernotifenable.yfilter = yfilter;
    }
    if(value_path == "ccmCTIDWhoChanged")
    {
        ccmctidwhochanged.yfilter = yfilter;
    }
}

bool CiscoConfigManMib::Ccmctidobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmCTID" || name == "ccmCTIDLastChangeTime" || name == "ccmCTIDRolledOverNotifEnable" || name == "ccmCTIDWhoChanged")
        return true;
    return false;
}

CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryeventtable()
{
    yang_name = "ccmHistoryEventTable"; yang_parent_name = "CISCO-CONFIG-MAN-MIB";
}

CiscoConfigManMib::Ccmhistoryeventtable::~Ccmhistoryeventtable()
{
}

bool CiscoConfigManMib::Ccmhistoryeventtable::has_data() const
{
    for (std::size_t index=0; index<ccmhistoryevententry.size(); index++)
    {
        if(ccmhistoryevententry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoConfigManMib::Ccmhistoryeventtable::has_operation() const
{
    for (std::size_t index=0; index<ccmhistoryevententry.size(); index++)
    {
        if(ccmhistoryevententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoConfigManMib::Ccmhistoryeventtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmHistoryEventTable";

    return path_buffer.str();

}

const EntityPath CiscoConfigManMib::Ccmhistoryeventtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoConfigManMib::Ccmhistoryeventtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccmHistoryEventEntry")
    {
        for(auto const & c : ccmhistoryevententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry>();
        c->parent = this;
        ccmhistoryevententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigManMib::Ccmhistoryeventtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccmhistoryevententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoConfigManMib::Ccmhistoryeventtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoConfigManMib::Ccmhistoryeventtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoConfigManMib::Ccmhistoryeventtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmHistoryEventEntry")
        return true;
    return false;
}

CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::Ccmhistoryevententry()
    :
    ccmhistoryeventindex{YType::int32, "ccmHistoryEventIndex"},
    ccmhistoryclicmdentriesbumped{YType::uint32, "ccmHistoryCLICmdEntriesBumped"},
    ccmhistoryeventcommandsource{YType::enumeration, "ccmHistoryEventCommandSource"},
    ccmhistoryeventcommandsourceaddress{YType::str, "ccmHistoryEventCommandSourceAddress"},
    ccmhistoryeventcommandsourceaddrrev1{YType::str, "ccmHistoryEventCommandSourceAddrRev1"},
    ccmhistoryeventcommandsourceaddrtype{YType::enumeration, "ccmHistoryEventCommandSourceAddrType"},
    ccmhistoryeventconfigdestination{YType::enumeration, "ccmHistoryEventConfigDestination"},
    ccmhistoryeventconfigsource{YType::enumeration, "ccmHistoryEventConfigSource"},
    ccmhistoryeventfile{YType::str, "ccmHistoryEventFile"},
    ccmhistoryeventrcpuser{YType::str, "ccmHistoryEventRcpUser"},
    ccmhistoryeventserveraddress{YType::str, "ccmHistoryEventServerAddress"},
    ccmhistoryeventserveraddrrev1{YType::str, "ccmHistoryEventServerAddrRev1"},
    ccmhistoryeventserveraddrtype{YType::enumeration, "ccmHistoryEventServerAddrType"},
    ccmhistoryeventterminallocation{YType::str, "ccmHistoryEventTerminalLocation"},
    ccmhistoryeventterminalnumber{YType::int32, "ccmHistoryEventTerminalNumber"},
    ccmhistoryeventterminaltype{YType::enumeration, "ccmHistoryEventTerminalType"},
    ccmhistoryeventterminaluser{YType::str, "ccmHistoryEventTerminalUser"},
    ccmhistoryeventtime{YType::uint32, "ccmHistoryEventTime"},
    ccmhistoryeventvirtualhostname{YType::str, "ccmHistoryEventVirtualHostName"}
{
    yang_name = "ccmHistoryEventEntry"; yang_parent_name = "ccmHistoryEventTable";
}

CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::~Ccmhistoryevententry()
{
}

bool CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::has_data() const
{
    return ccmhistoryeventindex.is_set
	|| ccmhistoryclicmdentriesbumped.is_set
	|| ccmhistoryeventcommandsource.is_set
	|| ccmhistoryeventcommandsourceaddress.is_set
	|| ccmhistoryeventcommandsourceaddrrev1.is_set
	|| ccmhistoryeventcommandsourceaddrtype.is_set
	|| ccmhistoryeventconfigdestination.is_set
	|| ccmhistoryeventconfigsource.is_set
	|| ccmhistoryeventfile.is_set
	|| ccmhistoryeventrcpuser.is_set
	|| ccmhistoryeventserveraddress.is_set
	|| ccmhistoryeventserveraddrrev1.is_set
	|| ccmhistoryeventserveraddrtype.is_set
	|| ccmhistoryeventterminallocation.is_set
	|| ccmhistoryeventterminalnumber.is_set
	|| ccmhistoryeventterminaltype.is_set
	|| ccmhistoryeventterminaluser.is_set
	|| ccmhistoryeventtime.is_set
	|| ccmhistoryeventvirtualhostname.is_set;
}

bool CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccmhistoryeventindex.yfilter)
	|| ydk::is_set(ccmhistoryclicmdentriesbumped.yfilter)
	|| ydk::is_set(ccmhistoryeventcommandsource.yfilter)
	|| ydk::is_set(ccmhistoryeventcommandsourceaddress.yfilter)
	|| ydk::is_set(ccmhistoryeventcommandsourceaddrrev1.yfilter)
	|| ydk::is_set(ccmhistoryeventcommandsourceaddrtype.yfilter)
	|| ydk::is_set(ccmhistoryeventconfigdestination.yfilter)
	|| ydk::is_set(ccmhistoryeventconfigsource.yfilter)
	|| ydk::is_set(ccmhistoryeventfile.yfilter)
	|| ydk::is_set(ccmhistoryeventrcpuser.yfilter)
	|| ydk::is_set(ccmhistoryeventserveraddress.yfilter)
	|| ydk::is_set(ccmhistoryeventserveraddrrev1.yfilter)
	|| ydk::is_set(ccmhistoryeventserveraddrtype.yfilter)
	|| ydk::is_set(ccmhistoryeventterminallocation.yfilter)
	|| ydk::is_set(ccmhistoryeventterminalnumber.yfilter)
	|| ydk::is_set(ccmhistoryeventterminaltype.yfilter)
	|| ydk::is_set(ccmhistoryeventterminaluser.yfilter)
	|| ydk::is_set(ccmhistoryeventtime.yfilter)
	|| ydk::is_set(ccmhistoryeventvirtualhostname.yfilter);
}

std::string CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmHistoryEventEntry" <<"[ccmHistoryEventIndex='" <<ccmhistoryeventindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/ccmHistoryEventTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccmhistoryeventindex.is_set || is_set(ccmhistoryeventindex.yfilter)) leaf_name_data.push_back(ccmhistoryeventindex.get_name_leafdata());
    if (ccmhistoryclicmdentriesbumped.is_set || is_set(ccmhistoryclicmdentriesbumped.yfilter)) leaf_name_data.push_back(ccmhistoryclicmdentriesbumped.get_name_leafdata());
    if (ccmhistoryeventcommandsource.is_set || is_set(ccmhistoryeventcommandsource.yfilter)) leaf_name_data.push_back(ccmhistoryeventcommandsource.get_name_leafdata());
    if (ccmhistoryeventcommandsourceaddress.is_set || is_set(ccmhistoryeventcommandsourceaddress.yfilter)) leaf_name_data.push_back(ccmhistoryeventcommandsourceaddress.get_name_leafdata());
    if (ccmhistoryeventcommandsourceaddrrev1.is_set || is_set(ccmhistoryeventcommandsourceaddrrev1.yfilter)) leaf_name_data.push_back(ccmhistoryeventcommandsourceaddrrev1.get_name_leafdata());
    if (ccmhistoryeventcommandsourceaddrtype.is_set || is_set(ccmhistoryeventcommandsourceaddrtype.yfilter)) leaf_name_data.push_back(ccmhistoryeventcommandsourceaddrtype.get_name_leafdata());
    if (ccmhistoryeventconfigdestination.is_set || is_set(ccmhistoryeventconfigdestination.yfilter)) leaf_name_data.push_back(ccmhistoryeventconfigdestination.get_name_leafdata());
    if (ccmhistoryeventconfigsource.is_set || is_set(ccmhistoryeventconfigsource.yfilter)) leaf_name_data.push_back(ccmhistoryeventconfigsource.get_name_leafdata());
    if (ccmhistoryeventfile.is_set || is_set(ccmhistoryeventfile.yfilter)) leaf_name_data.push_back(ccmhistoryeventfile.get_name_leafdata());
    if (ccmhistoryeventrcpuser.is_set || is_set(ccmhistoryeventrcpuser.yfilter)) leaf_name_data.push_back(ccmhistoryeventrcpuser.get_name_leafdata());
    if (ccmhistoryeventserveraddress.is_set || is_set(ccmhistoryeventserveraddress.yfilter)) leaf_name_data.push_back(ccmhistoryeventserveraddress.get_name_leafdata());
    if (ccmhistoryeventserveraddrrev1.is_set || is_set(ccmhistoryeventserveraddrrev1.yfilter)) leaf_name_data.push_back(ccmhistoryeventserveraddrrev1.get_name_leafdata());
    if (ccmhistoryeventserveraddrtype.is_set || is_set(ccmhistoryeventserveraddrtype.yfilter)) leaf_name_data.push_back(ccmhistoryeventserveraddrtype.get_name_leafdata());
    if (ccmhistoryeventterminallocation.is_set || is_set(ccmhistoryeventterminallocation.yfilter)) leaf_name_data.push_back(ccmhistoryeventterminallocation.get_name_leafdata());
    if (ccmhistoryeventterminalnumber.is_set || is_set(ccmhistoryeventterminalnumber.yfilter)) leaf_name_data.push_back(ccmhistoryeventterminalnumber.get_name_leafdata());
    if (ccmhistoryeventterminaltype.is_set || is_set(ccmhistoryeventterminaltype.yfilter)) leaf_name_data.push_back(ccmhistoryeventterminaltype.get_name_leafdata());
    if (ccmhistoryeventterminaluser.is_set || is_set(ccmhistoryeventterminaluser.yfilter)) leaf_name_data.push_back(ccmhistoryeventterminaluser.get_name_leafdata());
    if (ccmhistoryeventtime.is_set || is_set(ccmhistoryeventtime.yfilter)) leaf_name_data.push_back(ccmhistoryeventtime.get_name_leafdata());
    if (ccmhistoryeventvirtualhostname.is_set || is_set(ccmhistoryeventvirtualhostname.yfilter)) leaf_name_data.push_back(ccmhistoryeventvirtualhostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccmHistoryEventIndex")
    {
        ccmhistoryeventindex = value;
        ccmhistoryeventindex.value_namespace = name_space;
        ccmhistoryeventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryCLICmdEntriesBumped")
    {
        ccmhistoryclicmdentriesbumped = value;
        ccmhistoryclicmdentriesbumped.value_namespace = name_space;
        ccmhistoryclicmdentriesbumped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventCommandSource")
    {
        ccmhistoryeventcommandsource = value;
        ccmhistoryeventcommandsource.value_namespace = name_space;
        ccmhistoryeventcommandsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddress")
    {
        ccmhistoryeventcommandsourceaddress = value;
        ccmhistoryeventcommandsourceaddress.value_namespace = name_space;
        ccmhistoryeventcommandsourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddrRev1")
    {
        ccmhistoryeventcommandsourceaddrrev1 = value;
        ccmhistoryeventcommandsourceaddrrev1.value_namespace = name_space;
        ccmhistoryeventcommandsourceaddrrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddrType")
    {
        ccmhistoryeventcommandsourceaddrtype = value;
        ccmhistoryeventcommandsourceaddrtype.value_namespace = name_space;
        ccmhistoryeventcommandsourceaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventConfigDestination")
    {
        ccmhistoryeventconfigdestination = value;
        ccmhistoryeventconfigdestination.value_namespace = name_space;
        ccmhistoryeventconfigdestination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventConfigSource")
    {
        ccmhistoryeventconfigsource = value;
        ccmhistoryeventconfigsource.value_namespace = name_space;
        ccmhistoryeventconfigsource.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ccmHistoryEventServerAddress")
    {
        ccmhistoryeventserveraddress = value;
        ccmhistoryeventserveraddress.value_namespace = name_space;
        ccmhistoryeventserveraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventServerAddrRev1")
    {
        ccmhistoryeventserveraddrrev1 = value;
        ccmhistoryeventserveraddrrev1.value_namespace = name_space;
        ccmhistoryeventserveraddrrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventServerAddrType")
    {
        ccmhistoryeventserveraddrtype = value;
        ccmhistoryeventserveraddrtype.value_namespace = name_space;
        ccmhistoryeventserveraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventTerminalLocation")
    {
        ccmhistoryeventterminallocation = value;
        ccmhistoryeventterminallocation.value_namespace = name_space;
        ccmhistoryeventterminallocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventTerminalNumber")
    {
        ccmhistoryeventterminalnumber = value;
        ccmhistoryeventterminalnumber.value_namespace = name_space;
        ccmhistoryeventterminalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventTerminalType")
    {
        ccmhistoryeventterminaltype = value;
        ccmhistoryeventterminaltype.value_namespace = name_space;
        ccmhistoryeventterminaltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventTerminalUser")
    {
        ccmhistoryeventterminaluser = value;
        ccmhistoryeventterminaluser.value_namespace = name_space;
        ccmhistoryeventterminaluser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventTime")
    {
        ccmhistoryeventtime = value;
        ccmhistoryeventtime.value_namespace = name_space;
        ccmhistoryeventtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccmHistoryEventVirtualHostName")
    {
        ccmhistoryeventvirtualhostname = value;
        ccmhistoryeventvirtualhostname.value_namespace = name_space;
        ccmhistoryeventvirtualhostname.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccmHistoryEventIndex")
    {
        ccmhistoryeventindex.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryCLICmdEntriesBumped")
    {
        ccmhistoryclicmdentriesbumped.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventCommandSource")
    {
        ccmhistoryeventcommandsource.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddress")
    {
        ccmhistoryeventcommandsourceaddress.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddrRev1")
    {
        ccmhistoryeventcommandsourceaddrrev1.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddrType")
    {
        ccmhistoryeventcommandsourceaddrtype.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventConfigDestination")
    {
        ccmhistoryeventconfigdestination.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventConfigSource")
    {
        ccmhistoryeventconfigsource.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventFile")
    {
        ccmhistoryeventfile.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventRcpUser")
    {
        ccmhistoryeventrcpuser.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventServerAddress")
    {
        ccmhistoryeventserveraddress.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventServerAddrRev1")
    {
        ccmhistoryeventserveraddrrev1.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventServerAddrType")
    {
        ccmhistoryeventserveraddrtype.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventTerminalLocation")
    {
        ccmhistoryeventterminallocation.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventTerminalNumber")
    {
        ccmhistoryeventterminalnumber.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventTerminalType")
    {
        ccmhistoryeventterminaltype.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventTerminalUser")
    {
        ccmhistoryeventterminaluser.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventTime")
    {
        ccmhistoryeventtime.yfilter = yfilter;
    }
    if(value_path == "ccmHistoryEventVirtualHostName")
    {
        ccmhistoryeventvirtualhostname.yfilter = yfilter;
    }
}

bool CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmHistoryEventIndex" || name == "ccmHistoryCLICmdEntriesBumped" || name == "ccmHistoryEventCommandSource" || name == "ccmHistoryEventCommandSourceAddress" || name == "ccmHistoryEventCommandSourceAddrRev1" || name == "ccmHistoryEventCommandSourceAddrType" || name == "ccmHistoryEventConfigDestination" || name == "ccmHistoryEventConfigSource" || name == "ccmHistoryEventFile" || name == "ccmHistoryEventRcpUser" || name == "ccmHistoryEventServerAddress" || name == "ccmHistoryEventServerAddrRev1" || name == "ccmHistoryEventServerAddrType" || name == "ccmHistoryEventTerminalLocation" || name == "ccmHistoryEventTerminalNumber" || name == "ccmHistoryEventTerminalType" || name == "ccmHistoryEventTerminalUser" || name == "ccmHistoryEventTime" || name == "ccmHistoryEventVirtualHostName")
        return true;
    return false;
}

CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandtable()
{
    yang_name = "ccmCLIHistoryCommandTable"; yang_parent_name = "CISCO-CONFIG-MAN-MIB";
}

CiscoConfigManMib::Ccmclihistorycommandtable::~Ccmclihistorycommandtable()
{
}

bool CiscoConfigManMib::Ccmclihistorycommandtable::has_data() const
{
    for (std::size_t index=0; index<ccmclihistorycommandentry.size(); index++)
    {
        if(ccmclihistorycommandentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoConfigManMib::Ccmclihistorycommandtable::has_operation() const
{
    for (std::size_t index=0; index<ccmclihistorycommandentry.size(); index++)
    {
        if(ccmclihistorycommandentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoConfigManMib::Ccmclihistorycommandtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCLIHistoryCommandTable";

    return path_buffer.str();

}

const EntityPath CiscoConfigManMib::Ccmclihistorycommandtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoConfigManMib::Ccmclihistorycommandtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccmCLIHistoryCommandEntry")
    {
        for(auto const & c : ccmclihistorycommandentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry>();
        c->parent = this;
        ccmclihistorycommandentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigManMib::Ccmclihistorycommandtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ccmclihistorycommandentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoConfigManMib::Ccmclihistorycommandtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoConfigManMib::Ccmclihistorycommandtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoConfigManMib::Ccmclihistorycommandtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmCLIHistoryCommandEntry")
        return true;
    return false;
}

CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry::Ccmclihistorycommandentry()
    :
    ccmhistoryeventindex{YType::str, "ccmHistoryEventIndex"},
    ccmclihistorycommandindex{YType::uint32, "ccmCLIHistoryCommandIndex"},
    ccmclihistorycommand{YType::str, "ccmCLIHistoryCommand"}
{
    yang_name = "ccmCLIHistoryCommandEntry"; yang_parent_name = "ccmCLIHistoryCommandTable";
}

CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry::~Ccmclihistorycommandentry()
{
}

bool CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry::has_data() const
{
    return ccmhistoryeventindex.is_set
	|| ccmclihistorycommandindex.is_set
	|| ccmclihistorycommand.is_set;
}

bool CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccmhistoryeventindex.yfilter)
	|| ydk::is_set(ccmclihistorycommandindex.yfilter)
	|| ydk::is_set(ccmclihistorycommand.yfilter);
}

std::string CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCLIHistoryCommandEntry" <<"[ccmHistoryEventIndex='" <<ccmhistoryeventindex <<"']" <<"[ccmCLIHistoryCommandIndex='" <<ccmclihistorycommandindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONFIG-MAN-MIB:CISCO-CONFIG-MAN-MIB/ccmCLIHistoryCommandTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccmhistoryeventindex.is_set || is_set(ccmhistoryeventindex.yfilter)) leaf_name_data.push_back(ccmhistoryeventindex.get_name_leafdata());
    if (ccmclihistorycommandindex.is_set || is_set(ccmclihistorycommandindex.yfilter)) leaf_name_data.push_back(ccmclihistorycommandindex.get_name_leafdata());
    if (ccmclihistorycommand.is_set || is_set(ccmclihistorycommand.yfilter)) leaf_name_data.push_back(ccmclihistorycommand.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmHistoryEventIndex" || name == "ccmCLIHistoryCommandIndex" || name == "ccmCLIHistoryCommand")
        return true;
    return false;
}

const Enum::YLeaf Historyeventmedium::erase {1, "erase"};
const Enum::YLeaf Historyeventmedium::commandSource {2, "commandSource"};
const Enum::YLeaf Historyeventmedium::running {3, "running"};
const Enum::YLeaf Historyeventmedium::startup {4, "startup"};
const Enum::YLeaf Historyeventmedium::local {5, "local"};
const Enum::YLeaf Historyeventmedium::networkTftp {6, "networkTftp"};
const Enum::YLeaf Historyeventmedium::networkRcp {7, "networkRcp"};
const Enum::YLeaf Historyeventmedium::networkFtp {8, "networkFtp"};
const Enum::YLeaf Historyeventmedium::networkScp {9, "networkScp"};

const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::Ccmhistoryeventcommandsource::commandLine {1, "commandLine"};
const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::Ccmhistoryeventcommandsource::snmp {2, "snmp"};

const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::Ccmhistoryeventterminaltype::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::Ccmhistoryeventterminaltype::unknown {2, "unknown"};
const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::Ccmhistoryeventterminaltype::console {3, "console"};
const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::Ccmhistoryeventterminaltype::terminal {4, "terminal"};
const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::Ccmhistoryeventterminaltype::virtual_ {5, "virtual"};
const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::Ccmhistoryeventterminaltype::auxiliary {6, "auxiliary"};


}
}

