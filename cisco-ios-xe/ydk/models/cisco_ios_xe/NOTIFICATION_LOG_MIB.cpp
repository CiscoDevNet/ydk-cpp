
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "NOTIFICATION_LOG_MIB.hpp"

namespace ydk {
namespace NOTIFICATION_LOG_MIB {

NotificationLogMib::NotificationLogMib()
    :
    nlmconfig_(std::make_shared<NotificationLogMib::Nlmconfig>())
	,nlmconfiglogtable_(std::make_shared<NotificationLogMib::Nlmconfiglogtable>())
	,nlmlogtable_(std::make_shared<NotificationLogMib::Nlmlogtable>())
	,nlmlogvariabletable_(std::make_shared<NotificationLogMib::Nlmlogvariabletable>())
	,nlmstats_(std::make_shared<NotificationLogMib::Nlmstats>())
{
    nlmconfig_->parent = this;

    nlmconfiglogtable_->parent = this;

    nlmlogtable_->parent = this;

    nlmlogvariabletable_->parent = this;

    nlmstats_->parent = this;

    yang_name = "NOTIFICATION-LOG-MIB"; yang_parent_name = "NOTIFICATION-LOG-MIB";
}

NotificationLogMib::~NotificationLogMib()
{
}

bool NotificationLogMib::has_data() const
{
    return (nlmconfig_ !=  nullptr && nlmconfig_->has_data())
	|| (nlmconfiglogtable_ !=  nullptr && nlmconfiglogtable_->has_data())
	|| (nlmlogtable_ !=  nullptr && nlmlogtable_->has_data())
	|| (nlmlogvariabletable_ !=  nullptr && nlmlogvariabletable_->has_data())
	|| (nlmstats_ !=  nullptr && nlmstats_->has_data());
}

bool NotificationLogMib::has_operation() const
{
    return is_set(operation)
	|| (nlmconfig_ !=  nullptr && nlmconfig_->has_operation())
	|| (nlmconfiglogtable_ !=  nullptr && nlmconfiglogtable_->has_operation())
	|| (nlmlogtable_ !=  nullptr && nlmlogtable_->has_operation())
	|| (nlmlogvariabletable_ !=  nullptr && nlmlogvariabletable_->has_operation())
	|| (nlmstats_ !=  nullptr && nlmstats_->has_operation());
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
        if(nlmconfig_ == nullptr)
        {
            nlmconfig_ = std::make_shared<NotificationLogMib::Nlmconfig>();
        }
        return nlmconfig_;
    }

    if(child_yang_name == "nlmConfigLogTable")
    {
        if(nlmconfiglogtable_ == nullptr)
        {
            nlmconfiglogtable_ = std::make_shared<NotificationLogMib::Nlmconfiglogtable>();
        }
        return nlmconfiglogtable_;
    }

    if(child_yang_name == "nlmLogTable")
    {
        if(nlmlogtable_ == nullptr)
        {
            nlmlogtable_ = std::make_shared<NotificationLogMib::Nlmlogtable>();
        }
        return nlmlogtable_;
    }

    if(child_yang_name == "nlmLogVariableTable")
    {
        if(nlmlogvariabletable_ == nullptr)
        {
            nlmlogvariabletable_ = std::make_shared<NotificationLogMib::Nlmlogvariabletable>();
        }
        return nlmlogvariabletable_;
    }

    if(child_yang_name == "nlmStats")
    {
        if(nlmstats_ == nullptr)
        {
            nlmstats_ = std::make_shared<NotificationLogMib::Nlmstats>();
        }
        return nlmstats_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nlmconfig_ != nullptr)
    {
        children["nlmConfig"] = nlmconfig_;
    }

    if(nlmconfiglogtable_ != nullptr)
    {
        children["nlmConfigLogTable"] = nlmconfiglogtable_;
    }

    if(nlmlogtable_ != nullptr)
    {
        children["nlmLogTable"] = nlmlogtable_;
    }

    if(nlmlogvariabletable_ != nullptr)
    {
        children["nlmLogVariableTable"] = nlmlogvariabletable_;
    }

    if(nlmstats_ != nullptr)
    {
        children["nlmStats"] = nlmstats_;
    }

