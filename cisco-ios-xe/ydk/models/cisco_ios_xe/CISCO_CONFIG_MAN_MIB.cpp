
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CONFIG_MAN_MIB.hpp"

namespace ydk {
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
    return is_set(operation)
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

void CiscoConfigManMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(ccmhistoryevententriesbumped.operation)
	|| is_set(ccmhistorymaxevententries.operation)
	|| is_set(ccmhistoryrunninglastchanged.operation)
	|| is_set(ccmhistoryrunninglastsaved.operation)
	|| is_set(ccmhistorystartuplastchanged.operation);
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

    if (ccmhistoryevententriesbumped.is_set || is_set(ccmhistoryevententriesbumped.operation)) leaf_name_data.push_back(ccmhistoryevententriesbumped.get_name_leafdata());
    if (ccmhistorymaxevententries.is_set || is_set(ccmhistorymaxevententries.operation)) leaf_name_data.push_back(ccmhistorymaxevententries.get_name_leafdata());
    if (ccmhistoryrunninglastchanged.is_set || is_set(ccmhistoryrunninglastchanged.operation)) leaf_name_data.push_back(ccmhistoryrunninglastchanged.get_name_leafdata());
    if (ccmhistoryrunninglastsaved.is_set || is_set(ccmhistoryrunninglastsaved.operation)) leaf_name_data.push_back(ccmhistoryrunninglastsaved.get_name_leafdata());
    if (ccmhistorystartuplastchanged.is_set || is_set(ccmhistorystartuplastchanged.operation)) leaf_name_data.push_back(ccmhistorystartuplastchanged.get_name_leafdata());


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

void CiscoConfigManMib::Ccmhistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccmHistoryEventEntriesBumped")
    {
        ccmhistoryevententriesbumped = value;
    }
    if(value_path == "ccmHistoryMaxEventEntries")
    {
        ccmhistorymaxevententries = value;
    }
    if(value_path == "ccmHistoryRunningLastChanged")
    {
        ccmhistoryrunninglastchanged = value;
    }
    if(value_path == "ccmHistoryRunningLastSaved")
    {
        ccmhistoryrunninglastsaved = value;
    }
    if(value_path == "ccmHistoryStartupLastChanged")
    {
        ccmhistorystartuplastchanged = value;
    }
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
    return is_set(operation)
	|| is_set(ccmclihistorycmdentries.operation)
	|| is_set(ccmclihistorycmdentriesallowed.operation)
	|| is_set(ccmclihistorymaxcmdentries.operation);
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

    if (ccmclihistorycmdentries.is_set || is_set(ccmclihistorycmdentries.operation)) leaf_name_data.push_back(ccmclihistorycmdentries.get_name_leafdata());
    if (ccmclihistorycmdentriesallowed.is_set || is_set(ccmclihistorycmdentriesallowed.operation)) leaf_name_data.push_back(ccmclihistorycmdentriesallowed.get_name_leafdata());
    if (ccmclihistorymaxcmdentries.is_set || is_set(ccmclihistorymaxcmdentries.operation)) leaf_name_data.push_back(ccmclihistorymaxcmdentries.get_name_leafdata());


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

void CiscoConfigManMib::Ccmclihistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccmCLIHistoryCmdEntries")
    {
        ccmclihistorycmdentries = value;
    }
    if(value_path == "ccmCLIHistoryCmdEntriesAllowed")
    {
        ccmclihistorycmdentriesallowed = value;
    }
    if(value_path == "ccmCLIHistoryMaxCmdEntries")
    {
        ccmclihistorymaxcmdentries = value;
    }
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
    return is_set(operation)
	|| is_set(ccmclicfgrunconfnotifenable.operation);
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

    if (ccmclicfgrunconfnotifenable.is_set || is_set(ccmclicfgrunconfnotifenable.operation)) leaf_name_data.push_back(ccmclicfgrunconfnotifenable.get_name_leafdata());


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

void CiscoConfigManMib::Ccmclicfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccmCLICfgRunConfNotifEnable")
    {
        ccmclicfgrunconfnotifenable = value;
    }
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
    return is_set(operation)
	|| is_set(ccmctid.operation)
	|| is_set(ccmctidlastchangetime.operation)
	|| is_set(ccmctidrolledovernotifenable.operation)
	|| is_set(ccmctidwhochanged.operation);
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

