
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_EMBEDDED_EVENT_MGR_MIB.hpp"

namespace ydk {
namespace CISCO_EMBEDDED_EVENT_MGR_MIB {

CiscoEmbeddedEventMgrMib::CiscoEmbeddedEventMgrMib()
    :
    ceemeventmaptable(std::make_shared<CiscoEmbeddedEventMgrMib::Ceemeventmaptable>())
	,ceemhistory(std::make_shared<CiscoEmbeddedEventMgrMib::Ceemhistory>())
	,ceemhistoryeventtable(std::make_shared<CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable>())
	,ceemregisteredpolicytable(std::make_shared<CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable>())
{
    ceemeventmaptable->parent = this;

    ceemhistory->parent = this;

    ceemhistoryeventtable->parent = this;

    ceemregisteredpolicytable->parent = this;

    yang_name = "CISCO-EMBEDDED-EVENT-MGR-MIB"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB";
}

CiscoEmbeddedEventMgrMib::~CiscoEmbeddedEventMgrMib()
{
}

bool CiscoEmbeddedEventMgrMib::has_data() const
{
    return (ceemeventmaptable !=  nullptr && ceemeventmaptable->has_data())
	|| (ceemhistory !=  nullptr && ceemhistory->has_data())
	|| (ceemhistoryeventtable !=  nullptr && ceemhistoryeventtable->has_data())
	|| (ceemregisteredpolicytable !=  nullptr && ceemregisteredpolicytable->has_data());
}

bool CiscoEmbeddedEventMgrMib::has_operation() const
{
    return is_set(operation)
	|| (ceemeventmaptable !=  nullptr && ceemeventmaptable->has_operation())
	|| (ceemhistory !=  nullptr && ceemhistory->has_operation())
	|| (ceemhistoryeventtable !=  nullptr && ceemhistoryeventtable->has_operation())
	|| (ceemregisteredpolicytable !=  nullptr && ceemregisteredpolicytable->has_operation());
}

std::string CiscoEmbeddedEventMgrMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceemEventMapTable")
    {
        if(ceemeventmaptable == nullptr)
        {
            ceemeventmaptable = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemeventmaptable>();
        }
        return ceemeventmaptable;
    }

    if(child_yang_name == "ceemHistory")
    {
        if(ceemhistory == nullptr)
        {
            ceemhistory = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemhistory>();
        }
        return ceemhistory;
    }

    if(child_yang_name == "ceemHistoryEventTable")
    {
        if(ceemhistoryeventtable == nullptr)
        {
            ceemhistoryeventtable = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable>();
        }
        return ceemhistoryeventtable;
    }

    if(child_yang_name == "ceemRegisteredPolicyTable")
    {
        if(ceemregisteredpolicytable == nullptr)
        {
            ceemregisteredpolicytable = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable>();
        }
        return ceemregisteredpolicytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ceemeventmaptable != nullptr)
    {
        children["ceemEventMapTable"] = ceemeventmaptable;
    }

    if(ceemhistory != nullptr)
    {
        children["ceemHistory"] = ceemhistory;
    }

    if(ceemhistoryeventtable != nullptr)
    {
        children["ceemHistoryEventTable"] = ceemhistoryeventtable;
    }

    if(ceemregisteredpolicytable != nullptr)
    {
        children["ceemRegisteredPolicyTable"] = ceemregisteredpolicytable;
    }

