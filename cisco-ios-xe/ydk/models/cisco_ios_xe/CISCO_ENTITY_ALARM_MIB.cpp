
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_ALARM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ENTITY_ALARM_MIB {

CISCOENTITYALARMMIB::CISCOENTITYALARMMIB()
    :
    cealarmmonitoring(std::make_shared<CISCOENTITYALARMMIB::CeAlarmMonitoring>())
    , cealarmhistory(std::make_shared<CISCOENTITYALARMMIB::CeAlarmHistory>())
    , cealarmfiltering(std::make_shared<CISCOENTITYALARMMIB::CeAlarmFiltering>())
    , cealarmdescrmaptable(std::make_shared<CISCOENTITYALARMMIB::CeAlarmDescrMapTable>())
    , cealarmdescrtable(std::make_shared<CISCOENTITYALARMMIB::CeAlarmDescrTable>())
    , cealarmtable(std::make_shared<CISCOENTITYALARMMIB::CeAlarmTable>())
    , cealarmhisttable(std::make_shared<CISCOENTITYALARMMIB::CeAlarmHistTable>())
    , cealarmfilterprofiletable(std::make_shared<CISCOENTITYALARMMIB::CeAlarmFilterProfileTable>())
{
    cealarmmonitoring->parent = this;
    cealarmhistory->parent = this;
    cealarmfiltering->parent = this;
    cealarmdescrmaptable->parent = this;
    cealarmdescrtable->parent = this;
    cealarmtable->parent = this;
    cealarmhisttable->parent = this;
    cealarmfilterprofiletable->parent = this;

    yang_name = "CISCO-ENTITY-ALARM-MIB"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::~CISCOENTITYALARMMIB()
{
}

bool CISCOENTITYALARMMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cealarmmonitoring !=  nullptr && cealarmmonitoring->has_data())
	|| (cealarmhistory !=  nullptr && cealarmhistory->has_data())
	|| (cealarmfiltering !=  nullptr && cealarmfiltering->has_data())
	|| (cealarmdescrmaptable !=  nullptr && cealarmdescrmaptable->has_data())
	|| (cealarmdescrtable !=  nullptr && cealarmdescrtable->has_data())
	|| (cealarmtable !=  nullptr && cealarmtable->has_data())
	|| (cealarmhisttable !=  nullptr && cealarmhisttable->has_data())
	|| (cealarmfilterprofiletable !=  nullptr && cealarmfilterprofiletable->has_data());
}

bool CISCOENTITYALARMMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cealarmmonitoring !=  nullptr && cealarmmonitoring->has_operation())
	|| (cealarmhistory !=  nullptr && cealarmhistory->has_operation())
	|| (cealarmfiltering !=  nullptr && cealarmfiltering->has_operation())
	|| (cealarmdescrmaptable !=  nullptr && cealarmdescrmaptable->has_operation())
	|| (cealarmdescrtable !=  nullptr && cealarmdescrtable->has_operation())
	|| (cealarmtable !=  nullptr && cealarmtable->has_operation())
	|| (cealarmhisttable !=  nullptr && cealarmhisttable->has_operation())
	|| (cealarmfilterprofiletable !=  nullptr && cealarmfilterprofiletable->has_operation());
}

