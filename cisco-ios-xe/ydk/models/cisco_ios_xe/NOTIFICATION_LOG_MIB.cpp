
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "NOTIFICATION_LOG_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace NOTIFICATION_LOG_MIB {

NotificationLogMib::NotificationLogMib()
    :
    nlmconfig(std::make_shared<NotificationLogMib::Nlmconfig>())
	,nlmconfiglogtable(std::make_shared<NotificationLogMib::Nlmconfiglogtable>())
	,nlmlogtable(std::make_shared<NotificationLogMib::Nlmlogtable>())
	,nlmlogvariabletable(std::make_shared<NotificationLogMib::Nlmlogvariabletable>())
	,nlmstats(std::make_shared<NotificationLogMib::Nlmstats>())
{
    nlmconfig->parent = this;

    nlmconfiglogtable->parent = this;

    nlmlogtable->parent = this;

    nlmlogvariabletable->parent = this;

    nlmstats->parent = this;

    yang_name = "NOTIFICATION-LOG-MIB"; yang_parent_name = "NOTIFICATION-LOG-MIB";
}

NotificationLogMib::~NotificationLogMib()
{
}

bool NotificationLogMib::has_data() const
{
    return (nlmconfig !=  nullptr && nlmconfig->has_data())
	|| (nlmconfiglogtable !=  nullptr && nlmconfiglogtable->has_data())
	|| (nlmlogtable !=  nullptr && nlmlogtable->has_data())
	|| (nlmlogvariabletable !=  nullptr && nlmlogvariabletable->has_data())
	|| (nlmstats !=  nullptr && nlmstats->has_data());
}

bool NotificationLogMib::has_operation() const
{
    return is_set(yfilter)
	|| (nlmconfig !=  nullptr && nlmconfig->has_operation())
	|| (nlmconfiglogtable !=  nullptr && nlmconfiglogtable->has_operation())
	|| (nlmlogtable !=  nullptr && nlmlogtable->has_operation())
	|| (nlmlogvariabletable !=  nullptr && nlmlogvariabletable->has_operation())
	|| (nlmstats !=  nullptr && nlmstats->has_operation());
}

std::string NotificationLogMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB";

    return path_buffer.str();

}

const EntityPath NotificationLogMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> NotificationLogMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlmConfig")
    {
        if(nlmconfig == nullptr)
        {
            nlmconfig = std::make_shared<NotificationLogMib::Nlmconfig>();
        }
        return nlmconfig;
    }

    if(child_yang_name == "nlmConfigLogTable")
    {
        if(nlmconfiglogtable == nullptr)
        {
            nlmconfiglogtable = std::make_shared<NotificationLogMib::Nlmconfiglogtable>();
        }
        return nlmconfiglogtable;
    }

    if(child_yang_name == "nlmLogTable")
    {
        if(nlmlogtable == nullptr)
        {
            nlmlogtable = std::make_shared<NotificationLogMib::Nlmlogtable>();
        }
        return nlmlogtable;
    }

    if(child_yang_name == "nlmLogVariableTable")
    {
        if(nlmlogvariabletable == nullptr)
        {
            nlmlogvariabletable = std::make_shared<NotificationLogMib::Nlmlogvariabletable>();
        }
        return nlmlogvariabletable;
    }

    if(child_yang_name == "nlmStats")
    {
        if(nlmstats == nullptr)
        {
            nlmstats = std::make_shared<NotificationLogMib::Nlmstats>();
        }
        return nlmstats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nlmconfig != nullptr)
    {
        children["nlmConfig"] = nlmconfig;
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

    if(nlmstats != nullptr)
    {
        children["nlmStats"] = nlmstats;
    }

    return children;
}

void NotificationLogMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NotificationLogMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> NotificationLogMib::clone_ptr() const
{
    return std::make_shared<NotificationLogMib>();
}

std::string NotificationLogMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string NotificationLogMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function NotificationLogMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NotificationLogMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool NotificationLogMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmConfig" || name == "nlmConfigLogTable" || name == "nlmLogTable" || name == "nlmLogVariableTable" || name == "nlmStats")
        return true;
    return false;
}

NotificationLogMib::Nlmconfig::Nlmconfig()
    :
    nlmconfigglobalageout{YType::uint32, "nlmConfigGlobalAgeOut"},
    nlmconfigglobalentrylimit{YType::uint32, "nlmConfigGlobalEntryLimit"}
{
    yang_name = "nlmConfig"; yang_parent_name = "NOTIFICATION-LOG-MIB";
}

NotificationLogMib::Nlmconfig::~Nlmconfig()
{
}

bool NotificationLogMib::Nlmconfig::has_data() const
{
    return nlmconfigglobalageout.is_set
	|| nlmconfigglobalentrylimit.is_set;
}