    return children;
}

void NotificationLogMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(nlmconfigglobalageout.operation)
	|| is_set(nlmconfigglobalentrylimit.operation);
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

    if (nlmconfigglobalageout.is_set || is_set(nlmconfigglobalageout.operation)) leaf_name_data.push_back(nlmconfigglobalageout.get_name_leafdata());
    if (nlmconfigglobalentrylimit.is_set || is_set(nlmconfigglobalentrylimit.operation)) leaf_name_data.push_back(nlmconfigglobalentrylimit.get_name_leafdata());


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

void NotificationLogMib::Nlmconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nlmConfigGlobalAgeOut")
    {
        nlmconfigglobalageout = value;
    }
    if(value_path == "nlmConfigGlobalEntryLimit")
    {
        nlmconfigglobalentrylimit = value;
    }
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
    return is_set(operation)
	|| is_set(nlmstatsglobalnotificationsbumped.operation)
	|| is_set(nlmstatsglobalnotificationslogged.operation);
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

    if (nlmstatsglobalnotificationsbumped.is_set || is_set(nlmstatsglobalnotificationsbumped.operation)) leaf_name_data.push_back(nlmstatsglobalnotificationsbumped.get_name_leafdata());
    if (nlmstatsglobalnotificationslogged.is_set || is_set(nlmstatsglobalnotificationslogged.operation)) leaf_name_data.push_back(nlmstatsglobalnotificationslogged.get_name_leafdata());


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

void NotificationLogMib::Nlmstats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nlmStatsGlobalNotificationsBumped")
    {
        nlmstatsglobalnotificationsbumped = value;
    }
    if(value_path == "nlmStatsGlobalNotificationsLogged")
    {
        nlmstatsglobalnotificationslogged = value;
    }
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
    for (std::size_t index=0; index<nlmconfiglogentry_.size(); index++)
    {
        if(nlmconfiglogentry_[index]->has_data())
            return true;
    }
    return false;
}