    if (ccmctid.is_set || is_set(ccmctid.operation)) leaf_name_data.push_back(ccmctid.get_name_leafdata());
    if (ccmctidlastchangetime.is_set || is_set(ccmctidlastchangetime.operation)) leaf_name_data.push_back(ccmctidlastchangetime.get_name_leafdata());
    if (ccmctidrolledovernotifenable.is_set || is_set(ccmctidrolledovernotifenable.operation)) leaf_name_data.push_back(ccmctidrolledovernotifenable.get_name_leafdata());
    if (ccmctidwhochanged.is_set || is_set(ccmctidwhochanged.operation)) leaf_name_data.push_back(ccmctidwhochanged.get_name_leafdata());


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

void CiscoConfigManMib::Ccmctidobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccmCTID")
    {
        ccmctid = value;
    }
    if(value_path == "ccmCTIDLastChangeTime")
    {
        ccmctidlastchangetime = value;
    }
    if(value_path == "ccmCTIDRolledOverNotifEnable")
    {
        ccmctidrolledovernotifenable = value;
    }
    if(value_path == "ccmCTIDWhoChanged")
    {
        ccmctidwhochanged = value;
    }
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
    return is_set(operation);
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

void CiscoConfigManMib::Ccmhistoryeventtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ccmhistoryeventindex.operation)
	|| is_set(ccmhistoryclicmdentriesbumped.operation)
	|| is_set(ccmhistoryeventcommandsource.operation)
	|| is_set(ccmhistoryeventcommandsourceaddress.operation)
	|| is_set(ccmhistoryeventcommandsourceaddrrev1.operation)
	|| is_set(ccmhistoryeventcommandsourceaddrtype.operation)
	|| is_set(ccmhistoryeventconfigdestination.operation)
	|| is_set(ccmhistoryeventconfigsource.operation)
	|| is_set(ccmhistoryeventfile.operation)
	|| is_set(ccmhistoryeventrcpuser.operation)
	|| is_set(ccmhistoryeventserveraddress.operation)
	|| is_set(ccmhistoryeventserveraddrrev1.operation)
	|| is_set(ccmhistoryeventserveraddrtype.operation)
	|| is_set(ccmhistoryeventterminallocation.operation)
	|| is_set(ccmhistoryeventterminalnumber.operation)
	|| is_set(ccmhistoryeventterminaltype.operation)
	|| is_set(ccmhistoryeventterminaluser.operation)
	|| is_set(ccmhistoryeventtime.operation)
	|| is_set(ccmhistoryeventvirtualhostname.operation);
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

    if (ccmhistoryeventindex.is_set || is_set(ccmhistoryeventindex.operation)) leaf_name_data.push_back(ccmhistoryeventindex.get_name_leafdata());
    if (ccmhistoryclicmdentriesbumped.is_set || is_set(ccmhistoryclicmdentriesbumped.operation)) leaf_name_data.push_back(ccmhistoryclicmdentriesbumped.get_name_leafdata());
    if (ccmhistoryeventcommandsource.is_set || is_set(ccmhistoryeventcommandsource.operation)) leaf_name_data.push_back(ccmhistoryeventcommandsource.get_name_leafdata());
    if (ccmhistoryeventcommandsourceaddress.is_set || is_set(ccmhistoryeventcommandsourceaddress.operation)) leaf_name_data.push_back(ccmhistoryeventcommandsourceaddress.get_name_leafdata());
    if (ccmhistoryeventcommandsourceaddrrev1.is_set || is_set(ccmhistoryeventcommandsourceaddrrev1.operation)) leaf_name_data.push_back(ccmhistoryeventcommandsourceaddrrev1.get_name_leafdata());
    if (ccmhistoryeventcommandsourceaddrtype.is_set || is_set(ccmhistoryeventcommandsourceaddrtype.operation)) leaf_name_data.push_back(ccmhistoryeventcommandsourceaddrtype.get_name_leafdata());
    if (ccmhistoryeventconfigdestination.is_set || is_set(ccmhistoryeventconfigdestination.operation)) leaf_name_data.push_back(ccmhistoryeventconfigdestination.get_name_leafdata());
    if (ccmhistoryeventconfigsource.is_set || is_set(ccmhistoryeventconfigsource.operation)) leaf_name_data.push_back(ccmhistoryeventconfigsource.get_name_leafdata());
    if (ccmhistoryeventfile.is_set || is_set(ccmhistoryeventfile.operation)) leaf_name_data.push_back(ccmhistoryeventfile.get_name_leafdata());
    if (ccmhistoryeventrcpuser.is_set || is_set(ccmhistoryeventrcpuser.operation)) leaf_name_data.push_back(ccmhistoryeventrcpuser.get_name_leafdata());
    if (ccmhistoryeventserveraddress.is_set || is_set(ccmhistoryeventserveraddress.operation)) leaf_name_data.push_back(ccmhistoryeventserveraddress.get_name_leafdata());
    if (ccmhistoryeventserveraddrrev1.is_set || is_set(ccmhistoryeventserveraddrrev1.operation)) leaf_name_data.push_back(ccmhistoryeventserveraddrrev1.get_name_leafdata());
    if (ccmhistoryeventserveraddrtype.is_set || is_set(ccmhistoryeventserveraddrtype.operation)) leaf_name_data.push_back(ccmhistoryeventserveraddrtype.get_name_leafdata());
    if (ccmhistoryeventterminallocation.is_set || is_set(ccmhistoryeventterminallocation.operation)) leaf_name_data.push_back(ccmhistoryeventterminallocation.get_name_leafdata());
    if (ccmhistoryeventterminalnumber.is_set || is_set(ccmhistoryeventterminalnumber.operation)) leaf_name_data.push_back(ccmhistoryeventterminalnumber.get_name_leafdata());
    if (ccmhistoryeventterminaltype.is_set || is_set(ccmhistoryeventterminaltype.operation)) leaf_name_data.push_back(ccmhistoryeventterminaltype.get_name_leafdata());
    if (ccmhistoryeventterminaluser.is_set || is_set(ccmhistoryeventterminaluser.operation)) leaf_name_data.push_back(ccmhistoryeventterminaluser.get_name_leafdata());
    if (ccmhistoryeventtime.is_set || is_set(ccmhistoryeventtime.operation)) leaf_name_data.push_back(ccmhistoryeventtime.get_name_leafdata());
    if (ccmhistoryeventvirtualhostname.is_set || is_set(ccmhistoryeventvirtualhostname.operation)) leaf_name_data.push_back(ccmhistoryeventvirtualhostname.get_name_leafdata());


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

void CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccmHistoryEventIndex")
    {
        ccmhistoryeventindex = value;
    }
    if(value_path == "ccmHistoryCLICmdEntriesBumped")
    {
        ccmhistoryclicmdentriesbumped = value;
    }
    if(value_path == "ccmHistoryEventCommandSource")
    {
        ccmhistoryeventcommandsource = value;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddress")
    {
        ccmhistoryeventcommandsourceaddress = value;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddrRev1")
    {
        ccmhistoryeventcommandsourceaddrrev1 = value;
    }
    if(value_path == "ccmHistoryEventCommandSourceAddrType")
    {
        ccmhistoryeventcommandsourceaddrtype = value;
    }
    if(value_path == "ccmHistoryEventConfigDestination")
    {
        ccmhistoryeventconfigdestination = value;
    }
    if(value_path == "ccmHistoryEventConfigSource")
    {
        ccmhistoryeventconfigsource = value;
    }
    if(value_path == "ccmHistoryEventFile")
    {
        ccmhistoryeventfile = value;
    }
    if(value_path == "ccmHistoryEventRcpUser")
    {
        ccmhistoryeventrcpuser = value;
    }
    if(value_path == "ccmHistoryEventServerAddress")
    {
        ccmhistoryeventserveraddress = value;
    }
    if(value_path == "ccmHistoryEventServerAddrRev1")
    {
        ccmhistoryeventserveraddrrev1 = value;
    }
    if(value_path == "ccmHistoryEventServerAddrType")
    {
        ccmhistoryeventserveraddrtype = value;
    }
    if(value_path == "ccmHistoryEventTerminalLocation")
    {
        ccmhistoryeventterminallocation = value;
    }
    if(value_path == "ccmHistoryEventTerminalNumber")
    {
        ccmhistoryeventterminalnumber = value;
    }
    if(value_path == "ccmHistoryEventTerminalType")
    {
        ccmhistoryeventterminaltype = value;
    }
    if(value_path == "ccmHistoryEventTerminalUser")
    {
        ccmhistoryeventterminaluser = value;
    }
    if(value_path == "ccmHistoryEventTime")
    {
        ccmhistoryeventtime = value;
    }
    if(value_path == "ccmHistoryEventVirtualHostName")
    {
        ccmhistoryeventvirtualhostname = value;
    }
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
    return is_set(operation);
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

void CiscoConfigManMib::Ccmclihistorycommandtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ccmhistoryeventindex.operation)
	|| is_set(ccmclihistorycommandindex.operation)
	|| is_set(ccmclihistorycommand.operation);
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

    if (ccmhistoryeventindex.is_set || is_set(ccmhistoryeventindex.operation)) leaf_name_data.push_back(ccmhistoryeventindex.get_name_leafdata());
    if (ccmclihistorycommandindex.is_set || is_set(ccmclihistorycommandindex.operation)) leaf_name_data.push_back(ccmclihistorycommandindex.get_name_leafdata());
    if (ccmclihistorycommand.is_set || is_set(ccmclihistorycommand.operation)) leaf_name_data.push_back(ccmclihistorycommand.get_name_leafdata());


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

void CiscoConfigManMib::Ccmclihistorycommandtable::Ccmclihistorycommandentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccmHistoryEventIndex")
    {
        ccmhistoryeventindex = value;
    }
    if(value_path == "ccmCLIHistoryCommandIndex")
    {
        ccmclihistorycommandindex = value;
    }
    if(value_path == "ccmCLIHistoryCommand")
    {
        ccmclihistorycommand = value;
    }
}

