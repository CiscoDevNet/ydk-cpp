
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_POWER_ETHERNET_EXT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_POWER_ETHERNET_EXT_MIB {

CISCOPOWERETHERNETEXTMIB::CISCOPOWERETHERNETEXTMIB()
    :
    cpeextmibobjects(std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects>())
	,cpeextpdstatistics(std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics>())
	,cpeextmainpsetable(std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable>())
	,cpeextpdstatstable(std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable>())
	,cpeextpseportlldptable(std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable>())
{
    cpeextmibobjects->parent = this;
    cpeextpdstatistics->parent = this;
    cpeextmainpsetable->parent = this;
    cpeextpdstatstable->parent = this;
    cpeextpseportlldptable->parent = this;

    yang_name = "CISCO-POWER-ETHERNET-EXT-MIB"; yang_parent_name = "CISCO-POWER-ETHERNET-EXT-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOPOWERETHERNETEXTMIB::~CISCOPOWERETHERNETEXTMIB()
{
}

bool CISCOPOWERETHERNETEXTMIB::has_data() const
{
    return (cpeextmibobjects !=  nullptr && cpeextmibobjects->has_data())
	|| (cpeextpdstatistics !=  nullptr && cpeextpdstatistics->has_data())
	|| (cpeextmainpsetable !=  nullptr && cpeextmainpsetable->has_data())
	|| (cpeextpdstatstable !=  nullptr && cpeextpdstatstable->has_data())
	|| (cpeextpseportlldptable !=  nullptr && cpeextpseportlldptable->has_data());
}

bool CISCOPOWERETHERNETEXTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cpeextmibobjects !=  nullptr && cpeextmibobjects->has_operation())
	|| (cpeextpdstatistics !=  nullptr && cpeextpdstatistics->has_operation())
	|| (cpeextmainpsetable !=  nullptr && cpeextmainpsetable->has_operation())
	|| (cpeextpdstatstable !=  nullptr && cpeextpdstatstable->has_operation())
	|| (cpeextpseportlldptable !=  nullptr && cpeextpseportlldptable->has_operation());
}

std::string CISCOPOWERETHERNETEXTMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-POWER-ETHERNET-EXT-MIB:CISCO-POWER-ETHERNET-EXT-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPOWERETHERNETEXTMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPOWERETHERNETEXTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpeExtMIBObjects")
    {
        if(cpeextmibobjects == nullptr)
        {
            cpeextmibobjects = std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects>();
        }
        return cpeextmibobjects;
    }

    if(child_yang_name == "cpeExtPdStatistics")
    {
        if(cpeextpdstatistics == nullptr)
        {
            cpeextpdstatistics = std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics>();
        }
        return cpeextpdstatistics;
    }

    if(child_yang_name == "cpeExtMainPseTable")
    {
        if(cpeextmainpsetable == nullptr)
        {
            cpeextmainpsetable = std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable>();
        }
        return cpeextmainpsetable;
    }

    if(child_yang_name == "cpeExtPdStatsTable")
    {
        if(cpeextpdstatstable == nullptr)
        {
            cpeextpdstatstable = std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable>();
        }
        return cpeextpdstatstable;
    }

    if(child_yang_name == "cpeExtPsePortLldpTable")
    {
        if(cpeextpseportlldptable == nullptr)
        {
            cpeextpseportlldptable = std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable>();
        }
        return cpeextpseportlldptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPOWERETHERNETEXTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpeextmibobjects != nullptr)
    {
        children["cpeExtMIBObjects"] = cpeextmibobjects;
    }

    if(cpeextpdstatistics != nullptr)
    {
        children["cpeExtPdStatistics"] = cpeextpdstatistics;
    }

    if(cpeextmainpsetable != nullptr)
    {
        children["cpeExtMainPseTable"] = cpeextmainpsetable;
    }

    if(cpeextpdstatstable != nullptr)
    {
        children["cpeExtPdStatsTable"] = cpeextpdstatstable;
    }

    if(cpeextpseportlldptable != nullptr)
    {
        children["cpeExtPsePortLldpTable"] = cpeextpseportlldptable;
    }

    return children;
}

void CISCOPOWERETHERNETEXTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPOWERETHERNETEXTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOPOWERETHERNETEXTMIB::clone_ptr() const
{
    return std::make_shared<CISCOPOWERETHERNETEXTMIB>();
}

std::string CISCOPOWERETHERNETEXTMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOPOWERETHERNETEXTMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOPOWERETHERNETEXTMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOPOWERETHERNETEXTMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOPOWERETHERNETEXTMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpeExtMIBObjects" || name == "cpeExtPdStatistics" || name == "cpeExtMainPseTable" || name == "cpeExtPdStatsTable" || name == "cpeExtPsePortLldpTable")
        return true;
    return false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects::Cpeextmibobjects()
    :
    cpeextdefaultallocation{YType::uint32, "cpeExtDefaultAllocation"},
    cpeextpolicingnotifenable{YType::boolean, "cpeExtPolicingNotifEnable"},
    cpeextpowerpriorityenable{YType::boolean, "cpeExtPowerPriorityEnable"}
{

    yang_name = "cpeExtMIBObjects"; yang_parent_name = "CISCO-POWER-ETHERNET-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects::~Cpeextmibobjects()
{
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects::has_data() const
{
    return cpeextdefaultallocation.is_set
	|| cpeextpolicingnotifenable.is_set
	|| cpeextpowerpriorityenable.is_set;
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpeextdefaultallocation.yfilter)
	|| ydk::is_set(cpeextpolicingnotifenable.yfilter)
	|| ydk::is_set(cpeextpowerpriorityenable.yfilter);
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-POWER-ETHERNET-EXT-MIB:CISCO-POWER-ETHERNET-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpeExtMIBObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpeextdefaultallocation.is_set || is_set(cpeextdefaultallocation.yfilter)) leaf_name_data.push_back(cpeextdefaultallocation.get_name_leafdata());
    if (cpeextpolicingnotifenable.is_set || is_set(cpeextpolicingnotifenable.yfilter)) leaf_name_data.push_back(cpeextpolicingnotifenable.get_name_leafdata());
    if (cpeextpowerpriorityenable.is_set || is_set(cpeextpowerpriorityenable.yfilter)) leaf_name_data.push_back(cpeextpowerpriorityenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpeExtDefaultAllocation")
    {
        cpeextdefaultallocation = value;
        cpeextdefaultallocation.value_namespace = name_space;
        cpeextdefaultallocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPolicingNotifEnable")
    {
        cpeextpolicingnotifenable = value;
        cpeextpolicingnotifenable.value_namespace = name_space;
        cpeextpolicingnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPowerPriorityEnable")
    {
        cpeextpowerpriorityenable = value;
        cpeextpowerpriorityenable.value_namespace = name_space;
        cpeextpowerpriorityenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpeExtDefaultAllocation")
    {
        cpeextdefaultallocation.yfilter = yfilter;
    }
    if(value_path == "cpeExtPolicingNotifEnable")
    {
        cpeextpolicingnotifenable.yfilter = yfilter;
    }
    if(value_path == "cpeExtPowerPriorityEnable")
    {
        cpeextpowerpriorityenable.yfilter = yfilter;
    }
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextmibobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpeExtDefaultAllocation" || name == "cpeExtPolicingNotifEnable" || name == "cpeExtPowerPriorityEnable")
        return true;
    return false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics::Cpeextpdstatistics()
    :
    cpeextpdstatstotaldevices{YType::uint32, "cpeExtPdStatsTotalDevices"}
{

    yang_name = "cpeExtPdStatistics"; yang_parent_name = "CISCO-POWER-ETHERNET-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics::~Cpeextpdstatistics()
{
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics::has_data() const
{
    return cpeextpdstatstotaldevices.is_set;
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpeextpdstatstotaldevices.yfilter);
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-POWER-ETHERNET-EXT-MIB:CISCO-POWER-ETHERNET-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpeExtPdStatistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpeextpdstatstotaldevices.is_set || is_set(cpeextpdstatstotaldevices.yfilter)) leaf_name_data.push_back(cpeextpdstatstotaldevices.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpeExtPdStatsTotalDevices")
    {
        cpeextpdstatstotaldevices = value;
        cpeextpdstatstotaldevices.value_namespace = name_space;
        cpeextpdstatstotaldevices.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpeExtPdStatsTotalDevices")
    {
        cpeextpdstatstotaldevices.yfilter = yfilter;
    }
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpdstatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpeExtPdStatsTotalDevices")
        return true;
    return false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpsetable()
{

    yang_name = "cpeExtMainPseTable"; yang_parent_name = "CISCO-POWER-ETHERNET-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::~Cpeextmainpsetable()
{
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::has_data() const
{
    for (std::size_t index=0; index<cpeextmainpseentry.size(); index++)
    {
        if(cpeextmainpseentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::has_operation() const
{
    for (std::size_t index=0; index<cpeextmainpseentry.size(); index++)
    {
        if(cpeextmainpseentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-POWER-ETHERNET-EXT-MIB:CISCO-POWER-ETHERNET-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpeExtMainPseTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpeExtMainPseEntry")
    {
        auto c = std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry>();
        c->parent = this;
        cpeextmainpseentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cpeextmainpseentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpeExtMainPseEntry")
        return true;
    return false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry::Cpeextmainpseentry()
    :
    pethmainpsegroupindex{YType::str, "pethMainPseGroupIndex"},
    cpeextmainpseentphyindex{YType::int32, "cpeExtMainPseEntPhyIndex"},
    cpeextmainpsedescr{YType::str, "cpeExtMainPseDescr"},
    cpeextmainpsepwrmonitorcapable{YType::boolean, "cpeExtMainPsePwrMonitorCapable"},
    cpeextmainpseusedpower{YType::uint32, "cpeExtMainPseUsedPower"},
    cpeextmainpseremainingpower{YType::uint32, "cpeExtMainPseRemainingPower"}
{

    yang_name = "cpeExtMainPseEntry"; yang_parent_name = "cpeExtMainPseTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry::~Cpeextmainpseentry()
{
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry::has_data() const
{
    return pethmainpsegroupindex.is_set
	|| cpeextmainpseentphyindex.is_set
	|| cpeextmainpsedescr.is_set
	|| cpeextmainpsepwrmonitorcapable.is_set
	|| cpeextmainpseusedpower.is_set
	|| cpeextmainpseremainingpower.is_set;
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pethmainpsegroupindex.yfilter)
	|| ydk::is_set(cpeextmainpseentphyindex.yfilter)
	|| ydk::is_set(cpeextmainpsedescr.yfilter)
	|| ydk::is_set(cpeextmainpsepwrmonitorcapable.yfilter)
	|| ydk::is_set(cpeextmainpseusedpower.yfilter)
	|| ydk::is_set(cpeextmainpseremainingpower.yfilter);
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-POWER-ETHERNET-EXT-MIB:CISCO-POWER-ETHERNET-EXT-MIB/cpeExtMainPseTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpeExtMainPseEntry" <<"[pethMainPseGroupIndex='" <<pethmainpsegroupindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pethmainpsegroupindex.is_set || is_set(pethmainpsegroupindex.yfilter)) leaf_name_data.push_back(pethmainpsegroupindex.get_name_leafdata());
    if (cpeextmainpseentphyindex.is_set || is_set(cpeextmainpseentphyindex.yfilter)) leaf_name_data.push_back(cpeextmainpseentphyindex.get_name_leafdata());
    if (cpeextmainpsedescr.is_set || is_set(cpeextmainpsedescr.yfilter)) leaf_name_data.push_back(cpeextmainpsedescr.get_name_leafdata());
    if (cpeextmainpsepwrmonitorcapable.is_set || is_set(cpeextmainpsepwrmonitorcapable.yfilter)) leaf_name_data.push_back(cpeextmainpsepwrmonitorcapable.get_name_leafdata());
    if (cpeextmainpseusedpower.is_set || is_set(cpeextmainpseusedpower.yfilter)) leaf_name_data.push_back(cpeextmainpseusedpower.get_name_leafdata());
    if (cpeextmainpseremainingpower.is_set || is_set(cpeextmainpseremainingpower.yfilter)) leaf_name_data.push_back(cpeextmainpseremainingpower.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pethMainPseGroupIndex")
    {
        pethmainpsegroupindex = value;
        pethmainpsegroupindex.value_namespace = name_space;
        pethmainpsegroupindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtMainPseEntPhyIndex")
    {
        cpeextmainpseentphyindex = value;
        cpeextmainpseentphyindex.value_namespace = name_space;
        cpeextmainpseentphyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtMainPseDescr")
    {
        cpeextmainpsedescr = value;
        cpeextmainpsedescr.value_namespace = name_space;
        cpeextmainpsedescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtMainPsePwrMonitorCapable")
    {
        cpeextmainpsepwrmonitorcapable = value;
        cpeextmainpsepwrmonitorcapable.value_namespace = name_space;
        cpeextmainpsepwrmonitorcapable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtMainPseUsedPower")
    {
        cpeextmainpseusedpower = value;
        cpeextmainpseusedpower.value_namespace = name_space;
        cpeextmainpseusedpower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtMainPseRemainingPower")
    {
        cpeextmainpseremainingpower = value;
        cpeextmainpseremainingpower.value_namespace = name_space;
        cpeextmainpseremainingpower.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pethMainPseGroupIndex")
    {
        pethmainpsegroupindex.yfilter = yfilter;
    }
    if(value_path == "cpeExtMainPseEntPhyIndex")
    {
        cpeextmainpseentphyindex.yfilter = yfilter;
    }
    if(value_path == "cpeExtMainPseDescr")
    {
        cpeextmainpsedescr.yfilter = yfilter;
    }
    if(value_path == "cpeExtMainPsePwrMonitorCapable")
    {
        cpeextmainpsepwrmonitorcapable.yfilter = yfilter;
    }
    if(value_path == "cpeExtMainPseUsedPower")
    {
        cpeextmainpseusedpower.yfilter = yfilter;
    }
    if(value_path == "cpeExtMainPseRemainingPower")
    {
        cpeextmainpseremainingpower.yfilter = yfilter;
    }
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextmainpsetable::Cpeextmainpseentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pethMainPseGroupIndex" || name == "cpeExtMainPseEntPhyIndex" || name == "cpeExtMainPseDescr" || name == "cpeExtMainPsePwrMonitorCapable" || name == "cpeExtMainPseUsedPower" || name == "cpeExtMainPseRemainingPower")
        return true;
    return false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatstable()
{

    yang_name = "cpeExtPdStatsTable"; yang_parent_name = "CISCO-POWER-ETHERNET-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::~Cpeextpdstatstable()
{
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::has_data() const
{
    for (std::size_t index=0; index<cpeextpdstatsentry.size(); index++)
    {
        if(cpeextpdstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::has_operation() const
{
    for (std::size_t index=0; index<cpeextpdstatsentry.size(); index++)
    {
        if(cpeextpdstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-POWER-ETHERNET-EXT-MIB:CISCO-POWER-ETHERNET-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpeExtPdStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpeExtPdStatsEntry")
    {
        auto c = std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry>();
        c->parent = this;
        cpeextpdstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cpeextpdstatsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpeExtPdStatsEntry")
        return true;
    return false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::Cpeextpdstatsentry()
    :
    cpeextpdstatsclass{YType::enumeration, "cpeExtPdStatsClass"},
    cpeextpdstatsdevicecount{YType::uint32, "cpeExtPdStatsDeviceCount"}
{

    yang_name = "cpeExtPdStatsEntry"; yang_parent_name = "cpeExtPdStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::~Cpeextpdstatsentry()
{
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::has_data() const
{
    return cpeextpdstatsclass.is_set
	|| cpeextpdstatsdevicecount.is_set;
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpeextpdstatsclass.yfilter)
	|| ydk::is_set(cpeextpdstatsdevicecount.yfilter);
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-POWER-ETHERNET-EXT-MIB:CISCO-POWER-ETHERNET-EXT-MIB/cpeExtPdStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpeExtPdStatsEntry" <<"[cpeExtPdStatsClass='" <<cpeextpdstatsclass <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpeextpdstatsclass.is_set || is_set(cpeextpdstatsclass.yfilter)) leaf_name_data.push_back(cpeextpdstatsclass.get_name_leafdata());
    if (cpeextpdstatsdevicecount.is_set || is_set(cpeextpdstatsdevicecount.yfilter)) leaf_name_data.push_back(cpeextpdstatsdevicecount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpeExtPdStatsClass")
    {
        cpeextpdstatsclass = value;
        cpeextpdstatsclass.value_namespace = name_space;
        cpeextpdstatsclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPdStatsDeviceCount")
    {
        cpeextpdstatsdevicecount = value;
        cpeextpdstatsdevicecount.value_namespace = name_space;
        cpeextpdstatsdevicecount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpeExtPdStatsClass")
    {
        cpeextpdstatsclass.yfilter = yfilter;
    }
    if(value_path == "cpeExtPdStatsDeviceCount")
    {
        cpeextpdstatsdevicecount.yfilter = yfilter;
    }
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpeExtPdStatsClass" || name == "cpeExtPdStatsDeviceCount")
        return true;
    return false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldptable()
{

    yang_name = "cpeExtPsePortLldpTable"; yang_parent_name = "CISCO-POWER-ETHERNET-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::~Cpeextpseportlldptable()
{
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::has_data() const
{
    for (std::size_t index=0; index<cpeextpseportlldpentry.size(); index++)
    {
        if(cpeextpseportlldpentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::has_operation() const
{
    for (std::size_t index=0; index<cpeextpseportlldpentry.size(); index++)
    {
        if(cpeextpseportlldpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-POWER-ETHERNET-EXT-MIB:CISCO-POWER-ETHERNET-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpeExtPsePortLldpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpeExtPsePortLldpEntry")
    {
        auto c = std::make_shared<CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry>();
        c->parent = this;
        cpeextpseportlldpentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cpeextpseportlldpentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpeExtPsePortLldpEntry")
        return true;
    return false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry::Cpeextpseportlldpentry()
    :
    pethpseportgroupindex{YType::str, "pethPsePortGroupIndex"},
    pethpseportindex{YType::str, "pethPsePortIndex"},
    cpeextpseportlldppwrtype{YType::enumeration, "cpeExtPsePortLldpPwrType"},
    cpeextpseportlldppdpwrtype{YType::enumeration, "cpeExtPsePortLldpPdPwrType"},
    cpeextpseportlldppwrsrc{YType::enumeration, "cpeExtPsePortLldpPwrSrc"},
    cpeextpseportlldppdpwrsrc{YType::enumeration, "cpeExtPsePortLldpPdPwrSrc"},
    cpeextpseportlldppwrpriority{YType::enumeration, "cpeExtPsePortLldpPwrPriority"},
    cpeextpseportlldppdpwrpriority{YType::enumeration, "cpeExtPsePortLldpPdPwrPriority"},
    cpeextpseportlldppwrreq{YType::uint32, "cpeExtPsePortLldpPwrReq"},
    cpeextpseportlldppdpwrreq{YType::uint32, "cpeExtPsePortLldpPdPwrReq"},
    cpeextpseportlldppwralloc{YType::uint32, "cpeExtPsePortLldpPwrAlloc"},
    cpeextpseportlldppdpwralloc{YType::uint32, "cpeExtPsePortLldpPdPwrAlloc"}
{

    yang_name = "cpeExtPsePortLldpEntry"; yang_parent_name = "cpeExtPsePortLldpTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry::~Cpeextpseportlldpentry()
{
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry::has_data() const
{
    return pethpseportgroupindex.is_set
	|| pethpseportindex.is_set
	|| cpeextpseportlldppwrtype.is_set
	|| cpeextpseportlldppdpwrtype.is_set
	|| cpeextpseportlldppwrsrc.is_set
	|| cpeextpseportlldppdpwrsrc.is_set
	|| cpeextpseportlldppwrpriority.is_set
	|| cpeextpseportlldppdpwrpriority.is_set
	|| cpeextpseportlldppwrreq.is_set
	|| cpeextpseportlldppdpwrreq.is_set
	|| cpeextpseportlldppwralloc.is_set
	|| cpeextpseportlldppdpwralloc.is_set;
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pethpseportgroupindex.yfilter)
	|| ydk::is_set(pethpseportindex.yfilter)
	|| ydk::is_set(cpeextpseportlldppwrtype.yfilter)
	|| ydk::is_set(cpeextpseportlldppdpwrtype.yfilter)
	|| ydk::is_set(cpeextpseportlldppwrsrc.yfilter)
	|| ydk::is_set(cpeextpseportlldppdpwrsrc.yfilter)
	|| ydk::is_set(cpeextpseportlldppwrpriority.yfilter)
	|| ydk::is_set(cpeextpseportlldppdpwrpriority.yfilter)
	|| ydk::is_set(cpeextpseportlldppwrreq.yfilter)
	|| ydk::is_set(cpeextpseportlldppdpwrreq.yfilter)
	|| ydk::is_set(cpeextpseportlldppwralloc.yfilter)
	|| ydk::is_set(cpeextpseportlldppdpwralloc.yfilter);
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-POWER-ETHERNET-EXT-MIB:CISCO-POWER-ETHERNET-EXT-MIB/cpeExtPsePortLldpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpeExtPsePortLldpEntry" <<"[pethPsePortGroupIndex='" <<pethpseportgroupindex <<"']" <<"[pethPsePortIndex='" <<pethpseportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pethpseportgroupindex.is_set || is_set(pethpseportgroupindex.yfilter)) leaf_name_data.push_back(pethpseportgroupindex.get_name_leafdata());
    if (pethpseportindex.is_set || is_set(pethpseportindex.yfilter)) leaf_name_data.push_back(pethpseportindex.get_name_leafdata());
    if (cpeextpseportlldppwrtype.is_set || is_set(cpeextpseportlldppwrtype.yfilter)) leaf_name_data.push_back(cpeextpseportlldppwrtype.get_name_leafdata());
    if (cpeextpseportlldppdpwrtype.is_set || is_set(cpeextpseportlldppdpwrtype.yfilter)) leaf_name_data.push_back(cpeextpseportlldppdpwrtype.get_name_leafdata());
    if (cpeextpseportlldppwrsrc.is_set || is_set(cpeextpseportlldppwrsrc.yfilter)) leaf_name_data.push_back(cpeextpseportlldppwrsrc.get_name_leafdata());
    if (cpeextpseportlldppdpwrsrc.is_set || is_set(cpeextpseportlldppdpwrsrc.yfilter)) leaf_name_data.push_back(cpeextpseportlldppdpwrsrc.get_name_leafdata());
    if (cpeextpseportlldppwrpriority.is_set || is_set(cpeextpseportlldppwrpriority.yfilter)) leaf_name_data.push_back(cpeextpseportlldppwrpriority.get_name_leafdata());
    if (cpeextpseportlldppdpwrpriority.is_set || is_set(cpeextpseportlldppdpwrpriority.yfilter)) leaf_name_data.push_back(cpeextpseportlldppdpwrpriority.get_name_leafdata());
    if (cpeextpseportlldppwrreq.is_set || is_set(cpeextpseportlldppwrreq.yfilter)) leaf_name_data.push_back(cpeextpseportlldppwrreq.get_name_leafdata());
    if (cpeextpseportlldppdpwrreq.is_set || is_set(cpeextpseportlldppdpwrreq.yfilter)) leaf_name_data.push_back(cpeextpseportlldppdpwrreq.get_name_leafdata());
    if (cpeextpseportlldppwralloc.is_set || is_set(cpeextpseportlldppwralloc.yfilter)) leaf_name_data.push_back(cpeextpseportlldppwralloc.get_name_leafdata());
    if (cpeextpseportlldppdpwralloc.is_set || is_set(cpeextpseportlldppdpwralloc.yfilter)) leaf_name_data.push_back(cpeextpseportlldppdpwralloc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pethPsePortGroupIndex")
    {
        pethpseportgroupindex = value;
        pethpseportgroupindex.value_namespace = name_space;
        pethpseportgroupindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pethPsePortIndex")
    {
        pethpseportindex = value;
        pethpseportindex.value_namespace = name_space;
        pethpseportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPsePortLldpPwrType")
    {
        cpeextpseportlldppwrtype = value;
        cpeextpseportlldppwrtype.value_namespace = name_space;
        cpeextpseportlldppwrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPsePortLldpPdPwrType")
    {
        cpeextpseportlldppdpwrtype = value;
        cpeextpseportlldppdpwrtype.value_namespace = name_space;
        cpeextpseportlldppdpwrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPsePortLldpPwrSrc")
    {
        cpeextpseportlldppwrsrc = value;
        cpeextpseportlldppwrsrc.value_namespace = name_space;
        cpeextpseportlldppwrsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPsePortLldpPdPwrSrc")
    {
        cpeextpseportlldppdpwrsrc = value;
        cpeextpseportlldppdpwrsrc.value_namespace = name_space;
        cpeextpseportlldppdpwrsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPsePortLldpPwrPriority")
    {
        cpeextpseportlldppwrpriority = value;
        cpeextpseportlldppwrpriority.value_namespace = name_space;
        cpeextpseportlldppwrpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPsePortLldpPdPwrPriority")
    {
        cpeextpseportlldppdpwrpriority = value;
        cpeextpseportlldppdpwrpriority.value_namespace = name_space;
        cpeextpseportlldppdpwrpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPsePortLldpPwrReq")
    {
        cpeextpseportlldppwrreq = value;
        cpeextpseportlldppwrreq.value_namespace = name_space;
        cpeextpseportlldppwrreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPsePortLldpPdPwrReq")
    {
        cpeextpseportlldppdpwrreq = value;
        cpeextpseportlldppdpwrreq.value_namespace = name_space;
        cpeextpseportlldppdpwrreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPsePortLldpPwrAlloc")
    {
        cpeextpseportlldppwralloc = value;
        cpeextpseportlldppwralloc.value_namespace = name_space;
        cpeextpseportlldppwralloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpeExtPsePortLldpPdPwrAlloc")
    {
        cpeextpseportlldppdpwralloc = value;
        cpeextpseportlldppdpwralloc.value_namespace = name_space;
        cpeextpseportlldppdpwralloc.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pethPsePortGroupIndex")
    {
        pethpseportgroupindex.yfilter = yfilter;
    }
    if(value_path == "pethPsePortIndex")
    {
        pethpseportindex.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortLldpPwrType")
    {
        cpeextpseportlldppwrtype.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortLldpPdPwrType")
    {
        cpeextpseportlldppdpwrtype.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortLldpPwrSrc")
    {
        cpeextpseportlldppwrsrc.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortLldpPdPwrSrc")
    {
        cpeextpseportlldppdpwrsrc.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortLldpPwrPriority")
    {
        cpeextpseportlldppwrpriority.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortLldpPdPwrPriority")
    {
        cpeextpseportlldppdpwrpriority.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortLldpPwrReq")
    {
        cpeextpseportlldppwrreq.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortLldpPdPwrReq")
    {
        cpeextpseportlldppdpwrreq.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortLldpPwrAlloc")
    {
        cpeextpseportlldppwralloc.yfilter = yfilter;
    }
    if(value_path == "cpeExtPsePortLldpPdPwrAlloc")
    {
        cpeextpseportlldppdpwralloc.yfilter = yfilter;
    }
}

bool CISCOPOWERETHERNETEXTMIB::Cpeextpseportlldptable::Cpeextpseportlldpentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pethPsePortGroupIndex" || name == "pethPsePortIndex" || name == "cpeExtPsePortLldpPwrType" || name == "cpeExtPsePortLldpPdPwrType" || name == "cpeExtPsePortLldpPwrSrc" || name == "cpeExtPsePortLldpPdPwrSrc" || name == "cpeExtPsePortLldpPwrPriority" || name == "cpeExtPsePortLldpPdPwrPriority" || name == "cpeExtPsePortLldpPwrReq" || name == "cpeExtPsePortLldpPdPwrReq" || name == "cpeExtPsePortLldpPwrAlloc" || name == "cpeExtPsePortLldpPdPwrAlloc")
        return true;
    return false;
}

const Enum::YLeaf CpeExtLldpPwrType::type1Pd {1, "type1Pd"};
const Enum::YLeaf CpeExtLldpPwrType::type1Pse {2, "type1Pse"};
const Enum::YLeaf CpeExtLldpPwrType::type2Pd {3, "type2Pd"};
const Enum::YLeaf CpeExtLldpPwrType::type2Pse {4, "type2Pse"};

const Enum::YLeaf CpeExtLldpPwrSrc::pseAndLocal {1, "pseAndLocal"};
const Enum::YLeaf CpeExtLldpPwrSrc::local {2, "local"};
const Enum::YLeaf CpeExtLldpPwrSrc::pse {3, "pse"};
const Enum::YLeaf CpeExtLldpPwrSrc::backupSrc {4, "backupSrc"};
const Enum::YLeaf CpeExtLldpPwrSrc::primarySrc {5, "primarySrc"};
const Enum::YLeaf CpeExtLldpPwrSrc::unknown {6, "unknown"};

const Enum::YLeaf CpeExtPwrPriority::critical {1, "critical"};
const Enum::YLeaf CpeExtPwrPriority::high {2, "high"};
const Enum::YLeaf CpeExtPwrPriority::low {3, "low"};
const Enum::YLeaf CpeExtPwrPriority::unknown {4, "unknown"};

const Enum::YLeaf CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::Cpeextpdstatsclass::cisco {1, "cisco"};
const Enum::YLeaf CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::Cpeextpdstatsclass::class0 {2, "class0"};
const Enum::YLeaf CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::Cpeextpdstatsclass::class1 {3, "class1"};
const Enum::YLeaf CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::Cpeextpdstatsclass::class2 {4, "class2"};
const Enum::YLeaf CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::Cpeextpdstatsclass::class3 {5, "class3"};
const Enum::YLeaf CISCOPOWERETHERNETEXTMIB::Cpeextpdstatstable::Cpeextpdstatsentry::Cpeextpdstatsclass::class4 {6, "class4"};


}
}