bool NotificationLogMib::Nlmconfiglogtable::has_operation() const
{
    for (std::size_t index=0; index<nlmconfiglogentry_.size(); index++)
    {
        if(nlmconfiglogentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : nlmconfiglogentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry>();
        c->parent = this;
        nlmconfiglogentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::Nlmconfiglogtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nlmconfiglogentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NotificationLogMib::Nlmconfiglogtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(nlmlogname.operation)
	|| is_set(nlmconfiglogadminstatus.operation)
	|| is_set(nlmconfiglogentrylimit.operation)
	|| is_set(nlmconfiglogentrystatus.operation)
	|| is_set(nlmconfiglogfiltername.operation)
	|| is_set(nlmconfiglogoperstatus.operation)
	|| is_set(nlmconfiglogstoragetype.operation)
	|| is_set(nlmstatslognotificationsbumped.operation)
	|| is_set(nlmstatslognotificationslogged.operation);
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

    if (nlmlogname.is_set || is_set(nlmlogname.operation)) leaf_name_data.push_back(nlmlogname.get_name_leafdata());
    if (nlmconfiglogadminstatus.is_set || is_set(nlmconfiglogadminstatus.operation)) leaf_name_data.push_back(nlmconfiglogadminstatus.get_name_leafdata());
    if (nlmconfiglogentrylimit.is_set || is_set(nlmconfiglogentrylimit.operation)) leaf_name_data.push_back(nlmconfiglogentrylimit.get_name_leafdata());
    if (nlmconfiglogentrystatus.is_set || is_set(nlmconfiglogentrystatus.operation)) leaf_name_data.push_back(nlmconfiglogentrystatus.get_name_leafdata());
    if (nlmconfiglogfiltername.is_set || is_set(nlmconfiglogfiltername.operation)) leaf_name_data.push_back(nlmconfiglogfiltername.get_name_leafdata());
    if (nlmconfiglogoperstatus.is_set || is_set(nlmconfiglogoperstatus.operation)) leaf_name_data.push_back(nlmconfiglogoperstatus.get_name_leafdata());
    if (nlmconfiglogstoragetype.is_set || is_set(nlmconfiglogstoragetype.operation)) leaf_name_data.push_back(nlmconfiglogstoragetype.get_name_leafdata());
    if (nlmstatslognotificationsbumped.is_set || is_set(nlmstatslognotificationsbumped.operation)) leaf_name_data.push_back(nlmstatslognotificationsbumped.get_name_leafdata());
    if (nlmstatslognotificationslogged.is_set || is_set(nlmstatslognotificationslogged.operation)) leaf_name_data.push_back(nlmstatslognotificationslogged.get_name_leafdata());


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

void NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nlmLogName")
    {
        nlmlogname = value;
    }
    if(value_path == "nlmConfigLogAdminStatus")
    {
        nlmconfiglogadminstatus = value;
    }
    if(value_path == "nlmConfigLogEntryLimit")
    {
        nlmconfiglogentrylimit = value;
    }
    if(value_path == "nlmConfigLogEntryStatus")
    {
        nlmconfiglogentrystatus = value;
    }
    if(value_path == "nlmConfigLogFilterName")
    {
        nlmconfiglogfiltername = value;
    }
    if(value_path == "nlmConfigLogOperStatus")
    {
        nlmconfiglogoperstatus = value;
    }
    if(value_path == "nlmConfigLogStorageType")
    {
        nlmconfiglogstoragetype = value;
    }
    if(value_path == "nlmStatsLogNotificationsBumped")
    {
        nlmstatslognotificationsbumped = value;
    }
    if(value_path == "nlmStatsLogNotificationsLogged")
    {
        nlmstatslognotificationslogged = value;
    }
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
    for (std::size_t index=0; index<nlmlogentry_.size(); index++)
    {
        if(nlmlogentry_[index]->has_data())
            return true;
    }
    return false;
}

bool NotificationLogMib::Nlmlogtable::has_operation() const
{
    for (std::size_t index=0; index<nlmlogentry_.size(); index++)
    {
        if(nlmlogentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : nlmlogentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NotificationLogMib::Nlmlogtable::Nlmlogentry>();
        c->parent = this;
        nlmlogentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::Nlmlogtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nlmlogentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NotificationLogMib::Nlmlogtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(nlmlogname.operation)
	|| is_set(nlmlogindex.operation)
	|| is_set(nlmlogcontextengineid.operation)
	|| is_set(nlmlogcontextname.operation)
	|| is_set(nlmlogdateandtime.operation)
	|| is_set(nlmlogengineid.operation)
	|| is_set(nlmlogenginetaddress.operation)
	|| is_set(nlmlogenginetdomain.operation)
	|| is_set(nlmlognotificationid.operation)
	|| is_set(nlmlogtime.operation);
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

    if (nlmlogname.is_set || is_set(nlmlogname.operation)) leaf_name_data.push_back(nlmlogname.get_name_leafdata());
    if (nlmlogindex.is_set || is_set(nlmlogindex.operation)) leaf_name_data.push_back(nlmlogindex.get_name_leafdata());
    if (nlmlogcontextengineid.is_set || is_set(nlmlogcontextengineid.operation)) leaf_name_data.push_back(nlmlogcontextengineid.get_name_leafdata());
    if (nlmlogcontextname.is_set || is_set(nlmlogcontextname.operation)) leaf_name_data.push_back(nlmlogcontextname.get_name_leafdata());
    if (nlmlogdateandtime.is_set || is_set(nlmlogdateandtime.operation)) leaf_name_data.push_back(nlmlogdateandtime.get_name_leafdata());
    if (nlmlogengineid.is_set || is_set(nlmlogengineid.operation)) leaf_name_data.push_back(nlmlogengineid.get_name_leafdata());
    if (nlmlogenginetaddress.is_set || is_set(nlmlogenginetaddress.operation)) leaf_name_data.push_back(nlmlogenginetaddress.get_name_leafdata());
    if (nlmlogenginetdomain.is_set || is_set(nlmlogenginetdomain.operation)) leaf_name_data.push_back(nlmlogenginetdomain.get_name_leafdata());
    if (nlmlognotificationid.is_set || is_set(nlmlognotificationid.operation)) leaf_name_data.push_back(nlmlognotificationid.get_name_leafdata());
    if (nlmlogtime.is_set || is_set(nlmlogtime.operation)) leaf_name_data.push_back(nlmlogtime.get_name_leafdata());


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

void NotificationLogMib::Nlmlogtable::Nlmlogentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nlmLogName")
    {
        nlmlogname = value;
    }
    if(value_path == "nlmLogIndex")
    {
        nlmlogindex = value;
    }
    if(value_path == "nlmLogContextEngineID")
    {
        nlmlogcontextengineid = value;
    }
    if(value_path == "nlmLogContextName")
    {
        nlmlogcontextname = value;
    }
    if(value_path == "nlmLogDateAndTime")
    {
        nlmlogdateandtime = value;
    }
    if(value_path == "nlmLogEngineID")
    {
        nlmlogengineid = value;
    }
    if(value_path == "nlmLogEngineTAddress")
    {
        nlmlogenginetaddress = value;
    }
    if(value_path == "nlmLogEngineTDomain")
    {
        nlmlogenginetdomain = value;
    }
    if(value_path == "nlmLogNotificationID")
    {
        nlmlognotificationid = value;
    }
    if(value_path == "nlmLogTime")
    {
        nlmlogtime = value;
    }
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
    for (std::size_t index=0; index<nlmlogvariableentry_.size(); index++)
    {
        if(nlmlogvariableentry_[index]->has_data())
            return true;
    }
    return false;
}

bool NotificationLogMib::Nlmlogvariabletable::has_operation() const
{
    for (std::size_t index=0; index<nlmlogvariableentry_.size(); index++)
    {
        if(nlmlogvariableentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : nlmlogvariableentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry>();
        c->parent = this;
        nlmlogvariableentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NotificationLogMib::Nlmlogvariabletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nlmlogvariableentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NotificationLogMib::Nlmlogvariabletable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(nlmlogname.operation)
	|| is_set(nlmlogindex.operation)
	|| is_set(nlmlogvariableindex.operation)
	|| is_set(nlmlogvariablecounter32val.operation)
	|| is_set(nlmlogvariablecounter64val.operation)
	|| is_set(nlmlogvariableid.operation)
	|| is_set(nlmlogvariableinteger32val.operation)
	|| is_set(nlmlogvariableipaddressval.operation)
	|| is_set(nlmlogvariableoctetstringval.operation)
	|| is_set(nlmlogvariableoidval.operation)
	|| is_set(nlmlogvariableopaqueval.operation)
	|| is_set(nlmlogvariabletimeticksval.operation)
	|| is_set(nlmlogvariableunsigned32val.operation)
	|| is_set(nlmlogvariablevaluetype.operation);
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

    if (nlmlogname.is_set || is_set(nlmlogname.operation)) leaf_name_data.push_back(nlmlogname.get_name_leafdata());
    if (nlmlogindex.is_set || is_set(nlmlogindex.operation)) leaf_name_data.push_back(nlmlogindex.get_name_leafdata());
    if (nlmlogvariableindex.is_set || is_set(nlmlogvariableindex.operation)) leaf_name_data.push_back(nlmlogvariableindex.get_name_leafdata());
    if (nlmlogvariablecounter32val.is_set || is_set(nlmlogvariablecounter32val.operation)) leaf_name_data.push_back(nlmlogvariablecounter32val.get_name_leafdata());
    if (nlmlogvariablecounter64val.is_set || is_set(nlmlogvariablecounter64val.operation)) leaf_name_data.push_back(nlmlogvariablecounter64val.get_name_leafdata());
    if (nlmlogvariableid.is_set || is_set(nlmlogvariableid.operation)) leaf_name_data.push_back(nlmlogvariableid.get_name_leafdata());
    if (nlmlogvariableinteger32val.is_set || is_set(nlmlogvariableinteger32val.operation)) leaf_name_data.push_back(nlmlogvariableinteger32val.get_name_leafdata());
    if (nlmlogvariableipaddressval.is_set || is_set(nlmlogvariableipaddressval.operation)) leaf_name_data.push_back(nlmlogvariableipaddressval.get_name_leafdata());
    if (nlmlogvariableoctetstringval.is_set || is_set(nlmlogvariableoctetstringval.operation)) leaf_name_data.push_back(nlmlogvariableoctetstringval.get_name_leafdata());
    if (nlmlogvariableoidval.is_set || is_set(nlmlogvariableoidval.operation)) leaf_name_data.push_back(nlmlogvariableoidval.get_name_leafdata());
    if (nlmlogvariableopaqueval.is_set || is_set(nlmlogvariableopaqueval.operation)) leaf_name_data.push_back(nlmlogvariableopaqueval.get_name_leafdata());
    if (nlmlogvariabletimeticksval.is_set || is_set(nlmlogvariabletimeticksval.operation)) leaf_name_data.push_back(nlmlogvariabletimeticksval.get_name_leafdata());
    if (nlmlogvariableunsigned32val.is_set || is_set(nlmlogvariableunsigned32val.operation)) leaf_name_data.push_back(nlmlogvariableunsigned32val.get_name_leafdata());
    if (nlmlogvariablevaluetype.is_set || is_set(nlmlogvariablevaluetype.operation)) leaf_name_data.push_back(nlmlogvariablevaluetype.get_name_leafdata());


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

void NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nlmLogName")
    {
        nlmlogname = value;
    }
    if(value_path == "nlmLogIndex")
    {
        nlmlogindex = value;
    }
    if(value_path == "nlmLogVariableIndex")
    {
        nlmlogvariableindex = value;
    }
    if(value_path == "nlmLogVariableCounter32Val")
    {
        nlmlogvariablecounter32val = value;
    }
    if(value_path == "nlmLogVariableCounter64Val")
    {
        nlmlogvariablecounter64val = value;
    }
    if(value_path == "nlmLogVariableID")
    {
        nlmlogvariableid = value;
    }
    if(value_path == "nlmLogVariableInteger32Val")
    {
        nlmlogvariableinteger32val = value;
    }
    if(value_path == "nlmLogVariableIpAddressVal")
    {
        nlmlogvariableipaddressval = value;
    }
    if(value_path == "nlmLogVariableOctetStringVal")
    {
        nlmlogvariableoctetstringval = value;
    }
    if(value_path == "nlmLogVariableOidVal")
    {
        nlmlogvariableoidval = value;
    }
    if(value_path == "nlmLogVariableOpaqueVal")
    {
        nlmlogvariableopaqueval = value;
    }
    if(value_path == "nlmLogVariableTimeTicksVal")
    {
        nlmlogvariabletimeticksval = value;
    }
    if(value_path == "nlmLogVariableUnsigned32Val")
    {
        nlmlogvariableunsigned32val = value;
    }
    if(value_path == "nlmLogVariableValueType")
    {
        nlmlogvariablevaluetype = value;
    }
}

const Enum::YLeaf NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::NlmconfiglogadminstatusEnum::enabled {1, "enabled"};
const Enum::YLeaf NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::NlmconfiglogadminstatusEnum::disabled {2, "disabled"};

const Enum::YLeaf NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::NlmconfiglogoperstatusEnum::disabled {1, "disabled"};
const Enum::YLeaf NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::NlmconfiglogoperstatusEnum::operational {2, "operational"};
const Enum::YLeaf NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::NlmconfiglogoperstatusEnum::noFilter {3, "noFilter"};

const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::NlmlogvariablevaluetypeEnum::counter32 {1, "counter32"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::NlmlogvariablevaluetypeEnum::unsigned32 {2, "unsigned32"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::NlmlogvariablevaluetypeEnum::timeTicks {3, "timeTicks"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::NlmlogvariablevaluetypeEnum::integer32 {4, "integer32"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::NlmlogvariablevaluetypeEnum::ipAddress {5, "ipAddress"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::NlmlogvariablevaluetypeEnum::octetString {6, "octetString"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::NlmlogvariablevaluetypeEnum::objectId {7, "objectId"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::NlmlogvariablevaluetypeEnum::counter64 {8, "counter64"};
const Enum::YLeaf NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::NlmlogvariablevaluetypeEnum::opaque {9, "opaque"};


}
}