bool NotificationLogMib::Nlmconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmconfigglobalageout.yfilter)
	|| ydk::is_set(nlmconfigglobalentrylimit.yfilter);
}

std::string NotificationLogMib::Nlmconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmConfig";

    return path_buffer.str();

}

const EntityPath NotificationLogMib::Nlmconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmconfigglobalageout.is_set || is_set(nlmconfigglobalageout.yfilter)) leaf_name_data.push_back(nlmconfigglobalageout.get_name_leafdata());
    if (nlmconfigglobalentrylimit.is_set || is_set(nlmconfigglobalentrylimit.yfilter)) leaf_name_data.push_back(nlmconfigglobalentrylimit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NotificationLogMib::Nlmconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::Nlmconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NotificationLogMib::Nlmconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlmConfigGlobalAgeOut")
    {
        nlmconfigglobalageout = value;
        nlmconfigglobalageout.value_namespace = name_space;
        nlmconfigglobalageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmConfigGlobalEntryLimit")
    {
        nlmconfigglobalentrylimit = value;
        nlmconfigglobalentrylimit.value_namespace = name_space;
        nlmconfigglobalentrylimit.value_namespace_prefix = name_space_prefix;
    }
}

void NotificationLogMib::Nlmconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlmConfigGlobalAgeOut")
    {
        nlmconfigglobalageout.yfilter = yfilter;
    }
    if(value_path == "nlmConfigGlobalEntryLimit")
    {
        nlmconfigglobalentrylimit.yfilter = yfilter;
    }
}

bool NotificationLogMib::Nlmconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmConfigGlobalAgeOut" || name == "nlmConfigGlobalEntryLimit")
        return true;
    return false;
}

NotificationLogMib::Nlmstats::Nlmstats()
    :
    nlmstatsglobalnotificationsbumped{YType::uint32, "nlmStatsGlobalNotificationsBumped"},
    nlmstatsglobalnotificationslogged{YType::uint32, "nlmStatsGlobalNotificationsLogged"}
{
    yang_name = "nlmStats"; yang_parent_name = "NOTIFICATION-LOG-MIB";
}

NotificationLogMib::Nlmstats::~Nlmstats()
{
}

bool NotificationLogMib::Nlmstats::has_data() const
{
    return nlmstatsglobalnotificationsbumped.is_set
	|| nlmstatsglobalnotificationslogged.is_set;
}

bool NotificationLogMib::Nlmstats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmstatsglobalnotificationsbumped.yfilter)
	|| ydk::is_set(nlmstatsglobalnotificationslogged.yfilter);
}

std::string NotificationLogMib::Nlmstats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmStats";

    return path_buffer.str();

}

const EntityPath NotificationLogMib::Nlmstats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmstatsglobalnotificationsbumped.is_set || is_set(nlmstatsglobalnotificationsbumped.yfilter)) leaf_name_data.push_back(nlmstatsglobalnotificationsbumped.get_name_leafdata());
    if (nlmstatsglobalnotificationslogged.is_set || is_set(nlmstatsglobalnotificationslogged.yfilter)) leaf_name_data.push_back(nlmstatsglobalnotificationslogged.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NotificationLogMib::Nlmstats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::Nlmstats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NotificationLogMib::Nlmstats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlmStatsGlobalNotificationsBumped")
    {
        nlmstatsglobalnotificationsbumped = value;
        nlmstatsglobalnotificationsbumped.value_namespace = name_space;
        nlmstatsglobalnotificationsbumped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmStatsGlobalNotificationsLogged")
    {
        nlmstatsglobalnotificationslogged = value;
        nlmstatsglobalnotificationslogged.value_namespace = name_space;
        nlmstatsglobalnotificationslogged.value_namespace_prefix = name_space_prefix;
    }
}

void NotificationLogMib::Nlmstats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlmStatsGlobalNotificationsBumped")
    {
        nlmstatsglobalnotificationsbumped.yfilter = yfilter;
    }
    if(value_path == "nlmStatsGlobalNotificationsLogged")
    {
        nlmstatsglobalnotificationslogged.yfilter = yfilter;
    }
}

bool NotificationLogMib::Nlmstats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmStatsGlobalNotificationsBumped" || name == "nlmStatsGlobalNotificationsLogged")
        return true;
    return false;
}

NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogtable()
{
    yang_name = "nlmConfigLogTable"; yang_parent_name = "NOTIFICATION-LOG-MIB";
}

NotificationLogMib::Nlmconfiglogtable::~Nlmconfiglogtable()
{
}

