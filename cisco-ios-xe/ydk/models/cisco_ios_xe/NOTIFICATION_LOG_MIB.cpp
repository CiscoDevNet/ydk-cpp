
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "NOTIFICATION_LOG_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace NOTIFICATION_LOG_MIB {

NOTIFICATIONLOGMIB::NOTIFICATIONLOGMIB()
    :
    nlmconfig(std::make_shared<NOTIFICATIONLOGMIB::NlmConfig>())
    , nlmstats(std::make_shared<NOTIFICATIONLOGMIB::NlmStats>())
    , nlmconfiglogtable(std::make_shared<NOTIFICATIONLOGMIB::NlmConfigLogTable>())
    , nlmlogtable(std::make_shared<NOTIFICATIONLOGMIB::NlmLogTable>())
    , nlmlogvariabletable(std::make_shared<NOTIFICATIONLOGMIB::NlmLogVariableTable>())
{
    nlmconfig->parent = this;
    nlmstats->parent = this;
    nlmconfiglogtable->parent = this;
    nlmlogtable->parent = this;
    nlmlogvariabletable->parent = this;

    yang_name = "NOTIFICATION-LOG-MIB"; yang_parent_name = "NOTIFICATION-LOG-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

NOTIFICATIONLOGMIB::~NOTIFICATIONLOGMIB()
{
}

bool NOTIFICATIONLOGMIB::has_data() const
{
    if (is_presence_container) return true;
    return (nlmconfig !=  nullptr && nlmconfig->has_data())
	|| (nlmstats !=  nullptr && nlmstats->has_data())
	|| (nlmconfiglogtable !=  nullptr && nlmconfiglogtable->has_data())
	|| (nlmlogtable !=  nullptr && nlmlogtable->has_data())
	|| (nlmlogvariabletable !=  nullptr && nlmlogvariabletable->has_data());
}

bool NOTIFICATIONLOGMIB::has_operation() const
{
    return is_set(yfilter)
	|| (nlmconfig !=  nullptr && nlmconfig->has_operation())
	|| (nlmstats !=  nullptr && nlmstats->has_operation())
	|| (nlmconfiglogtable !=  nullptr && nlmconfiglogtable->has_operation())
	|| (nlmlogtable !=  nullptr && nlmlogtable->has_operation())
	|| (nlmlogvariabletable !=  nullptr && nlmlogvariabletable->has_operation());
}

std::string NOTIFICATIONLOGMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NOTIFICATIONLOGMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NOTIFICATIONLOGMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlmConfig")
    {
        if(nlmconfig == nullptr)
        {
            nlmconfig = std::make_shared<NOTIFICATIONLOGMIB::NlmConfig>();
        }
        return nlmconfig;
    }

    if(child_yang_name == "nlmStats")
    {
        if(nlmstats == nullptr)
        {
            nlmstats = std::make_shared<NOTIFICATIONLOGMIB::NlmStats>();
        }
        return nlmstats;
    }

    if(child_yang_name == "nlmConfigLogTable")
    {
        if(nlmconfiglogtable == nullptr)
        {
            nlmconfiglogtable = std::make_shared<NOTIFICATIONLOGMIB::NlmConfigLogTable>();
        }
        return nlmconfiglogtable;
    }

    if(child_yang_name == "nlmLogTable")
    {
        if(nlmlogtable == nullptr)
        {
            nlmlogtable = std::make_shared<NOTIFICATIONLOGMIB::NlmLogTable>();
        }
        return nlmlogtable;
    }

    if(child_yang_name == "nlmLogVariableTable")
    {
        if(nlmlogvariabletable == nullptr)
        {
            nlmlogvariabletable = std::make_shared<NOTIFICATIONLOGMIB::NlmLogVariableTable>();
        }
        return nlmlogvariabletable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NOTIFICATIONLOGMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nlmconfig != nullptr)
    {
        children["nlmConfig"] = nlmconfig;
    }

    if(nlmstats != nullptr)
    {
        children["nlmStats"] = nlmstats;
    }

    if(nlmconfiglogtable != nullptr)
    {
        children["nlmConfigLogTable"] = nlmconfiglogtable;
    }

    if(nlmlogtable != nullptr)
    {
        children["nlmLogTable"] = nlmlogtable;
    }

    if(nlmlogvariabletable != nullptr)
    {
        children["nlmLogVariableTable"] = nlmlogvariabletable;
    }

    return children;
}

void NOTIFICATIONLOGMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NOTIFICATIONLOGMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> NOTIFICATIONLOGMIB::clone_ptr() const
{
    return std::make_shared<NOTIFICATIONLOGMIB>();
}

std::string NOTIFICATIONLOGMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string NOTIFICATIONLOGMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function NOTIFICATIONLOGMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NOTIFICATIONLOGMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool NOTIFICATIONLOGMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmConfig" || name == "nlmStats" || name == "nlmConfigLogTable" || name == "nlmLogTable" || name == "nlmLogVariableTable")
        return true;
    return false;
}