std::string CISCOENTITYALARMMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmMonitoring")
    {
        if(cealarmmonitoring == nullptr)
        {
            cealarmmonitoring = std::make_shared<CISCOENTITYALARMMIB::CeAlarmMonitoring>();
        }
        return cealarmmonitoring;
    }

    if(child_yang_name == "ceAlarmHistory")
    {
        if(cealarmhistory == nullptr)
        {
            cealarmhistory = std::make_shared<CISCOENTITYALARMMIB::CeAlarmHistory>();
        }
        return cealarmhistory;
    }

    if(child_yang_name == "ceAlarmFiltering")
    {
        if(cealarmfiltering == nullptr)
        {
            cealarmfiltering = std::make_shared<CISCOENTITYALARMMIB::CeAlarmFiltering>();
        }
        return cealarmfiltering;
    }

    if(child_yang_name == "ceAlarmDescrMapTable")
    {
        if(cealarmdescrmaptable == nullptr)
        {
            cealarmdescrmaptable = std::make_shared<CISCOENTITYALARMMIB::CeAlarmDescrMapTable>();
        }
        return cealarmdescrmaptable;
    }

    if(child_yang_name == "ceAlarmDescrTable")
    {
        if(cealarmdescrtable == nullptr)
        {
            cealarmdescrtable = std::make_shared<CISCOENTITYALARMMIB::CeAlarmDescrTable>();
        }
        return cealarmdescrtable;
    }

    if(child_yang_name == "ceAlarmTable")
    {
        if(cealarmtable == nullptr)
        {
            cealarmtable = std::make_shared<CISCOENTITYALARMMIB::CeAlarmTable>();
        }
        return cealarmtable;
    }

    if(child_yang_name == "ceAlarmHistTable")
    {
        if(cealarmhisttable == nullptr)
        {
            cealarmhisttable = std::make_shared<CISCOENTITYALARMMIB::CeAlarmHistTable>();
        }
        return cealarmhisttable;
    }

    if(child_yang_name == "ceAlarmFilterProfileTable")
    {
        if(cealarmfilterprofiletable == nullptr)
        {
            cealarmfilterprofiletable = std::make_shared<CISCOENTITYALARMMIB::CeAlarmFilterProfileTable>();
        }
        return cealarmfilterprofiletable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cealarmmonitoring != nullptr)
    {
        children["ceAlarmMonitoring"] = cealarmmonitoring;
    }

    if(cealarmhistory != nullptr)
    {
        children["ceAlarmHistory"] = cealarmhistory;
    }

    if(cealarmfiltering != nullptr)
    {
        children["ceAlarmFiltering"] = cealarmfiltering;
    }

    if(cealarmdescrmaptable != nullptr)
    {
        children["ceAlarmDescrMapTable"] = cealarmdescrmaptable;
    }

    if(cealarmdescrtable != nullptr)
    {
        children["ceAlarmDescrTable"] = cealarmdescrtable;
    }

    if(cealarmtable != nullptr)
    {
        children["ceAlarmTable"] = cealarmtable;
    }

    if(cealarmhisttable != nullptr)
    {
        children["ceAlarmHistTable"] = cealarmhisttable;
    }

    if(cealarmfilterprofiletable != nullptr)
    {
        children["ceAlarmFilterProfileTable"] = cealarmfilterprofiletable;
    }

    return children;
}

void CISCOENTITYALARMMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYALARMMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::clone_ptr() const
{
    return std::make_shared<CISCOENTITYALARMMIB>();
}