bool NotificationLogMib::Nlmconfiglogtable::has_data() const
{
    for (std::size_t index=0; index<nlmconfiglogentry.size(); index++)
    {
        if(nlmconfiglogentry[index]->has_data())
            return true;
    }
    return false;
}

bool NotificationLogMib::Nlmconfiglogtable::has_operation() const
{
    for (std::size_t index=0; index<nlmconfiglogentry.size(); index++)
    {
        if(nlmconfiglogentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NotificationLogMib::Nlmconfiglogtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmConfigLogTable";

    return path_buffer.str();

}

const EntityPath NotificationLogMib::Nlmconfiglogtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NotificationLogMib::Nlmconfiglogtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlmConfigLogEntry")
    {
        for(auto const & c : nlmconfiglogentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry>();
        c->parent = this;
        nlmconfiglogentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::Nlmconfiglogtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nlmconfiglogentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NotificationLogMib::Nlmconfiglogtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NotificationLogMib::Nlmconfiglogtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NotificationLogMib::Nlmconfiglogtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmConfigLogEntry")
        return true;
    return false;
}

NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::Nlmconfiglogentry()
    :
    nlmlogname{YType::str, "nlmLogName"},
    nlmconfiglogadminstatus{YType::enumeration, "nlmConfigLogAdminStatus"},
    nlmconfiglogentrylimit{YType::uint32, "nlmConfigLogEntryLimit"},
    nlmconfiglogentrystatus{YType::enumeration, "nlmConfigLogEntryStatus"},
    nlmconfiglogfiltername{YType::str, "nlmConfigLogFilterName"},
    nlmconfiglogoperstatus{YType::enumeration, "nlmConfigLogOperStatus"},
    nlmconfiglogstoragetype{YType::enumeration, "nlmConfigLogStorageType"},
    nlmstatslognotificationsbumped{YType::uint32, "nlmStatsLogNotificationsBumped"},
    nlmstatslognotificationslogged{YType::uint32, "nlmStatsLogNotificationsLogged"}
{
    yang_name = "nlmConfigLogEntry"; yang_parent_name = "nlmConfigLogTable";
}

NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::~Nlmconfiglogentry()
{
}

bool NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::has_data() const
{
    return nlmlogname.is_set
	|| nlmconfiglogadminstatus.is_set
	|| nlmconfiglogentrylimit.is_set
	|| nlmconfiglogentrystatus.is_set
	|| nlmconfiglogfiltername.is_set
	|| nlmconfiglogoperstatus.is_set
	|| nlmconfiglogstoragetype.is_set
	|| nlmstatslognotificationsbumped.is_set
	|| nlmstatslognotificationslogged.is_set;
}

bool NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmlogname.yfilter)
	|| ydk::is_set(nlmconfiglogadminstatus.yfilter)
	|| ydk::is_set(nlmconfiglogentrylimit.yfilter)
	|| ydk::is_set(nlmconfiglogentrystatus.yfilter)
	|| ydk::is_set(nlmconfiglogfiltername.yfilter)
	|| ydk::is_set(nlmconfiglogoperstatus.yfilter)
	|| ydk::is_set(nlmconfiglogstoragetype.yfilter)
	|| ydk::is_set(nlmstatslognotificationsbumped.yfilter)
	|| ydk::is_set(nlmstatslognotificationslogged.yfilter);
}

std::string NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmConfigLogEntry" <<"[nlmLogName='" <<nlmlogname <<"']";

    return path_buffer.str();

}

