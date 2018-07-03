
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_EMBEDDED_EVENT_MGR_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_EMBEDDED_EVENT_MGR_MIB {

CISCOEMBEDDEDEVENTMGRMIB::CISCOEMBEDDEDEVENTMGRMIB()
    :
    ceemhistory(std::make_shared<CISCOEMBEDDEDEVENTMGRMIB::CeemHistory>())
    , ceemeventmaptable(std::make_shared<CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable>())
    , ceemhistoryeventtable(std::make_shared<CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable>())
    , ceemregisteredpolicytable(std::make_shared<CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable>())
{
    ceemhistory->parent = this;
    ceemeventmaptable->parent = this;
    ceemhistoryeventtable->parent = this;
    ceemregisteredpolicytable->parent = this;

    yang_name = "CISCO-EMBEDDED-EVENT-MGR-MIB"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOEMBEDDEDEVENTMGRMIB::~CISCOEMBEDDEDEVENTMGRMIB()
{
}

bool CISCOEMBEDDEDEVENTMGRMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ceemhistory !=  nullptr && ceemhistory->has_data())
	|| (ceemeventmaptable !=  nullptr && ceemeventmaptable->has_data())
	|| (ceemhistoryeventtable !=  nullptr && ceemhistoryeventtable->has_data())
	|| (ceemregisteredpolicytable !=  nullptr && ceemregisteredpolicytable->has_data());
}

bool CISCOEMBEDDEDEVENTMGRMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ceemhistory !=  nullptr && ceemhistory->has_operation())
	|| (ceemeventmaptable !=  nullptr && ceemeventmaptable->has_operation())
	|| (ceemhistoryeventtable !=  nullptr && ceemhistoryeventtable->has_operation())
	|| (ceemregisteredpolicytable !=  nullptr && ceemregisteredpolicytable->has_operation());
}

std::string CISCOEMBEDDEDEVENTMGRMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEMBEDDEDEVENTMGRMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEMBEDDEDEVENTMGRMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceemHistory")
    {
        if(ceemhistory == nullptr)
        {
            ceemhistory = std::make_shared<CISCOEMBEDDEDEVENTMGRMIB::CeemHistory>();
        }
        return ceemhistory;
    }

    if(child_yang_name == "ceemEventMapTable")
    {
        if(ceemeventmaptable == nullptr)
        {
            ceemeventmaptable = std::make_shared<CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable>();
        }
        return ceemeventmaptable;
    }

    if(child_yang_name == "ceemHistoryEventTable")
    {
        if(ceemhistoryeventtable == nullptr)
        {
            ceemhistoryeventtable = std::make_shared<CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable>();
        }
        return ceemhistoryeventtable;
    }

    if(child_yang_name == "ceemRegisteredPolicyTable")
    {
        if(ceemregisteredpolicytable == nullptr)
        {
            ceemregisteredpolicytable = std::make_shared<CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable>();
        }
        return ceemregisteredpolicytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEMBEDDEDEVENTMGRMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ceemhistory != nullptr)
    {
        children["ceemHistory"] = ceemhistory;
    }

    if(ceemeventmaptable != nullptr)
    {
        children["ceemEventMapTable"] = ceemeventmaptable;
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

void CISCOEMBEDDEDEVENTMGRMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOEMBEDDEDEVENTMGRMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOEMBEDDEDEVENTMGRMIB::clone_ptr() const
{
    return std::make_shared<CISCOEMBEDDEDEVENTMGRMIB>();
}

std::string CISCOEMBEDDEDEVENTMGRMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOEMBEDDEDEVENTMGRMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOEMBEDDEDEVENTMGRMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOEMBEDDEDEVENTMGRMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOEMBEDDEDEVENTMGRMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemHistory" || name == "ceemEventMapTable" || name == "ceemHistoryEventTable" || name == "ceemRegisteredPolicyTable")
        return true;
    return false;
}