    return children;
}

void CiscoEmbeddedEventMgrMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::clone_ptr() const
{
    return std::make_shared<CiscoEmbeddedEventMgrMib>();
}

std::string CiscoEmbeddedEventMgrMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoEmbeddedEventMgrMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoEmbeddedEventMgrMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoEmbeddedEventMgrMib::Ceemhistory::Ceemhistory()
    :
    ceemhistorylastevententry{YType::uint32, "ceemHistoryLastEventEntry"},
    ceemhistorymaxevententries{YType::int32, "ceemHistoryMaxEventEntries"}
{
    yang_name = "ceemHistory"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB";
}

CiscoEmbeddedEventMgrMib::Ceemhistory::~Ceemhistory()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemhistory::has_data() const
{
    return ceemhistorylastevententry.is_set
	|| ceemhistorymaxevententries.is_set;
}

bool CiscoEmbeddedEventMgrMib::Ceemhistory::has_operation() const
{
    return is_set(operation)
	|| is_set(ceemhistorylastevententry.operation)
	|| is_set(ceemhistorymaxevententries.operation);
}

std::string CiscoEmbeddedEventMgrMib::Ceemhistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemHistory";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemhistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceemhistorylastevententry.is_set || is_set(ceemhistorylastevententry.operation)) leaf_name_data.push_back(ceemhistorylastevententry.get_name_leafdata());
    if (ceemhistorymaxevententries.is_set || is_set(ceemhistorymaxevententries.operation)) leaf_name_data.push_back(ceemhistorymaxevententries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemhistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemhistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemhistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceemHistoryLastEventEntry")
    {
        ceemhistorylastevententry = value;
    }
    if(value_path == "ceemHistoryMaxEventEntries")
    {
        ceemhistorymaxevententries = value;
    }
}

CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmaptable()
{
    yang_name = "ceemEventMapTable"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB";
}

CiscoEmbeddedEventMgrMib::Ceemeventmaptable::~Ceemeventmaptable()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemeventmaptable::has_data() const
{
    for (std::size_t index=0; index<ceemeventmapentry.size(); index++)
    {
        if(ceemeventmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEmbeddedEventMgrMib::Ceemeventmaptable::has_operation() const
{
    for (std::size_t index=0; index<ceemeventmapentry.size(); index++)
    {
        if(ceemeventmapentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEmbeddedEventMgrMib::Ceemeventmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemEventMapTable";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemeventmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemeventmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceemEventMapEntry")
    {
        for(auto const & c : ceemeventmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry>();
        c->parent = this;
        ceemeventmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemeventmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceemeventmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemeventmaptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::Ceemeventmapentry()
    :
    ceemeventindex{YType::uint32, "ceemEventIndex"},
    ceemeventdescrtext{YType::str, "ceemEventDescrText"},
    ceemeventname{YType::str, "ceemEventName"}
{
    yang_name = "ceemEventMapEntry"; yang_parent_name = "ceemEventMapTable";
}

CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::~Ceemeventmapentry()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::has_data() const
{
    return ceemeventindex.is_set
	|| ceemeventdescrtext.is_set
	|| ceemeventname.is_set;
}

bool CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ceemeventindex.operation)
	|| is_set(ceemeventdescrtext.operation)
	|| is_set(ceemeventname.operation);
}

std::string CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemEventMapEntry" <<"[ceemEventIndex='" <<ceemeventindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/ceemEventMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceemeventindex.is_set || is_set(ceemeventindex.operation)) leaf_name_data.push_back(ceemeventindex.get_name_leafdata());
    if (ceemeventdescrtext.is_set || is_set(ceemeventdescrtext.operation)) leaf_name_data.push_back(ceemeventdescrtext.get_name_leafdata());
    if (ceemeventname.is_set || is_set(ceemeventname.operation)) leaf_name_data.push_back(ceemeventname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemeventmaptable::Ceemeventmapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceemEventIndex")
    {
        ceemeventindex = value;
    }
    if(value_path == "ceemEventDescrText")
    {
        ceemeventdescrtext = value;
    }
    if(value_path == "ceemEventName")
    {
        ceemeventname = value;
    }
}

CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryeventtable()
{
    yang_name = "ceemHistoryEventTable"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB";
}

CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::~Ceemhistoryeventtable()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::has_data() const
{
    for (std::size_t index=0; index<ceemhistoryevententry.size(); index++)
    {
        if(ceemhistoryevententry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::has_operation() const
{
    for (std::size_t index=0; index<ceemhistoryevententry.size(); index++)
    {
        if(ceemhistoryevententry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemHistoryEventTable";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceemHistoryEventEntry")
    {
        for(auto const & c : ceemhistoryevententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry>();
        c->parent = this;
        ceemhistoryevententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceemhistoryevententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::Ceemhistoryevententry()
    :
    ceemhistoryeventindex{YType::uint32, "ceemHistoryEventIndex"},
    ceemhistoryeventtype1{YType::uint32, "ceemHistoryEventType1"},
    ceemhistoryeventtype2{YType::uint32, "ceemHistoryEventType2"},
    ceemhistoryeventtype3{YType::uint32, "ceemHistoryEventType3"},
    ceemhistoryeventtype4{YType::uint32, "ceemHistoryEventType4"},
    ceemhistoryeventtype5{YType::uint32, "ceemHistoryEventType5"},
    ceemhistoryeventtype6{YType::uint32, "ceemHistoryEventType6"},
    ceemhistoryeventtype7{YType::uint32, "ceemHistoryEventType7"},
    ceemhistoryeventtype8{YType::uint32, "ceemHistoryEventType8"},
    ceemhistorynotifytype{YType::enumeration, "ceemHistoryNotifyType"},
    ceemhistorypolicyexitstatus{YType::int32, "ceemHistoryPolicyExitStatus"},
    ceemhistorypolicyintdata1{YType::int32, "ceemHistoryPolicyIntData1"},
    ceemhistorypolicyintdata2{YType::int32, "ceemHistoryPolicyIntData2"},
    ceemhistorypolicyname{YType::str, "ceemHistoryPolicyName"},
    ceemhistorypolicypath{YType::str, "ceemHistoryPolicyPath"},
    ceemhistorypolicystrdata{YType::str, "ceemHistoryPolicyStrData"}
{
    yang_name = "ceemHistoryEventEntry"; yang_parent_name = "ceemHistoryEventTable";
}

CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::~Ceemhistoryevententry()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::has_data() const
{
    return ceemhistoryeventindex.is_set
	|| ceemhistoryeventtype1.is_set
	|| ceemhistoryeventtype2.is_set
	|| ceemhistoryeventtype3.is_set
	|| ceemhistoryeventtype4.is_set
	|| ceemhistoryeventtype5.is_set
	|| ceemhistoryeventtype6.is_set
	|| ceemhistoryeventtype7.is_set
	|| ceemhistoryeventtype8.is_set
	|| ceemhistorynotifytype.is_set
	|| ceemhistorypolicyexitstatus.is_set
	|| ceemhistorypolicyintdata1.is_set
	|| ceemhistorypolicyintdata2.is_set
	|| ceemhistorypolicyname.is_set
	|| ceemhistorypolicypath.is_set
	|| ceemhistorypolicystrdata.is_set;
}

bool CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::has_operation() const
{
    return is_set(operation)
	|| is_set(ceemhistoryeventindex.operation)
	|| is_set(ceemhistoryeventtype1.operation)
	|| is_set(ceemhistoryeventtype2.operation)
	|| is_set(ceemhistoryeventtype3.operation)
	|| is_set(ceemhistoryeventtype4.operation)
	|| is_set(ceemhistoryeventtype5.operation)
	|| is_set(ceemhistoryeventtype6.operation)
	|| is_set(ceemhistoryeventtype7.operation)
	|| is_set(ceemhistoryeventtype8.operation)
	|| is_set(ceemhistorynotifytype.operation)
	|| is_set(ceemhistorypolicyexitstatus.operation)
	|| is_set(ceemhistorypolicyintdata1.operation)
	|| is_set(ceemhistorypolicyintdata2.operation)
	|| is_set(ceemhistorypolicyname.operation)
	|| is_set(ceemhistorypolicypath.operation)
	|| is_set(ceemhistorypolicystrdata.operation);
}

std::string CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemHistoryEventEntry" <<"[ceemHistoryEventIndex='" <<ceemhistoryeventindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/ceemHistoryEventTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceemhistoryeventindex.is_set || is_set(ceemhistoryeventindex.operation)) leaf_name_data.push_back(ceemhistoryeventindex.get_name_leafdata());
    if (ceemhistoryeventtype1.is_set || is_set(ceemhistoryeventtype1.operation)) leaf_name_data.push_back(ceemhistoryeventtype1.get_name_leafdata());
    if (ceemhistoryeventtype2.is_set || is_set(ceemhistoryeventtype2.operation)) leaf_name_data.push_back(ceemhistoryeventtype2.get_name_leafdata());
    if (ceemhistoryeventtype3.is_set || is_set(ceemhistoryeventtype3.operation)) leaf_name_data.push_back(ceemhistoryeventtype3.get_name_leafdata());
    if (ceemhistoryeventtype4.is_set || is_set(ceemhistoryeventtype4.operation)) leaf_name_data.push_back(ceemhistoryeventtype4.get_name_leafdata());
    if (ceemhistoryeventtype5.is_set || is_set(ceemhistoryeventtype5.operation)) leaf_name_data.push_back(ceemhistoryeventtype5.get_name_leafdata());
    if (ceemhistoryeventtype6.is_set || is_set(ceemhistoryeventtype6.operation)) leaf_name_data.push_back(ceemhistoryeventtype6.get_name_leafdata());
    if (ceemhistoryeventtype7.is_set || is_set(ceemhistoryeventtype7.operation)) leaf_name_data.push_back(ceemhistoryeventtype7.get_name_leafdata());
    if (ceemhistoryeventtype8.is_set || is_set(ceemhistoryeventtype8.operation)) leaf_name_data.push_back(ceemhistoryeventtype8.get_name_leafdata());
    if (ceemhistorynotifytype.is_set || is_set(ceemhistorynotifytype.operation)) leaf_name_data.push_back(ceemhistorynotifytype.get_name_leafdata());
    if (ceemhistorypolicyexitstatus.is_set || is_set(ceemhistorypolicyexitstatus.operation)) leaf_name_data.push_back(ceemhistorypolicyexitstatus.get_name_leafdata());
    if (ceemhistorypolicyintdata1.is_set || is_set(ceemhistorypolicyintdata1.operation)) leaf_name_data.push_back(ceemhistorypolicyintdata1.get_name_leafdata());
    if (ceemhistorypolicyintdata2.is_set || is_set(ceemhistorypolicyintdata2.operation)) leaf_name_data.push_back(ceemhistorypolicyintdata2.get_name_leafdata());
    if (ceemhistorypolicyname.is_set || is_set(ceemhistorypolicyname.operation)) leaf_name_data.push_back(ceemhistorypolicyname.get_name_leafdata());
    if (ceemhistorypolicypath.is_set || is_set(ceemhistorypolicypath.operation)) leaf_name_data.push_back(ceemhistorypolicypath.get_name_leafdata());
    if (ceemhistorypolicystrdata.is_set || is_set(ceemhistorypolicystrdata.operation)) leaf_name_data.push_back(ceemhistorypolicystrdata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemhistoryeventtable::Ceemhistoryevententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceemHistoryEventIndex")
    {
        ceemhistoryeventindex = value;
    }
    if(value_path == "ceemHistoryEventType1")
    {
        ceemhistoryeventtype1 = value;
    }
    if(value_path == "ceemHistoryEventType2")
    {
        ceemhistoryeventtype2 = value;
    }
    if(value_path == "ceemHistoryEventType3")
    {
        ceemhistoryeventtype3 = value;
    }
    if(value_path == "ceemHistoryEventType4")
    {
        ceemhistoryeventtype4 = value;
    }
    if(value_path == "ceemHistoryEventType5")
    {
        ceemhistoryeventtype5 = value;
    }
    if(value_path == "ceemHistoryEventType6")
    {
        ceemhistoryeventtype6 = value;
    }
    if(value_path == "ceemHistoryEventType7")
    {
        ceemhistoryeventtype7 = value;
    }
    if(value_path == "ceemHistoryEventType8")
    {
        ceemhistoryeventtype8 = value;
    }
    if(value_path == "ceemHistoryNotifyType")
    {
        ceemhistorynotifytype = value;
    }
    if(value_path == "ceemHistoryPolicyExitStatus")
    {
        ceemhistorypolicyexitstatus = value;
    }
    if(value_path == "ceemHistoryPolicyIntData1")
    {
        ceemhistorypolicyintdata1 = value;
    }
    if(value_path == "ceemHistoryPolicyIntData2")
    {
        ceemhistorypolicyintdata2 = value;
    }
    if(value_path == "ceemHistoryPolicyName")
    {
        ceemhistorypolicyname = value;
    }
    if(value_path == "ceemHistoryPolicyPath")
    {
        ceemhistorypolicypath = value;
    }
    if(value_path == "ceemHistoryPolicyStrData")
    {
        ceemhistorypolicystrdata = value;
    }
}

CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicytable()
{
    yang_name = "ceemRegisteredPolicyTable"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB";
}

CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::~Ceemregisteredpolicytable()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::has_data() const
{
    for (std::size_t index=0; index<ceemregisteredpolicyentry.size(); index++)
    {
        if(ceemregisteredpolicyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::has_operation() const
{
    for (std::size_t index=0; index<ceemregisteredpolicyentry.size(); index++)
    {
        if(ceemregisteredpolicyentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemRegisteredPolicyTable";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceemRegisteredPolicyEntry")
    {
        for(auto const & c : ceemregisteredpolicyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry>();
        c->parent = this;
        ceemregisteredpolicyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceemregisteredpolicyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::Ceemregisteredpolicyentry()
    :
    ceemregisteredpolicyindex{YType::uint32, "ceemRegisteredPolicyIndex"},
    ceemregisteredpolicyenabledtime{YType::str, "ceemRegisteredPolicyEnabledTime"},
    ceemregisteredpolicyeventtype1{YType::uint32, "ceemRegisteredPolicyEventType1"},
    ceemregisteredpolicyeventtype2{YType::uint32, "ceemRegisteredPolicyEventType2"},
    ceemregisteredpolicyeventtype3{YType::uint32, "ceemRegisteredPolicyEventType3"},
    ceemregisteredpolicyeventtype4{YType::uint32, "ceemRegisteredPolicyEventType4"},
    ceemregisteredpolicyeventtype5{YType::uint32, "ceemRegisteredPolicyEventType5"},
    ceemregisteredpolicyeventtype6{YType::uint32, "ceemRegisteredPolicyEventType6"},
    ceemregisteredpolicyeventtype7{YType::uint32, "ceemRegisteredPolicyEventType7"},
    ceemregisteredpolicyeventtype8{YType::uint32, "ceemRegisteredPolicyEventType8"},
    ceemregisteredpolicyname{YType::str, "ceemRegisteredPolicyName"},
    ceemregisteredpolicynotifflag{YType::boolean, "ceemRegisteredPolicyNotifFlag"},
    ceemregisteredpolicyregtime{YType::str, "ceemRegisteredPolicyRegTime"},
    ceemregisteredpolicyruncount{YType::uint32, "ceemRegisteredPolicyRunCount"},
    ceemregisteredpolicyruntime{YType::str, "ceemRegisteredPolicyRunTime"},
    ceemregisteredpolicystatus{YType::enumeration, "ceemRegisteredPolicyStatus"},
    ceemregisteredpolicytype{YType::enumeration, "ceemRegisteredPolicyType"}
{
    yang_name = "ceemRegisteredPolicyEntry"; yang_parent_name = "ceemRegisteredPolicyTable";
}

CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::~Ceemregisteredpolicyentry()
{
}

bool CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::has_data() const
{
    return ceemregisteredpolicyindex.is_set
	|| ceemregisteredpolicyenabledtime.is_set
	|| ceemregisteredpolicyeventtype1.is_set
	|| ceemregisteredpolicyeventtype2.is_set
	|| ceemregisteredpolicyeventtype3.is_set
	|| ceemregisteredpolicyeventtype4.is_set
	|| ceemregisteredpolicyeventtype5.is_set
	|| ceemregisteredpolicyeventtype6.is_set
	|| ceemregisteredpolicyeventtype7.is_set
	|| ceemregisteredpolicyeventtype8.is_set
	|| ceemregisteredpolicyname.is_set
	|| ceemregisteredpolicynotifflag.is_set
	|| ceemregisteredpolicyregtime.is_set
	|| ceemregisteredpolicyruncount.is_set
	|| ceemregisteredpolicyruntime.is_set
	|| ceemregisteredpolicystatus.is_set
	|| ceemregisteredpolicytype.is_set;
}

bool CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ceemregisteredpolicyindex.operation)
	|| is_set(ceemregisteredpolicyenabledtime.operation)
	|| is_set(ceemregisteredpolicyeventtype1.operation)
	|| is_set(ceemregisteredpolicyeventtype2.operation)
	|| is_set(ceemregisteredpolicyeventtype3.operation)
	|| is_set(ceemregisteredpolicyeventtype4.operation)
	|| is_set(ceemregisteredpolicyeventtype5.operation)
	|| is_set(ceemregisteredpolicyeventtype6.operation)
	|| is_set(ceemregisteredpolicyeventtype7.operation)
	|| is_set(ceemregisteredpolicyeventtype8.operation)
	|| is_set(ceemregisteredpolicyname.operation)
	|| is_set(ceemregisteredpolicynotifflag.operation)
	|| is_set(ceemregisteredpolicyregtime.operation)
	|| is_set(ceemregisteredpolicyruncount.operation)
	|| is_set(ceemregisteredpolicyruntime.operation)
	|| is_set(ceemregisteredpolicystatus.operation)
	|| is_set(ceemregisteredpolicytype.operation);
}

std::string CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemRegisteredPolicyEntry" <<"[ceemRegisteredPolicyIndex='" <<ceemregisteredpolicyindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/ceemRegisteredPolicyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceemregisteredpolicyindex.is_set || is_set(ceemregisteredpolicyindex.operation)) leaf_name_data.push_back(ceemregisteredpolicyindex.get_name_leafdata());
    if (ceemregisteredpolicyenabledtime.is_set || is_set(ceemregisteredpolicyenabledtime.operation)) leaf_name_data.push_back(ceemregisteredpolicyenabledtime.get_name_leafdata());
    if (ceemregisteredpolicyeventtype1.is_set || is_set(ceemregisteredpolicyeventtype1.operation)) leaf_name_data.push_back(ceemregisteredpolicyeventtype1.get_name_leafdata());
    if (ceemregisteredpolicyeventtype2.is_set || is_set(ceemregisteredpolicyeventtype2.operation)) leaf_name_data.push_back(ceemregisteredpolicyeventtype2.get_name_leafdata());
    if (ceemregisteredpolicyeventtype3.is_set || is_set(ceemregisteredpolicyeventtype3.operation)) leaf_name_data.push_back(ceemregisteredpolicyeventtype3.get_name_leafdata());
    if (ceemregisteredpolicyeventtype4.is_set || is_set(ceemregisteredpolicyeventtype4.operation)) leaf_name_data.push_back(ceemregisteredpolicyeventtype4.get_name_leafdata());
    if (ceemregisteredpolicyeventtype5.is_set || is_set(ceemregisteredpolicyeventtype5.operation)) leaf_name_data.push_back(ceemregisteredpolicyeventtype5.get_name_leafdata());
    if (ceemregisteredpolicyeventtype6.is_set || is_set(ceemregisteredpolicyeventtype6.operation)) leaf_name_data.push_back(ceemregisteredpolicyeventtype6.get_name_leafdata());
    if (ceemregisteredpolicyeventtype7.is_set || is_set(ceemregisteredpolicyeventtype7.operation)) leaf_name_data.push_back(ceemregisteredpolicyeventtype7.get_name_leafdata());
    if (ceemregisteredpolicyeventtype8.is_set || is_set(ceemregisteredpolicyeventtype8.operation)) leaf_name_data.push_back(ceemregisteredpolicyeventtype8.get_name_leafdata());
    if (ceemregisteredpolicyname.is_set || is_set(ceemregisteredpolicyname.operation)) leaf_name_data.push_back(ceemregisteredpolicyname.get_name_leafdata());
    if (ceemregisteredpolicynotifflag.is_set || is_set(ceemregisteredpolicynotifflag.operation)) leaf_name_data.push_back(ceemregisteredpolicynotifflag.get_name_leafdata());
    if (ceemregisteredpolicyregtime.is_set || is_set(ceemregisteredpolicyregtime.operation)) leaf_name_data.push_back(ceemregisteredpolicyregtime.get_name_leafdata());
    if (ceemregisteredpolicyruncount.is_set || is_set(ceemregisteredpolicyruncount.operation)) leaf_name_data.push_back(ceemregisteredpolicyruncount.get_name_leafdata());
    if (ceemregisteredpolicyruntime.is_set || is_set(ceemregisteredpolicyruntime.operation)) leaf_name_data.push_back(ceemregisteredpolicyruntime.get_name_leafdata());
    if (ceemregisteredpolicystatus.is_set || is_set(ceemregisteredpolicystatus.operation)) leaf_name_data.push_back(ceemregisteredpolicystatus.get_name_leafdata());
    if (ceemregisteredpolicytype.is_set || is_set(ceemregisteredpolicytype.operation)) leaf_name_data.push_back(ceemregisteredpolicytype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ceemRegisteredPolicyIndex")
    {
        ceemregisteredpolicyindex = value;
    }
    if(value_path == "ceemRegisteredPolicyEnabledTime")
    {
        ceemregisteredpolicyenabledtime = value;
    }
    if(value_path == "ceemRegisteredPolicyEventType1")
    {
        ceemregisteredpolicyeventtype1 = value;
    }
    if(value_path == "ceemRegisteredPolicyEventType2")
    {
        ceemregisteredpolicyeventtype2 = value;
    }
    if(value_path == "ceemRegisteredPolicyEventType3")
    {
        ceemregisteredpolicyeventtype3 = value;
    }
    if(value_path == "ceemRegisteredPolicyEventType4")
    {
        ceemregisteredpolicyeventtype4 = value;
    }
    if(value_path == "ceemRegisteredPolicyEventType5")
    {
        ceemregisteredpolicyeventtype5 = value;
    }
    if(value_path == "ceemRegisteredPolicyEventType6")
    {
        ceemregisteredpolicyeventtype6 = value;
    }
    if(value_path == "ceemRegisteredPolicyEventType7")
    {
        ceemregisteredpolicyeventtype7 = value;
    }
    if(value_path == "ceemRegisteredPolicyEventType8")
    {
        ceemregisteredpolicyeventtype8 = value;
    }
    if(value_path == "ceemRegisteredPolicyName")
    {
        ceemregisteredpolicyname = value;
    }
    if(value_path == "ceemRegisteredPolicyNotifFlag")
    {
        ceemregisteredpolicynotifflag = value;
    }
    if(value_path == "ceemRegisteredPolicyRegTime")
    {
        ceemregisteredpolicyregtime = value;
    }
    if(value_path == "ceemRegisteredPolicyRunCount")
    {
        ceemregisteredpolicyruncount = value;
    }
    if(value_path == "ceemRegisteredPolicyRunTime")
    {
        ceemregisteredpolicyruntime = value;
    }
    if(value_path == "ceemRegisteredPolicyStatus")
    {
        ceemregisteredpolicystatus = value;
    }
    if(value_path == "ceemRegisteredPolicyType")
    {
        ceemregisteredpolicytype = value;
    }
}

const Enum::YLeaf NotifysourceEnum::server {1, "server"};
const Enum::YLeaf NotifysourceEnum::policy {2, "policy"};

const Enum::YLeaf CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::CeemregisteredpolicystatusEnum::enabled {1, "enabled"};
const Enum::YLeaf CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::CeemregisteredpolicystatusEnum::disabled {2, "disabled"};

const Enum::YLeaf CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::CeemregisteredpolicytypeEnum::user {1, "user"};
const Enum::YLeaf CiscoEmbeddedEventMgrMib::Ceemregisteredpolicytable::Ceemregisteredpolicyentry::CeemregisteredpolicytypeEnum::system {2, "system"};


}
}

