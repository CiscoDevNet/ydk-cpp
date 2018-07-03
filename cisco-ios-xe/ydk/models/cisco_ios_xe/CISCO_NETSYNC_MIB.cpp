
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_NETSYNC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_NETSYNC_MIB {

CISCONETSYNCMIB::CISCONETSYNCMIB()
    :
    cisconetsyncmibnotifcontrol(std::make_shared<CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl>())
    , cnsclkselglobaltable(std::make_shared<CISCONETSYNCMIB::CnsClkSelGlobalTable>())
    , cnsselectedinputsourcetable(std::make_shared<CISCONETSYNCMIB::CnsSelectedInputSourceTable>())
    , cnsinputsourcetable(std::make_shared<CISCONETSYNCMIB::CnsInputSourceTable>())
    , cnsextoutputtable(std::make_shared<CISCONETSYNCMIB::CnsExtOutputTable>())
    , cnst4clocksourcetable(std::make_shared<CISCONETSYNCMIB::CnsT4ClockSourceTable>())
{
    cisconetsyncmibnotifcontrol->parent = this;
    cnsclkselglobaltable->parent = this;
    cnsselectedinputsourcetable->parent = this;
    cnsinputsourcetable->parent = this;
    cnsextoutputtable->parent = this;
    cnst4clocksourcetable->parent = this;

    yang_name = "CISCO-NETSYNC-MIB"; yang_parent_name = "CISCO-NETSYNC-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCONETSYNCMIB::~CISCONETSYNCMIB()
{
}

bool CISCONETSYNCMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cisconetsyncmibnotifcontrol !=  nullptr && cisconetsyncmibnotifcontrol->has_data())
	|| (cnsclkselglobaltable !=  nullptr && cnsclkselglobaltable->has_data())
	|| (cnsselectedinputsourcetable !=  nullptr && cnsselectedinputsourcetable->has_data())
	|| (cnsinputsourcetable !=  nullptr && cnsinputsourcetable->has_data())
	|| (cnsextoutputtable !=  nullptr && cnsextoutputtable->has_data())
	|| (cnst4clocksourcetable !=  nullptr && cnst4clocksourcetable->has_data());
}

bool CISCONETSYNCMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cisconetsyncmibnotifcontrol !=  nullptr && cisconetsyncmibnotifcontrol->has_operation())
	|| (cnsclkselglobaltable !=  nullptr && cnsclkselglobaltable->has_operation())
	|| (cnsselectedinputsourcetable !=  nullptr && cnsselectedinputsourcetable->has_operation())
	|| (cnsinputsourcetable !=  nullptr && cnsinputsourcetable->has_operation())
	|| (cnsextoutputtable !=  nullptr && cnsextoutputtable->has_operation())
	|| (cnst4clocksourcetable !=  nullptr && cnst4clocksourcetable->has_operation());
}

std::string CISCONETSYNCMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONETSYNCMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONETSYNCMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoNetsyncMIBNotifControl")
    {
        if(cisconetsyncmibnotifcontrol == nullptr)
        {
            cisconetsyncmibnotifcontrol = std::make_shared<CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl>();
        }
        return cisconetsyncmibnotifcontrol;
    }

    if(child_yang_name == "cnsClkSelGlobalTable")
    {
        if(cnsclkselglobaltable == nullptr)
        {
            cnsclkselglobaltable = std::make_shared<CISCONETSYNCMIB::CnsClkSelGlobalTable>();
        }
        return cnsclkselglobaltable;
    }

    if(child_yang_name == "cnsSelectedInputSourceTable")
    {
        if(cnsselectedinputsourcetable == nullptr)
        {
            cnsselectedinputsourcetable = std::make_shared<CISCONETSYNCMIB::CnsSelectedInputSourceTable>();
        }
        return cnsselectedinputsourcetable;
    }

    if(child_yang_name == "cnsInputSourceTable")
    {
        if(cnsinputsourcetable == nullptr)
        {
            cnsinputsourcetable = std::make_shared<CISCONETSYNCMIB::CnsInputSourceTable>();
        }
        return cnsinputsourcetable;
    }

    if(child_yang_name == "cnsExtOutputTable")
    {
        if(cnsextoutputtable == nullptr)
        {
            cnsextoutputtable = std::make_shared<CISCONETSYNCMIB::CnsExtOutputTable>();
        }
        return cnsextoutputtable;
    }

    if(child_yang_name == "cnsT4ClockSourceTable")
    {
        if(cnst4clocksourcetable == nullptr)
        {
            cnst4clocksourcetable = std::make_shared<CISCONETSYNCMIB::CnsT4ClockSourceTable>();
        }
        return cnst4clocksourcetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONETSYNCMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cisconetsyncmibnotifcontrol != nullptr)
    {
        children["ciscoNetsyncMIBNotifControl"] = cisconetsyncmibnotifcontrol;
    }

    if(cnsclkselglobaltable != nullptr)
    {
        children["cnsClkSelGlobalTable"] = cnsclkselglobaltable;
    }

    if(cnsselectedinputsourcetable != nullptr)
    {
        children["cnsSelectedInputSourceTable"] = cnsselectedinputsourcetable;
    }

    if(cnsinputsourcetable != nullptr)
    {
        children["cnsInputSourceTable"] = cnsinputsourcetable;
    }

    if(cnsextoutputtable != nullptr)
    {
        children["cnsExtOutputTable"] = cnsextoutputtable;
    }

    if(cnst4clocksourcetable != nullptr)
    {
        children["cnsT4ClockSourceTable"] = cnst4clocksourcetable;
    }

    return children;
}

void CISCONETSYNCMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONETSYNCMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCONETSYNCMIB::clone_ptr() const
{
    return std::make_shared<CISCONETSYNCMIB>();
}

std::string CISCONETSYNCMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCONETSYNCMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCONETSYNCMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCONETSYNCMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCONETSYNCMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoNetsyncMIBNotifControl" || name == "cnsClkSelGlobalTable" || name == "cnsSelectedInputSourceTable" || name == "cnsInputSourceTable" || name == "cnsExtOutputTable" || name == "cnsT4ClockSourceTable")
        return true;
    return false;
}

CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl::CiscoNetsyncMIBNotifControl()
    :
    cnsmibenablestatusnotification{YType::boolean, "cnsMIBEnableStatusNotification"}
{

    yang_name = "ciscoNetsyncMIBNotifControl"; yang_parent_name = "CISCO-NETSYNC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl::~CiscoNetsyncMIBNotifControl()
{
}

bool CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl::has_data() const
{
    if (is_presence_container) return true;
    return cnsmibenablestatusnotification.is_set;
}

bool CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cnsmibenablestatusnotification.yfilter);
}

std::string CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoNetsyncMIBNotifControl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnsmibenablestatusnotification.is_set || is_set(cnsmibenablestatusnotification.yfilter)) leaf_name_data.push_back(cnsmibenablestatusnotification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cnsMIBEnableStatusNotification")
    {
        cnsmibenablestatusnotification = value;
        cnsmibenablestatusnotification.value_namespace = name_space;
        cnsmibenablestatusnotification.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cnsMIBEnableStatusNotification")
    {
        cnsmibenablestatusnotification.yfilter = yfilter;
    }
}

bool CISCONETSYNCMIB::CiscoNetsyncMIBNotifControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnsMIBEnableStatusNotification")
        return true;
    return false;
}

CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalTable()
    :
    cnsclkselglobalentry(this, {"cnsclkselgloprocindex"})
{

    yang_name = "cnsClkSelGlobalTable"; yang_parent_name = "CISCO-NETSYNC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONETSYNCMIB::CnsClkSelGlobalTable::~CnsClkSelGlobalTable()
{
}

bool CISCONETSYNCMIB::CnsClkSelGlobalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cnsclkselglobalentry.len(); index++)
    {
        if(cnsclkselglobalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONETSYNCMIB::CnsClkSelGlobalTable::has_operation() const
{
    for (std::size_t index=0; index<cnsclkselglobalentry.len(); index++)
    {
        if(cnsclkselglobalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONETSYNCMIB::CnsClkSelGlobalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONETSYNCMIB::CnsClkSelGlobalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsClkSelGlobalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONETSYNCMIB::CnsClkSelGlobalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONETSYNCMIB::CnsClkSelGlobalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnsClkSelGlobalEntry")
    {
        auto c = std::make_shared<CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry>();
        c->parent = this;
        cnsclkselglobalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONETSYNCMIB::CnsClkSelGlobalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cnsclkselglobalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCONETSYNCMIB::CnsClkSelGlobalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONETSYNCMIB::CnsClkSelGlobalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONETSYNCMIB::CnsClkSelGlobalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnsClkSelGlobalEntry")
        return true;
    return false;
}

CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry::CnsClkSelGlobalEntry()
    :
    cnsclkselgloprocindex{YType::uint32, "cnsClkSelGloProcIndex"},
    cnsclkselglobprocessmode{YType::enumeration, "cnsClkSelGlobProcessMode"},
    cnsclkselglobclockmode{YType::enumeration, "cnsClkSelGlobClockMode"},
    cnsclkselglobnetsyncenable{YType::boolean, "cnsClkSelGlobNetsyncEnable"},
    cnsclkselglobrevertivemode{YType::boolean, "cnsClkSelGlobRevertiveMode"},
    cnsclkselglobesmcmode{YType::boolean, "cnsClkSelGlobESMCMode"},
    cnsclkselglobeecoption{YType::enumeration, "cnsClkSelGlobEECOption"},
    cnsclkselglobnetworkoption{YType::enumeration, "cnsClkSelGlobNetworkOption"},
    cnsclkselglobholdofftime{YType::uint32, "cnsClkSelGlobHoldoffTime"},
    cnsclkselglobwtrtime{YType::uint32, "cnsClkSelGlobWtrTime"},
    cnsclkselglobnofsources{YType::uint32, "cnsClkSelGlobNofSources"},
    cnsclkselgloblastholdoverseconds{YType::uint32, "cnsClkSelGlobLastHoldoverSeconds"},
    cnsclkselglobcurrholdoverseconds{YType::uint32, "cnsClkSelGlobCurrHoldoverSeconds"}
{

    yang_name = "cnsClkSelGlobalEntry"; yang_parent_name = "cnsClkSelGlobalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry::~CnsClkSelGlobalEntry()
{
}

bool CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry::has_data() const
{
    if (is_presence_container) return true;
    return cnsclkselgloprocindex.is_set
	|| cnsclkselglobprocessmode.is_set
	|| cnsclkselglobclockmode.is_set
	|| cnsclkselglobnetsyncenable.is_set
	|| cnsclkselglobrevertivemode.is_set
	|| cnsclkselglobesmcmode.is_set
	|| cnsclkselglobeecoption.is_set
	|| cnsclkselglobnetworkoption.is_set
	|| cnsclkselglobholdofftime.is_set
	|| cnsclkselglobwtrtime.is_set
	|| cnsclkselglobnofsources.is_set
	|| cnsclkselgloblastholdoverseconds.is_set
	|| cnsclkselglobcurrholdoverseconds.is_set;
}

bool CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cnsclkselgloprocindex.yfilter)
	|| ydk::is_set(cnsclkselglobprocessmode.yfilter)
	|| ydk::is_set(cnsclkselglobclockmode.yfilter)
	|| ydk::is_set(cnsclkselglobnetsyncenable.yfilter)
	|| ydk::is_set(cnsclkselglobrevertivemode.yfilter)
	|| ydk::is_set(cnsclkselglobesmcmode.yfilter)
	|| ydk::is_set(cnsclkselglobeecoption.yfilter)
	|| ydk::is_set(cnsclkselglobnetworkoption.yfilter)
	|| ydk::is_set(cnsclkselglobholdofftime.yfilter)
	|| ydk::is_set(cnsclkselglobwtrtime.yfilter)
	|| ydk::is_set(cnsclkselglobnofsources.yfilter)
	|| ydk::is_set(cnsclkselgloblastholdoverseconds.yfilter)
	|| ydk::is_set(cnsclkselglobcurrholdoverseconds.yfilter);
}

std::string CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/cnsClkSelGlobalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsClkSelGlobalEntry";
    ADD_KEY_TOKEN(cnsclkselgloprocindex, "cnsClkSelGloProcIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnsclkselgloprocindex.is_set || is_set(cnsclkselgloprocindex.yfilter)) leaf_name_data.push_back(cnsclkselgloprocindex.get_name_leafdata());
    if (cnsclkselglobprocessmode.is_set || is_set(cnsclkselglobprocessmode.yfilter)) leaf_name_data.push_back(cnsclkselglobprocessmode.get_name_leafdata());
    if (cnsclkselglobclockmode.is_set || is_set(cnsclkselglobclockmode.yfilter)) leaf_name_data.push_back(cnsclkselglobclockmode.get_name_leafdata());
    if (cnsclkselglobnetsyncenable.is_set || is_set(cnsclkselglobnetsyncenable.yfilter)) leaf_name_data.push_back(cnsclkselglobnetsyncenable.get_name_leafdata());
    if (cnsclkselglobrevertivemode.is_set || is_set(cnsclkselglobrevertivemode.yfilter)) leaf_name_data.push_back(cnsclkselglobrevertivemode.get_name_leafdata());
    if (cnsclkselglobesmcmode.is_set || is_set(cnsclkselglobesmcmode.yfilter)) leaf_name_data.push_back(cnsclkselglobesmcmode.get_name_leafdata());
    if (cnsclkselglobeecoption.is_set || is_set(cnsclkselglobeecoption.yfilter)) leaf_name_data.push_back(cnsclkselglobeecoption.get_name_leafdata());
    if (cnsclkselglobnetworkoption.is_set || is_set(cnsclkselglobnetworkoption.yfilter)) leaf_name_data.push_back(cnsclkselglobnetworkoption.get_name_leafdata());
    if (cnsclkselglobholdofftime.is_set || is_set(cnsclkselglobholdofftime.yfilter)) leaf_name_data.push_back(cnsclkselglobholdofftime.get_name_leafdata());
    if (cnsclkselglobwtrtime.is_set || is_set(cnsclkselglobwtrtime.yfilter)) leaf_name_data.push_back(cnsclkselglobwtrtime.get_name_leafdata());
    if (cnsclkselglobnofsources.is_set || is_set(cnsclkselglobnofsources.yfilter)) leaf_name_data.push_back(cnsclkselglobnofsources.get_name_leafdata());
    if (cnsclkselgloblastholdoverseconds.is_set || is_set(cnsclkselgloblastholdoverseconds.yfilter)) leaf_name_data.push_back(cnsclkselgloblastholdoverseconds.get_name_leafdata());
    if (cnsclkselglobcurrholdoverseconds.is_set || is_set(cnsclkselglobcurrholdoverseconds.yfilter)) leaf_name_data.push_back(cnsclkselglobcurrholdoverseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cnsClkSelGloProcIndex")
    {
        cnsclkselgloprocindex = value;
        cnsclkselgloprocindex.value_namespace = name_space;
        cnsclkselgloprocindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsClkSelGlobProcessMode")
    {
        cnsclkselglobprocessmode = value;
        cnsclkselglobprocessmode.value_namespace = name_space;
        cnsclkselglobprocessmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsClkSelGlobClockMode")
    {
        cnsclkselglobclockmode = value;
        cnsclkselglobclockmode.value_namespace = name_space;
        cnsclkselglobclockmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsClkSelGlobNetsyncEnable")
    {
        cnsclkselglobnetsyncenable = value;
        cnsclkselglobnetsyncenable.value_namespace = name_space;
        cnsclkselglobnetsyncenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsClkSelGlobRevertiveMode")
    {
        cnsclkselglobrevertivemode = value;
        cnsclkselglobrevertivemode.value_namespace = name_space;
        cnsclkselglobrevertivemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsClkSelGlobESMCMode")
    {
        cnsclkselglobesmcmode = value;
        cnsclkselglobesmcmode.value_namespace = name_space;
        cnsclkselglobesmcmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsClkSelGlobEECOption")
    {
        cnsclkselglobeecoption = value;
        cnsclkselglobeecoption.value_namespace = name_space;
        cnsclkselglobeecoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsClkSelGlobNetworkOption")
    {
        cnsclkselglobnetworkoption = value;
        cnsclkselglobnetworkoption.value_namespace = name_space;
        cnsclkselglobnetworkoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsClkSelGlobHoldoffTime")
    {
        cnsclkselglobholdofftime = value;
        cnsclkselglobholdofftime.value_namespace = name_space;
        cnsclkselglobholdofftime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsClkSelGlobWtrTime")
    {
        cnsclkselglobwtrtime = value;
        cnsclkselglobwtrtime.value_namespace = name_space;
        cnsclkselglobwtrtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsClkSelGlobNofSources")
    {
        cnsclkselglobnofsources = value;
        cnsclkselglobnofsources.value_namespace = name_space;
        cnsclkselglobnofsources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsClkSelGlobLastHoldoverSeconds")
    {
        cnsclkselgloblastholdoverseconds = value;
        cnsclkselgloblastholdoverseconds.value_namespace = name_space;
        cnsclkselgloblastholdoverseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsClkSelGlobCurrHoldoverSeconds")
    {
        cnsclkselglobcurrholdoverseconds = value;
        cnsclkselglobcurrholdoverseconds.value_namespace = name_space;
        cnsclkselglobcurrholdoverseconds.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cnsClkSelGloProcIndex")
    {
        cnsclkselgloprocindex.yfilter = yfilter;
    }
    if(value_path == "cnsClkSelGlobProcessMode")
    {
        cnsclkselglobprocessmode.yfilter = yfilter;
    }
    if(value_path == "cnsClkSelGlobClockMode")
    {
        cnsclkselglobclockmode.yfilter = yfilter;
    }
    if(value_path == "cnsClkSelGlobNetsyncEnable")
    {
        cnsclkselglobnetsyncenable.yfilter = yfilter;
    }
    if(value_path == "cnsClkSelGlobRevertiveMode")
    {
        cnsclkselglobrevertivemode.yfilter = yfilter;
    }
    if(value_path == "cnsClkSelGlobESMCMode")
    {
        cnsclkselglobesmcmode.yfilter = yfilter;
    }
    if(value_path == "cnsClkSelGlobEECOption")
    {
        cnsclkselglobeecoption.yfilter = yfilter;
    }
    if(value_path == "cnsClkSelGlobNetworkOption")
    {
        cnsclkselglobnetworkoption.yfilter = yfilter;
    }
    if(value_path == "cnsClkSelGlobHoldoffTime")
    {
        cnsclkselglobholdofftime.yfilter = yfilter;
    }
    if(value_path == "cnsClkSelGlobWtrTime")
    {
        cnsclkselglobwtrtime.yfilter = yfilter;
    }
    if(value_path == "cnsClkSelGlobNofSources")
    {
        cnsclkselglobnofsources.yfilter = yfilter;
    }
    if(value_path == "cnsClkSelGlobLastHoldoverSeconds")
    {
        cnsclkselgloblastholdoverseconds.yfilter = yfilter;
    }
    if(value_path == "cnsClkSelGlobCurrHoldoverSeconds")
    {
        cnsclkselglobcurrholdoverseconds.yfilter = yfilter;
    }
}

bool CISCONETSYNCMIB::CnsClkSelGlobalTable::CnsClkSelGlobalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnsClkSelGloProcIndex" || name == "cnsClkSelGlobProcessMode" || name == "cnsClkSelGlobClockMode" || name == "cnsClkSelGlobNetsyncEnable" || name == "cnsClkSelGlobRevertiveMode" || name == "cnsClkSelGlobESMCMode" || name == "cnsClkSelGlobEECOption" || name == "cnsClkSelGlobNetworkOption" || name == "cnsClkSelGlobHoldoffTime" || name == "cnsClkSelGlobWtrTime" || name == "cnsClkSelGlobNofSources" || name == "cnsClkSelGlobLastHoldoverSeconds" || name == "cnsClkSelGlobCurrHoldoverSeconds")
        return true;
    return false;
}

CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceTable()
    :
    cnsselectedinputsourceentry(this, {"cnsselinpsrcnetsyncindex"})
{

    yang_name = "cnsSelectedInputSourceTable"; yang_parent_name = "CISCO-NETSYNC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONETSYNCMIB::CnsSelectedInputSourceTable::~CnsSelectedInputSourceTable()
{
}

bool CISCONETSYNCMIB::CnsSelectedInputSourceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cnsselectedinputsourceentry.len(); index++)
    {
        if(cnsselectedinputsourceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONETSYNCMIB::CnsSelectedInputSourceTable::has_operation() const
{
    for (std::size_t index=0; index<cnsselectedinputsourceentry.len(); index++)
    {
        if(cnsselectedinputsourceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONETSYNCMIB::CnsSelectedInputSourceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONETSYNCMIB::CnsSelectedInputSourceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsSelectedInputSourceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONETSYNCMIB::CnsSelectedInputSourceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONETSYNCMIB::CnsSelectedInputSourceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnsSelectedInputSourceEntry")
    {
        auto c = std::make_shared<CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry>();
        c->parent = this;
        cnsselectedinputsourceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONETSYNCMIB::CnsSelectedInputSourceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cnsselectedinputsourceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCONETSYNCMIB::CnsSelectedInputSourceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONETSYNCMIB::CnsSelectedInputSourceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONETSYNCMIB::CnsSelectedInputSourceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnsSelectedInputSourceEntry")
        return true;
    return false;
}

CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry::CnsSelectedInputSourceEntry()
    :
    cnsselinpsrcnetsyncindex{YType::uint32, "cnsSelInpSrcNetsyncIndex"},
    cnsselinpsrcname{YType::str, "cnsSelInpSrcName"},
    cnsselinpsrcintftype{YType::enumeration, "cnsSelInpSrcIntfType"},
    cnsselinpsrcqualitylevel{YType::enumeration, "cnsSelInpSrcQualityLevel"},
    cnsselinpsrcpriority{YType::uint32, "cnsSelInpSrcPriority"},
    cnsselinpsrctimestamp{YType::uint32, "cnsSelInpSrcTimestamp"},
    cnsselinpsrcfsw{YType::boolean, "cnsSelInpSrcFSW"},
    cnsselinpsrcmsw{YType::boolean, "cnsSelInpSrcMSW"}
{

    yang_name = "cnsSelectedInputSourceEntry"; yang_parent_name = "cnsSelectedInputSourceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry::~CnsSelectedInputSourceEntry()
{
}

bool CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry::has_data() const
{
    if (is_presence_container) return true;
    return cnsselinpsrcnetsyncindex.is_set
	|| cnsselinpsrcname.is_set
	|| cnsselinpsrcintftype.is_set
	|| cnsselinpsrcqualitylevel.is_set
	|| cnsselinpsrcpriority.is_set
	|| cnsselinpsrctimestamp.is_set
	|| cnsselinpsrcfsw.is_set
	|| cnsselinpsrcmsw.is_set;
}

bool CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cnsselinpsrcnetsyncindex.yfilter)
	|| ydk::is_set(cnsselinpsrcname.yfilter)
	|| ydk::is_set(cnsselinpsrcintftype.yfilter)
	|| ydk::is_set(cnsselinpsrcqualitylevel.yfilter)
	|| ydk::is_set(cnsselinpsrcpriority.yfilter)
	|| ydk::is_set(cnsselinpsrctimestamp.yfilter)
	|| ydk::is_set(cnsselinpsrcfsw.yfilter)
	|| ydk::is_set(cnsselinpsrcmsw.yfilter);
}

std::string CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/cnsSelectedInputSourceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsSelectedInputSourceEntry";
    ADD_KEY_TOKEN(cnsselinpsrcnetsyncindex, "cnsSelInpSrcNetsyncIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnsselinpsrcnetsyncindex.is_set || is_set(cnsselinpsrcnetsyncindex.yfilter)) leaf_name_data.push_back(cnsselinpsrcnetsyncindex.get_name_leafdata());
    if (cnsselinpsrcname.is_set || is_set(cnsselinpsrcname.yfilter)) leaf_name_data.push_back(cnsselinpsrcname.get_name_leafdata());
    if (cnsselinpsrcintftype.is_set || is_set(cnsselinpsrcintftype.yfilter)) leaf_name_data.push_back(cnsselinpsrcintftype.get_name_leafdata());
    if (cnsselinpsrcqualitylevel.is_set || is_set(cnsselinpsrcqualitylevel.yfilter)) leaf_name_data.push_back(cnsselinpsrcqualitylevel.get_name_leafdata());
    if (cnsselinpsrcpriority.is_set || is_set(cnsselinpsrcpriority.yfilter)) leaf_name_data.push_back(cnsselinpsrcpriority.get_name_leafdata());
    if (cnsselinpsrctimestamp.is_set || is_set(cnsselinpsrctimestamp.yfilter)) leaf_name_data.push_back(cnsselinpsrctimestamp.get_name_leafdata());
    if (cnsselinpsrcfsw.is_set || is_set(cnsselinpsrcfsw.yfilter)) leaf_name_data.push_back(cnsselinpsrcfsw.get_name_leafdata());
    if (cnsselinpsrcmsw.is_set || is_set(cnsselinpsrcmsw.yfilter)) leaf_name_data.push_back(cnsselinpsrcmsw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cnsSelInpSrcNetsyncIndex")
    {
        cnsselinpsrcnetsyncindex = value;
        cnsselinpsrcnetsyncindex.value_namespace = name_space;
        cnsselinpsrcnetsyncindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsSelInpSrcName")
    {
        cnsselinpsrcname = value;
        cnsselinpsrcname.value_namespace = name_space;
        cnsselinpsrcname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsSelInpSrcIntfType")
    {
        cnsselinpsrcintftype = value;
        cnsselinpsrcintftype.value_namespace = name_space;
        cnsselinpsrcintftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsSelInpSrcQualityLevel")
    {
        cnsselinpsrcqualitylevel = value;
        cnsselinpsrcqualitylevel.value_namespace = name_space;
        cnsselinpsrcqualitylevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsSelInpSrcPriority")
    {
        cnsselinpsrcpriority = value;
        cnsselinpsrcpriority.value_namespace = name_space;
        cnsselinpsrcpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsSelInpSrcTimestamp")
    {
        cnsselinpsrctimestamp = value;
        cnsselinpsrctimestamp.value_namespace = name_space;
        cnsselinpsrctimestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsSelInpSrcFSW")
    {
        cnsselinpsrcfsw = value;
        cnsselinpsrcfsw.value_namespace = name_space;
        cnsselinpsrcfsw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsSelInpSrcMSW")
    {
        cnsselinpsrcmsw = value;
        cnsselinpsrcmsw.value_namespace = name_space;
        cnsselinpsrcmsw.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cnsSelInpSrcNetsyncIndex")
    {
        cnsselinpsrcnetsyncindex.yfilter = yfilter;
    }
    if(value_path == "cnsSelInpSrcName")
    {
        cnsselinpsrcname.yfilter = yfilter;
    }
    if(value_path == "cnsSelInpSrcIntfType")
    {
        cnsselinpsrcintftype.yfilter = yfilter;
    }
    if(value_path == "cnsSelInpSrcQualityLevel")
    {
        cnsselinpsrcqualitylevel.yfilter = yfilter;
    }
    if(value_path == "cnsSelInpSrcPriority")
    {
        cnsselinpsrcpriority.yfilter = yfilter;
    }
    if(value_path == "cnsSelInpSrcTimestamp")
    {
        cnsselinpsrctimestamp.yfilter = yfilter;
    }
    if(value_path == "cnsSelInpSrcFSW")
    {
        cnsselinpsrcfsw.yfilter = yfilter;
    }
    if(value_path == "cnsSelInpSrcMSW")
    {
        cnsselinpsrcmsw.yfilter = yfilter;
    }
}

bool CISCONETSYNCMIB::CnsSelectedInputSourceTable::CnsSelectedInputSourceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnsSelInpSrcNetsyncIndex" || name == "cnsSelInpSrcName" || name == "cnsSelInpSrcIntfType" || name == "cnsSelInpSrcQualityLevel" || name == "cnsSelInpSrcPriority" || name == "cnsSelInpSrcTimestamp" || name == "cnsSelInpSrcFSW" || name == "cnsSelInpSrcMSW")
        return true;
    return false;
}

CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceTable()
    :
    cnsinputsourceentry(this, {"cnsinpsrcnetsyncindex"})
{

    yang_name = "cnsInputSourceTable"; yang_parent_name = "CISCO-NETSYNC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONETSYNCMIB::CnsInputSourceTable::~CnsInputSourceTable()
{
}

bool CISCONETSYNCMIB::CnsInputSourceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cnsinputsourceentry.len(); index++)
    {
        if(cnsinputsourceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONETSYNCMIB::CnsInputSourceTable::has_operation() const
{
    for (std::size_t index=0; index<cnsinputsourceentry.len(); index++)
    {
        if(cnsinputsourceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONETSYNCMIB::CnsInputSourceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONETSYNCMIB::CnsInputSourceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsInputSourceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONETSYNCMIB::CnsInputSourceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONETSYNCMIB::CnsInputSourceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnsInputSourceEntry")
    {
        auto c = std::make_shared<CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry>();
        c->parent = this;
        cnsinputsourceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONETSYNCMIB::CnsInputSourceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cnsinputsourceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCONETSYNCMIB::CnsInputSourceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONETSYNCMIB::CnsInputSourceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONETSYNCMIB::CnsInputSourceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnsInputSourceEntry")
        return true;
    return false;
}

CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry::CnsInputSourceEntry()
    :
    cnsinpsrcnetsyncindex{YType::uint32, "cnsInpSrcNetsyncIndex"},
    cnsinpsrcname{YType::str, "cnsInpSrcName"},
    cnsinpsrcintftype{YType::enumeration, "cnsInpSrcIntfType"},
    cnsinpsrcpriority{YType::uint32, "cnsInpSrcPriority"},
    cnsinpsrcesmccap{YType::enumeration, "cnsInpSrcESMCCap"},
    cnsinpsrcssmcap{YType::enumeration, "cnsInpSrcSSMCap"},
    cnsinpsrcqualityleveltxcfg{YType::enumeration, "cnsInpSrcQualityLevelTxCfg"},
    cnsinpsrcqualitylevelrxcfg{YType::enumeration, "cnsInpSrcQualityLevelRxCfg"},
    cnsinpsrcqualityleveltx{YType::enumeration, "cnsInpSrcQualityLevelTx"},
    cnsinpsrcqualitylevelrx{YType::enumeration, "cnsInpSrcQualityLevelRx"},
    cnsinpsrcqualitylevel{YType::enumeration, "cnsInpSrcQualityLevel"},
    cnsinpsrcholdofftime{YType::uint32, "cnsInpSrcHoldoffTime"},
    cnsinpsrcwtrtime{YType::uint32, "cnsInpSrcWtrTime"},
    cnsinpsrclockout{YType::boolean, "cnsInpSrcLockout"},
    cnsinpsrcsignalfailure{YType::boolean, "cnsInpSrcSignalFailure"},
    cnsinpsrcalarm{YType::boolean, "cnsInpSrcAlarm"},
    cnsinpsrcalarminfo{YType::bits, "cnsInpSrcAlarmInfo"},
    cnsinpsrcfsw{YType::boolean, "cnsInpSrcFSW"},
    cnsinpsrcmsw{YType::boolean, "cnsInpSrcMSW"}
{

    yang_name = "cnsInputSourceEntry"; yang_parent_name = "cnsInputSourceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry::~CnsInputSourceEntry()
{
}

bool CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry::has_data() const
{
    if (is_presence_container) return true;
    return cnsinpsrcnetsyncindex.is_set
	|| cnsinpsrcname.is_set
	|| cnsinpsrcintftype.is_set
	|| cnsinpsrcpriority.is_set
	|| cnsinpsrcesmccap.is_set
	|| cnsinpsrcssmcap.is_set
	|| cnsinpsrcqualityleveltxcfg.is_set
	|| cnsinpsrcqualitylevelrxcfg.is_set
	|| cnsinpsrcqualityleveltx.is_set
	|| cnsinpsrcqualitylevelrx.is_set
	|| cnsinpsrcqualitylevel.is_set
	|| cnsinpsrcholdofftime.is_set
	|| cnsinpsrcwtrtime.is_set
	|| cnsinpsrclockout.is_set
	|| cnsinpsrcsignalfailure.is_set
	|| cnsinpsrcalarm.is_set
	|| cnsinpsrcalarminfo.is_set
	|| cnsinpsrcfsw.is_set
	|| cnsinpsrcmsw.is_set;
}

bool CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cnsinpsrcnetsyncindex.yfilter)
	|| ydk::is_set(cnsinpsrcname.yfilter)
	|| ydk::is_set(cnsinpsrcintftype.yfilter)
	|| ydk::is_set(cnsinpsrcpriority.yfilter)
	|| ydk::is_set(cnsinpsrcesmccap.yfilter)
	|| ydk::is_set(cnsinpsrcssmcap.yfilter)
	|| ydk::is_set(cnsinpsrcqualityleveltxcfg.yfilter)
	|| ydk::is_set(cnsinpsrcqualitylevelrxcfg.yfilter)
	|| ydk::is_set(cnsinpsrcqualityleveltx.yfilter)
	|| ydk::is_set(cnsinpsrcqualitylevelrx.yfilter)
	|| ydk::is_set(cnsinpsrcqualitylevel.yfilter)
	|| ydk::is_set(cnsinpsrcholdofftime.yfilter)
	|| ydk::is_set(cnsinpsrcwtrtime.yfilter)
	|| ydk::is_set(cnsinpsrclockout.yfilter)
	|| ydk::is_set(cnsinpsrcsignalfailure.yfilter)
	|| ydk::is_set(cnsinpsrcalarm.yfilter)
	|| ydk::is_set(cnsinpsrcalarminfo.yfilter)
	|| ydk::is_set(cnsinpsrcfsw.yfilter)
	|| ydk::is_set(cnsinpsrcmsw.yfilter);
}

std::string CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/cnsInputSourceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsInputSourceEntry";
    ADD_KEY_TOKEN(cnsinpsrcnetsyncindex, "cnsInpSrcNetsyncIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnsinpsrcnetsyncindex.is_set || is_set(cnsinpsrcnetsyncindex.yfilter)) leaf_name_data.push_back(cnsinpsrcnetsyncindex.get_name_leafdata());
    if (cnsinpsrcname.is_set || is_set(cnsinpsrcname.yfilter)) leaf_name_data.push_back(cnsinpsrcname.get_name_leafdata());
    if (cnsinpsrcintftype.is_set || is_set(cnsinpsrcintftype.yfilter)) leaf_name_data.push_back(cnsinpsrcintftype.get_name_leafdata());
    if (cnsinpsrcpriority.is_set || is_set(cnsinpsrcpriority.yfilter)) leaf_name_data.push_back(cnsinpsrcpriority.get_name_leafdata());
    if (cnsinpsrcesmccap.is_set || is_set(cnsinpsrcesmccap.yfilter)) leaf_name_data.push_back(cnsinpsrcesmccap.get_name_leafdata());
    if (cnsinpsrcssmcap.is_set || is_set(cnsinpsrcssmcap.yfilter)) leaf_name_data.push_back(cnsinpsrcssmcap.get_name_leafdata());
    if (cnsinpsrcqualityleveltxcfg.is_set || is_set(cnsinpsrcqualityleveltxcfg.yfilter)) leaf_name_data.push_back(cnsinpsrcqualityleveltxcfg.get_name_leafdata());
    if (cnsinpsrcqualitylevelrxcfg.is_set || is_set(cnsinpsrcqualitylevelrxcfg.yfilter)) leaf_name_data.push_back(cnsinpsrcqualitylevelrxcfg.get_name_leafdata());
    if (cnsinpsrcqualityleveltx.is_set || is_set(cnsinpsrcqualityleveltx.yfilter)) leaf_name_data.push_back(cnsinpsrcqualityleveltx.get_name_leafdata());
    if (cnsinpsrcqualitylevelrx.is_set || is_set(cnsinpsrcqualitylevelrx.yfilter)) leaf_name_data.push_back(cnsinpsrcqualitylevelrx.get_name_leafdata());
    if (cnsinpsrcqualitylevel.is_set || is_set(cnsinpsrcqualitylevel.yfilter)) leaf_name_data.push_back(cnsinpsrcqualitylevel.get_name_leafdata());
    if (cnsinpsrcholdofftime.is_set || is_set(cnsinpsrcholdofftime.yfilter)) leaf_name_data.push_back(cnsinpsrcholdofftime.get_name_leafdata());
    if (cnsinpsrcwtrtime.is_set || is_set(cnsinpsrcwtrtime.yfilter)) leaf_name_data.push_back(cnsinpsrcwtrtime.get_name_leafdata());
    if (cnsinpsrclockout.is_set || is_set(cnsinpsrclockout.yfilter)) leaf_name_data.push_back(cnsinpsrclockout.get_name_leafdata());
    if (cnsinpsrcsignalfailure.is_set || is_set(cnsinpsrcsignalfailure.yfilter)) leaf_name_data.push_back(cnsinpsrcsignalfailure.get_name_leafdata());
    if (cnsinpsrcalarm.is_set || is_set(cnsinpsrcalarm.yfilter)) leaf_name_data.push_back(cnsinpsrcalarm.get_name_leafdata());
    if (cnsinpsrcalarminfo.is_set || is_set(cnsinpsrcalarminfo.yfilter)) leaf_name_data.push_back(cnsinpsrcalarminfo.get_name_leafdata());
    if (cnsinpsrcfsw.is_set || is_set(cnsinpsrcfsw.yfilter)) leaf_name_data.push_back(cnsinpsrcfsw.get_name_leafdata());
    if (cnsinpsrcmsw.is_set || is_set(cnsinpsrcmsw.yfilter)) leaf_name_data.push_back(cnsinpsrcmsw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cnsInpSrcNetsyncIndex")
    {
        cnsinpsrcnetsyncindex = value;
        cnsinpsrcnetsyncindex.value_namespace = name_space;
        cnsinpsrcnetsyncindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcName")
    {
        cnsinpsrcname = value;
        cnsinpsrcname.value_namespace = name_space;
        cnsinpsrcname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcIntfType")
    {
        cnsinpsrcintftype = value;
        cnsinpsrcintftype.value_namespace = name_space;
        cnsinpsrcintftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcPriority")
    {
        cnsinpsrcpriority = value;
        cnsinpsrcpriority.value_namespace = name_space;
        cnsinpsrcpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcESMCCap")
    {
        cnsinpsrcesmccap = value;
        cnsinpsrcesmccap.value_namespace = name_space;
        cnsinpsrcesmccap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcSSMCap")
    {
        cnsinpsrcssmcap = value;
        cnsinpsrcssmcap.value_namespace = name_space;
        cnsinpsrcssmcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcQualityLevelTxCfg")
    {
        cnsinpsrcqualityleveltxcfg = value;
        cnsinpsrcqualityleveltxcfg.value_namespace = name_space;
        cnsinpsrcqualityleveltxcfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcQualityLevelRxCfg")
    {
        cnsinpsrcqualitylevelrxcfg = value;
        cnsinpsrcqualitylevelrxcfg.value_namespace = name_space;
        cnsinpsrcqualitylevelrxcfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcQualityLevelTx")
    {
        cnsinpsrcqualityleveltx = value;
        cnsinpsrcqualityleveltx.value_namespace = name_space;
        cnsinpsrcqualityleveltx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcQualityLevelRx")
    {
        cnsinpsrcqualitylevelrx = value;
        cnsinpsrcqualitylevelrx.value_namespace = name_space;
        cnsinpsrcqualitylevelrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcQualityLevel")
    {
        cnsinpsrcqualitylevel = value;
        cnsinpsrcqualitylevel.value_namespace = name_space;
        cnsinpsrcqualitylevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcHoldoffTime")
    {
        cnsinpsrcholdofftime = value;
        cnsinpsrcholdofftime.value_namespace = name_space;
        cnsinpsrcholdofftime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcWtrTime")
    {
        cnsinpsrcwtrtime = value;
        cnsinpsrcwtrtime.value_namespace = name_space;
        cnsinpsrcwtrtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcLockout")
    {
        cnsinpsrclockout = value;
        cnsinpsrclockout.value_namespace = name_space;
        cnsinpsrclockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcSignalFailure")
    {
        cnsinpsrcsignalfailure = value;
        cnsinpsrcsignalfailure.value_namespace = name_space;
        cnsinpsrcsignalfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcAlarm")
    {
        cnsinpsrcalarm = value;
        cnsinpsrcalarm.value_namespace = name_space;
        cnsinpsrcalarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcAlarmInfo")
    {
        cnsinpsrcalarminfo[value] = true;
    }
    if(value_path == "cnsInpSrcFSW")
    {
        cnsinpsrcfsw = value;
        cnsinpsrcfsw.value_namespace = name_space;
        cnsinpsrcfsw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsInpSrcMSW")
    {
        cnsinpsrcmsw = value;
        cnsinpsrcmsw.value_namespace = name_space;
        cnsinpsrcmsw.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cnsInpSrcNetsyncIndex")
    {
        cnsinpsrcnetsyncindex.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcName")
    {
        cnsinpsrcname.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcIntfType")
    {
        cnsinpsrcintftype.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcPriority")
    {
        cnsinpsrcpriority.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcESMCCap")
    {
        cnsinpsrcesmccap.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcSSMCap")
    {
        cnsinpsrcssmcap.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcQualityLevelTxCfg")
    {
        cnsinpsrcqualityleveltxcfg.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcQualityLevelRxCfg")
    {
        cnsinpsrcqualitylevelrxcfg.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcQualityLevelTx")
    {
        cnsinpsrcqualityleveltx.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcQualityLevelRx")
    {
        cnsinpsrcqualitylevelrx.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcQualityLevel")
    {
        cnsinpsrcqualitylevel.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcHoldoffTime")
    {
        cnsinpsrcholdofftime.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcWtrTime")
    {
        cnsinpsrcwtrtime.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcLockout")
    {
        cnsinpsrclockout.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcSignalFailure")
    {
        cnsinpsrcsignalfailure.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcAlarm")
    {
        cnsinpsrcalarm.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcAlarmInfo")
    {
        cnsinpsrcalarminfo.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcFSW")
    {
        cnsinpsrcfsw.yfilter = yfilter;
    }
    if(value_path == "cnsInpSrcMSW")
    {
        cnsinpsrcmsw.yfilter = yfilter;
    }
}

bool CISCONETSYNCMIB::CnsInputSourceTable::CnsInputSourceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnsInpSrcNetsyncIndex" || name == "cnsInpSrcName" || name == "cnsInpSrcIntfType" || name == "cnsInpSrcPriority" || name == "cnsInpSrcESMCCap" || name == "cnsInpSrcSSMCap" || name == "cnsInpSrcQualityLevelTxCfg" || name == "cnsInpSrcQualityLevelRxCfg" || name == "cnsInpSrcQualityLevelTx" || name == "cnsInpSrcQualityLevelRx" || name == "cnsInpSrcQualityLevel" || name == "cnsInpSrcHoldoffTime" || name == "cnsInpSrcWtrTime" || name == "cnsInpSrcLockout" || name == "cnsInpSrcSignalFailure" || name == "cnsInpSrcAlarm" || name == "cnsInpSrcAlarmInfo" || name == "cnsInpSrcFSW" || name == "cnsInpSrcMSW")
        return true;
    return false;
}

CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputTable()
    :
    cnsextoutputentry(this, {"cnsextoutlistindex"})
{

    yang_name = "cnsExtOutputTable"; yang_parent_name = "CISCO-NETSYNC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONETSYNCMIB::CnsExtOutputTable::~CnsExtOutputTable()
{
}

bool CISCONETSYNCMIB::CnsExtOutputTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cnsextoutputentry.len(); index++)
    {
        if(cnsextoutputentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONETSYNCMIB::CnsExtOutputTable::has_operation() const
{
    for (std::size_t index=0; index<cnsextoutputentry.len(); index++)
    {
        if(cnsextoutputentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONETSYNCMIB::CnsExtOutputTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONETSYNCMIB::CnsExtOutputTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsExtOutputTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONETSYNCMIB::CnsExtOutputTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONETSYNCMIB::CnsExtOutputTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnsExtOutputEntry")
    {
        auto c = std::make_shared<CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry>();
        c->parent = this;
        cnsextoutputentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONETSYNCMIB::CnsExtOutputTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cnsextoutputentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCONETSYNCMIB::CnsExtOutputTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONETSYNCMIB::CnsExtOutputTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONETSYNCMIB::CnsExtOutputTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnsExtOutputEntry")
        return true;
    return false;
}

CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::CnsExtOutputEntry()
    :
    cnsextoutlistindex{YType::uint32, "cnsExtOutListIndex"},
    cnsextoutselnetsyncindex{YType::uint32, "cnsExtOutSelNetsyncIndex"},
    cnsextoutname{YType::str, "cnsExtOutName"},
    cnsextoutintftype{YType::enumeration, "cnsExtOutIntfType"},
    cnsextoutqualitylevel{YType::enumeration, "cnsExtOutQualityLevel"},
    cnsextoutpriority{YType::uint32, "cnsExtOutPriority"},
    cnsextoutfsw{YType::boolean, "cnsExtOutFSW"},
    cnsextoutmsw{YType::boolean, "cnsExtOutMSW"},
    cnsextoutsquelch{YType::boolean, "cnsExtOutSquelch"}
{

    yang_name = "cnsExtOutputEntry"; yang_parent_name = "cnsExtOutputTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::~CnsExtOutputEntry()
{
}

bool CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::has_data() const
{
    if (is_presence_container) return true;
    return cnsextoutlistindex.is_set
	|| cnsextoutselnetsyncindex.is_set
	|| cnsextoutname.is_set
	|| cnsextoutintftype.is_set
	|| cnsextoutqualitylevel.is_set
	|| cnsextoutpriority.is_set
	|| cnsextoutfsw.is_set
	|| cnsextoutmsw.is_set
	|| cnsextoutsquelch.is_set;
}

bool CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cnsextoutlistindex.yfilter)
	|| ydk::is_set(cnsextoutselnetsyncindex.yfilter)
	|| ydk::is_set(cnsextoutname.yfilter)
	|| ydk::is_set(cnsextoutintftype.yfilter)
	|| ydk::is_set(cnsextoutqualitylevel.yfilter)
	|| ydk::is_set(cnsextoutpriority.yfilter)
	|| ydk::is_set(cnsextoutfsw.yfilter)
	|| ydk::is_set(cnsextoutmsw.yfilter)
	|| ydk::is_set(cnsextoutsquelch.yfilter);
}

std::string CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/cnsExtOutputTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsExtOutputEntry";
    ADD_KEY_TOKEN(cnsextoutlistindex, "cnsExtOutListIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnsextoutlistindex.is_set || is_set(cnsextoutlistindex.yfilter)) leaf_name_data.push_back(cnsextoutlistindex.get_name_leafdata());
    if (cnsextoutselnetsyncindex.is_set || is_set(cnsextoutselnetsyncindex.yfilter)) leaf_name_data.push_back(cnsextoutselnetsyncindex.get_name_leafdata());
    if (cnsextoutname.is_set || is_set(cnsextoutname.yfilter)) leaf_name_data.push_back(cnsextoutname.get_name_leafdata());
    if (cnsextoutintftype.is_set || is_set(cnsextoutintftype.yfilter)) leaf_name_data.push_back(cnsextoutintftype.get_name_leafdata());
    if (cnsextoutqualitylevel.is_set || is_set(cnsextoutqualitylevel.yfilter)) leaf_name_data.push_back(cnsextoutqualitylevel.get_name_leafdata());
    if (cnsextoutpriority.is_set || is_set(cnsextoutpriority.yfilter)) leaf_name_data.push_back(cnsextoutpriority.get_name_leafdata());
    if (cnsextoutfsw.is_set || is_set(cnsextoutfsw.yfilter)) leaf_name_data.push_back(cnsextoutfsw.get_name_leafdata());
    if (cnsextoutmsw.is_set || is_set(cnsextoutmsw.yfilter)) leaf_name_data.push_back(cnsextoutmsw.get_name_leafdata());
    if (cnsextoutsquelch.is_set || is_set(cnsextoutsquelch.yfilter)) leaf_name_data.push_back(cnsextoutsquelch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cnsExtOutListIndex")
    {
        cnsextoutlistindex = value;
        cnsextoutlistindex.value_namespace = name_space;
        cnsextoutlistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsExtOutSelNetsyncIndex")
    {
        cnsextoutselnetsyncindex = value;
        cnsextoutselnetsyncindex.value_namespace = name_space;
        cnsextoutselnetsyncindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsExtOutName")
    {
        cnsextoutname = value;
        cnsextoutname.value_namespace = name_space;
        cnsextoutname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsExtOutIntfType")
    {
        cnsextoutintftype = value;
        cnsextoutintftype.value_namespace = name_space;
        cnsextoutintftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsExtOutQualityLevel")
    {
        cnsextoutqualitylevel = value;
        cnsextoutqualitylevel.value_namespace = name_space;
        cnsextoutqualitylevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsExtOutPriority")
    {
        cnsextoutpriority = value;
        cnsextoutpriority.value_namespace = name_space;
        cnsextoutpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsExtOutFSW")
    {
        cnsextoutfsw = value;
        cnsextoutfsw.value_namespace = name_space;
        cnsextoutfsw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsExtOutMSW")
    {
        cnsextoutmsw = value;
        cnsextoutmsw.value_namespace = name_space;
        cnsextoutmsw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsExtOutSquelch")
    {
        cnsextoutsquelch = value;
        cnsextoutsquelch.value_namespace = name_space;
        cnsextoutsquelch.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cnsExtOutListIndex")
    {
        cnsextoutlistindex.yfilter = yfilter;
    }
    if(value_path == "cnsExtOutSelNetsyncIndex")
    {
        cnsextoutselnetsyncindex.yfilter = yfilter;
    }
    if(value_path == "cnsExtOutName")
    {
        cnsextoutname.yfilter = yfilter;
    }
    if(value_path == "cnsExtOutIntfType")
    {
        cnsextoutintftype.yfilter = yfilter;
    }
    if(value_path == "cnsExtOutQualityLevel")
    {
        cnsextoutqualitylevel.yfilter = yfilter;
    }
    if(value_path == "cnsExtOutPriority")
    {
        cnsextoutpriority.yfilter = yfilter;
    }
    if(value_path == "cnsExtOutFSW")
    {
        cnsextoutfsw.yfilter = yfilter;
    }
    if(value_path == "cnsExtOutMSW")
    {
        cnsextoutmsw.yfilter = yfilter;
    }
    if(value_path == "cnsExtOutSquelch")
    {
        cnsextoutsquelch.yfilter = yfilter;
    }
}

bool CISCONETSYNCMIB::CnsExtOutputTable::CnsExtOutputEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnsExtOutListIndex" || name == "cnsExtOutSelNetsyncIndex" || name == "cnsExtOutName" || name == "cnsExtOutIntfType" || name == "cnsExtOutQualityLevel" || name == "cnsExtOutPriority" || name == "cnsExtOutFSW" || name == "cnsExtOutMSW" || name == "cnsExtOutSquelch")
        return true;
    return false;
}

CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceTable()
    :
    cnst4clocksourceentry(this, {"cnsextoutlistindex", "cnst4clksrcnetsyncindex"})
{

    yang_name = "cnsT4ClockSourceTable"; yang_parent_name = "CISCO-NETSYNC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONETSYNCMIB::CnsT4ClockSourceTable::~CnsT4ClockSourceTable()
{
}

bool CISCONETSYNCMIB::CnsT4ClockSourceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cnst4clocksourceentry.len(); index++)
    {
        if(cnst4clocksourceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONETSYNCMIB::CnsT4ClockSourceTable::has_operation() const
{
    for (std::size_t index=0; index<cnst4clocksourceentry.len(); index++)
    {
        if(cnst4clocksourceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONETSYNCMIB::CnsT4ClockSourceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONETSYNCMIB::CnsT4ClockSourceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsT4ClockSourceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONETSYNCMIB::CnsT4ClockSourceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONETSYNCMIB::CnsT4ClockSourceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnsT4ClockSourceEntry")
    {
        auto c = std::make_shared<CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry>();
        c->parent = this;
        cnst4clocksourceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONETSYNCMIB::CnsT4ClockSourceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cnst4clocksourceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCONETSYNCMIB::CnsT4ClockSourceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONETSYNCMIB::CnsT4ClockSourceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONETSYNCMIB::CnsT4ClockSourceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnsT4ClockSourceEntry")
        return true;
    return false;
}

CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry::CnsT4ClockSourceEntry()
    :
    cnsextoutlistindex{YType::str, "cnsExtOutListIndex"},
    cnst4clksrcnetsyncindex{YType::uint32, "cnsT4ClkSrcNetsyncIndex"},
    cnst4clksrcname{YType::str, "cnsT4ClkSrcName"},
    cnst4clksrcintftype{YType::enumeration, "cnsT4ClkSrcIntfType"},
    cnst4clksrcpriority{YType::uint32, "cnsT4ClkSrcPriority"},
    cnst4clksrcesmccap{YType::enumeration, "cnsT4ClkSrcESMCCap"},
    cnst4clksrcssmcap{YType::enumeration, "cnsT4ClkSrcSSMCap"},
    cnst4clksrcqualityleveltxcfg{YType::enumeration, "cnsT4ClkSrcQualityLevelTxCfg"},
    cnst4clksrcqualitylevelrxcfg{YType::enumeration, "cnsT4ClkSrcQualityLevelRxCfg"},
    cnst4clksrcqualityleveltx{YType::enumeration, "cnsT4ClkSrcQualityLevelTx"},
    cnst4clksrcqualitylevelrx{YType::enumeration, "cnsT4ClkSrcQualityLevelRx"},
    cnst4clksrcqualitylevel{YType::enumeration, "cnsT4ClkSrcQualityLevel"},
    cnst4clksrcholdofftime{YType::uint32, "cnsT4ClkSrcHoldoffTime"},
    cnst4clksrcwtrtime{YType::uint32, "cnsT4ClkSrcWtrTime"},
    cnst4clksrclockout{YType::boolean, "cnsT4ClkSrcLockout"},
    cnst4clksrcsignalfailure{YType::boolean, "cnsT4ClkSrcSignalFailure"},
    cnst4clksrcalarm{YType::boolean, "cnsT4ClkSrcAlarm"},
    cnst4clksrcalarminfo{YType::bits, "cnsT4ClkSrcAlarmInfo"},
    cnst4clksrcfsw{YType::boolean, "cnsT4ClkSrcFSW"},
    cnst4clksrcmsw{YType::boolean, "cnsT4ClkSrcMSW"}
{

    yang_name = "cnsT4ClockSourceEntry"; yang_parent_name = "cnsT4ClockSourceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry::~CnsT4ClockSourceEntry()
{
}

bool CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry::has_data() const
{
    if (is_presence_container) return true;
    return cnsextoutlistindex.is_set
	|| cnst4clksrcnetsyncindex.is_set
	|| cnst4clksrcname.is_set
	|| cnst4clksrcintftype.is_set
	|| cnst4clksrcpriority.is_set
	|| cnst4clksrcesmccap.is_set
	|| cnst4clksrcssmcap.is_set
	|| cnst4clksrcqualityleveltxcfg.is_set
	|| cnst4clksrcqualitylevelrxcfg.is_set
	|| cnst4clksrcqualityleveltx.is_set
	|| cnst4clksrcqualitylevelrx.is_set
	|| cnst4clksrcqualitylevel.is_set
	|| cnst4clksrcholdofftime.is_set
	|| cnst4clksrcwtrtime.is_set
	|| cnst4clksrclockout.is_set
	|| cnst4clksrcsignalfailure.is_set
	|| cnst4clksrcalarm.is_set
	|| cnst4clksrcalarminfo.is_set
	|| cnst4clksrcfsw.is_set
	|| cnst4clksrcmsw.is_set;
}

bool CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cnsextoutlistindex.yfilter)
	|| ydk::is_set(cnst4clksrcnetsyncindex.yfilter)
	|| ydk::is_set(cnst4clksrcname.yfilter)
	|| ydk::is_set(cnst4clksrcintftype.yfilter)
	|| ydk::is_set(cnst4clksrcpriority.yfilter)
	|| ydk::is_set(cnst4clksrcesmccap.yfilter)
	|| ydk::is_set(cnst4clksrcssmcap.yfilter)
	|| ydk::is_set(cnst4clksrcqualityleveltxcfg.yfilter)
	|| ydk::is_set(cnst4clksrcqualitylevelrxcfg.yfilter)
	|| ydk::is_set(cnst4clksrcqualityleveltx.yfilter)
	|| ydk::is_set(cnst4clksrcqualitylevelrx.yfilter)
	|| ydk::is_set(cnst4clksrcqualitylevel.yfilter)
	|| ydk::is_set(cnst4clksrcholdofftime.yfilter)
	|| ydk::is_set(cnst4clksrcwtrtime.yfilter)
	|| ydk::is_set(cnst4clksrclockout.yfilter)
	|| ydk::is_set(cnst4clksrcsignalfailure.yfilter)
	|| ydk::is_set(cnst4clksrcalarm.yfilter)
	|| ydk::is_set(cnst4clksrcalarminfo.yfilter)
	|| ydk::is_set(cnst4clksrcfsw.yfilter)
	|| ydk::is_set(cnst4clksrcmsw.yfilter);
}

std::string CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/cnsT4ClockSourceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsT4ClockSourceEntry";
    ADD_KEY_TOKEN(cnsextoutlistindex, "cnsExtOutListIndex");
    ADD_KEY_TOKEN(cnst4clksrcnetsyncindex, "cnsT4ClkSrcNetsyncIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnsextoutlistindex.is_set || is_set(cnsextoutlistindex.yfilter)) leaf_name_data.push_back(cnsextoutlistindex.get_name_leafdata());
    if (cnst4clksrcnetsyncindex.is_set || is_set(cnst4clksrcnetsyncindex.yfilter)) leaf_name_data.push_back(cnst4clksrcnetsyncindex.get_name_leafdata());
    if (cnst4clksrcname.is_set || is_set(cnst4clksrcname.yfilter)) leaf_name_data.push_back(cnst4clksrcname.get_name_leafdata());
    if (cnst4clksrcintftype.is_set || is_set(cnst4clksrcintftype.yfilter)) leaf_name_data.push_back(cnst4clksrcintftype.get_name_leafdata());
    if (cnst4clksrcpriority.is_set || is_set(cnst4clksrcpriority.yfilter)) leaf_name_data.push_back(cnst4clksrcpriority.get_name_leafdata());
    if (cnst4clksrcesmccap.is_set || is_set(cnst4clksrcesmccap.yfilter)) leaf_name_data.push_back(cnst4clksrcesmccap.get_name_leafdata());
    if (cnst4clksrcssmcap.is_set || is_set(cnst4clksrcssmcap.yfilter)) leaf_name_data.push_back(cnst4clksrcssmcap.get_name_leafdata());
    if (cnst4clksrcqualityleveltxcfg.is_set || is_set(cnst4clksrcqualityleveltxcfg.yfilter)) leaf_name_data.push_back(cnst4clksrcqualityleveltxcfg.get_name_leafdata());
    if (cnst4clksrcqualitylevelrxcfg.is_set || is_set(cnst4clksrcqualitylevelrxcfg.yfilter)) leaf_name_data.push_back(cnst4clksrcqualitylevelrxcfg.get_name_leafdata());
    if (cnst4clksrcqualityleveltx.is_set || is_set(cnst4clksrcqualityleveltx.yfilter)) leaf_name_data.push_back(cnst4clksrcqualityleveltx.get_name_leafdata());
    if (cnst4clksrcqualitylevelrx.is_set || is_set(cnst4clksrcqualitylevelrx.yfilter)) leaf_name_data.push_back(cnst4clksrcqualitylevelrx.get_name_leafdata());
    if (cnst4clksrcqualitylevel.is_set || is_set(cnst4clksrcqualitylevel.yfilter)) leaf_name_data.push_back(cnst4clksrcqualitylevel.get_name_leafdata());
    if (cnst4clksrcholdofftime.is_set || is_set(cnst4clksrcholdofftime.yfilter)) leaf_name_data.push_back(cnst4clksrcholdofftime.get_name_leafdata());
    if (cnst4clksrcwtrtime.is_set || is_set(cnst4clksrcwtrtime.yfilter)) leaf_name_data.push_back(cnst4clksrcwtrtime.get_name_leafdata());
    if (cnst4clksrclockout.is_set || is_set(cnst4clksrclockout.yfilter)) leaf_name_data.push_back(cnst4clksrclockout.get_name_leafdata());
    if (cnst4clksrcsignalfailure.is_set || is_set(cnst4clksrcsignalfailure.yfilter)) leaf_name_data.push_back(cnst4clksrcsignalfailure.get_name_leafdata());
    if (cnst4clksrcalarm.is_set || is_set(cnst4clksrcalarm.yfilter)) leaf_name_data.push_back(cnst4clksrcalarm.get_name_leafdata());
    if (cnst4clksrcalarminfo.is_set || is_set(cnst4clksrcalarminfo.yfilter)) leaf_name_data.push_back(cnst4clksrcalarminfo.get_name_leafdata());
    if (cnst4clksrcfsw.is_set || is_set(cnst4clksrcfsw.yfilter)) leaf_name_data.push_back(cnst4clksrcfsw.get_name_leafdata());
    if (cnst4clksrcmsw.is_set || is_set(cnst4clksrcmsw.yfilter)) leaf_name_data.push_back(cnst4clksrcmsw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cnsExtOutListIndex")
    {
        cnsextoutlistindex = value;
        cnsextoutlistindex.value_namespace = name_space;
        cnsextoutlistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcNetsyncIndex")
    {
        cnst4clksrcnetsyncindex = value;
        cnst4clksrcnetsyncindex.value_namespace = name_space;
        cnst4clksrcnetsyncindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcName")
    {
        cnst4clksrcname = value;
        cnst4clksrcname.value_namespace = name_space;
        cnst4clksrcname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcIntfType")
    {
        cnst4clksrcintftype = value;
        cnst4clksrcintftype.value_namespace = name_space;
        cnst4clksrcintftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcPriority")
    {
        cnst4clksrcpriority = value;
        cnst4clksrcpriority.value_namespace = name_space;
        cnst4clksrcpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcESMCCap")
    {
        cnst4clksrcesmccap = value;
        cnst4clksrcesmccap.value_namespace = name_space;
        cnst4clksrcesmccap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcSSMCap")
    {
        cnst4clksrcssmcap = value;
        cnst4clksrcssmcap.value_namespace = name_space;
        cnst4clksrcssmcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcQualityLevelTxCfg")
    {
        cnst4clksrcqualityleveltxcfg = value;
        cnst4clksrcqualityleveltxcfg.value_namespace = name_space;
        cnst4clksrcqualityleveltxcfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcQualityLevelRxCfg")
    {
        cnst4clksrcqualitylevelrxcfg = value;
        cnst4clksrcqualitylevelrxcfg.value_namespace = name_space;
        cnst4clksrcqualitylevelrxcfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcQualityLevelTx")
    {
        cnst4clksrcqualityleveltx = value;
        cnst4clksrcqualityleveltx.value_namespace = name_space;
        cnst4clksrcqualityleveltx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcQualityLevelRx")
    {
        cnst4clksrcqualitylevelrx = value;
        cnst4clksrcqualitylevelrx.value_namespace = name_space;
        cnst4clksrcqualitylevelrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcQualityLevel")
    {
        cnst4clksrcqualitylevel = value;
        cnst4clksrcqualitylevel.value_namespace = name_space;
        cnst4clksrcqualitylevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcHoldoffTime")
    {
        cnst4clksrcholdofftime = value;
        cnst4clksrcholdofftime.value_namespace = name_space;
        cnst4clksrcholdofftime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcWtrTime")
    {
        cnst4clksrcwtrtime = value;
        cnst4clksrcwtrtime.value_namespace = name_space;
        cnst4clksrcwtrtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcLockout")
    {
        cnst4clksrclockout = value;
        cnst4clksrclockout.value_namespace = name_space;
        cnst4clksrclockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcSignalFailure")
    {
        cnst4clksrcsignalfailure = value;
        cnst4clksrcsignalfailure.value_namespace = name_space;
        cnst4clksrcsignalfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcAlarm")
    {
        cnst4clksrcalarm = value;
        cnst4clksrcalarm.value_namespace = name_space;
        cnst4clksrcalarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcAlarmInfo")
    {
        cnst4clksrcalarminfo[value] = true;
    }
    if(value_path == "cnsT4ClkSrcFSW")
    {
        cnst4clksrcfsw = value;
        cnst4clksrcfsw.value_namespace = name_space;
        cnst4clksrcfsw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnsT4ClkSrcMSW")
    {
        cnst4clksrcmsw = value;
        cnst4clksrcmsw.value_namespace = name_space;
        cnst4clksrcmsw.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cnsExtOutListIndex")
    {
        cnsextoutlistindex.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcNetsyncIndex")
    {
        cnst4clksrcnetsyncindex.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcName")
    {
        cnst4clksrcname.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcIntfType")
    {
        cnst4clksrcintftype.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcPriority")
    {
        cnst4clksrcpriority.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcESMCCap")
    {
        cnst4clksrcesmccap.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcSSMCap")
    {
        cnst4clksrcssmcap.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcQualityLevelTxCfg")
    {
        cnst4clksrcqualityleveltxcfg.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcQualityLevelRxCfg")
    {
        cnst4clksrcqualitylevelrxcfg.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcQualityLevelTx")
    {
        cnst4clksrcqualityleveltx.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcQualityLevelRx")
    {
        cnst4clksrcqualitylevelrx.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcQualityLevel")
    {
        cnst4clksrcqualitylevel.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcHoldoffTime")
    {
        cnst4clksrcholdofftime.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcWtrTime")
    {
        cnst4clksrcwtrtime.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcLockout")
    {
        cnst4clksrclockout.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcSignalFailure")
    {
        cnst4clksrcsignalfailure.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcAlarm")
    {
        cnst4clksrcalarm.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcAlarmInfo")
    {
        cnst4clksrcalarminfo.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcFSW")
    {
        cnst4clksrcfsw.yfilter = yfilter;
    }
    if(value_path == "cnsT4ClkSrcMSW")
    {
        cnst4clksrcmsw.yfilter = yfilter;
    }
}

bool CISCONETSYNCMIB::CnsT4ClockSourceTable::CnsT4ClockSourceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnsExtOutListIndex" || name == "cnsT4ClkSrcNetsyncIndex" || name == "cnsT4ClkSrcName" || name == "cnsT4ClkSrcIntfType" || name == "cnsT4ClkSrcPriority" || name == "cnsT4ClkSrcESMCCap" || name == "cnsT4ClkSrcSSMCap" || name == "cnsT4ClkSrcQualityLevelTxCfg" || name == "cnsT4ClkSrcQualityLevelRxCfg" || name == "cnsT4ClkSrcQualityLevelTx" || name == "cnsT4ClkSrcQualityLevelRx" || name == "cnsT4ClkSrcQualityLevel" || name == "cnsT4ClkSrcHoldoffTime" || name == "cnsT4ClkSrcWtrTime" || name == "cnsT4ClkSrcLockout" || name == "cnsT4ClkSrcSignalFailure" || name == "cnsT4ClkSrcAlarm" || name == "cnsT4ClkSrcAlarmInfo" || name == "cnsT4ClkSrcFSW" || name == "cnsT4ClkSrcMSW")
        return true;
    return false;
}

const Enum::YLeaf CiscoNetsyncESMCCap::netsyncESMCCapNone {1, "netsyncESMCCapNone"};
const Enum::YLeaf CiscoNetsyncESMCCap::netsyncESMCCapTxRx {2, "netsyncESMCCapTxRx"};
const Enum::YLeaf CiscoNetsyncESMCCap::netsyncESMCCapTx {3, "netsyncESMCCapTx"};
const Enum::YLeaf CiscoNetsyncESMCCap::netsyncESMCCapRx {4, "netsyncESMCCapRx"};
const Enum::YLeaf CiscoNetsyncESMCCap::netsyncESMCCapInvalid {5, "netsyncESMCCapInvalid"};

const Enum::YLeaf CiscoNetsyncQLMode::netsyncQLModeUnknown {1, "netsyncQLModeUnknown"};
const Enum::YLeaf CiscoNetsyncQLMode::netsyncQLModeQlDisabled {2, "netsyncQLModeQlDisabled"};
const Enum::YLeaf CiscoNetsyncQLMode::netsyncQLModeQlEnabled {3, "netsyncQLModeQlEnabled"};

const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelNULL {1, "netsyncQualityLevelNULL"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelDNU {2, "netsyncQualityLevelDNU"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelDUS {3, "netsyncQualityLevelDUS"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelFAILED {4, "netsyncQualityLevelFAILED"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV0 {5, "netsyncQualityLevelINV0"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV1 {6, "netsyncQualityLevelINV1"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV2 {7, "netsyncQualityLevelINV2"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV3 {8, "netsyncQualityLevelINV3"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV4 {9, "netsyncQualityLevelINV4"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV5 {10, "netsyncQualityLevelINV5"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV6 {11, "netsyncQualityLevelINV6"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV7 {12, "netsyncQualityLevelINV7"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV8 {13, "netsyncQualityLevelINV8"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV9 {14, "netsyncQualityLevelINV9"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV10 {15, "netsyncQualityLevelINV10"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV11 {16, "netsyncQualityLevelINV11"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV12 {17, "netsyncQualityLevelINV12"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV13 {18, "netsyncQualityLevelINV13"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV14 {19, "netsyncQualityLevelINV14"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelINV15 {20, "netsyncQualityLevelINV15"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelNSUPP {21, "netsyncQualityLevelNSUPP"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelPRC {22, "netsyncQualityLevelPRC"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelPROV {23, "netsyncQualityLevelPROV"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelPRS {24, "netsyncQualityLevelPRS"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelSEC {25, "netsyncQualityLevelSEC"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelSMC {26, "netsyncQualityLevelSMC"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelSSUA {27, "netsyncQualityLevelSSUA"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelSSUB {28, "netsyncQualityLevelSSUB"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelST2 {29, "netsyncQualityLevelST2"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelST3 {30, "netsyncQualityLevelST3"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelST3E {31, "netsyncQualityLevelST3E"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelST4 {32, "netsyncQualityLevelST4"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelSTU {33, "netsyncQualityLevelSTU"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelTNC {34, "netsyncQualityLevelTNC"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelUNC {35, "netsyncQualityLevelUNC"};
const Enum::YLeaf CiscoNetsyncQualityLevel::netsyncQualityLevelUNK {36, "netsyncQualityLevelUNK"};

const Enum::YLeaf CiscoNetsyncClockMode::netsyncClockModeUnknown {1, "netsyncClockModeUnknown"};
const Enum::YLeaf CiscoNetsyncClockMode::netsyncClockModeFreerun {2, "netsyncClockModeFreerun"};
const Enum::YLeaf CiscoNetsyncClockMode::netsyncClockModeHoldover {3, "netsyncClockModeHoldover"};
const Enum::YLeaf CiscoNetsyncClockMode::netsyncClockModeLocked {4, "netsyncClockModeLocked"};

const Enum::YLeaf CiscoNetsyncSSMCap::netsyncSSMCapNone {1, "netsyncSSMCapNone"};
const Enum::YLeaf CiscoNetsyncSSMCap::netsyncSSMCapTxRx {2, "netsyncSSMCapTxRx"};
const Enum::YLeaf CiscoNetsyncSSMCap::netsyncSSMCapTx {3, "netsyncSSMCapTx"};
const Enum::YLeaf CiscoNetsyncSSMCap::netsyncSSMCapRx {4, "netsyncSSMCapRx"};
const Enum::YLeaf CiscoNetsyncSSMCap::netsyncSSMCapInvalid {5, "netsyncSSMCapInvalid"};

const Enum::YLeaf CiscoNetsyncIfType::netsyncIfTypeUnknown {1, "netsyncIfTypeUnknown"};
const Enum::YLeaf CiscoNetsyncIfType::netsyncIfTypeInternal {2, "netsyncIfTypeInternal"};
const Enum::YLeaf CiscoNetsyncIfType::netsyncIfTypeEthernet {3, "netsyncIfTypeEthernet"};
const Enum::YLeaf CiscoNetsyncIfType::netsyncIfTypeSonet {4, "netsyncIfTypeSonet"};
const Enum::YLeaf CiscoNetsyncIfType::netsyncIfTypeTop {5, "netsyncIfTypeTop"};
const Enum::YLeaf CiscoNetsyncIfType::netsyncIfTypeExt {6, "netsyncIfTypeExt"};
const Enum::YLeaf CiscoNetsyncIfType::netsyncIfTypeController {7, "netsyncIfTypeController"};
const Enum::YLeaf CiscoNetsyncIfType::netsyncIfTypeGps {8, "netsyncIfTypeGps"};
const Enum::YLeaf CiscoNetsyncIfType::netsyncIfTypeAtm {9, "netsyncIfTypeAtm"};

const Enum::YLeaf CiscoNetsyncNetworkOption::netsyncNetworkOptionUnknown {1, "netsyncNetworkOptionUnknown"};
const Enum::YLeaf CiscoNetsyncNetworkOption::netsyncNetworkOption1 {2, "netsyncNetworkOption1"};
const Enum::YLeaf CiscoNetsyncNetworkOption::netsyncNetworkOption2Gen1 {3, "netsyncNetworkOption2Gen1"};
const Enum::YLeaf CiscoNetsyncNetworkOption::netsyncNetworkOption2Gen2 {4, "netsyncNetworkOption2Gen2"};
const Enum::YLeaf CiscoNetsyncNetworkOption::netsyncNetworkOption3 {5, "netsyncNetworkOption3"};
const Enum::YLeaf CiscoNetsyncNetworkOption::netsyncNetworkOptionInvalid {6, "netsyncNetworkOptionInvalid"};

const Enum::YLeaf CiscoNetsyncEECOption::netsyncEECOptionUnknown {1, "netsyncEECOptionUnknown"};
const Enum::YLeaf CiscoNetsyncEECOption::netsyncEECOption1 {2, "netsyncEECOption1"};
const Enum::YLeaf CiscoNetsyncEECOption::netsyncEECOption2 {3, "netsyncEECOption2"};
const Enum::YLeaf CiscoNetsyncEECOption::netsyncEECOptionInvalid {4, "netsyncEECOptionInvalid"};


}
}