CISCOEMBEDDEDEVENTMGRMIB::CeemHistory::CeemHistory()
    :
    ceemhistorymaxevententries{YType::int32, "ceemHistoryMaxEventEntries"},
    ceemhistorylastevententry{YType::uint32, "ceemHistoryLastEventEntry"}
{

    yang_name = "ceemHistory"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEMBEDDEDEVENTMGRMIB::CeemHistory::~CeemHistory()
{
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemHistory::has_data() const
{
    if (is_presence_container) return true;
    return ceemhistorymaxevententries.is_set
	|| ceemhistorylastevententry.is_set;
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceemhistorymaxevententries.yfilter)
	|| ydk::is_set(ceemhistorylastevententry.yfilter);
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemHistory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEMBEDDEDEVENTMGRMIB::CeemHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceemhistorymaxevententries.is_set || is_set(ceemhistorymaxevententries.yfilter)) leaf_name_data.push_back(ceemhistorymaxevententries.get_name_leafdata());
    if (ceemhistorylastevententry.is_set || is_set(ceemhistorylastevententry.yfilter)) leaf_name_data.push_back(ceemhistorylastevententry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEMBEDDEDEVENTMGRMIB::CeemHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEMBEDDEDEVENTMGRMIB::CeemHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceemHistoryMaxEventEntries")
    {
        ceemhistorymaxevententries = value;
        ceemhistorymaxevententries.value_namespace = name_space;
        ceemhistorymaxevententries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryLastEventEntry")
    {
        ceemhistorylastevententry = value;
        ceemhistorylastevententry.value_namespace = name_space;
        ceemhistorylastevententry.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceemHistoryMaxEventEntries")
    {
        ceemhistorymaxevententries.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryLastEventEntry")
    {
        ceemhistorylastevententry.yfilter = yfilter;
    }
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemHistoryMaxEventEntries" || name == "ceemHistoryLastEventEntry")
        return true;
    return false;
}

CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapTable()
    :
    ceemeventmapentry(this, {"ceemeventindex"})
{

    yang_name = "ceemEventMapTable"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::~CeemEventMapTable()
{
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceemeventmapentry.len(); index++)
    {
        if(ceemeventmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::has_operation() const
{
    for (std::size_t index=0; index<ceemeventmapentry.len(); index++)
    {
        if(ceemeventmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemEventMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceemEventMapEntry")
    {
        auto c = std::make_shared<CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry>();
        c->parent = this;
        ceemeventmapentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceemeventmapentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemEventMapEntry")
        return true;
    return false;
}

CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry::CeemEventMapEntry()
    :
    ceemeventindex{YType::uint32, "ceemEventIndex"},
    ceemeventname{YType::str, "ceemEventName"},
    ceemeventdescrtext{YType::str, "ceemEventDescrText"}
{

    yang_name = "ceemEventMapEntry"; yang_parent_name = "ceemEventMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry::~CeemEventMapEntry()
{
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return ceemeventindex.is_set
	|| ceemeventname.is_set
	|| ceemeventdescrtext.is_set;
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceemeventindex.yfilter)
	|| ydk::is_set(ceemeventname.yfilter)
	|| ydk::is_set(ceemeventdescrtext.yfilter);
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/ceemEventMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemEventMapEntry";
    ADD_KEY_TOKEN(ceemeventindex, "ceemEventIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceemeventindex.is_set || is_set(ceemeventindex.yfilter)) leaf_name_data.push_back(ceemeventindex.get_name_leafdata());
    if (ceemeventname.is_set || is_set(ceemeventname.yfilter)) leaf_name_data.push_back(ceemeventname.get_name_leafdata());
    if (ceemeventdescrtext.is_set || is_set(ceemeventdescrtext.yfilter)) leaf_name_data.push_back(ceemeventdescrtext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceemEventIndex")
    {
        ceemeventindex = value;
        ceemeventindex.value_namespace = name_space;
        ceemeventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemEventName")
    {
        ceemeventname = value;
        ceemeventname.value_namespace = name_space;
        ceemeventname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemEventDescrText")
    {
        ceemeventdescrtext = value;
        ceemeventdescrtext.value_namespace = name_space;
        ceemeventdescrtext.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceemEventIndex")
    {
        ceemeventindex.yfilter = yfilter;
    }
    if(value_path == "ceemEventName")
    {
        ceemeventname.yfilter = yfilter;
    }
    if(value_path == "ceemEventDescrText")
    {
        ceemeventdescrtext.yfilter = yfilter;
    }
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemEventMapTable::CeemEventMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemEventIndex" || name == "ceemEventName" || name == "ceemEventDescrText")
        return true;
    return false;
}

CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventTable()
    :
    ceemhistoryevententry(this, {"ceemhistoryeventindex"})
{

    yang_name = "ceemHistoryEventTable"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::~CeemHistoryEventTable()
{
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceemhistoryevententry.len(); index++)
    {
        if(ceemhistoryevententry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::has_operation() const
{
    for (std::size_t index=0; index<ceemhistoryevententry.len(); index++)
    {
        if(ceemhistoryevententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemHistoryEventTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceemHistoryEventEntry")
    {
        auto c = std::make_shared<CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry>();
        c->parent = this;
        ceemhistoryevententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceemhistoryevententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemHistoryEventEntry")
        return true;
    return false;
}

CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry::CeemHistoryEventEntry()
    :
    ceemhistoryeventindex{YType::uint32, "ceemHistoryEventIndex"},
    ceemhistoryeventtype1{YType::uint32, "ceemHistoryEventType1"},
    ceemhistoryeventtype2{YType::uint32, "ceemHistoryEventType2"},
    ceemhistoryeventtype3{YType::uint32, "ceemHistoryEventType3"},
    ceemhistoryeventtype4{YType::uint32, "ceemHistoryEventType4"},
    ceemhistorypolicypath{YType::str, "ceemHistoryPolicyPath"},
    ceemhistorypolicyname{YType::str, "ceemHistoryPolicyName"},
    ceemhistorypolicyexitstatus{YType::int32, "ceemHistoryPolicyExitStatus"},
    ceemhistorypolicyintdata1{YType::int32, "ceemHistoryPolicyIntData1"},
    ceemhistorypolicyintdata2{YType::int32, "ceemHistoryPolicyIntData2"},
    ceemhistorypolicystrdata{YType::str, "ceemHistoryPolicyStrData"},
    ceemhistorynotifytype{YType::enumeration, "ceemHistoryNotifyType"},
    ceemhistoryeventtype5{YType::uint32, "ceemHistoryEventType5"},
    ceemhistoryeventtype6{YType::uint32, "ceemHistoryEventType6"},
    ceemhistoryeventtype7{YType::uint32, "ceemHistoryEventType7"},
    ceemhistoryeventtype8{YType::uint32, "ceemHistoryEventType8"}
{

    yang_name = "ceemHistoryEventEntry"; yang_parent_name = "ceemHistoryEventTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry::~CeemHistoryEventEntry()
{
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry::has_data() const
{
    if (is_presence_container) return true;
    return ceemhistoryeventindex.is_set
	|| ceemhistoryeventtype1.is_set
	|| ceemhistoryeventtype2.is_set
	|| ceemhistoryeventtype3.is_set
	|| ceemhistoryeventtype4.is_set
	|| ceemhistorypolicypath.is_set
	|| ceemhistorypolicyname.is_set
	|| ceemhistorypolicyexitstatus.is_set
	|| ceemhistorypolicyintdata1.is_set
	|| ceemhistorypolicyintdata2.is_set
	|| ceemhistorypolicystrdata.is_set
	|| ceemhistorynotifytype.is_set
	|| ceemhistoryeventtype5.is_set
	|| ceemhistoryeventtype6.is_set
	|| ceemhistoryeventtype7.is_set
	|| ceemhistoryeventtype8.is_set;
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceemhistoryeventindex.yfilter)
	|| ydk::is_set(ceemhistoryeventtype1.yfilter)
	|| ydk::is_set(ceemhistoryeventtype2.yfilter)
	|| ydk::is_set(ceemhistoryeventtype3.yfilter)
	|| ydk::is_set(ceemhistoryeventtype4.yfilter)
	|| ydk::is_set(ceemhistorypolicypath.yfilter)
	|| ydk::is_set(ceemhistorypolicyname.yfilter)
	|| ydk::is_set(ceemhistorypolicyexitstatus.yfilter)
	|| ydk::is_set(ceemhistorypolicyintdata1.yfilter)
	|| ydk::is_set(ceemhistorypolicyintdata2.yfilter)
	|| ydk::is_set(ceemhistorypolicystrdata.yfilter)
	|| ydk::is_set(ceemhistorynotifytype.yfilter)
	|| ydk::is_set(ceemhistoryeventtype5.yfilter)
	|| ydk::is_set(ceemhistoryeventtype6.yfilter)
	|| ydk::is_set(ceemhistoryeventtype7.yfilter)
	|| ydk::is_set(ceemhistoryeventtype8.yfilter);
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/ceemHistoryEventTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemHistoryEventEntry";
    ADD_KEY_TOKEN(ceemhistoryeventindex, "ceemHistoryEventIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceemhistoryeventindex.is_set || is_set(ceemhistoryeventindex.yfilter)) leaf_name_data.push_back(ceemhistoryeventindex.get_name_leafdata());
    if (ceemhistoryeventtype1.is_set || is_set(ceemhistoryeventtype1.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype1.get_name_leafdata());
    if (ceemhistoryeventtype2.is_set || is_set(ceemhistoryeventtype2.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype2.get_name_leafdata());
    if (ceemhistoryeventtype3.is_set || is_set(ceemhistoryeventtype3.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype3.get_name_leafdata());
    if (ceemhistoryeventtype4.is_set || is_set(ceemhistoryeventtype4.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype4.get_name_leafdata());
    if (ceemhistorypolicypath.is_set || is_set(ceemhistorypolicypath.yfilter)) leaf_name_data.push_back(ceemhistorypolicypath.get_name_leafdata());
    if (ceemhistorypolicyname.is_set || is_set(ceemhistorypolicyname.yfilter)) leaf_name_data.push_back(ceemhistorypolicyname.get_name_leafdata());
    if (ceemhistorypolicyexitstatus.is_set || is_set(ceemhistorypolicyexitstatus.yfilter)) leaf_name_data.push_back(ceemhistorypolicyexitstatus.get_name_leafdata());
    if (ceemhistorypolicyintdata1.is_set || is_set(ceemhistorypolicyintdata1.yfilter)) leaf_name_data.push_back(ceemhistorypolicyintdata1.get_name_leafdata());
    if (ceemhistorypolicyintdata2.is_set || is_set(ceemhistorypolicyintdata2.yfilter)) leaf_name_data.push_back(ceemhistorypolicyintdata2.get_name_leafdata());
    if (ceemhistorypolicystrdata.is_set || is_set(ceemhistorypolicystrdata.yfilter)) leaf_name_data.push_back(ceemhistorypolicystrdata.get_name_leafdata());
    if (ceemhistorynotifytype.is_set || is_set(ceemhistorynotifytype.yfilter)) leaf_name_data.push_back(ceemhistorynotifytype.get_name_leafdata());
    if (ceemhistoryeventtype5.is_set || is_set(ceemhistoryeventtype5.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype5.get_name_leafdata());
    if (ceemhistoryeventtype6.is_set || is_set(ceemhistoryeventtype6.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype6.get_name_leafdata());
    if (ceemhistoryeventtype7.is_set || is_set(ceemhistoryeventtype7.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype7.get_name_leafdata());
    if (ceemhistoryeventtype8.is_set || is_set(ceemhistoryeventtype8.yfilter)) leaf_name_data.push_back(ceemhistoryeventtype8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceemHistoryEventIndex")
    {
        ceemhistoryeventindex = value;
        ceemhistoryeventindex.value_namespace = name_space;
        ceemhistoryeventindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType1")
    {
        ceemhistoryeventtype1 = value;
        ceemhistoryeventtype1.value_namespace = name_space;
        ceemhistoryeventtype1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType2")
    {
        ceemhistoryeventtype2 = value;
        ceemhistoryeventtype2.value_namespace = name_space;
        ceemhistoryeventtype2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType3")
    {
        ceemhistoryeventtype3 = value;
        ceemhistoryeventtype3.value_namespace = name_space;
        ceemhistoryeventtype3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType4")
    {
        ceemhistoryeventtype4 = value;
        ceemhistoryeventtype4.value_namespace = name_space;
        ceemhistoryeventtype4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryPolicyPath")
    {
        ceemhistorypolicypath = value;
        ceemhistorypolicypath.value_namespace = name_space;
        ceemhistorypolicypath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryPolicyName")
    {
        ceemhistorypolicyname = value;
        ceemhistorypolicyname.value_namespace = name_space;
        ceemhistorypolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryPolicyExitStatus")
    {
        ceemhistorypolicyexitstatus = value;
        ceemhistorypolicyexitstatus.value_namespace = name_space;
        ceemhistorypolicyexitstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryPolicyIntData1")
    {
        ceemhistorypolicyintdata1 = value;
        ceemhistorypolicyintdata1.value_namespace = name_space;
        ceemhistorypolicyintdata1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryPolicyIntData2")
    {
        ceemhistorypolicyintdata2 = value;
        ceemhistorypolicyintdata2.value_namespace = name_space;
        ceemhistorypolicyintdata2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryPolicyStrData")
    {
        ceemhistorypolicystrdata = value;
        ceemhistorypolicystrdata.value_namespace = name_space;
        ceemhistorypolicystrdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryNotifyType")
    {
        ceemhistorynotifytype = value;
        ceemhistorynotifytype.value_namespace = name_space;
        ceemhistorynotifytype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType5")
    {
        ceemhistoryeventtype5 = value;
        ceemhistoryeventtype5.value_namespace = name_space;
        ceemhistoryeventtype5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType6")
    {
        ceemhistoryeventtype6 = value;
        ceemhistoryeventtype6.value_namespace = name_space;
        ceemhistoryeventtype6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType7")
    {
        ceemhistoryeventtype7 = value;
        ceemhistoryeventtype7.value_namespace = name_space;
        ceemhistoryeventtype7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemHistoryEventType8")
    {
        ceemhistoryeventtype8 = value;
        ceemhistoryeventtype8.value_namespace = name_space;
        ceemhistoryeventtype8.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceemHistoryEventIndex")
    {
        ceemhistoryeventindex.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType1")
    {
        ceemhistoryeventtype1.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType2")
    {
        ceemhistoryeventtype2.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType3")
    {
        ceemhistoryeventtype3.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType4")
    {
        ceemhistoryeventtype4.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryPolicyPath")
    {
        ceemhistorypolicypath.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryPolicyName")
    {
        ceemhistorypolicyname.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryPolicyExitStatus")
    {
        ceemhistorypolicyexitstatus.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryPolicyIntData1")
    {
        ceemhistorypolicyintdata1.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryPolicyIntData2")
    {
        ceemhistorypolicyintdata2.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryPolicyStrData")
    {
        ceemhistorypolicystrdata.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryNotifyType")
    {
        ceemhistorynotifytype.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType5")
    {
        ceemhistoryeventtype5.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType6")
    {
        ceemhistoryeventtype6.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType7")
    {
        ceemhistoryeventtype7.yfilter = yfilter;
    }
    if(value_path == "ceemHistoryEventType8")
    {
        ceemhistoryeventtype8.yfilter = yfilter;
    }
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemHistoryEventTable::CeemHistoryEventEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemHistoryEventIndex" || name == "ceemHistoryEventType1" || name == "ceemHistoryEventType2" || name == "ceemHistoryEventType3" || name == "ceemHistoryEventType4" || name == "ceemHistoryPolicyPath" || name == "ceemHistoryPolicyName" || name == "ceemHistoryPolicyExitStatus" || name == "ceemHistoryPolicyIntData1" || name == "ceemHistoryPolicyIntData2" || name == "ceemHistoryPolicyStrData" || name == "ceemHistoryNotifyType" || name == "ceemHistoryEventType5" || name == "ceemHistoryEventType6" || name == "ceemHistoryEventType7" || name == "ceemHistoryEventType8")
        return true;
    return false;
}

CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyTable()
    :
    ceemregisteredpolicyentry(this, {"ceemregisteredpolicyindex"})
{

    yang_name = "ceemRegisteredPolicyTable"; yang_parent_name = "CISCO-EMBEDDED-EVENT-MGR-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::~CeemRegisteredPolicyTable()
{
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceemregisteredpolicyentry.len(); index++)
    {
        if(ceemregisteredpolicyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::has_operation() const
{
    for (std::size_t index=0; index<ceemregisteredpolicyentry.len(); index++)
    {
        if(ceemregisteredpolicyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemRegisteredPolicyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceemRegisteredPolicyEntry")
    {
        auto c = std::make_shared<CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry>();
        c->parent = this;
        ceemregisteredpolicyentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceemregisteredpolicyentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemRegisteredPolicyEntry")
        return true;
    return false;
}

CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::CeemRegisteredPolicyEntry()
    :
    ceemregisteredpolicyindex{YType::uint32, "ceemRegisteredPolicyIndex"},
    ceemregisteredpolicyname{YType::str, "ceemRegisteredPolicyName"},
    ceemregisteredpolicyeventtype1{YType::uint32, "ceemRegisteredPolicyEventType1"},
    ceemregisteredpolicyeventtype2{YType::uint32, "ceemRegisteredPolicyEventType2"},
    ceemregisteredpolicyeventtype3{YType::uint32, "ceemRegisteredPolicyEventType3"},
    ceemregisteredpolicyeventtype4{YType::uint32, "ceemRegisteredPolicyEventType4"},
    ceemregisteredpolicystatus{YType::enumeration, "ceemRegisteredPolicyStatus"},
    ceemregisteredpolicytype{YType::enumeration, "ceemRegisteredPolicyType"},
    ceemregisteredpolicynotifflag{YType::boolean, "ceemRegisteredPolicyNotifFlag"},
    ceemregisteredpolicyregtime{YType::str, "ceemRegisteredPolicyRegTime"},
    ceemregisteredpolicyenabledtime{YType::str, "ceemRegisteredPolicyEnabledTime"},
    ceemregisteredpolicyruntime{YType::str, "ceemRegisteredPolicyRunTime"},
    ceemregisteredpolicyruncount{YType::uint32, "ceemRegisteredPolicyRunCount"},
    ceemregisteredpolicyeventtype5{YType::uint32, "ceemRegisteredPolicyEventType5"},
    ceemregisteredpolicyeventtype6{YType::uint32, "ceemRegisteredPolicyEventType6"},
    ceemregisteredpolicyeventtype7{YType::uint32, "ceemRegisteredPolicyEventType7"},
    ceemregisteredpolicyeventtype8{YType::uint32, "ceemRegisteredPolicyEventType8"}
{

    yang_name = "ceemRegisteredPolicyEntry"; yang_parent_name = "ceemRegisteredPolicyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::~CeemRegisteredPolicyEntry()
{
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::has_data() const
{
    if (is_presence_container) return true;
    return ceemregisteredpolicyindex.is_set
	|| ceemregisteredpolicyname.is_set
	|| ceemregisteredpolicyeventtype1.is_set
	|| ceemregisteredpolicyeventtype2.is_set
	|| ceemregisteredpolicyeventtype3.is_set
	|| ceemregisteredpolicyeventtype4.is_set
	|| ceemregisteredpolicystatus.is_set
	|| ceemregisteredpolicytype.is_set
	|| ceemregisteredpolicynotifflag.is_set
	|| ceemregisteredpolicyregtime.is_set
	|| ceemregisteredpolicyenabledtime.is_set
	|| ceemregisteredpolicyruntime.is_set
	|| ceemregisteredpolicyruncount.is_set
	|| ceemregisteredpolicyeventtype5.is_set
	|| ceemregisteredpolicyeventtype6.is_set
	|| ceemregisteredpolicyeventtype7.is_set
	|| ceemregisteredpolicyeventtype8.is_set;
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceemregisteredpolicyindex.yfilter)
	|| ydk::is_set(ceemregisteredpolicyname.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype1.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype2.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype3.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype4.yfilter)
	|| ydk::is_set(ceemregisteredpolicystatus.yfilter)
	|| ydk::is_set(ceemregisteredpolicytype.yfilter)
	|| ydk::is_set(ceemregisteredpolicynotifflag.yfilter)
	|| ydk::is_set(ceemregisteredpolicyregtime.yfilter)
	|| ydk::is_set(ceemregisteredpolicyenabledtime.yfilter)
	|| ydk::is_set(ceemregisteredpolicyruntime.yfilter)
	|| ydk::is_set(ceemregisteredpolicyruncount.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype5.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype6.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype7.yfilter)
	|| ydk::is_set(ceemregisteredpolicyeventtype8.yfilter);
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-EMBEDDED-EVENT-MGR-MIB:CISCO-EMBEDDED-EVENT-MGR-MIB/ceemRegisteredPolicyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceemRegisteredPolicyEntry";
    ADD_KEY_TOKEN(ceemregisteredpolicyindex, "ceemRegisteredPolicyIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceemregisteredpolicyindex.is_set || is_set(ceemregisteredpolicyindex.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyindex.get_name_leafdata());
    if (ceemregisteredpolicyname.is_set || is_set(ceemregisteredpolicyname.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyname.get_name_leafdata());
    if (ceemregisteredpolicyeventtype1.is_set || is_set(ceemregisteredpolicyeventtype1.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype1.get_name_leafdata());
    if (ceemregisteredpolicyeventtype2.is_set || is_set(ceemregisteredpolicyeventtype2.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype2.get_name_leafdata());
    if (ceemregisteredpolicyeventtype3.is_set || is_set(ceemregisteredpolicyeventtype3.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype3.get_name_leafdata());
    if (ceemregisteredpolicyeventtype4.is_set || is_set(ceemregisteredpolicyeventtype4.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype4.get_name_leafdata());
    if (ceemregisteredpolicystatus.is_set || is_set(ceemregisteredpolicystatus.yfilter)) leaf_name_data.push_back(ceemregisteredpolicystatus.get_name_leafdata());
    if (ceemregisteredpolicytype.is_set || is_set(ceemregisteredpolicytype.yfilter)) leaf_name_data.push_back(ceemregisteredpolicytype.get_name_leafdata());
    if (ceemregisteredpolicynotifflag.is_set || is_set(ceemregisteredpolicynotifflag.yfilter)) leaf_name_data.push_back(ceemregisteredpolicynotifflag.get_name_leafdata());
    if (ceemregisteredpolicyregtime.is_set || is_set(ceemregisteredpolicyregtime.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyregtime.get_name_leafdata());
    if (ceemregisteredpolicyenabledtime.is_set || is_set(ceemregisteredpolicyenabledtime.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyenabledtime.get_name_leafdata());
    if (ceemregisteredpolicyruntime.is_set || is_set(ceemregisteredpolicyruntime.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyruntime.get_name_leafdata());
    if (ceemregisteredpolicyruncount.is_set || is_set(ceemregisteredpolicyruncount.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyruncount.get_name_leafdata());
    if (ceemregisteredpolicyeventtype5.is_set || is_set(ceemregisteredpolicyeventtype5.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype5.get_name_leafdata());
    if (ceemregisteredpolicyeventtype6.is_set || is_set(ceemregisteredpolicyeventtype6.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype6.get_name_leafdata());
    if (ceemregisteredpolicyeventtype7.is_set || is_set(ceemregisteredpolicyeventtype7.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype7.get_name_leafdata());
    if (ceemregisteredpolicyeventtype8.is_set || is_set(ceemregisteredpolicyeventtype8.yfilter)) leaf_name_data.push_back(ceemregisteredpolicyeventtype8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceemRegisteredPolicyIndex")
    {
        ceemregisteredpolicyindex = value;
        ceemregisteredpolicyindex.value_namespace = name_space;
        ceemregisteredpolicyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyName")
    {
        ceemregisteredpolicyname = value;
        ceemregisteredpolicyname.value_namespace = name_space;
        ceemregisteredpolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType1")
    {
        ceemregisteredpolicyeventtype1 = value;
        ceemregisteredpolicyeventtype1.value_namespace = name_space;
        ceemregisteredpolicyeventtype1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType2")
    {
        ceemregisteredpolicyeventtype2 = value;
        ceemregisteredpolicyeventtype2.value_namespace = name_space;
        ceemregisteredpolicyeventtype2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType3")
    {
        ceemregisteredpolicyeventtype3 = value;
        ceemregisteredpolicyeventtype3.value_namespace = name_space;
        ceemregisteredpolicyeventtype3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType4")
    {
        ceemregisteredpolicyeventtype4 = value;
        ceemregisteredpolicyeventtype4.value_namespace = name_space;
        ceemregisteredpolicyeventtype4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyStatus")
    {
        ceemregisteredpolicystatus = value;
        ceemregisteredpolicystatus.value_namespace = name_space;
        ceemregisteredpolicystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyType")
    {
        ceemregisteredpolicytype = value;
        ceemregisteredpolicytype.value_namespace = name_space;
        ceemregisteredpolicytype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyNotifFlag")
    {
        ceemregisteredpolicynotifflag = value;
        ceemregisteredpolicynotifflag.value_namespace = name_space;
        ceemregisteredpolicynotifflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyRegTime")
    {
        ceemregisteredpolicyregtime = value;
        ceemregisteredpolicyregtime.value_namespace = name_space;
        ceemregisteredpolicyregtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEnabledTime")
    {
        ceemregisteredpolicyenabledtime = value;
        ceemregisteredpolicyenabledtime.value_namespace = name_space;
        ceemregisteredpolicyenabledtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyRunTime")
    {
        ceemregisteredpolicyruntime = value;
        ceemregisteredpolicyruntime.value_namespace = name_space;
        ceemregisteredpolicyruntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyRunCount")
    {
        ceemregisteredpolicyruncount = value;
        ceemregisteredpolicyruncount.value_namespace = name_space;
        ceemregisteredpolicyruncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType5")
    {
        ceemregisteredpolicyeventtype5 = value;
        ceemregisteredpolicyeventtype5.value_namespace = name_space;
        ceemregisteredpolicyeventtype5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType6")
    {
        ceemregisteredpolicyeventtype6 = value;
        ceemregisteredpolicyeventtype6.value_namespace = name_space;
        ceemregisteredpolicyeventtype6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType7")
    {
        ceemregisteredpolicyeventtype7 = value;
        ceemregisteredpolicyeventtype7.value_namespace = name_space;
        ceemregisteredpolicyeventtype7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceemRegisteredPolicyEventType8")
    {
        ceemregisteredpolicyeventtype8 = value;
        ceemregisteredpolicyeventtype8.value_namespace = name_space;
        ceemregisteredpolicyeventtype8.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceemRegisteredPolicyIndex")
    {
        ceemregisteredpolicyindex.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyName")
    {
        ceemregisteredpolicyname.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType1")
    {
        ceemregisteredpolicyeventtype1.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType2")
    {
        ceemregisteredpolicyeventtype2.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType3")
    {
        ceemregisteredpolicyeventtype3.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType4")
    {
        ceemregisteredpolicyeventtype4.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyStatus")
    {
        ceemregisteredpolicystatus.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyType")
    {
        ceemregisteredpolicytype.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyNotifFlag")
    {
        ceemregisteredpolicynotifflag.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyRegTime")
    {
        ceemregisteredpolicyregtime.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEnabledTime")
    {
        ceemregisteredpolicyenabledtime.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyRunTime")
    {
        ceemregisteredpolicyruntime.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyRunCount")
    {
        ceemregisteredpolicyruncount.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType5")
    {
        ceemregisteredpolicyeventtype5.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType6")
    {
        ceemregisteredpolicyeventtype6.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType7")
    {
        ceemregisteredpolicyeventtype7.yfilter = yfilter;
    }
    if(value_path == "ceemRegisteredPolicyEventType8")
    {
        ceemregisteredpolicyeventtype8.yfilter = yfilter;
    }
}

bool CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceemRegisteredPolicyIndex" || name == "ceemRegisteredPolicyName" || name == "ceemRegisteredPolicyEventType1" || name == "ceemRegisteredPolicyEventType2" || name == "ceemRegisteredPolicyEventType3" || name == "ceemRegisteredPolicyEventType4" || name == "ceemRegisteredPolicyStatus" || name == "ceemRegisteredPolicyType" || name == "ceemRegisteredPolicyNotifFlag" || name == "ceemRegisteredPolicyRegTime" || name == "ceemRegisteredPolicyEnabledTime" || name == "ceemRegisteredPolicyRunTime" || name == "ceemRegisteredPolicyRunCount" || name == "ceemRegisteredPolicyEventType5" || name == "ceemRegisteredPolicyEventType6" || name == "ceemRegisteredPolicyEventType7" || name == "ceemRegisteredPolicyEventType8")
        return true;
    return false;
}

const Enum::YLeaf NotifySource::server {1, "server"};
const Enum::YLeaf NotifySource::policy {2, "policy"};

const Enum::YLeaf CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::CeemRegisteredPolicyStatus::enabled {1, "enabled"};
const Enum::YLeaf CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::CeemRegisteredPolicyStatus::disabled {2, "disabled"};

const Enum::YLeaf CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::CeemRegisteredPolicyType::user {1, "user"};
const Enum::YLeaf CISCOEMBEDDEDEVENTMGRMIB::CeemRegisteredPolicyTable::CeemRegisteredPolicyEntry::CeemRegisteredPolicyType::system {2, "system"};


}
}