const Enum::YLeaf HistoryeventmediumEnum::erase {1, "erase"};
const Enum::YLeaf HistoryeventmediumEnum::commandSource {2, "commandSource"};
const Enum::YLeaf HistoryeventmediumEnum::running {3, "running"};
const Enum::YLeaf HistoryeventmediumEnum::startup {4, "startup"};
const Enum::YLeaf HistoryeventmediumEnum::local {5, "local"};
const Enum::YLeaf HistoryeventmediumEnum::networkTftp {6, "networkTftp"};
const Enum::YLeaf HistoryeventmediumEnum::networkRcp {7, "networkRcp"};
const Enum::YLeaf HistoryeventmediumEnum::networkFtp {8, "networkFtp"};
const Enum::YLeaf HistoryeventmediumEnum::networkScp {9, "networkScp"};

const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::CcmhistoryeventcommandsourceEnum::commandLine {1, "commandLine"};
const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::CcmhistoryeventcommandsourceEnum::snmp {2, "snmp"};

const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::CcmhistoryeventterminaltypeEnum::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::CcmhistoryeventterminaltypeEnum::unknown {2, "unknown"};
const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::CcmhistoryeventterminaltypeEnum::console {3, "console"};
const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::CcmhistoryeventterminaltypeEnum::terminal {4, "terminal"};
const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::CcmhistoryeventterminaltypeEnum::virtual_ {5, "virtual"};
const Enum::YLeaf CiscoConfigManMib::Ccmhistoryeventtable::Ccmhistoryevententry::CcmhistoryeventterminaltypeEnum::auxiliary {6, "auxiliary"};


}
}

