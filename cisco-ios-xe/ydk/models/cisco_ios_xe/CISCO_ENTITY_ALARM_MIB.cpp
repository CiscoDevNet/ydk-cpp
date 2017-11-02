
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
    cealarmmonitoring(std::make_shared<CISCOENTITYALARMMIB::Cealarmmonitoring>())
	,cealarmhistory(std::make_shared<CISCOENTITYALARMMIB::Cealarmhistory>())
	,cealarmfiltering(std::make_shared<CISCOENTITYALARMMIB::Cealarmfiltering>())
	,cealarmdescrmaptable(std::make_shared<CISCOENTITYALARMMIB::Cealarmdescrmaptable>())
	,cealarmdescrtable(std::make_shared<CISCOENTITYALARMMIB::Cealarmdescrtable>())
	,cealarmtable(std::make_shared<CISCOENTITYALARMMIB::Cealarmtable>())
	,cealarmhisttable(std::make_shared<CISCOENTITYALARMMIB::Cealarmhisttable>())
	,cealarmfilterprofiletable(std::make_shared<CISCOENTITYALARMMIB::Cealarmfilterprofiletable>())
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
            cealarmmonitoring = std::make_shared<CISCOENTITYALARMMIB::Cealarmmonitoring>();
        }
        return cealarmmonitoring;
    }

    if(child_yang_name == "ceAlarmHistory")
    {
        if(cealarmhistory == nullptr)
        {
            cealarmhistory = std::make_shared<CISCOENTITYALARMMIB::Cealarmhistory>();
        }
        return cealarmhistory;
    }

    if(child_yang_name == "ceAlarmFiltering")
    {
        if(cealarmfiltering == nullptr)
        {
            cealarmfiltering = std::make_shared<CISCOENTITYALARMMIB::Cealarmfiltering>();
        }
        return cealarmfiltering;
    }

    if(child_yang_name == "ceAlarmDescrMapTable")
    {
        if(cealarmdescrmaptable == nullptr)
        {
            cealarmdescrmaptable = std::make_shared<CISCOENTITYALARMMIB::Cealarmdescrmaptable>();
        }
        return cealarmdescrmaptable;
    }

    if(child_yang_name == "ceAlarmDescrTable")
    {
        if(cealarmdescrtable == nullptr)
        {
            cealarmdescrtable = std::make_shared<CISCOENTITYALARMMIB::Cealarmdescrtable>();
        }
        return cealarmdescrtable;
    }

    if(child_yang_name == "ceAlarmTable")
    {
        if(cealarmtable == nullptr)
        {
            cealarmtable = std::make_shared<CISCOENTITYALARMMIB::Cealarmtable>();
        }
        return cealarmtable;
    }

    if(child_yang_name == "ceAlarmHistTable")
    {
        if(cealarmhisttable == nullptr)
        {
            cealarmhisttable = std::make_shared<CISCOENTITYALARMMIB::Cealarmhisttable>();
        }
        return cealarmhisttable;
    }

    if(child_yang_name == "ceAlarmFilterProfileTable")
    {
        if(cealarmfilterprofiletable == nullptr)
        {
            cealarmfilterprofiletable = std::make_shared<CISCOENTITYALARMMIB::Cealarmfilterprofiletable>();
        }
        return cealarmfilterprofiletable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

CISCOENTITYALARMMIB::Cealarmmonitoring::Cealarmmonitoring()
    :
    cealarmcriticalcount{YType::uint32, "ceAlarmCriticalCount"},
    cealarmmajorcount{YType::uint32, "ceAlarmMajorCount"},
    cealarmminorcount{YType::uint32, "ceAlarmMinorCount"},
    cealarmcutoff{YType::boolean, "ceAlarmCutOff"}
{

    yang_name = "ceAlarmMonitoring"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYALARMMIB::Cealarmmonitoring::~Cealarmmonitoring()
{
}

bool CISCOENTITYALARMMIB::Cealarmmonitoring::has_data() const
{
    return cealarmcriticalcount.is_set
	|| cealarmmajorcount.is_set
	|| cealarmminorcount.is_set
	|| cealarmcutoff.is_set;
}

bool CISCOENTITYALARMMIB::Cealarmmonitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmcriticalcount.yfilter)
	|| ydk::is_set(cealarmmajorcount.yfilter)
	|| ydk::is_set(cealarmminorcount.yfilter)
	|| ydk::is_set(cealarmcutoff.yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmmonitoring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmmonitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmMonitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmmonitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmcriticalcount.is_set || is_set(cealarmcriticalcount.yfilter)) leaf_name_data.push_back(cealarmcriticalcount.get_name_leafdata());
    if (cealarmmajorcount.is_set || is_set(cealarmmajorcount.yfilter)) leaf_name_data.push_back(cealarmmajorcount.get_name_leafdata());
    if (cealarmminorcount.is_set || is_set(cealarmminorcount.yfilter)) leaf_name_data.push_back(cealarmminorcount.get_name_leafdata());
    if (cealarmcutoff.is_set || is_set(cealarmcutoff.yfilter)) leaf_name_data.push_back(cealarmcutoff.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmmonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmmonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYALARMMIB::Cealarmmonitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYALARMMIB::Cealarmmonitoring::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYALARMMIB::Cealarmmonitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmCriticalCount" || name == "ceAlarmMajorCount" || name == "ceAlarmMinorCount" || name == "ceAlarmCutOff")
        return true;
    return false;
}

CISCOENTITYALARMMIB::Cealarmhistory::Cealarmhistory()
    :
    cealarmhisttablesize{YType::int32, "ceAlarmHistTableSize"},
    cealarmhistlastindex{YType::uint32, "ceAlarmHistLastIndex"}
{

    yang_name = "ceAlarmHistory"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYALARMMIB::Cealarmhistory::~Cealarmhistory()
{
}

bool CISCOENTITYALARMMIB::Cealarmhistory::has_data() const
{
    return cealarmhisttablesize.is_set
	|| cealarmhistlastindex.is_set;
}

bool CISCOENTITYALARMMIB::Cealarmhistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmhisttablesize.yfilter)
	|| ydk::is_set(cealarmhistlastindex.yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmhistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmhistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmHistory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmhistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmhisttablesize.is_set || is_set(cealarmhisttablesize.yfilter)) leaf_name_data.push_back(cealarmhisttablesize.get_name_leafdata());
    if (cealarmhistlastindex.is_set || is_set(cealarmhistlastindex.yfilter)) leaf_name_data.push_back(cealarmhistlastindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmhistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmhistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYALARMMIB::Cealarmhistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYALARMMIB::Cealarmhistory::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYALARMMIB::Cealarmhistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmHistTableSize" || name == "ceAlarmHistLastIndex")
        return true;
    return false;
}

CISCOENTITYALARMMIB::Cealarmfiltering::Cealarmfiltering()
    :
    cealarmnotifiesenable{YType::int32, "ceAlarmNotifiesEnable"},
    cealarmsyslogenable{YType::int32, "ceAlarmSyslogEnable"},
    cealarmfilterprofileindexnext{YType::uint32, "ceAlarmFilterProfileIndexNext"}
{

    yang_name = "ceAlarmFiltering"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYALARMMIB::Cealarmfiltering::~Cealarmfiltering()
{
}

bool CISCOENTITYALARMMIB::Cealarmfiltering::has_data() const
{
    return cealarmnotifiesenable.is_set
	|| cealarmsyslogenable.is_set
	|| cealarmfilterprofileindexnext.is_set;
}

bool CISCOENTITYALARMMIB::Cealarmfiltering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmnotifiesenable.yfilter)
	|| ydk::is_set(cealarmsyslogenable.yfilter)
	|| ydk::is_set(cealarmfilterprofileindexnext.yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmfiltering::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmfiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmFiltering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmfiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmnotifiesenable.is_set || is_set(cealarmnotifiesenable.yfilter)) leaf_name_data.push_back(cealarmnotifiesenable.get_name_leafdata());
    if (cealarmsyslogenable.is_set || is_set(cealarmsyslogenable.yfilter)) leaf_name_data.push_back(cealarmsyslogenable.get_name_leafdata());
    if (cealarmfilterprofileindexnext.is_set || is_set(cealarmfilterprofileindexnext.yfilter)) leaf_name_data.push_back(cealarmfilterprofileindexnext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmfiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmfiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYALARMMIB::Cealarmfiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYALARMMIB::Cealarmfiltering::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYALARMMIB::Cealarmfiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmNotifiesEnable" || name == "ceAlarmSyslogEnable" || name == "ceAlarmFilterProfileIndexNext")
        return true;
    return false;
}

CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmaptable()
{

    yang_name = "ceAlarmDescrMapTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYALARMMIB::Cealarmdescrmaptable::~Cealarmdescrmaptable()
{
}

bool CISCOENTITYALARMMIB::Cealarmdescrmaptable::has_data() const
{
    for (std::size_t index=0; index<cealarmdescrmapentry.size(); index++)
    {
        if(cealarmdescrmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYALARMMIB::Cealarmdescrmaptable::has_operation() const
{
    for (std::size_t index=0; index<cealarmdescrmapentry.size(); index++)
    {
        if(cealarmdescrmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmdescrmaptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmdescrmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmdescrmaptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmdescrmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmDescrMapEntry")
    {
        for(auto const & c : cealarmdescrmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry>();
        c->parent = this;
        cealarmdescrmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmdescrmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmdescrmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOENTITYALARMMIB::Cealarmdescrmaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYALARMMIB::Cealarmdescrmaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYALARMMIB::Cealarmdescrmaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrMapEntry")
        return true;
    return false;
}

CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::Cealarmdescrmapentry()
    :
    cealarmdescrindex{YType::uint32, "ceAlarmDescrIndex"},
    cealarmdescrvendortype{YType::str, "ceAlarmDescrVendorType"}
{

    yang_name = "ceAlarmDescrMapEntry"; yang_parent_name = "ceAlarmDescrMapTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::~Cealarmdescrmapentry()
{
}

bool CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::has_data() const
{
    return cealarmdescrindex.is_set
	|| cealarmdescrvendortype.is_set;
}

bool CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmdescrindex.yfilter)
	|| ydk::is_set(cealarmdescrvendortype.yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmDescrMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrMapEntry" <<"[ceAlarmDescrIndex='" <<cealarmdescrindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmdescrindex.is_set || is_set(cealarmdescrindex.yfilter)) leaf_name_data.push_back(cealarmdescrindex.get_name_leafdata());
    if (cealarmdescrvendortype.is_set || is_set(cealarmdescrvendortype.yfilter)) leaf_name_data.push_back(cealarmdescrvendortype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYALARMMIB::Cealarmdescrmaptable::Cealarmdescrmapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrIndex" || name == "ceAlarmDescrVendorType")
        return true;
    return false;
}

CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrtable()
{

    yang_name = "ceAlarmDescrTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYALARMMIB::Cealarmdescrtable::~Cealarmdescrtable()
{
}

bool CISCOENTITYALARMMIB::Cealarmdescrtable::has_data() const
{
    for (std::size_t index=0; index<cealarmdescrentry.size(); index++)
    {
        if(cealarmdescrentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYALARMMIB::Cealarmdescrtable::has_operation() const
{
    for (std::size_t index=0; index<cealarmdescrentry.size(); index++)
    {
        if(cealarmdescrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmdescrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmdescrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmdescrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmdescrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmDescrEntry")
    {
        for(auto const & c : cealarmdescrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry>();
        c->parent = this;
        cealarmdescrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmdescrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmdescrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOENTITYALARMMIB::Cealarmdescrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYALARMMIB::Cealarmdescrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYALARMMIB::Cealarmdescrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrEntry")
        return true;
    return false;
}

CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry::Cealarmdescrentry()
    :
    cealarmdescrindex{YType::str, "ceAlarmDescrIndex"},
    cealarmdescralarmtype{YType::int32, "ceAlarmDescrAlarmType"},
    cealarmdescrseverity{YType::int32, "ceAlarmDescrSeverity"},
    cealarmdescrtext{YType::str, "ceAlarmDescrText"}
{

    yang_name = "ceAlarmDescrEntry"; yang_parent_name = "ceAlarmDescrTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry::~Cealarmdescrentry()
{
}

bool CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry::has_data() const
{
    return cealarmdescrindex.is_set
	|| cealarmdescralarmtype.is_set
	|| cealarmdescrseverity.is_set
	|| cealarmdescrtext.is_set;
}

bool CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmdescrindex.yfilter)
	|| ydk::is_set(cealarmdescralarmtype.yfilter)
	|| ydk::is_set(cealarmdescrseverity.yfilter)
	|| ydk::is_set(cealarmdescrtext.yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmDescrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmDescrEntry" <<"[ceAlarmDescrIndex='" <<cealarmdescrindex <<"']" <<"[ceAlarmDescrAlarmType='" <<cealarmdescralarmtype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cealarmdescrindex.is_set || is_set(cealarmdescrindex.yfilter)) leaf_name_data.push_back(cealarmdescrindex.get_name_leafdata());
    if (cealarmdescralarmtype.is_set || is_set(cealarmdescralarmtype.yfilter)) leaf_name_data.push_back(cealarmdescralarmtype.get_name_leafdata());
    if (cealarmdescrseverity.is_set || is_set(cealarmdescrseverity.yfilter)) leaf_name_data.push_back(cealarmdescrseverity.get_name_leafdata());
    if (cealarmdescrtext.is_set || is_set(cealarmdescrtext.yfilter)) leaf_name_data.push_back(cealarmdescrtext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYALARMMIB::Cealarmdescrtable::Cealarmdescrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmDescrIndex" || name == "ceAlarmDescrAlarmType" || name == "ceAlarmDescrSeverity" || name == "ceAlarmDescrText")
        return true;
    return false;
}

CISCOENTITYALARMMIB::Cealarmtable::Cealarmtable()
{

    yang_name = "ceAlarmTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYALARMMIB::Cealarmtable::~Cealarmtable()
{
}

bool CISCOENTITYALARMMIB::Cealarmtable::has_data() const
{
    for (std::size_t index=0; index<cealarmentry.size(); index++)
    {
        if(cealarmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYALARMMIB::Cealarmtable::has_operation() const
{
    for (std::size_t index=0; index<cealarmentry.size(); index++)
    {
        if(cealarmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmEntry")
    {
        for(auto const & c : cealarmentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry>();
        c->parent = this;
        cealarmentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOENTITYALARMMIB::Cealarmtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYALARMMIB::Cealarmtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYALARMMIB::Cealarmtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmEntry")
        return true;
    return false;
}

CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry::Cealarmentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cealarmfilterprofile{YType::uint32, "ceAlarmFilterProfile"},
    cealarmseverity{YType::int32, "ceAlarmSeverity"},
    cealarmlist{YType::str, "ceAlarmList"}
{

    yang_name = "ceAlarmEntry"; yang_parent_name = "ceAlarmTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry::~Cealarmentry()
{
}

bool CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry::has_data() const
{
    return entphysicalindex.is_set
	|| cealarmfilterprofile.is_set
	|| cealarmseverity.is_set
	|| cealarmlist.is_set;
}

bool CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cealarmfilterprofile.yfilter)
	|| ydk::is_set(cealarmseverity.yfilter)
	|| ydk::is_set(cealarmlist.yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cealarmfilterprofile.is_set || is_set(cealarmfilterprofile.yfilter)) leaf_name_data.push_back(cealarmfilterprofile.get_name_leafdata());
    if (cealarmseverity.is_set || is_set(cealarmseverity.yfilter)) leaf_name_data.push_back(cealarmseverity.get_name_leafdata());
    if (cealarmlist.is_set || is_set(cealarmlist.yfilter)) leaf_name_data.push_back(cealarmlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYALARMMIB::Cealarmtable::Cealarmentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceAlarmFilterProfile" || name == "ceAlarmSeverity" || name == "ceAlarmList")
        return true;
    return false;
}

CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhisttable()
{

    yang_name = "ceAlarmHistTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYALARMMIB::Cealarmhisttable::~Cealarmhisttable()
{
}

bool CISCOENTITYALARMMIB::Cealarmhisttable::has_data() const
{
    for (std::size_t index=0; index<cealarmhistentry.size(); index++)
    {
        if(cealarmhistentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYALARMMIB::Cealarmhisttable::has_operation() const
{
    for (std::size_t index=0; index<cealarmhistentry.size(); index++)
    {
        if(cealarmhistentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmhisttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmhisttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmHistTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmhisttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmhisttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmHistEntry")
    {
        for(auto const & c : cealarmhistentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry>();
        c->parent = this;
        cealarmhistentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmhisttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmhistentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOENTITYALARMMIB::Cealarmhisttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYALARMMIB::Cealarmhisttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYALARMMIB::Cealarmhisttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmHistEntry")
        return true;
    return false;
}

CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::Cealarmhistentry()
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

CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::~Cealarmhistentry()
{
}

bool CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::has_data() const
{
    return cealarmhistindex.is_set
	|| cealarmhisttype.is_set
	|| cealarmhistentphysicalindex.is_set
	|| cealarmhistalarmtype.is_set
	|| cealarmhistseverity.is_set
	|| cealarmhisttimestamp.is_set;
}

bool CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmhistindex.yfilter)
	|| ydk::is_set(cealarmhisttype.yfilter)
	|| ydk::is_set(cealarmhistentphysicalindex.yfilter)
	|| ydk::is_set(cealarmhistalarmtype.yfilter)
	|| ydk::is_set(cealarmhistseverity.yfilter)
	|| ydk::is_set(cealarmhisttimestamp.yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmHistTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmHistEntry" <<"[ceAlarmHistIndex='" <<cealarmhistindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmHistIndex" || name == "ceAlarmHistType" || name == "ceAlarmHistEntPhysicalIndex" || name == "ceAlarmHistAlarmType" || name == "ceAlarmHistSeverity" || name == "ceAlarmHistTimeStamp")
        return true;
    return false;
}

CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofiletable()
{

    yang_name = "ceAlarmFilterProfileTable"; yang_parent_name = "CISCO-ENTITY-ALARM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYALARMMIB::Cealarmfilterprofiletable::~Cealarmfilterprofiletable()
{
}

bool CISCOENTITYALARMMIB::Cealarmfilterprofiletable::has_data() const
{
    for (std::size_t index=0; index<cealarmfilterprofileentry.size(); index++)
    {
        if(cealarmfilterprofileentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYALARMMIB::Cealarmfilterprofiletable::has_operation() const
{
    for (std::size_t index=0; index<cealarmfilterprofileentry.size(); index++)
    {
        if(cealarmfilterprofileentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmfilterprofiletable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmfilterprofiletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmFilterProfileTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmfilterprofiletable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmfilterprofiletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceAlarmFilterProfileEntry")
    {
        for(auto const & c : cealarmfilterprofileentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry>();
        c->parent = this;
        cealarmfilterprofileentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmfilterprofiletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cealarmfilterprofileentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOENTITYALARMMIB::Cealarmfilterprofiletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYALARMMIB::Cealarmfilterprofiletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYALARMMIB::Cealarmfilterprofiletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmFilterProfileEntry")
        return true;
    return false;
}

CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry::Cealarmfilterprofileentry()
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

CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry::~Cealarmfilterprofileentry()
{
}

bool CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry::has_data() const
{
    return cealarmfilterindex.is_set
	|| cealarmfilterstatus.is_set
	|| cealarmfilteralias.is_set
	|| cealarmfilteralarmsenabled.is_set
	|| cealarmfilternotifiesenabled.is_set
	|| cealarmfiltersyslogenabled.is_set;
}

bool CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cealarmfilterindex.yfilter)
	|| ydk::is_set(cealarmfilterstatus.yfilter)
	|| ydk::is_set(cealarmfilteralias.yfilter)
	|| ydk::is_set(cealarmfilteralarmsenabled.yfilter)
	|| ydk::is_set(cealarmfilternotifiesenabled.yfilter)
	|| ydk::is_set(cealarmfiltersyslogenabled.yfilter);
}

std::string CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-ALARM-MIB:CISCO-ENTITY-ALARM-MIB/ceAlarmFilterProfileTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceAlarmFilterProfileEntry" <<"[ceAlarmFilterIndex='" <<cealarmfilterindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYALARMMIB::Cealarmfilterprofiletable::Cealarmfilterprofileentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceAlarmFilterIndex" || name == "ceAlarmFilterStatus" || name == "ceAlarmFilterAlias" || name == "ceAlarmFilterAlarmsEnabled" || name == "ceAlarmFilterNotifiesEnabled" || name == "ceAlarmFilterSyslogEnabled")
        return true;
    return false;
}

const Enum::YLeaf AlarmSeverity::critical {1, "critical"};
const Enum::YLeaf AlarmSeverity::major {2, "major"};
const Enum::YLeaf AlarmSeverity::minor {3, "minor"};
const Enum::YLeaf AlarmSeverity::info {4, "info"};

const Enum::YLeaf CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::Cealarmhisttype::asserted {1, "asserted"};
const Enum::YLeaf CISCOENTITYALARMMIB::Cealarmhisttable::Cealarmhistentry::Cealarmhisttype::cleared {2, "cleared"};


}
}