std::string CISCOENTITYALARMMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOENTITYALARMMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOENTITYALARMMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOENTITYALARMMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOENTITYALARMMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmMonitoring" || name == "ceAlarmHistory" || name == "ceAlarmFiltering" || name == "ceAlarmDescrMapTable" || name == "ceAlarmDescrTable" || name == "ceAlarmTable" || name == "ceAlarmHistTable" || name == "ceAlarmFilterProfileTable")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmMonitoring::CeAlarmMonitoring()
    :
    cealarmcriticalcount{YType::uint32, "ceAlarmCriticalCount"},
    cealarmmajorcount{YType::uint32, "ceAlarmMajorCount"},
    cealarmminorcount{YType::uint32, "ceAlarmMinorCount"},
    cealarmcutoff{YType::boolean, "ceAlarmCutOff"}
{

    yang_name = "ceAlarmMonitoring"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmMonitoring::~CeAlarmMonitoring()
{
}

bool CISCOENTITYALARMMIB::CeAlarmMonitoring::has_data() const
{
    if (is_presence_container) return true;
    return cealarmcriticalcount.is_set
	|| cealarmmajorcount.is_set
	|| cealarmminorcount.is_set
	|| cealarmcutoff.is_set;
}

bool CISCOENTITYALARMMIB::CeAlarmMonitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmcriticalcount.yfilter)
	|| ydk::is_set(cealarmmajorcount.yfilter)
	|| ydk::is_set(cealarmminorcount.yfilter)
	|| ydk::is_set(cealarmcutoff.yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmMonitoring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmMonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmMonitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmMonitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmcriticalcount.is_set || is_set(cealarmcriticalcount.yfilter)) leaf_name_data.push_back(cealarmcriticalcount.get_name_leafdata());
    if (cealarmmajorcount.is_set || is_set(cealarmmajorcount.yfilter)) leaf_name_data.push_back(cealarmmajorcount.get_name_leafdata());
    if (cealarmminorcount.is_set || is_set(cealarmminorcount.yfilter)) leaf_name_data.push_back(cealarmminorcount.get_name_leafdata());
    if (cealarmcutoff.is_set || is_set(cealarmcutoff.yfilter)) leaf_name_data.push_back(cealarmcutoff.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYALARMMIB::CeAlarmMonitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmCriticalCount")
    {
        cealarmcriticalcount = value;
        cealarmcriticalcount.value_namespace = name_space;
        cealarmcriticalcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmMajorCount")
    {
        cealarmmajorcount = value;
        cealarmmajorcount.value_namespace = name_space;
        cealarmmajorcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmMinorCount")
    {
        cealarmminorcount = value;
        cealarmminorcount.value_namespace = name_space;
        cealarmminorcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmCutOff")
    {
        cealarmcutoff = value;
        cealarmcutoff.value_namespace = name_space;
        cealarmcutoff.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYALARMMIB::CeAlarmMonitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmCriticalCount")
    {
        cealarmcriticalcount.yfilter = yfilter;
    }
    if(value_path == "ceAlarmMajorCount")
    {
        cealarmmajorcount.yfilter = yfilter;
    }
    if(value_path == "ceAlarmMinorCount")
    {
        cealarmminorcount.yfilter = yfilter;
    }
    if(value_path == "ceAlarmCutOff")
    {
        cealarmcutoff.yfilter = yfilter;
    }
}

bool CISCOENTITYALARMMIB::CeAlarmMonitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmCriticalCount" || name == "ceAlarmMajorCount" || name == "ceAlarmMinorCount" || name == "ceAlarmCutOff")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmHistory::CeAlarmHistory()
    :
    cealarmhisttablesize{YType::int32, "ceAlarmHistTableSize"},
    cealarmhistlastindex{YType::uint32, "ceAlarmHistLastIndex"}
{

    yang_name = "ceAlarmHistory"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmHistory::~CeAlarmHistory()
{
}

bool CISCOENTITYALARMMIB::CeAlarmHistory::has_data() const
{
    if (is_presence_container) return true;
    return cealarmhisttablesize.is_set
	|| cealarmhistlastindex.is_set;
}

bool CISCOENTITYALARMMIB::CeAlarmHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmhisttablesize.yfilter)
	|| ydk::is_set(cealarmhistlastindex.yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmHistory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmhisttablesize.is_set || is_set(cealarmhisttablesize.yfilter)) leaf_name_data.push_back(cealarmhisttablesize.get_name_leafdata());
    if (cealarmhistlastindex.is_set || is_set(cealarmhistlastindex.yfilter)) leaf_name_data.push_back(cealarmhistlastindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYALARMMIB::CeAlarmHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmHistTableSize")
    {
        cealarmhisttablesize = value;
        cealarmhisttablesize.value_namespace = name_space;
        cealarmhisttablesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmHistLastIndex")
    {
        cealarmhistlastindex = value;
        cealarmhistlastindex.value_namespace = name_space;
        cealarmhistlastindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYALARMMIB::CeAlarmHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmHistTableSize")
    {
        cealarmhisttablesize.yfilter = yfilter;
    }
    if(value_path == "ceAlarmHistLastIndex")
    {
        cealarmhistlastindex.yfilter = yfilter;
    }
}

bool CISCOENTITYALARMMIB::CeAlarmHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmHistTableSize" || name == "ceAlarmHistLastIndex")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmFiltering::CeAlarmFiltering()
    :
    cealarmnotifiesenable{YType::int32, "ceAlarmNotifiesEnable"},
    cealarmsyslogenable{YType::int32, "ceAlarmSyslogEnable"},
    cealarmfilterprofileindexnext{YType::uint32, "ceAlarmFilterProfileIndexNext"}
{

    yang_name = "ceAlarmFiltering"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmFiltering::~CeAlarmFiltering()
{
}

bool CISCOENTITYALARMMIB::CeAlarmFiltering::has_data() const
{
    if (is_presence_container) return true;
    return cealarmnotifiesenable.is_set
	|| cealarmsyslogenable.is_set
	|| cealarmfilterprofileindexnext.is_set;
}

bool CISCOENTITYALARMMIB::CeAlarmFiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmnotifiesenable.yfilter)
	|| ydk::is_set(cealarmsyslogenable.yfilter)
	|| ydk::is_set(cealarmfilterprofileindexnext.yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmFiltering::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmFiltering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmnotifiesenable.is_set || is_set(cealarmnotifiesenable.yfilter)) leaf_name_data.push_back(cealarmnotifiesenable.get_name_leafdata());
    if (cealarmsyslogenable.is_set || is_set(cealarmsyslogenable.yfilter)) leaf_name_data.push_back(cealarmsyslogenable.get_name_leafdata());
    if (cealarmfilterprofileindexnext.is_set || is_set(cealarmfilterprofileindexnext.yfilter)) leaf_name_data.push_back(cealarmfilterprofileindexnext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYALARMMIB::CeAlarmFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmNotifiesEnable")
    {
        cealarmnotifiesenable = value;
        cealarmnotifiesenable.value_namespace = name_space;
        cealarmnotifiesenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmSyslogEnable")
    {
        cealarmsyslogenable = value;
        cealarmsyslogenable.value_namespace = name_space;
        cealarmsyslogenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterProfileIndexNext")
    {
        cealarmfilterprofileindexnext = value;
        cealarmfilterprofileindexnext.value_namespace = name_space;
        cealarmfilterprofileindexnext.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYALARMMIB::CeAlarmFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmNotifiesEnable")
    {
        cealarmnotifiesenable.yfilter = yfilter;
    }
    if(value_path == "ceAlarmSyslogEnable")
    {
        cealarmsyslogenable.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterProfileIndexNext")
    {
        cealarmfilterprofileindexnext.yfilter = yfilter;
    }
}

bool CISCOENTITYALARMMIB::CeAlarmFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmNotifiesEnable" || name == "ceAlarmSyslogEnable" || name == "ceAlarmFilterProfileIndexNext")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapTable()
    :
    cealarmdescrmapentry(this, {"cealarmdescrindex"})
{

    yang_name = "ceAlarmDescrMapTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmDescrMapTable::~CeAlarmDescrMapTable()
{
}

bool CISCOENTITYALARMMIB::CeAlarmDescrMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cealarmdescrmapentry.len(); index++)
    {
        if(cealarmdescrmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYALARMMIB::CeAlarmDescrMapTable::has_operation() const
{
    for (std::size_t index=0; index<cealarmdescrmapentry.len(); index++)
    {
        if(cealarmdescrmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmDescrMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmDescrMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmDescrMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmDescrMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmDescrMapEntry")
    {
        auto c = std::make_shared<CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry>();
        c->parent = this;
        cealarmdescrmapentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmDescrMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cealarmdescrmapentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYALARMMIB::CeAlarmDescrMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYALARMMIB::CeAlarmDescrMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYALARMMIB::CeAlarmDescrMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrMapEntry")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::CeAlarmDescrMapEntry()
    :
    cealarmdescrindex{YType::uint32, "ceAlarmDescrIndex"},
    cealarmdescrvendortype{YType::str, "ceAlarmDescrVendorType"}
{

    yang_name = "ceAlarmDescrMapEntry"; yang_parent_name = "ceAlarmDescrMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::~CeAlarmDescrMapEntry()
{
}

bool CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return cealarmdescrindex.is_set
	|| cealarmdescrvendortype.is_set;
}

bool CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmdescrindex.yfilter)
	|| ydk::is_set(cealarmdescrvendortype.yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmDescrMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrMapEntry";
    ADD_KEY_TOKEN(cealarmdescrindex, "ceAlarmDescrIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmdescrindex.is_set || is_set(cealarmdescrindex.yfilter)) leaf_name_data.push_back(cealarmdescrindex.get_name_leafdata());
    if (cealarmdescrvendortype.is_set || is_set(cealarmdescrvendortype.yfilter)) leaf_name_data.push_back(cealarmdescrvendortype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmDescrIndex")
    {
        cealarmdescrindex = value;
        cealarmdescrindex.value_namespace = name_space;
        cealarmdescrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmDescrVendorType")
    {
        cealarmdescrvendortype = value;
        cealarmdescrvendortype.value_namespace = name_space;
        cealarmdescrvendortype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmDescrIndex")
    {
        cealarmdescrindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmDescrVendorType")
    {
        cealarmdescrvendortype.yfilter = yfilter;
    }
}

bool CISCOENTITYALARMMIB::CeAlarmDescrMapTable::CeAlarmDescrMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrIndex" || name == "ceAlarmDescrVendorType")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrTable()
    :
    cealarmdescrentry(this, {"cealarmdescrindex", "cealarmdescralarmtype"})
{

    yang_name = "ceAlarmDescrTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmDescrTable::~CeAlarmDescrTable()
{
}

bool CISCOENTITYALARMMIB::CeAlarmDescrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cealarmdescrentry.len(); index++)
    {
        if(cealarmdescrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYALARMMIB::CeAlarmDescrTable::has_operation() const
{
    for (std::size_t index=0; index<cealarmdescrentry.len(); index++)
    {
        if(cealarmdescrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmDescrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmDescrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmDescrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmDescrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmDescrEntry")
    {
        auto c = std::make_shared<CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry>();
        c->parent = this;
        cealarmdescrentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmDescrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cealarmdescrentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYALARMMIB::CeAlarmDescrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYALARMMIB::CeAlarmDescrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYALARMMIB::CeAlarmDescrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrEntry")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry::CeAlarmDescrEntry()
    :
    cealarmdescrindex{YType::str, "ceAlarmDescrIndex"},
    cealarmdescralarmtype{YType::int32, "ceAlarmDescrAlarmType"},
    cealarmdescrseverity{YType::int32, "ceAlarmDescrSeverity"},
    cealarmdescrtext{YType::str, "ceAlarmDescrText"}
{

    yang_name = "ceAlarmDescrEntry"; yang_parent_name = "ceAlarmDescrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry::~CeAlarmDescrEntry()
{
}

bool CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry::has_data() const
{
    if (is_presence_container) return true;
    return cealarmdescrindex.is_set
	|| cealarmdescralarmtype.is_set
	|| cealarmdescrseverity.is_set
	|| cealarmdescrtext.is_set;
}

bool CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmdescrindex.yfilter)
	|| ydk::is_set(cealarmdescralarmtype.yfilter)
	|| ydk::is_set(cealarmdescrseverity.yfilter)
	|| ydk::is_set(cealarmdescrtext.yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmDescrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrEntry";
    ADD_KEY_TOKEN(cealarmdescrindex, "ceAlarmDescrIndex");
    ADD_KEY_TOKEN(cealarmdescralarmtype, "ceAlarmDescrAlarmType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmdescrindex.is_set || is_set(cealarmdescrindex.yfilter)) leaf_name_data.push_back(cealarmdescrindex.get_name_leafdata());
    if (cealarmdescralarmtype.is_set || is_set(cealarmdescralarmtype.yfilter)) leaf_name_data.push_back(cealarmdescralarmtype.get_name_leafdata());
    if (cealarmdescrseverity.is_set || is_set(cealarmdescrseverity.yfilter)) leaf_name_data.push_back(cealarmdescrseverity.get_name_leafdata());
    if (cealarmdescrtext.is_set || is_set(cealarmdescrtext.yfilter)) leaf_name_data.push_back(cealarmdescrtext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmDescrIndex")
    {
        cealarmdescrindex = value;
        cealarmdescrindex.value_namespace = name_space;
        cealarmdescrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmDescrAlarmType")
    {
        cealarmdescralarmtype = value;
        cealarmdescralarmtype.value_namespace = name_space;
        cealarmdescralarmtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmDescrSeverity")
    {
        cealarmdescrseverity = value;
        cealarmdescrseverity.value_namespace = name_space;
        cealarmdescrseverity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmDescrText")
    {
        cealarmdescrtext = value;
        cealarmdescrtext.value_namespace = name_space;
        cealarmdescrtext.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmDescrIndex")
    {
        cealarmdescrindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmDescrAlarmType")
    {
        cealarmdescralarmtype.yfilter = yfilter;
    }
    if(value_path == "ceAlarmDescrSeverity")
    {
        cealarmdescrseverity.yfilter = yfilter;
    }
    if(value_path == "ceAlarmDescrText")
    {
        cealarmdescrtext.yfilter = yfilter;
    }
}

bool CISCOENTITYALARMMIB::CeAlarmDescrTable::CeAlarmDescrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrIndex" || name == "ceAlarmDescrAlarmType" || name == "ceAlarmDescrSeverity" || name == "ceAlarmDescrText")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmTable()
    :
    cealarmentry(this, {"entphysicalindex"})
{

    yang_name = "ceAlarmTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmTable::~CeAlarmTable()
{
}

bool CISCOENTITYALARMMIB::CeAlarmTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cealarmentry.len(); index++)
    {
        if(cealarmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYALARMMIB::CeAlarmTable::has_operation() const
{
    for (std::size_t index=0; index<cealarmentry.len(); index++)
    {
        if(cealarmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmEntry")
    {
        auto c = std::make_shared<CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry>();
        c->parent = this;
        cealarmentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cealarmentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYALARMMIB::CeAlarmTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYALARMMIB::CeAlarmTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYALARMMIB::CeAlarmTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmEntry")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry::CeAlarmEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cealarmfilterprofile{YType::uint32, "ceAlarmFilterProfile"},
    cealarmseverity{YType::int32, "ceAlarmSeverity"},
    cealarmlist{YType::str, "ceAlarmList"}
{

    yang_name = "ceAlarmEntry"; yang_parent_name = "ceAlarmTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry::~CeAlarmEntry()
{
}

bool CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cealarmfilterprofile.is_set
	|| cealarmseverity.is_set
	|| cealarmlist.is_set;
}

bool CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cealarmfilterprofile.yfilter)
	|| ydk::is_set(cealarmseverity.yfilter)
	|| ydk::is_set(cealarmlist.yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cealarmfilterprofile.is_set || is_set(cealarmfilterprofile.yfilter)) leaf_name_data.push_back(cealarmfilterprofile.get_name_leafdata());
    if (cealarmseverity.is_set || is_set(cealarmseverity.yfilter)) leaf_name_data.push_back(cealarmseverity.get_name_leafdata());
    if (cealarmlist.is_set || is_set(cealarmlist.yfilter)) leaf_name_data.push_back(cealarmlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterProfile")
    {
        cealarmfilterprofile = value;
        cealarmfilterprofile.value_namespace = name_space;
        cealarmfilterprofile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmSeverity")
    {
        cealarmseverity = value;
        cealarmseverity.value_namespace = name_space;
        cealarmseverity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmList")
    {
        cealarmlist = value;
        cealarmlist.value_namespace = name_space;
        cealarmlist.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterProfile")
    {
        cealarmfilterprofile.yfilter = yfilter;
    }
    if(value_path == "ceAlarmSeverity")
    {
        cealarmseverity.yfilter = yfilter;
    }
    if(value_path == "ceAlarmList")
    {
        cealarmlist.yfilter = yfilter;
    }
}

bool CISCOENTITYALARMMIB::CeAlarmTable::CeAlarmEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceAlarmFilterProfile" || name == "ceAlarmSeverity" || name == "ceAlarmList")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistTable()
    :
    cealarmhistentry(this, {"cealarmhistindex"})
{

    yang_name = "ceAlarmHistTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmHistTable::~CeAlarmHistTable()
{
}

bool CISCOENTITYALARMMIB::CeAlarmHistTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cealarmhistentry.len(); index++)
    {
        if(cealarmhistentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYALARMMIB::CeAlarmHistTable::has_operation() const
{
    for (std::size_t index=0; index<cealarmhistentry.len(); index++)
    {
        if(cealarmhistentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmHistTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmHistTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmHistTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmHistTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmHistTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmHistEntry")
    {
        auto c = std::make_shared<CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry>();
        c->parent = this;
        cealarmhistentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmHistTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cealarmhistentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYALARMMIB::CeAlarmHistTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYALARMMIB::CeAlarmHistTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYALARMMIB::CeAlarmHistTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmHistEntry")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::CeAlarmHistEntry()
    :
    cealarmhistindex{YType::uint32, "ceAlarmHistIndex"},
    cealarmhisttype{YType::enumeration, "ceAlarmHistType"},
    cealarmhistentphysicalindex{YType::int32, "ceAlarmHistEntPhysicalIndex"},
    cealarmhistalarmtype{YType::int32, "ceAlarmHistAlarmType"},
    cealarmhistseverity{YType::enumeration, "ceAlarmHistSeverity"},
    cealarmhisttimestamp{YType::uint32, "ceAlarmHistTimeStamp"}
{

    yang_name = "ceAlarmHistEntry"; yang_parent_name = "ceAlarmHistTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::~CeAlarmHistEntry()
{
}

bool CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::has_data() const
{
    if (is_presence_container) return true;
    return cealarmhistindex.is_set
	|| cealarmhisttype.is_set
	|| cealarmhistentphysicalindex.is_set
	|| cealarmhistalarmtype.is_set
	|| cealarmhistseverity.is_set
	|| cealarmhisttimestamp.is_set;
}

bool CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmhistindex.yfilter)
	|| ydk::is_set(cealarmhisttype.yfilter)
	|| ydk::is_set(cealarmhistentphysicalindex.yfilter)
	|| ydk::is_set(cealarmhistalarmtype.yfilter)
	|| ydk::is_set(cealarmhistseverity.yfilter)
	|| ydk::is_set(cealarmhisttimestamp.yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmHistTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmHistEntry";
    ADD_KEY_TOKEN(cealarmhistindex, "ceAlarmHistIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmhistindex.is_set || is_set(cealarmhistindex.yfilter)) leaf_name_data.push_back(cealarmhistindex.get_name_leafdata());
    if (cealarmhisttype.is_set || is_set(cealarmhisttype.yfilter)) leaf_name_data.push_back(cealarmhisttype.get_name_leafdata());
    if (cealarmhistentphysicalindex.is_set || is_set(cealarmhistentphysicalindex.yfilter)) leaf_name_data.push_back(cealarmhistentphysicalindex.get_name_leafdata());
    if (cealarmhistalarmtype.is_set || is_set(cealarmhistalarmtype.yfilter)) leaf_name_data.push_back(cealarmhistalarmtype.get_name_leafdata());
    if (cealarmhistseverity.is_set || is_set(cealarmhistseverity.yfilter)) leaf_name_data.push_back(cealarmhistseverity.get_name_leafdata());
    if (cealarmhisttimestamp.is_set || is_set(cealarmhisttimestamp.yfilter)) leaf_name_data.push_back(cealarmhisttimestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmHistIndex")
    {
        cealarmhistindex = value;
        cealarmhistindex.value_namespace = name_space;
        cealarmhistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmHistType")
    {
        cealarmhisttype = value;
        cealarmhisttype.value_namespace = name_space;
        cealarmhisttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmHistEntPhysicalIndex")
    {
        cealarmhistentphysicalindex = value;
        cealarmhistentphysicalindex.value_namespace = name_space;
        cealarmhistentphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmHistAlarmType")
    {
        cealarmhistalarmtype = value;
        cealarmhistalarmtype.value_namespace = name_space;
        cealarmhistalarmtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmHistSeverity")
    {
        cealarmhistseverity = value;
        cealarmhistseverity.value_namespace = name_space;
        cealarmhistseverity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmHistTimeStamp")
    {
        cealarmhisttimestamp = value;
        cealarmhisttimestamp.value_namespace = name_space;
        cealarmhisttimestamp.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmHistIndex")
    {
        cealarmhistindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmHistType")
    {
        cealarmhisttype.yfilter = yfilter;
    }
    if(value_path == "ceAlarmHistEntPhysicalIndex")
    {
        cealarmhistentphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmHistAlarmType")
    {
        cealarmhistalarmtype.yfilter = yfilter;
    }
    if(value_path == "ceAlarmHistSeverity")
    {
        cealarmhistseverity.yfilter = yfilter;
    }
    if(value_path == "ceAlarmHistTimeStamp")
    {
        cealarmhisttimestamp.yfilter = yfilter;
    }
}

bool CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmHistIndex" || name == "ceAlarmHistType" || name == "ceAlarmHistEntPhysicalIndex" || name == "ceAlarmHistAlarmType" || name == "ceAlarmHistSeverity" || name == "ceAlarmHistTimeStamp")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileTable()
    :
    cealarmfilterprofileentry(this, {"cealarmfilterindex"})
{

    yang_name = "ceAlarmFilterProfileTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::~CeAlarmFilterProfileTable()
{
}

bool CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cealarmfilterprofileentry.len(); index++)
    {
        if(cealarmfilterprofileentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::has_operation() const
{
    for (std::size_t index=0; index<cealarmfilterprofileentry.len(); index++)
    {
        if(cealarmfilterprofileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmFilterProfileTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmFilterProfileEntry")
    {
        auto c = std::make_shared<CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry>();
        c->parent = this;
        cealarmfilterprofileentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cealarmfilterprofileentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmFilterProfileEntry")
        return true;
    return false;
}

CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry::CeAlarmFilterProfileEntry()
    :
    cealarmfilterindex{YType::uint32, "ceAlarmFilterIndex"},
    cealarmfilterstatus{YType::enumeration, "ceAlarmFilterStatus"},
    cealarmfilteralias{YType::str, "ceAlarmFilterAlias"},
    cealarmfilteralarmsenabled{YType::str, "ceAlarmFilterAlarmsEnabled"},
    cealarmfilternotifiesenabled{YType::str, "ceAlarmFilterNotifiesEnabled"},
    cealarmfiltersyslogenabled{YType::str, "ceAlarmFilterSyslogEnabled"}
{

    yang_name = "ceAlarmFilterProfileEntry"; yang_parent_name = "ceAlarmFilterProfileTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry::~CeAlarmFilterProfileEntry()
{
}

bool CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry::has_data() const
{
    if (is_presence_container) return true;
    return cealarmfilterindex.is_set
	|| cealarmfilterstatus.is_set
	|| cealarmfilteralias.is_set
	|| cealarmfilteralarmsenabled.is_set
	|| cealarmfilternotifiesenabled.is_set
	|| cealarmfiltersyslogenabled.is_set;
}

bool CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmfilterindex.yfilter)
	|| ydk::is_set(cealarmfilterstatus.yfilter)
	|| ydk::is_set(cealarmfilteralias.yfilter)
	|| ydk::is_set(cealarmfilteralarmsenabled.yfilter)
	|| ydk::is_set(cealarmfilternotifiesenabled.yfilter)
	|| ydk::is_set(cealarmfiltersyslogenabled.yfilter);
}

std::string CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmFilterProfileTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmFilterProfileEntry";
    ADD_KEY_TOKEN(cealarmfilterindex, "ceAlarmFilterIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmfilterindex.is_set || is_set(cealarmfilterindex.yfilter)) leaf_name_data.push_back(cealarmfilterindex.get_name_leafdata());
    if (cealarmfilterstatus.is_set || is_set(cealarmfilterstatus.yfilter)) leaf_name_data.push_back(cealarmfilterstatus.get_name_leafdata());
    if (cealarmfilteralias.is_set || is_set(cealarmfilteralias.yfilter)) leaf_name_data.push_back(cealarmfilteralias.get_name_leafdata());
    if (cealarmfilteralarmsenabled.is_set || is_set(cealarmfilteralarmsenabled.yfilter)) leaf_name_data.push_back(cealarmfilteralarmsenabled.get_name_leafdata());
    if (cealarmfilternotifiesenabled.is_set || is_set(cealarmfilternotifiesenabled.yfilter)) leaf_name_data.push_back(cealarmfilternotifiesenabled.get_name_leafdata());
    if (cealarmfiltersyslogenabled.is_set || is_set(cealarmfiltersyslogenabled.yfilter)) leaf_name_data.push_back(cealarmfiltersyslogenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ceAlarmFilterIndex")
    {
        cealarmfilterindex = value;
        cealarmfilterindex.value_namespace = name_space;
        cealarmfilterindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterStatus")
    {
        cealarmfilterstatus = value;
        cealarmfilterstatus.value_namespace = name_space;
        cealarmfilterstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterAlias")
    {
        cealarmfilteralias = value;
        cealarmfilteralias.value_namespace = name_space;
        cealarmfilteralias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterAlarmsEnabled")
    {
        cealarmfilteralarmsenabled = value;
        cealarmfilteralarmsenabled.value_namespace = name_space;
        cealarmfilteralarmsenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterNotifiesEnabled")
    {
        cealarmfilternotifiesenabled = value;
        cealarmfilternotifiesenabled.value_namespace = name_space;
        cealarmfilternotifiesenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceAlarmFilterSyslogEnabled")
    {
        cealarmfiltersyslogenabled = value;
        cealarmfiltersyslogenabled.value_namespace = name_space;
        cealarmfiltersyslogenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ceAlarmFilterIndex")
    {
        cealarmfilterindex.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterStatus")
    {
        cealarmfilterstatus.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterAlias")
    {
        cealarmfilteralias.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterAlarmsEnabled")
    {
        cealarmfilteralarmsenabled.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterNotifiesEnabled")
    {
        cealarmfilternotifiesenabled.yfilter = yfilter;
    }
    if(value_path == "ceAlarmFilterSyslogEnabled")
    {
        cealarmfiltersyslogenabled.yfilter = yfilter;
    }
}

bool CISCOENTITYALARMMIB::CeAlarmFilterProfileTable::CeAlarmFilterProfileEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmFilterIndex" || name == "ceAlarmFilterStatus" || name == "ceAlarmFilterAlias" || name == "ceAlarmFilterAlarmsEnabled" || name == "ceAlarmFilterNotifiesEnabled" || name == "ceAlarmFilterSyslogEnabled")
        return true;
    return false;
}

const Enum::YLeaf AlarmSeverity::critical {1, "critical"};
const Enum::YLeaf AlarmSeverity::major_ {2, "major"};
const Enum::YLeaf AlarmSeverity::minor {3, "minor"};
const Enum::YLeaf AlarmSeverity::info {4, "info"};

const Enum::YLeaf CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::CeAlarmHistType::asserted {1, "asserted"};
const Enum::YLeaf CISCOENTITYALARMMIB::CeAlarmHistTable::CeAlarmHistEntry::CeAlarmHistType::cleared {2, "cleared"};


}
}