const EntityPath NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/nlmConfigLogTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmlogname.is_set || is_set(nlmlogname.yfilter)) leaf_name_data.push_back(nlmlogname.get_name_leafdata());
    if (nlmconfiglogadminstatus.is_set || is_set(nlmconfiglogadminstatus.yfilter)) leaf_name_data.push_back(nlmconfiglogadminstatus.get_name_leafdata());
    if (nlmconfiglogentrylimit.is_set || is_set(nlmconfiglogentrylimit.yfilter)) leaf_name_data.push_back(nlmconfiglogentrylimit.get_name_leafdata());
    if (nlmconfiglogentrystatus.is_set || is_set(nlmconfiglogentrystatus.yfilter)) leaf_name_data.push_back(nlmconfiglogentrystatus.get_name_leafdata());
    if (nlmconfiglogfiltername.is_set || is_set(nlmconfiglogfiltername.yfilter)) leaf_name_data.push_back(nlmconfiglogfiltername.get_name_leafdata());
    if (nlmconfiglogoperstatus.is_set || is_set(nlmconfiglogoperstatus.yfilter)) leaf_name_data.push_back(nlmconfiglogoperstatus.get_name_leafdata());
    if (nlmconfiglogstoragetype.is_set || is_set(nlmconfiglogstoragetype.yfilter)) leaf_name_data.push_back(nlmconfiglogstoragetype.get_name_leafdata());
    if (nlmstatslognotificationsbumped.is_set || is_set(nlmstatslognotificationsbumped.yfilter)) leaf_name_data.push_back(nlmstatslognotificationsbumped.get_name_leafdata());
    if (nlmstatslognotificationslogged.is_set || is_set(nlmstatslognotificationslogged.yfilter)) leaf_name_data.push_back(nlmstatslognotificationslogged.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlmLogName")
    {
        nlmlogname = value;
        nlmlogname.value_namespace = name_space;
        nlmlogname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmConfigLogAdminStatus")
    {
        nlmconfiglogadminstatus = value;
        nlmconfiglogadminstatus.value_namespace = name_space;
        nlmconfiglogadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmConfigLogEntryLimit")
    {
        nlmconfiglogentrylimit = value;
        nlmconfiglogentrylimit.value_namespace = name_space;
        nlmconfiglogentrylimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmConfigLogEntryStatus")
    {
        nlmconfiglogentrystatus = value;
        nlmconfiglogentrystatus.value_namespace = name_space;
        nlmconfiglogentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmConfigLogFilterName")
    {
        nlmconfiglogfiltername = value;
        nlmconfiglogfiltername.value_namespace = name_space;
        nlmconfiglogfiltername.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nlmStatsLogNotificationsBumped")
    {
        nlmstatslognotificationsbumped = value;
        nlmstatslognotificationsbumped.value_namespace = name_space;
        nlmstatslognotificationsbumped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmStatsLogNotificationsLogged")
    {
        nlmstatslognotificationslogged = value;
        nlmstatslognotificationslogged.value_namespace = name_space;
        nlmstatslognotificationslogged.value_namespace_prefix = name_space_prefix;
    }
}

void NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlmLogName")
    {
        nlmlogname.yfilter = yfilter;
    }
    if(value_path == "nlmConfigLogAdminStatus")
    {
        nlmconfiglogadminstatus.yfilter = yfilter;
    }
    if(value_path == "nlmConfigLogEntryLimit")
    {
        nlmconfiglogentrylimit.yfilter = yfilter;
    }
    if(value_path == "nlmConfigLogEntryStatus")
    {
        nlmconfiglogentrystatus.yfilter = yfilter;
    }
    if(value_path == "nlmConfigLogFilterName")
    {
        nlmconfiglogfiltername.yfilter = yfilter;
    }
    if(value_path == "nlmConfigLogOperStatus")
    {
        nlmconfiglogoperstatus.yfilter = yfilter;
    }
    if(value_path == "nlmConfigLogStorageType")
    {
        nlmconfiglogstoragetype.yfilter = yfilter;
    }
    if(value_path == "nlmStatsLogNotificationsBumped")
    {
        nlmstatslognotificationsbumped.yfilter = yfilter;
    }
    if(value_path == "nlmStatsLogNotificationsLogged")
    {
        nlmstatslognotificationslogged.yfilter = yfilter;
    }
}

bool NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmLogName" || name == "nlmConfigLogAdminStatus" || name == "nlmConfigLogEntryLimit" || name == "nlmConfigLogEntryStatus" || name == "nlmConfigLogFilterName" || name == "nlmConfigLogOperStatus" || name == "nlmConfigLogStorageType" || name == "nlmStatsLogNotificationsBumped" || name == "nlmStatsLogNotificationsLogged")
        return true;
    return false;
}

NotificationLogMib::Nlmlogtable::Nlmlogtable()
{
    yang_name = "nlmLogTable"; yang_parent_name = "NOTIFICATION-LOG-MIB";
}

NotificationLogMib::Nlmlogtable::~Nlmlogtable()
{
}

bool NotificationLogMib::Nlmlogtable::has_data() const
{
    for (std::size_t index=0; index<nlmlogentry.size(); index++)
    {
        if(nlmlogentry[index]->has_data())
            return true;
    }
    return false;
}

bool NotificationLogMib::Nlmlogtable::has_operation() const
{
    for (std::size_t index=0; index<nlmlogentry.size(); index++)
    {
        if(nlmlogentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NotificationLogMib::Nlmlogtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmLogTable";

    return path_buffer.str();

}

const EntityPath NotificationLogMib::Nlmlogtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NotificationLogMib::Nlmlogtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlmLogEntry")
    {
        for(auto const & c : nlmlogentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NotificationLogMib::Nlmlogtable::Nlmlogentry>();
        c->parent = this;
        nlmlogentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::Nlmlogtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nlmlogentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NotificationLogMib::Nlmlogtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NotificationLogMib::Nlmlogtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NotificationLogMib::Nlmlogtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmLogEntry")
        return true;
    return false;
}

NotificationLogMib::Nlmlogtable::Nlmlogentry::Nlmlogentry()
    :
    nlmlogname{YType::str, "nlmLogName"},
    nlmlogindex{YType::uint32, "nlmLogIndex"},
    nlmlogcontextengineid{YType::str, "nlmLogContextEngineID"},
    nlmlogcontextname{YType::str, "nlmLogContextName"},
    nlmlogdateandtime{YType::str, "nlmLogDateAndTime"},
    nlmlogengineid{YType::str, "nlmLogEngineID"},
    nlmlogenginetaddress{YType::str, "nlmLogEngineTAddress"},
    nlmlogenginetdomain{YType::str, "nlmLogEngineTDomain"},
    nlmlognotificationid{YType::str, "nlmLogNotificationID"},
    nlmlogtime{YType::uint32, "nlmLogTime"}
{
    yang_name = "nlmLogEntry"; yang_parent_name = "nlmLogTable";
}

NotificationLogMib::Nlmlogtable::Nlmlogentry::~Nlmlogentry()
{
}

bool NotificationLogMib::Nlmlogtable::Nlmlogentry::has_data() const
{
    return nlmlogname.is_set
	|| nlmlogindex.is_set
	|| nlmlogcontextengineid.is_set
	|| nlmlogcontextname.is_set
	|| nlmlogdateandtime.is_set
	|| nlmlogengineid.is_set
	|| nlmlogenginetaddress.is_set
	|| nlmlogenginetdomain.is_set
	|| nlmlognotificationid.is_set
	|| nlmlogtime.is_set;
}

bool NotificationLogMib::Nlmlogtable::Nlmlogentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmlogname.yfilter)
	|| ydk::is_set(nlmlogindex.yfilter)
	|| ydk::is_set(nlmlogcontextengineid.yfilter)
	|| ydk::is_set(nlmlogcontextname.yfilter)
	|| ydk::is_set(nlmlogdateandtime.yfilter)
	|| ydk::is_set(nlmlogengineid.yfilter)
	|| ydk::is_set(nlmlogenginetaddress.yfilter)
	|| ydk::is_set(nlmlogenginetdomain.yfilter)
	|| ydk::is_set(nlmlognotificationid.yfilter)
	|| ydk::is_set(nlmlogtime.yfilter);
}

std::string NotificationLogMib::Nlmlogtable::Nlmlogentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmLogEntry" <<"[nlmLogName='" <<nlmlogname <<"']" <<"[nlmLogIndex='" <<nlmlogindex <<"']";

    return path_buffer.str();

}

const EntityPath NotificationLogMib::Nlmlogtable::Nlmlogentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/nlmLogTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmlogname.is_set || is_set(nlmlogname.yfilter)) leaf_name_data.push_back(nlmlogname.get_name_leafdata());
    if (nlmlogindex.is_set || is_set(nlmlogindex.yfilter)) leaf_name_data.push_back(nlmlogindex.get_name_leafdata());
    if (nlmlogcontextengineid.is_set || is_set(nlmlogcontextengineid.yfilter)) leaf_name_data.push_back(nlmlogcontextengineid.get_name_leafdata());
    if (nlmlogcontextname.is_set || is_set(nlmlogcontextname.yfilter)) leaf_name_data.push_back(nlmlogcontextname.get_name_leafdata());
    if (nlmlogdateandtime.is_set || is_set(nlmlogdateandtime.yfilter)) leaf_name_data.push_back(nlmlogdateandtime.get_name_leafdata());
    if (nlmlogengineid.is_set || is_set(nlmlogengineid.yfilter)) leaf_name_data.push_back(nlmlogengineid.get_name_leafdata());
    if (nlmlogenginetaddress.is_set || is_set(nlmlogenginetaddress.yfilter)) leaf_name_data.push_back(nlmlogenginetaddress.get_name_leafdata());
    if (nlmlogenginetdomain.is_set || is_set(nlmlogenginetdomain.yfilter)) leaf_name_data.push_back(nlmlogenginetdomain.get_name_leafdata());
    if (nlmlognotificationid.is_set || is_set(nlmlognotificationid.yfilter)) leaf_name_data.push_back(nlmlognotificationid.get_name_leafdata());
    if (nlmlogtime.is_set || is_set(nlmlogtime.yfilter)) leaf_name_data.push_back(nlmlogtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NotificationLogMib::Nlmlogtable::Nlmlogentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::Nlmlogtable::Nlmlogentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NotificationLogMib::Nlmlogtable::Nlmlogentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "nlmLogNotificationID")
    {
        nlmlognotificationid = value;
        nlmlognotificationid.value_namespace = name_space;
        nlmlognotificationid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogTime")
    {
        nlmlogtime = value;
        nlmlogtime.value_namespace = name_space;
        nlmlogtime.value_namespace_prefix = name_space_prefix;
    }
}

void NotificationLogMib::Nlmlogtable::Nlmlogentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlmLogName")
    {
        nlmlogname.yfilter = yfilter;
    }
    if(value_path == "nlmLogIndex")
    {
        nlmlogindex.yfilter = yfilter;
    }
    if(value_path == "nlmLogContextEngineID")
    {
        nlmlogcontextengineid.yfilter = yfilter;
    }
    if(value_path == "nlmLogContextName")
    {
        nlmlogcontextname.yfilter = yfilter;
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
    if(value_path == "nlmLogNotificationID")
    {
        nlmlognotificationid.yfilter = yfilter;
    }
    if(value_path == "nlmLogTime")
    {
        nlmlogtime.yfilter = yfilter;
    }
}

bool NotificationLogMib::Nlmlogtable::Nlmlogentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmLogName" || name == "nlmLogIndex" || name == "nlmLogContextEngineID" || name == "nlmLogContextName" || name == "nlmLogDateAndTime" || name == "nlmLogEngineID" || name == "nlmLogEngineTAddress" || name == "nlmLogEngineTDomain" || name == "nlmLogNotificationID" || name == "nlmLogTime")
        return true;
    return false;
}

NotificationLogMib::Nlmlogvariabletable::Nlmlogvariabletable()
{
    yang_name = "nlmLogVariableTable"; yang_parent_name = "NOTIFICATION-LOG-MIB";
}

NotificationLogMib::Nlmlogvariabletable::~Nlmlogvariabletable()
{
}

bool NotificationLogMib::Nlmlogvariabletable::has_data() const
{
    for (std::size_t index=0; index<nlmlogvariableentry.size(); index++)
    {
        if(nlmlogvariableentry[index]->has_data())
            return true;
    }
    return false;
}

bool NotificationLogMib::Nlmlogvariabletable::has_operation() const
{
    for (std::size_t index=0; index<nlmlogvariableentry.size(); index++)
    {
        if(nlmlogvariableentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NotificationLogMib::Nlmlogvariabletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmLogVariableTable";

    return path_buffer.str();

}

const EntityPath NotificationLogMib::Nlmlogvariabletable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NotificationLogMib::Nlmlogvariabletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlmLogVariableEntry")
    {
        for(auto const & c : nlmlogvariableentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry>();
        c->parent = this;
        nlmlogvariableentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::Nlmlogvariabletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nlmlogvariableentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NotificationLogMib::Nlmlogvariabletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NotificationLogMib::Nlmlogvariabletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NotificationLogMib::Nlmlogvariabletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmLogVariableEntry")
        return true;
    return false;
}

NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::Nlmlogvariableentry()
    :
    nlmlogname{YType::str, "nlmLogName"},
    nlmlogindex{YType::str, "nlmLogIndex"},
    nlmlogvariableindex{YType::uint32, "nlmLogVariableIndex"},
    nlmlogvariablecounter32val{YType::uint32, "nlmLogVariableCounter32Val"},
    nlmlogvariablecounter64val{YType::uint64, "nlmLogVariableCounter64Val"},
    nlmlogvariableid{YType::str, "nlmLogVariableID"},
    nlmlogvariableinteger32val{YType::int32, "nlmLogVariableInteger32Val"},
    nlmlogvariableipaddressval{YType::str, "nlmLogVariableIpAddressVal"},
    nlmlogvariableoctetstringval{YType::str, "nlmLogVariableOctetStringVal"},
    nlmlogvariableoidval{YType::str, "nlmLogVariableOidVal"},
    nlmlogvariableopaqueval{YType::str, "nlmLogVariableOpaqueVal"},
    nlmlogvariabletimeticksval{YType::uint32, "nlmLogVariableTimeTicksVal"},
    nlmlogvariableunsigned32val{YType::uint32, "nlmLogVariableUnsigned32Val"},
    nlmlogvariablevaluetype{YType::enumeration, "nlmLogVariableValueType"}
{
    yang_name = "nlmLogVariableEntry"; yang_parent_name = "nlmLogVariableTable";
}

NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::~Nlmlogvariableentry()
{
}

bool NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::has_data() const
{
    return nlmlogname.is_set
	|| nlmlogindex.is_set
	|| nlmlogvariableindex.is_set
	|| nlmlogvariablecounter32val.is_set
	|| nlmlogvariablecounter64val.is_set
	|| nlmlogvariableid.is_set
	|| nlmlogvariableinteger32val.is_set
	|| nlmlogvariableipaddressval.is_set
	|| nlmlogvariableoctetstringval.is_set
	|| nlmlogvariableoidval.is_set
	|| nlmlogvariableopaqueval.is_set
	|| nlmlogvariabletimeticksval.is_set
	|| nlmlogvariableunsigned32val.is_set
	|| nlmlogvariablevaluetype.is_set;
}

bool NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmlogname.yfilter)
	|| ydk::is_set(nlmlogindex.yfilter)
	|| ydk::is_set(nlmlogvariableindex.yfilter)
	|| ydk::is_set(nlmlogvariablecounter32val.yfilter)
	|| ydk::is_set(nlmlogvariablecounter64val.yfilter)
	|| ydk::is_set(nlmlogvariableid.yfilter)
	|| ydk::is_set(nlmlogvariableinteger32val.yfilter)
	|| ydk::is_set(nlmlogvariableipaddressval.yfilter)
	|| ydk::is_set(nlmlogvariableoctetstringval.yfilter)
	|| ydk::is_set(nlmlogvariableoidval.yfilter)
	|| ydk::is_set(nlmlogvariableopaqueval.yfilter)
	|| ydk::is_set(nlmlogvariabletimeticksval.yfilter)
	|| ydk::is_set(nlmlogvariableunsigned32val.yfilter)
	|| ydk::is_set(nlmlogvariablevaluetype.yfilter);
}

std::string NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlmLogVariableEntry" <<"[nlmLogName='" <<nlmlogname <<"']" <<"[nlmLogIndex='" <<nlmlogindex <<"']" <<"[nlmLogVariableIndex='" <<nlmlogvariableindex <<"']";

    return path_buffer.str();

}

const EntityPath NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "NOTIFICATION-LOG-MIB:NOTIFICATION-LOG-MIB/nlmLogVariableTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmlogname.is_set || is_set(nlmlogname.yfilter)) leaf_name_data.push_back(nlmlogname.get_name_leafdata());
    if (nlmlogindex.is_set || is_set(nlmlogindex.yfilter)) leaf_name_data.push_back(nlmlogindex.get_name_leafdata());
    if (nlmlogvariableindex.is_set || is_set(nlmlogvariableindex.yfilter)) leaf_name_data.push_back(nlmlogvariableindex.get_name_leafdata());
    if (nlmlogvariablecounter32val.is_set || is_set(nlmlogvariablecounter32val.yfilter)) leaf_name_data.push_back(nlmlogvariablecounter32val.get_name_leafdata());
    if (nlmlogvariablecounter64val.is_set || is_set(nlmlogvariablecounter64val.yfilter)) leaf_name_data.push_back(nlmlogvariablecounter64val.get_name_leafdata());
    if (nlmlogvariableid.is_set || is_set(nlmlogvariableid.yfilter)) leaf_name_data.push_back(nlmlogvariableid.get_name_leafdata());
    if (nlmlogvariableinteger32val.is_set || is_set(nlmlogvariableinteger32val.yfilter)) leaf_name_data.push_back(nlmlogvariableinteger32val.get_name_leafdata());
    if (nlmlogvariableipaddressval.is_set || is_set(nlmlogvariableipaddressval.yfilter)) leaf_name_data.push_back(nlmlogvariableipaddressval.get_name_leafdata());
    if (nlmlogvariableoctetstringval.is_set || is_set(nlmlogvariableoctetstringval.yfilter)) leaf_name_data.push_back(nlmlogvariableoctetstringval.get_name_leafdata());
    if (nlmlogvariableoidval.is_set || is_set(nlmlogvariableoidval.yfilter)) leaf_name_data.push_back(nlmlogvariableoidval.get_name_leafdata());
    if (nlmlogvariableopaqueval.is_set || is_set(nlmlogvariableopaqueval.yfilter)) leaf_name_data.push_back(nlmlogvariableopaqueval.get_name_leafdata());
    if (nlmlogvariabletimeticksval.is_set || is_set(nlmlogvariabletimeticksval.yfilter)) leaf_name_data.push_back(nlmlogvariabletimeticksval.get_name_leafdata());
    if (nlmlogvariableunsigned32val.is_set || is_set(nlmlogvariableunsigned32val.yfilter)) leaf_name_data.push_back(nlmlogvariableunsigned32val.get_name_leafdata());
    if (nlmlogvariablevaluetype.is_set || is_set(nlmlogvariablevaluetype.yfilter)) leaf_name_data.push_back(nlmlogvariablevaluetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "nlmLogVariableCounter32Val")
    {
        nlmlogvariablecounter32val = value;
        nlmlogvariablecounter32val.value_namespace = name_space;
        nlmlogvariablecounter32val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableCounter64Val")
    {
        nlmlogvariablecounter64val = value;
        nlmlogvariablecounter64val.value_namespace = name_space;
        nlmlogvariablecounter64val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableID")
    {
        nlmlogvariableid = value;
        nlmlogvariableid.value_namespace = name_space;
        nlmlogvariableid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableInteger32Val")
    {
        nlmlogvariableinteger32val = value;
        nlmlogvariableinteger32val.value_namespace = name_space;
        nlmlogvariableinteger32val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableIpAddressVal")
    {
        nlmlogvariableipaddressval = value;
        nlmlogvariableipaddressval.value_namespace = name_space;
        nlmlogvariableipaddressval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableOctetStringVal")
    {
        nlmlogvariableoctetstringval = value;
        nlmlogvariableoctetstringval.value_namespace = name_space;
        nlmlogvariableoctetstringval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableOidVal")
    {
        nlmlogvariableoidval = value;
        nlmlogvariableoidval.value_namespace = name_space;
        nlmlogvariableoidval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableOpaqueVal")
    {
        nlmlogvariableopaqueval = value;
        nlmlogvariableopaqueval.value_namespace = name_space;
        nlmlogvariableopaqueval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableTimeTicksVal")
    {
        nlmlogvariabletimeticksval = value;
        nlmlogvariabletimeticksval.value_namespace = name_space;
        nlmlogvariabletimeticksval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableUnsigned32Val")
    {
        nlmlogvariableunsigned32val = value;
        nlmlogvariableunsigned32val.value_namespace = name_space;
        nlmlogvariableunsigned32val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlmLogVariableValueType")
    {
        nlmlogvariablevaluetype = value;
        nlmlogvariablevaluetype.value_namespace = name_space;
        nlmlogvariablevaluetype.value_namespace_prefix = name_space_prefix;
    }
}

void NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "nlmLogVariableCounter32Val")
    {
        nlmlogvariablecounter32val.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableCounter64Val")
    {
        nlmlogvariablecounter64val.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableID")
    {
        nlmlogvariableid.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableInteger32Val")
    {
        nlmlogvariableinteger32val.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableIpAddressVal")
    {
        nlmlogvariableipaddressval.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableOctetStringVal")
    {
        nlmlogvariableoctetstringval.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableOidVal")
    {
        nlmlogvariableoidval.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableOpaqueVal")
    {
        nlmlogvariableopaqueval.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableTimeTicksVal")
    {
        nlmlogvariabletimeticksval.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableUnsigned32Val")
    {
        nlmlogvariableunsigned32val.yfilter = yfilter;
    }
    if(value_path == "nlmLogVariableValueType")
    {
        nlmlogvariablevaluetype.yfilter = yfilter;
    }
}

bool NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlmLogName" || name == "nlmLogIndex" || name == "nlmLogVariableIndex" || name == "nlmLogVariableCounter32Val" || name == "nlmLogVariableCounter64Val" || name == "nlmLogVariableID" || name == "nlmLogVariableInteger32Val" || name == "nlmLogVariableIpAddressVal" || name == "nlmLogVariableOctetStringVal" || name == "nlmLogVariableOidVal" || name == "nlmLogVariableOpaqueVal" || name == "nlmLogVariableTimeTicksVal" || name == "nlmLogVariableUnsigned32Val" || name == "nlmLogVariableValueType")
        return true;
    return false;
}

const Enum::YLeaf NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::Nlmconfiglogadminstatus::enabled {1, "enabled"};
const Enum::YLeaf NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::Nlmconfiglogadminstatus::disabled {2, "disabled"};

const Enum::YLeaf NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::Nlmconfiglogoperstatus::disabled {1, "disabled"};
const Enum::YLeaf NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::Nlmconfiglogoperstatus::operational {2, "operational"};
const Enum::YLeaf NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::Nlmconfiglogoperstatus::noFilter {3, "noFilter"};

const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::Nlmlogvariablevaluetype::counter32 {1, "counter32"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::Nlmlogvariablevaluetype::unsigned32 {2, "unsigned32"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::Nlmlogvariablevaluetype::timeTicks {3, "timeTicks"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::Nlmlogvariablevaluetype::integer32 {4, "integer32"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::Nlmlogvariablevaluetype::ipAddress {5, "ipAddress"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::Nlmlogvariablevaluetype::octetString {6, "octetString"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::Nlmlogvariablevaluetype::objectId {7, "objectId"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::Nlmlogvariablevaluetype::counter64 {8, "counter64"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::Nlmlogvariablevaluetype::opaque {9, "opaque"};


}
}