NOTIFICATIONLOGMIB::NlmConfig::NlmConfig()
    :
    nlmconfigglobalentrylimit{YType::uint32, "nlmConfigGlobalEntryLimit"},
    nlmconfigglobalageout{YType::uint32, "nlmConfigGlobalAgeOut"}
{

    yang_name = "nlmConfig"; yang_parent_name = "NOTIFICATION-LOG-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

NOTIFICATIONLOGMIB::NlmConfig::~NlmConfig()
{
}

bool NOTIFICATIONLOGMIB::NlmConfig::has_data() const
{
    if (is_presence_container) return true;
    return nlmconfigglobalentrylimit.is_set
	|| nlmconfigglobalageout.is_set;
}

bool NOTIFICATIONLOGMIB::NlmConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmconfigglobalentrylimit.yfilter)
	|| ydk::is_set(nlmconfigglobalageout.yfilter);
}

std::string NOTIFICATIONLOGMIB::NlmConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NOTIFICATIONLOGMIB::NlmConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmConfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NOTIFICATIONLOGMIB::NlmConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmconfigglobalentrylimit.is_set || is_set(nlmconfigglobalentrylimit.yfilter)) leaf_name_data.push_back(nlmconfigglobalentrylimit.get_name_leafdata());
    if (nlmconfigglobalageout.is_set || is_set(nlmconfigglobalageout.yfilter)) leaf_name_data.push_back(nlmconfigglobalageout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NOTIFICATIONLOGMIB::NlmConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NOTIFICATIONLOGMIB::NlmConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NOTIFICATIONLOGMIB::NlmConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlmConfigGlobalEntryLimit")
    {
        nlmconfigglobalentrylimit = value;
        nlmconfigglobalentrylimit.value_namespace = name_space;
        nlmconfigglobalentrylimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmConfigGlobalAgeOut")
    {
        nlmconfigglobalageout = value;
        nlmconfigglobalageout.value_namespace = name_space;
        nlmconfigglobalageout.value_namespace_prefix = name_space_prefix;
    }
}

void NOTIFICATIONLOGMIB::NlmConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlmConfigGlobalEntryLimit")
    {
        nlmconfigglobalentrylimit.yfilter = yfilter;
    }
    if(value_path == "nlmConfigGlobalAgeOut")
    {
        nlmconfigglobalageout.yfilter = yfilter;
    }
}

bool NOTIFICATIONLOGMIB::NlmConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmConfigGlobalEntryLimit" || name == "nlmConfigGlobalAgeOut")
        return true;
    return false;
}

NOTIFICATIONLOGMIB::NlmStats::NlmStats()
    :
    nlmstatsglobalnotificationslogged{YType::uint32, "nlmStatsGlobalNotificationsLogged"},
    nlmstatsglobalnotificationsbumped{YType::uint32, "nlmStatsGlobalNotificationsBumped"}
{

    yang_name = "nlmStats"; yang_parent_name = "NOTIFICATION-LOG-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

NOTIFICATIONLOGMIB::NlmStats::~NlmStats()
{
}

bool NOTIFICATIONLOGMIB::NlmStats::has_data() const
{
    if (is_presence_container) return true;
    return nlmstatsglobalnotificationslogged.is_set
	|| nlmstatsglobalnotificationsbumped.is_set;
}

bool NOTIFICATIONLOGMIB::NlmStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmstatsglobalnotificationslogged.yfilter)
	|| ydk::is_set(nlmstatsglobalnotificationsbumped.yfilter);
}

std::string NOTIFICATIONLOGMIB::NlmStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NOTIFICATIONLOGMIB::NlmStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmStats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NOTIFICATIONLOGMIB::NlmStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmstatsglobalnotificationslogged.is_set || is_set(nlmstatsglobalnotificationslogged.yfilter)) leaf_name_data.push_back(nlmstatsglobalnotificationslogged.get_name_leafdata());
    if (nlmstatsglobalnotificationsbumped.is_set || is_set(nlmstatsglobalnotificationsbumped.yfilter)) leaf_name_data.push_back(nlmstatsglobalnotificationsbumped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NOTIFICATIONLOGMIB::NlmStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NOTIFICATIONLOGMIB::NlmStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NOTIFICATIONLOGMIB::NlmStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlmStatsGlobalNotificationsLogged")
    {
        nlmstatsglobalnotificationslogged = value;
        nlmstatsglobalnotificationslogged.value_namespace = name_space;
        nlmstatsglobalnotificationslogged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmStatsGlobalNotificationsBumped")
    {
        nlmstatsglobalnotificationsbumped = value;
        nlmstatsglobalnotificationsbumped.value_namespace = name_space;
        nlmstatsglobalnotificationsbumped.value_namespace_prefix = name_space_prefix;
    }
}

void NOTIFICATIONLOGMIB::NlmStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlmStatsGlobalNotificationsLogged")
    {
        nlmstatsglobalnotificationslogged.yfilter = yfilter;
    }
    if(value_path == "nlmStatsGlobalNotificationsBumped")
    {
        nlmstatsglobalnotificationsbumped.yfilter = yfilter;
    }
}

bool NOTIFICATIONLOGMIB::NlmStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmStatsGlobalNotificationsLogged" || name == "nlmStatsGlobalNotificationsBumped")
        return true;
    return false;
}

NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogTable()
    :
    nlmconfiglogentry(this, {"nlmlogname"})
{

    yang_name = "nlmConfigLogTable"; yang_parent_name = "NOTIFICATION-LOG-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

NOTIFICATIONLOGMIB::NlmConfigLogTable::~NlmConfigLogTable()
{
}

bool NOTIFICATIONLOGMIB::NlmConfigLogTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nlmconfiglogentry.len(); index++)
    {
        if(nlmconfiglogentry[index]->has_data())
            return true;
    }
    return false;
}

bool NOTIFICATIONLOGMIB::NlmConfigLogTable::has_operation() const
{
    for (std::size_t index=0; index<nlmconfiglogentry.len(); index++)
    {
        if(nlmconfiglogentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NOTIFICATIONLOGMIB::NlmConfigLogTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NOTIFICATIONLOGMIB::NlmConfigLogTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmConfigLogTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NOTIFICATIONLOGMIB::NlmConfigLogTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NOTIFICATIONLOGMIB::NlmConfigLogTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlmConfigLogEntry")
    {
        auto c = std::make_shared<NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry>();
        c->parent = this;
        nlmconfiglogentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NOTIFICATIONLOGMIB::NlmConfigLogTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nlmconfiglogentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NOTIFICATIONLOGMIB::NlmConfigLogTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NOTIFICATIONLOGMIB::NlmConfigLogTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NOTIFICATIONLOGMIB::NlmConfigLogTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmConfigLogEntry")
        return true;
    return false;
}

NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::NlmConfigLogEntry()
    :
    nlmlogname{YType::str, "nlmLogName"},
    nlmconfiglogfiltername{YType::str, "nlmConfigLogFilterName"},
    nlmconfiglogentrylimit{YType::uint32, "nlmConfigLogEntryLimit"},
    nlmconfiglogadminstatus{YType::enumeration, "nlmConfigLogAdminStatus"},
    nlmconfiglogoperstatus{YType::enumeration, "nlmConfigLogOperStatus"},
    nlmconfiglogstoragetype{YType::enumeration, "nlmConfigLogStorageType"},
    nlmconfiglogentrystatus{YType::enumeration, "nlmConfigLogEntryStatus"},
    nlmstatslognotificationslogged{YType::uint32, "nlmStatsLogNotificationsLogged"},
    nlmstatslognotificationsbumped{YType::uint32, "nlmStatsLogNotificationsBumped"}
{

    yang_name = "nlmConfigLogEntry"; yang_parent_name = "nlmConfigLogTable"; is_top_level_class = false; has_list_ancestor = false; 
}

NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::~NlmConfigLogEntry()
{
}

bool NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::has_data() const
{
    if (is_presence_container) return true;
    return nlmlogname.is_set
	|| nlmconfiglogfiltername.is_set
	|| nlmconfiglogentrylimit.is_set
	|| nlmconfiglogadminstatus.is_set
	|| nlmconfiglogoperstatus.is_set
	|| nlmconfiglogstoragetype.is_set
	|| nlmconfiglogentrystatus.is_set
	|| nlmstatslognotificationslogged.is_set
	|| nlmstatslognotificationsbumped.is_set;
}

bool NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmlogname.yfilter)
	|| ydk::is_set(nlmconfiglogfiltername.yfilter)
	|| ydk::is_set(nlmconfiglogentrylimit.yfilter)
	|| ydk::is_set(nlmconfiglogadminstatus.yfilter)
	|| ydk::is_set(nlmconfiglogoperstatus.yfilter)
	|| ydk::is_set(nlmconfiglogstoragetype.yfilter)
	|| ydk::is_set(nlmconfiglogentrystatus.yfilter)
	|| ydk::is_set(nlmstatslognotificationslogged.yfilter)
	|| ydk::is_set(nlmstatslognotificationsbumped.yfilter);
}

std::string NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/nlmConfigLogTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmConfigLogEntry";
    ADD_KEY_TOKEN(nlmlogname, "nlmLogName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmlogname.is_set || is_set(nlmlogname.yfilter)) leaf_name_data.push_back(nlmlogname.get_name_leafdata());
    if (nlmconfiglogfiltername.is_set || is_set(nlmconfiglogfiltername.yfilter)) leaf_name_data.push_back(nlmconfiglogfiltername.get_name_leafdata());
    if (nlmconfiglogentrylimit.is_set || is_set(nlmconfiglogentrylimit.yfilter)) leaf_name_data.push_back(nlmconfiglogentrylimit.get_name_leafdata());
    if (nlmconfiglogadminstatus.is_set || is_set(nlmconfiglogadminstatus.yfilter)) leaf_name_data.push_back(nlmconfiglogadminstatus.get_name_leafdata());
    if (nlmconfiglogoperstatus.is_set || is_set(nlmconfiglogoperstatus.yfilter)) leaf_name_data.push_back(nlmconfiglogoperstatus.get_name_leafdata());
    if (nlmconfiglogstoragetype.is_set || is_set(nlmconfiglogstoragetype.yfilter)) leaf_name_data.push_back(nlmconfiglogstoragetype.get_name_leafdata());
    if (nlmconfiglogentrystatus.is_set || is_set(nlmconfiglogentrystatus.yfilter)) leaf_name_data.push_back(nlmconfiglogentrystatus.get_name_leafdata());
    if (nlmstatslognotificationslogged.is_set || is_set(nlmstatslognotificationslogged.yfilter)) leaf_name_data.push_back(nlmstatslognotificationslogged.get_name_leafdata());
    if (nlmstatslognotificationsbumped.is_set || is_set(nlmstatslognotificationsbumped.yfilter)) leaf_name_data.push_back(nlmstatslognotificationsbumped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlmLogName")
    {
        nlmlogname = value;
        nlmlogname.value_namespace = name_space;
        nlmlogname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmConfigLogFilterName")
    {
        nlmconfiglogfiltername = value;
        nlmconfiglogfiltername.value_namespace = name_space;
        nlmconfiglogfiltername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmConfigLogEntryLimit")
    {
        nlmconfiglogentrylimit = value;
        nlmconfiglogentrylimit.value_namespace = name_space;
        nlmconfiglogentrylimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmConfigLogAdminStatus")
    {
        nlmconfiglogadminstatus = value;
        nlmconfiglogadminstatus.value_namespace = name_space;
        nlmconfiglogadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmConfigLogOperStatus")
    {
        nlmconfiglogoperstatus = value;
        nlmconfiglogoperstatus.value_namespace = name_space;
        nlmconfiglogoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmConfigLogStorageType")
    {
        nlmconfiglogstoragetype = value;
        nlmconfiglogstoragetype.value_namespace = name_space;
        nlmconfiglogstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmConfigLogEntryStatus")
    {
        nlmconfiglogentrystatus = value;
        nlmconfiglogentrystatus.value_namespace = name_space;
        nlmconfiglogentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmStatsLogNotificationsLogged")
    {
        nlmstatslognotificationslogged = value;
        nlmstatslognotificationslogged.value_namespace = name_space;
        nlmstatslognotificationslogged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmStatsLogNotificationsBumped")
    {
        nlmstatslognotificationsbumped = value;
        nlmstatslognotificationsbumped.value_namespace = name_space;
        nlmstatslognotificationsbumped.value_namespace_prefix = name_space_prefix;
    }
}

void NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlmLogName")
    {
        nlmlogname.yfilter = yfilter;
    }
    if(value_path == "nlmConfigLogFilterName")
    {
        nlmconfiglogfiltername.yfilter = yfilter;
    }
    if(value_path == "nlmConfigLogEntryLimit")
    {
        nlmconfiglogentrylimit.yfilter = yfilter;
    }
    if(value_path == "nlmConfigLogAdminStatus")
    {
        nlmconfiglogadminstatus.yfilter = yfilter;
    }
    if(value_path == "nlmConfigLogOperStatus")
    {
        nlmconfiglogoperstatus.yfilter = yfilter;
    }
    if(value_path == "nlmConfigLogStorageType")
    {
        nlmconfiglogstoragetype.yfilter = yfilter;
    }
    if(value_path == "nlmConfigLogEntryStatus")
    {
        nlmconfiglogentrystatus.yfilter = yfilter;
    }
    if(value_path == "nlmStatsLogNotificationsLogged")
    {
        nlmstatslognotificationslogged.yfilter = yfilter;
    }
    if(value_path == "nlmStatsLogNotificationsBumped")
    {
        nlmstatslognotificationsbumped.yfilter = yfilter;
    }
}

bool NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmLogName" || name == "nlmConfigLogFilterName" || name == "nlmConfigLogEntryLimit" || name == "nlmConfigLogAdminStatus" || name == "nlmConfigLogOperStatus" || name == "nlmConfigLogStorageType" || name == "nlmConfigLogEntryStatus" || name == "nlmStatsLogNotificationsLogged" || name == "nlmStatsLogNotificationsBumped")
        return true;
    return false;
}

NOTIFICATIONLOGMIB::NlmLogTable::NlmLogTable()
    :
    nlmlogentry(this, {"nlmlogname", "nlmlogindex"})
{

    yang_name = "nlmLogTable"; yang_parent_name = "NOTIFICATION-LOG-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

NOTIFICATIONLOGMIB::NlmLogTable::~NlmLogTable()
{
}

bool NOTIFICATIONLOGMIB::NlmLogTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nlmlogentry.len(); index++)
    {
        if(nlmlogentry[index]->has_data())
            return true;
    }
    return false;
}

bool NOTIFICATIONLOGMIB::NlmLogTable::has_operation() const
{
    for (std::size_t index=0; index<nlmlogentry.len(); index++)
    {
        if(nlmlogentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NOTIFICATIONLOGMIB::NlmLogTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NOTIFICATIONLOGMIB::NlmLogTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmLogTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NOTIFICATIONLOGMIB::NlmLogTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NOTIFICATIONLOGMIB::NlmLogTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlmLogEntry")
    {
        auto c = std::make_shared<NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry>();
        c->parent = this;
        nlmlogentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NOTIFICATIONLOGMIB::NlmLogTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nlmlogentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NOTIFICATIONLOGMIB::NlmLogTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NOTIFICATIONLOGMIB::NlmLogTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NOTIFICATIONLOGMIB::NlmLogTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmLogEntry")
        return true;
    return false;
}

NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::NlmLogEntry()
    :
    nlmlogname{YType::str, "nlmLogName"},
    nlmlogindex{YType::uint32, "nlmLogIndex"},
    nlmlogtime{YType::uint32, "nlmLogTime"},
    nlmlogdateandtime{YType::str, "nlmLogDateAndTime"},
    nlmlogengineid{YType::str, "nlmLogEngineID"},
    nlmlogenginetaddress{YType::str, "nlmLogEngineTAddress"},
    nlmlogenginetdomain{YType::str, "nlmLogEngineTDomain"},
    nlmlogcontextengineid{YType::str, "nlmLogContextEngineID"},
    nlmlogcontextname{YType::str, "nlmLogContextName"},
    nlmlognotificationid{YType::str, "nlmLogNotificationID"}
{

    yang_name = "nlmLogEntry"; yang_parent_name = "nlmLogTable"; is_top_level_class = false; has_list_ancestor = false; 
}

NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::~NlmLogEntry()
{
}

bool NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::has_data() const
{
    if (is_presence_container) return true;
    return nlmlogname.is_set
	|| nlmlogindex.is_set
	|| nlmlogtime.is_set
	|| nlmlogdateandtime.is_set
	|| nlmlogengineid.is_set
	|| nlmlogenginetaddress.is_set
	|| nlmlogenginetdomain.is_set
	|| nlmlogcontextengineid.is_set
	|| nlmlogcontextname.is_set
	|| nlmlognotificationid.is_set;
}

bool NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmlogname.yfilter)
	|| ydk::is_set(nlmlogindex.yfilter)
	|| ydk::is_set(nlmlogtime.yfilter)
	|| ydk::is_set(nlmlogdateandtime.yfilter)
	|| ydk::is_set(nlmlogengineid.yfilter)
	|| ydk::is_set(nlmlogenginetaddress.yfilter)
	|| ydk::is_set(nlmlogenginetdomain.yfilter)
	|| ydk::is_set(nlmlogcontextengineid.yfilter)
	|| ydk::is_set(nlmlogcontextname.yfilter)
	|| ydk::is_set(nlmlognotificationid.yfilter);
}

std::string NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/nlmLogTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmLogEntry";
    ADD_KEY_TOKEN(nlmlogname, "nlmLogName");
    ADD_KEY_TOKEN(nlmlogindex, "nlmLogIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmlogname.is_set || is_set(nlmlogname.yfilter)) leaf_name_data.push_back(nlmlogname.get_name_leafdata());
    if (nlmlogindex.is_set || is_set(nlmlogindex.yfilter)) leaf_name_data.push_back(nlmlogindex.get_name_leafdata());
    if (nlmlogtime.is_set || is_set(nlmlogtime.yfilter)) leaf_name_data.push_back(nlmlogtime.get_name_leafdata());
    if (nlmlogdateandtime.is_set || is_set(nlmlogdateandtime.yfilter)) leaf_name_data.push_back(nlmlogdateandtime.get_name_leafdata());
    if (nlmlogengineid.is_set || is_set(nlmlogengineid.yfilter)) leaf_name_data.push_back(nlmlogengineid.get_name_leafdata());
    if (nlmlogenginetaddress.is_set || is_set(nlmlogenginetaddress.yfilter)) leaf_name_data.push_back(nlmlogenginetaddress.get_name_leafdata());
    if (nlmlogenginetdomain.is_set || is_set(nlmlogenginetdomain.yfilter)) leaf_name_data.push_back(nlmlogenginetdomain.get_name_leafdata());
    if (nlmlogcontextengineid.is_set || is_set(nlmlogcontextengineid.yfilter)) leaf_name_data.push_back(nlmlogcontextengineid.get_name_leafdata());
    if (nlmlogcontextname.is_set || is_set(nlmlogcontextname.yfilter)) leaf_name_data.push_back(nlmlogcontextname.get_name_leafdata());
    if (nlmlognotificationid.is_set || is_set(nlmlognotificationid.yfilter)) leaf_name_data.push_back(nlmlognotificationid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlmLogName")
    {
        nlmlogname = value;
        nlmlogname.value_namespace = name_space;
        nlmlogname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogIndex")
    {
        nlmlogindex = value;
        nlmlogindex.value_namespace = name_space;
        nlmlogindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogTime")
    {
        nlmlogtime = value;
        nlmlogtime.value_namespace = name_space;
        nlmlogtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogDateAndTime")
    {
        nlmlogdateandtime = value;
        nlmlogdateandtime.value_namespace = name_space;
        nlmlogdateandtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogEngineID")
    {
        nlmlogengineid = value;
        nlmlogengineid.value_namespace = name_space;
        nlmlogengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogEngineTAddress")
    {
        nlmlogenginetaddress = value;
        nlmlogenginetaddress.value_namespace = name_space;
        nlmlogenginetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogEngineTDomain")
    {
        nlmlogenginetdomain = value;
        nlmlogenginetdomain.value_namespace = name_space;
        nlmlogenginetdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogContextEngineID")
    {
        nlmlogcontextengineid = value;
        nlmlogcontextengineid.value_namespace = name_space;
        nlmlogcontextengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogContextName")
    {
        nlmlogcontextname = value;
        nlmlogcontextname.value_namespace = name_space;
        nlmlogcontextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogNotificationID")
    {
        nlmlognotificationid = value;
        nlmlognotificationid.value_namespace = name_space;
        nlmlognotificationid.value_namespace_prefix = name_space_prefix;
    }
}

void NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlmLogName")
    {
        nlmlogname.yfilter = yfilter;
    }
    if(value_path == "nlmLogIndex")
    {
        nlmlogindex.yfilter = yfilter;
    }
    if(value_path == "nlmLogTime")
    {
        nlmlogtime.yfilter = yfilter;
    }
    if(value_path == "nlmLogDateAndTime")
    {
        nlmlogdateandtime.yfilter = yfilter;
    }
    if(value_path == "nlmLogEngineID")
    {
        nlmlogengineid.yfilter = yfilter;
    }
    if(value_path == "nlmLogEngineTAddress")
    {
        nlmlogenginetaddress.yfilter = yfilter;
    }
    if(value_path == "nlmLogEngineTDomain")
    {
        nlmlogenginetdomain.yfilter = yfilter;
    }
    if(value_path == "nlmLogContextEngineID")
    {
        nlmlogcontextengineid.yfilter = yfilter;
    }
    if(value_path == "nlmLogContextName")
    {
        nlmlogcontextname.yfilter = yfilter;
    }
    if(value_path == "nlmLogNotificationID")
    {
        nlmlognotificationid.yfilter = yfilter;
    }
}

bool NOTIFICATIONLOGMIB::NlmLogTable::NlmLogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmLogName" || name == "nlmLogIndex" || name == "nlmLogTime" || name == "nlmLogDateAndTime" || name == "nlmLogEngineID" || name == "nlmLogEngineTAddress" || name == "nlmLogEngineTDomain" || name == "nlmLogContextEngineID" || name == "nlmLogContextName" || name == "nlmLogNotificationID")
        return true;
    return false;
}

NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableTable()
    :
    nlmlogvariableentry(this, {"nlmlogname", "nlmlogindex", "nlmlogvariableindex"})
{

    yang_name = "nlmLogVariableTable"; yang_parent_name = "NOTIFICATION-LOG-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

NOTIFICATIONLOGMIB::NlmLogVariableTable::~NlmLogVariableTable()
{
}

bool NOTIFICATIONLOGMIB::NlmLogVariableTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nlmlogvariableentry.len(); index++)
    {
        if(nlmlogvariableentry[index]->has_data())
            return true;
    }
    return false;
}

bool NOTIFICATIONLOGMIB::NlmLogVariableTable::has_operation() const
{
    for (std::size_t index=0; index<nlmlogvariableentry.len(); index++)
    {
        if(nlmlogvariableentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NOTIFICATIONLOGMIB::NlmLogVariableTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NOTIFICATIONLOGMIB::NlmLogVariableTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmLogVariableTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NOTIFICATIONLOGMIB::NlmLogVariableTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NOTIFICATIONLOGMIB::NlmLogVariableTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlmLogVariableEntry")
    {
        auto c = std::make_shared<NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry>();
        c->parent = this;
        nlmlogvariableentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NOTIFICATIONLOGMIB::NlmLogVariableTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nlmlogvariableentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NOTIFICATIONLOGMIB::NlmLogVariableTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NOTIFICATIONLOGMIB::NlmLogVariableTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NOTIFICATIONLOGMIB::NlmLogVariableTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmLogVariableEntry")
        return true;
    return false;
}

NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::NlmLogVariableEntry()
    :
    nlmlogname{YType::str, "nlmLogName"},
    nlmlogindex{YType::str, "nlmLogIndex"},
    nlmlogvariableindex{YType::uint32, "nlmLogVariableIndex"},
    nlmlogvariableid{YType::str, "nlmLogVariableID"},
    nlmlogvariablevaluetype{YType::enumeration, "nlmLogVariableValueType"},
    nlmlogvariablecounter32val{YType::uint32, "nlmLogVariableCounter32Val"},
    nlmlogvariableunsigned32val{YType::uint32, "nlmLogVariableUnsigned32Val"},
    nlmlogvariabletimeticksval{YType::uint32, "nlmLogVariableTimeTicksVal"},
    nlmlogvariableinteger32val{YType::int32, "nlmLogVariableInteger32Val"},
    nlmlogvariableoctetstringval{YType::str, "nlmLogVariableOctetStringVal"},
    nlmlogvariableipaddressval{YType::str, "nlmLogVariableIpAddressVal"},
    nlmlogvariableoidval{YType::str, "nlmLogVariableOidVal"},
    nlmlogvariablecounter64val{YType::uint64, "nlmLogVariableCounter64Val"},
    nlmlogvariableopaqueval{YType::str, "nlmLogVariableOpaqueVal"}
{

    yang_name = "nlmLogVariableEntry"; yang_parent_name = "nlmLogVariableTable"; is_top_level_class = false; has_list_ancestor = false; 
}

NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::~NlmLogVariableEntry()
{
}

bool NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::has_data() const
{
    if (is_presence_container) return true;
    return nlmlogname.is_set
	|| nlmlogindex.is_set
	|| nlmlogvariableindex.is_set
	|| nlmlogvariableid.is_set
	|| nlmlogvariablevaluetype.is_set
	|| nlmlogvariablecounter32val.is_set
	|| nlmlogvariableunsigned32val.is_set
	|| nlmlogvariabletimeticksval.is_set
	|| nlmlogvariableinteger32val.is_set
	|| nlmlogvariableoctetstringval.is_set
	|| nlmlogvariableipaddressval.is_set
	|| nlmlogvariableoidval.is_set
	|| nlmlogvariablecounter64val.is_set
	|| nlmlogvariableopaqueval.is_set;
}

bool NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmlogname.yfilter)
	|| ydk::is_set(nlmlogindex.yfilter)
	|| ydk::is_set(nlmlogvariableindex.yfilter)
	|| ydk::is_set(nlmlogvariableid.yfilter)
	|| ydk::is_set(nlmlogvariablevaluetype.yfilter)
	|| ydk::is_set(nlmlogvariablecounter32val.yfilter)
	|| ydk::is_set(nlmlogvariableunsigned32val.yfilter)
	|| ydk::is_set(nlmlogvariabletimeticksval.yfilter)
	|| ydk::is_set(nlmlogvariableinteger32val.yfilter)
	|| ydk::is_set(nlmlogvariableoctetstringval.yfilter)
	|| ydk::is_set(nlmlogvariableipaddressval.yfilter)
	|| ydk::is_set(nlmlogvariableoidval.yfilter)
	|| ydk::is_set(nlmlogvariablecounter64val.yfilter)
	|| ydk::is_set(nlmlogvariableopaqueval.yfilter);
}

std::string NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/nlmLogVariableTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmLogVariableEntry";
    ADD_KEY_TOKEN(nlmlogname, "nlmLogName");
    ADD_KEY_TOKEN(nlmlogindex, "nlmLogIndex");
    ADD_KEY_TOKEN(nlmlogvariableindex, "nlmLogVariableIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmlogname.is_set || is_set(nlmlogname.yfilter)) leaf_name_data.push_back(nlmlogname.get_name_leafdata());
    if (nlmlogindex.is_set || is_set(nlmlogindex.yfilter)) leaf_name_data.push_back(nlmlogindex.get_name_leafdata());
    if (nlmlogvariableindex.is_set || is_set(nlmlogvariableindex.yfilter)) leaf_name_data.push_back(nlmlogvariableindex.get_name_leafdata());
    if (nlmlogvariableid.is_set || is_set(nlmlogvariableid.yfilter)) leaf_name_data.push_back(nlmlogvariableid.get_name_leafdata());
    if (nlmlogvariablevaluetype.is_set || is_set(nlmlogvariablevaluetype.yfilter)) leaf_name_data.push_back(nlmlogvariablevaluetype.get_name_leafdata());
    if (nlmlogvariablecounter32val.is_set || is_set(nlmlogvariablecounter32val.yfilter)) leaf_name_data.push_back(nlmlogvariablecounter32val.get_name_leafdata());
    if (nlmlogvariableunsigned32val.is_set || is_set(nlmlogvariableunsigned32val.yfilter)) leaf_name_data.push_back(nlmlogvariableunsigned32val.get_name_leafdata());
    if (nlmlogvariabletimeticksval.is_set || is_set(nlmlogvariabletimeticksval.yfilter)) leaf_name_data.push_back(nlmlogvariabletimeticksval.get_name_leafdata());
    if (nlmlogvariableinteger32val.is_set || is_set(nlmlogvariableinteger32val.yfilter)) leaf_name_data.push_back(nlmlogvariableinteger32val.get_name_leafdata());
    if (nlmlogvariableoctetstringval.is_set || is_set(nlmlogvariableoctetstringval.yfilter)) leaf_name_data.push_back(nlmlogvariableoctetstringval.get_name_leafdata());
    if (nlmlogvariableipaddressval.is_set || is_set(nlmlogvariableipaddressval.yfilter)) leaf_name_data.push_back(nlmlogvariableipaddressval.get_name_leafdata());
    if (nlmlogvariableoidval.is_set || is_set(nlmlogvariableoidval.yfilter)) leaf_name_data.push_back(nlmlogvariableoidval.get_name_leafdata());
    if (nlmlogvariablecounter64val.is_set || is_set(nlmlogvariablecounter64val.yfilter)) leaf_name_data.push_back(nlmlogvariablecounter64val.get_name_leafdata());
    if (nlmlogvariableopaqueval.is_set || is_set(nlmlogvariableopaqueval.yfilter)) leaf_name_data.push_back(nlmlogvariableopaqueval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlmLogName")
    {
        nlmlogname = value;
        nlmlogname.value_namespace = name_space;
        nlmlogname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogIndex")
    {
        nlmlogindex = value;
        nlmlogindex.value_namespace = name_space;
        nlmlogindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableIndex")
    {
        nlmlogvariableindex = value;
        nlmlogvariableindex.value_namespace = name_space;
        nlmlogvariableindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableID")
    {
        nlmlogvariableid = value;
        nlmlogvariableid.value_namespace = name_space;
        nlmlogvariableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableValueType")
    {
        nlmlogvariablevaluetype = value;
        nlmlogvariablevaluetype.value_namespace = name_space;
        nlmlogvariablevaluetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableCounter32Val")
    {
        nlmlogvariablecounter32val = value;
        nlmlogvariablecounter32val.value_namespace = name_space;
        nlmlogvariablecounter32val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableUnsigned32Val")
    {
        nlmlogvariableunsigned32val = value;
        nlmlogvariableunsigned32val.value_namespace = name_space;
        nlmlogvariableunsigned32val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableTimeTicksVal")
    {
        nlmlogvariabletimeticksval = value;
        nlmlogvariabletimeticksval.value_namespace = name_space;
        nlmlogvariabletimeticksval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableInteger32Val")
    {
        nlmlogvariableinteger32val = value;
        nlmlogvariableinteger32val.value_namespace = name_space;
        nlmlogvariableinteger32val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableOctetStringVal")
    {
        nlmlogvariableoctetstringval = value;
        nlmlogvariableoctetstringval.value_namespace = name_space;
        nlmlogvariableoctetstringval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableIpAddressVal")
    {
        nlmlogvariableipaddressval = value;
        nlmlogvariableipaddressval.value_namespace = name_space;
        nlmlogvariableipaddressval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableOidVal")
    {
        nlmlogvariableoidval = value;
        nlmlogvariableoidval.value_namespace = name_space;
        nlmlogvariableoidval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableCounter64Val")
    {
        nlmlogvariablecounter64val = value;
        nlmlogvariablecounter64val.value_namespace = name_space;
        nlmlogvariablecounter64val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableOpaqueVal")
    {
        nlmlogvariableopaqueval = value;
        nlmlogvariableopaqueval.value_namespace = name_space;
        nlmlogvariableopaqueval.value_namespace_prefix = name_space_prefix;
    }
}

void NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlmLogName")
    {
        nlmlogname.yfilter = yfilter;
    }
    if(value_path == "nlmLogIndex")
    {
        nlmlogindex.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableIndex")
    {
        nlmlogvariableindex.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableID")
    {
        nlmlogvariableid.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableValueType")
    {
        nlmlogvariablevaluetype.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableCounter32Val")
    {
        nlmlogvariablecounter32val.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableUnsigned32Val")
    {
        nlmlogvariableunsigned32val.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableTimeTicksVal")
    {
        nlmlogvariabletimeticksval.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableInteger32Val")
    {
        nlmlogvariableinteger32val.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableOctetStringVal")
    {
        nlmlogvariableoctetstringval.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableIpAddressVal")
    {
        nlmlogvariableipaddressval.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableOidVal")
    {
        nlmlogvariableoidval.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableCounter64Val")
    {
        nlmlogvariablecounter64val.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableOpaqueVal")
    {
        nlmlogvariableopaqueval.yfilter = yfilter;
    }
}

bool NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmLogName" || name == "nlmLogIndex" || name == "nlmLogVariableIndex" || name == "nlmLogVariableID" || name == "nlmLogVariableValueType" || name == "nlmLogVariableCounter32Val" || name == "nlmLogVariableUnsigned32Val" || name == "nlmLogVariableTimeTicksVal" || name == "nlmLogVariableInteger32Val" || name == "nlmLogVariableOctetStringVal" || name == "nlmLogVariableIpAddressVal" || name == "nlmLogVariableOidVal" || name == "nlmLogVariableCounter64Val" || name == "nlmLogVariableOpaqueVal")
        return true;
    return false;
}

const Enum::YLeaf NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::NlmConfigLogAdminStatus::enabled {1, "enabled"};
const Enum::YLeaf NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::NlmConfigLogAdminStatus::disabled {2, "disabled"};

const Enum::YLeaf NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::NlmConfigLogOperStatus::disabled {1, "disabled"};
const Enum::YLeaf NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::NlmConfigLogOperStatus::operational {2, "operational"};
const Enum::YLeaf NOTIFICATIONLOGMIB::NlmConfigLogTable::NlmConfigLogEntry::NlmConfigLogOperStatus::noFilter {3, "noFilter"};

const Enum::YLeaf NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::NlmLogVariableValueType::counter32 {1, "counter32"};
const Enum::YLeaf NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::NlmLogVariableValueType::unsigned32 {2, "unsigned32"};
const Enum::YLeaf NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::NlmLogVariableValueType::timeTicks {3, "timeTicks"};
const Enum::YLeaf NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::NlmLogVariableValueType::integer32 {4, "integer32"};
const Enum::YLeaf NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::NlmLogVariableValueType::ipAddress {5, "ipAddress"};
const Enum::YLeaf NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::NlmLogVariableValueType::octetString {6, "octetString"};
const Enum::YLeaf NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::NlmLogVariableValueType::objectId {7, "objectId"};
const Enum::YLeaf NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::NlmLogVariableValueType::counter64 {8, "counter64"};
const Enum::YLeaf NOTIFICATIONLOGMIB::NlmLogVariableTable::NlmLogVariableEntry::NlmLogVariableValueType::opaque {9, "opaque"};


}
}

