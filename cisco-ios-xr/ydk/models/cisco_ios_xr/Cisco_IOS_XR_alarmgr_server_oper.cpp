
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_alarmgr_server_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_alarmgr_server_oper {

Alarms::Alarms()
    :
    brief(std::make_shared<Alarms::Brief>())
	,detail(std::make_shared<Alarms::Detail>())
{
    brief->parent = this;

    detail->parent = this;

    yang_name = "alarms"; yang_parent_name = "Cisco-IOS-XR-alarmgr-server-oper";
}

Alarms::~Alarms()
{
}

bool Alarms::has_data() const
{
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Alarms::has_operation() const
{
    return is_set(operation)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Alarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms";

    return path_buffer.str();

}

const EntityPath Alarms::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Alarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Alarms::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Alarms::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void Alarms::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Alarms::clone_ptr() const
{
    return std::make_shared<Alarms>();
}

std::string Alarms::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Alarms::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Alarms::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Alarms::Detail::Detail()
    :
    detail_card(std::make_shared<Alarms::Detail::DetailCard>())
	,detail_system(std::make_shared<Alarms::Detail::DetailSystem>())
{
    detail_card->parent = this;

    detail_system->parent = this;

    yang_name = "detail"; yang_parent_name = "alarms";
}

Alarms::Detail::~Detail()
{
}

bool Alarms::Detail::has_data() const
{
    return (detail_card !=  nullptr && detail_card->has_data())
	|| (detail_system !=  nullptr && detail_system->has_data());
}

bool Alarms::Detail::has_operation() const
{
    return is_set(operation)
	|| (detail_card !=  nullptr && detail_card->has_operation())
	|| (detail_system !=  nullptr && detail_system->has_operation());
}

std::string Alarms::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-card")
    {
        if(detail_card == nullptr)
        {
            detail_card = std::make_shared<Alarms::Detail::DetailCard>();
        }
        return detail_card;
    }

    if(child_yang_name == "detail-system")
    {
        if(detail_system == nullptr)
        {
            detail_system = std::make_shared<Alarms::Detail::DetailSystem>();
        }
        return detail_system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail_card != nullptr)
    {
        children["detail-card"] = detail_card;
    }

    if(detail_system != nullptr)
    {
        children["detail-system"] = detail_system;
    }

    return children;
}

void Alarms::Detail::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Detail::DetailSystem::DetailSystem()
    :
    active(std::make_shared<Alarms::Detail::DetailSystem::Active>())
	,clients(std::make_shared<Alarms::Detail::DetailSystem::Clients>())
	,history(std::make_shared<Alarms::Detail::DetailSystem::History>())
	,stats(std::make_shared<Alarms::Detail::DetailSystem::Stats>())
	,suppressed(std::make_shared<Alarms::Detail::DetailSystem::Suppressed>())
{
    active->parent = this;

    clients->parent = this;

    history->parent = this;

    stats->parent = this;

    suppressed->parent = this;

    yang_name = "detail-system"; yang_parent_name = "detail";
}

Alarms::Detail::DetailSystem::~DetailSystem()
{
}

bool Alarms::Detail::DetailSystem::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (clients !=  nullptr && clients->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (stats !=  nullptr && stats->has_data())
	|| (suppressed !=  nullptr && suppressed->has_data());
}

bool Alarms::Detail::DetailSystem::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (clients !=  nullptr && clients->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (stats !=  nullptr && stats->has_operation())
	|| (suppressed !=  nullptr && suppressed->has_operation());
}

std::string Alarms::Detail::DetailSystem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-system";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Alarms::Detail::DetailSystem::Active>();
        }
        return active;
    }

    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Alarms::Detail::DetailSystem::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Alarms::Detail::DetailSystem::History>();
        }
        return history;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Alarms::Detail::DetailSystem::Stats>();
        }
        return stats;
    }

    if(child_yang_name == "suppressed")
    {
        if(suppressed == nullptr)
        {
            suppressed = std::make_shared<Alarms::Detail::DetailSystem::Suppressed>();
        }
        return suppressed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    if(suppressed != nullptr)
    {
        children["suppressed"] = suppressed;
    }

    return children;
}

void Alarms::Detail::DetailSystem::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Detail::DetailSystem::Active::Active()
{
    yang_name = "active"; yang_parent_name = "detail-system";
}

Alarms::Detail::DetailSystem::Active::~Active()
{
}

bool Alarms::Detail::DetailSystem::Active::has_data() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailSystem::Active::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Detail::DetailSystem::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        for(auto const & c : alarm_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Detail::DetailSystem::Active::AlarmInfo>();
        c->parent = this;
        alarm_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Detail::DetailSystem::Active::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Detail::DetailSystem::Active::AlarmInfo::AlarmInfo()
    :
    aid{YType::str, "aid"},
    alarm_name{YType::str, "alarm-name"},
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    description{YType::str, "description"},
    eid{YType::str, "eid"},
    group{YType::enumeration, "group"},
    interface{YType::str, "interface"},
    location{YType::str, "location"},
    module{YType::str, "module"},
    pending_sync{YType::boolean, "pending-sync"},
    reporting_agent_id{YType::uint32, "reporting-agent-id"},
    service_affecting{YType::enumeration, "service-affecting"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    severity{YType::enumeration, "severity"},
    status{YType::enumeration, "status"},
    tag{YType::str, "tag"},
    type{YType::enumeration, "type"}
    	,
    otn(std::make_shared<Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn>())
	,tca(std::make_shared<Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca>())
{
    otn->parent = this;

    tca->parent = this;

    yang_name = "alarm-info"; yang_parent_name = "active";
}

Alarms::Detail::DetailSystem::Active::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::has_data() const
{
    return aid.is_set
	|| alarm_name.is_set
	|| clear_time.is_set
	|| clear_timestamp.is_set
	|| description.is_set
	|| eid.is_set
	|| group.is_set
	|| interface.is_set
	|| location.is_set
	|| module.is_set
	|| pending_sync.is_set
	|| reporting_agent_id.is_set
	|| service_affecting.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| severity.is_set
	|| status.is_set
	|| tag.is_set
	|| type.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (tca !=  nullptr && tca->has_data());
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(aid.operation)
	|| is_set(alarm_name.operation)
	|| is_set(clear_time.operation)
	|| is_set(clear_timestamp.operation)
	|| is_set(description.operation)
	|| is_set(eid.operation)
	|| is_set(group.operation)
	|| is_set(interface.operation)
	|| is_set(location.operation)
	|| is_set(module.operation)
	|| is_set(pending_sync.operation)
	|| is_set(reporting_agent_id.operation)
	|| is_set(service_affecting.operation)
	|| is_set(set_time.operation)
	|| is_set(set_timestamp.operation)
	|| is_set(severity.operation)
	|| is_set(status.operation)
	|| is_set(tag.operation)
	|| is_set(type.operation)
	|| (otn !=  nullptr && otn->has_operation())
	|| (tca !=  nullptr && tca->has_operation());
}

std::string Alarms::Detail::DetailSystem::Active::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::Active::AlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.operation)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.operation)) leaf_name_data.push_back(alarm_name.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.operation)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.operation)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (eid.is_set || is_set(eid.operation)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (module.is_set || is_set(module.operation)) leaf_name_data.push_back(module.get_name_leafdata());
    if (pending_sync.is_set || is_set(pending_sync.operation)) leaf_name_data.push_back(pending_sync.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.operation)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (service_affecting.is_set || is_set(service_affecting.operation)) leaf_name_data.push_back(service_affecting.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.operation)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.operation)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Active::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "tca")
    {
        if(tca == nullptr)
        {
            tca = std::make_shared<Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca>();
        }
        return tca;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Active::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    if(tca != nullptr)
    {
        children["tca"] = tca;
    }

    return children;
}

void Alarms::Detail::DetailSystem::Active::AlarmInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aid")
    {
        aid = value;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
    }
    if(value_path == "clear-time")
    {
        clear_time = value;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "eid")
    {
        eid = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "module")
    {
        module = value;
    }
    if(value_path == "pending-sync")
    {
        pending_sync = value;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id = value;
    }
    if(value_path == "service-affecting")
    {
        service_affecting = value;
    }
    if(value_path == "set-time")
    {
        set_time = value;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::Otn()
    :
    direction{YType::enumeration, "direction"},
    notification_source{YType::enumeration, "notification-source"}
{
    yang_name = "otn"; yang_parent_name = "alarm-info";
}

Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::~Otn()
{
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::has_data() const
{
    return direction.is_set
	|| notification_source.is_set;
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(notification_source.operation);
}

std::string Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/active/alarm-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (notification_source.is_set || is_set(notification_source.operation)) leaf_name_data.push_back(notification_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "notification-source")
    {
        notification_source = value;
    }
}

Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::Tca()
    :
    bucket_type{YType::enumeration, "bucket-type"},
    current_value{YType::str, "current-value"},
    threshold_value{YType::str, "threshold-value"}
{
    yang_name = "tca"; yang_parent_name = "alarm-info";
}

Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::~Tca()
{
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::has_data() const
{
    return bucket_type.is_set
	|| current_value.is_set
	|| threshold_value.is_set;
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::has_operation() const
{
    return is_set(operation)
	|| is_set(bucket_type.operation)
	|| is_set(current_value.operation)
	|| is_set(threshold_value.operation);
}

std::string Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tca";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/active/alarm-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bucket_type.is_set || is_set(bucket_type.operation)) leaf_name_data.push_back(bucket_type.get_name_leafdata());
    if (current_value.is_set || is_set(current_value.operation)) leaf_name_data.push_back(current_value.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bucket-type")
    {
        bucket_type = value;
    }
    if(value_path == "current-value")
    {
        current_value = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Alarms::Detail::DetailSystem::History::History()
{
    yang_name = "history"; yang_parent_name = "detail-system";
}

Alarms::Detail::DetailSystem::History::~History()
{
}

bool Alarms::Detail::DetailSystem::History::has_data() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailSystem::History::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Detail::DetailSystem::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        for(auto const & c : alarm_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Detail::DetailSystem::History::AlarmInfo>();
        c->parent = this;
        alarm_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Detail::DetailSystem::History::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Detail::DetailSystem::History::AlarmInfo::AlarmInfo()
    :
    aid{YType::str, "aid"},
    alarm_name{YType::str, "alarm-name"},
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    description{YType::str, "description"},
    eid{YType::str, "eid"},
    group{YType::enumeration, "group"},
    interface{YType::str, "interface"},
    location{YType::str, "location"},
    module{YType::str, "module"},
    pending_sync{YType::boolean, "pending-sync"},
    reporting_agent_id{YType::uint32, "reporting-agent-id"},
    service_affecting{YType::enumeration, "service-affecting"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    severity{YType::enumeration, "severity"},
    status{YType::enumeration, "status"},
    tag{YType::str, "tag"},
    type{YType::enumeration, "type"}
    	,
    otn(std::make_shared<Alarms::Detail::DetailSystem::History::AlarmInfo::Otn>())
	,tca(std::make_shared<Alarms::Detail::DetailSystem::History::AlarmInfo::Tca>())
{
    otn->parent = this;

    tca->parent = this;

    yang_name = "alarm-info"; yang_parent_name = "history";
}

Alarms::Detail::DetailSystem::History::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::has_data() const
{
    return aid.is_set
	|| alarm_name.is_set
	|| clear_time.is_set
	|| clear_timestamp.is_set
	|| description.is_set
	|| eid.is_set
	|| group.is_set
	|| interface.is_set
	|| location.is_set
	|| module.is_set
	|| pending_sync.is_set
	|| reporting_agent_id.is_set
	|| service_affecting.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| severity.is_set
	|| status.is_set
	|| tag.is_set
	|| type.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (tca !=  nullptr && tca->has_data());
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(aid.operation)
	|| is_set(alarm_name.operation)
	|| is_set(clear_time.operation)
	|| is_set(clear_timestamp.operation)
	|| is_set(description.operation)
	|| is_set(eid.operation)
	|| is_set(group.operation)
	|| is_set(interface.operation)
	|| is_set(location.operation)
	|| is_set(module.operation)
	|| is_set(pending_sync.operation)
	|| is_set(reporting_agent_id.operation)
	|| is_set(service_affecting.operation)
	|| is_set(set_time.operation)
	|| is_set(set_timestamp.operation)
	|| is_set(severity.operation)
	|| is_set(status.operation)
	|| is_set(tag.operation)
	|| is_set(type.operation)
	|| (otn !=  nullptr && otn->has_operation())
	|| (tca !=  nullptr && tca->has_operation());
}

std::string Alarms::Detail::DetailSystem::History::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::History::AlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/history/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.operation)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.operation)) leaf_name_data.push_back(alarm_name.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.operation)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.operation)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (eid.is_set || is_set(eid.operation)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (module.is_set || is_set(module.operation)) leaf_name_data.push_back(module.get_name_leafdata());
    if (pending_sync.is_set || is_set(pending_sync.operation)) leaf_name_data.push_back(pending_sync.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.operation)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (service_affecting.is_set || is_set(service_affecting.operation)) leaf_name_data.push_back(service_affecting.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.operation)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.operation)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::History::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<Alarms::Detail::DetailSystem::History::AlarmInfo::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "tca")
    {
        if(tca == nullptr)
        {
            tca = std::make_shared<Alarms::Detail::DetailSystem::History::AlarmInfo::Tca>();
        }
        return tca;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::History::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    if(tca != nullptr)
    {
        children["tca"] = tca;
    }

    return children;
}

void Alarms::Detail::DetailSystem::History::AlarmInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aid")
    {
        aid = value;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
    }
    if(value_path == "clear-time")
    {
        clear_time = value;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "eid")
    {
        eid = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "module")
    {
        module = value;
    }
    if(value_path == "pending-sync")
    {
        pending_sync = value;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id = value;
    }
    if(value_path == "service-affecting")
    {
        service_affecting = value;
    }
    if(value_path == "set-time")
    {
        set_time = value;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::Otn()
    :
    direction{YType::enumeration, "direction"},
    notification_source{YType::enumeration, "notification-source"}
{
    yang_name = "otn"; yang_parent_name = "alarm-info";
}

Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::~Otn()
{
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::has_data() const
{
    return direction.is_set
	|| notification_source.is_set;
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(notification_source.operation);
}

std::string Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/history/alarm-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (notification_source.is_set || is_set(notification_source.operation)) leaf_name_data.push_back(notification_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "notification-source")
    {
        notification_source = value;
    }
}

Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::Tca()
    :
    bucket_type{YType::enumeration, "bucket-type"},
    current_value{YType::str, "current-value"},
    threshold_value{YType::str, "threshold-value"}
{
    yang_name = "tca"; yang_parent_name = "alarm-info";
}

Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::~Tca()
{
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::has_data() const
{
    return bucket_type.is_set
	|| current_value.is_set
	|| threshold_value.is_set;
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::has_operation() const
{
    return is_set(operation)
	|| is_set(bucket_type.operation)
	|| is_set(current_value.operation)
	|| is_set(threshold_value.operation);
}

std::string Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tca";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/history/alarm-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bucket_type.is_set || is_set(bucket_type.operation)) leaf_name_data.push_back(bucket_type.get_name_leafdata());
    if (current_value.is_set || is_set(current_value.operation)) leaf_name_data.push_back(current_value.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bucket-type")
    {
        bucket_type = value;
    }
    if(value_path == "current-value")
    {
        current_value = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Alarms::Detail::DetailSystem::Suppressed::Suppressed()
{
    yang_name = "suppressed"; yang_parent_name = "detail-system";
}

Alarms::Detail::DetailSystem::Suppressed::~Suppressed()
{
}

bool Alarms::Detail::DetailSystem::Suppressed::has_data() const
{
    for (std::size_t index=0; index<suppressed_info.size(); index++)
    {
        if(suppressed_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailSystem::Suppressed::has_operation() const
{
    for (std::size_t index=0; index<suppressed_info.size(); index++)
    {
        if(suppressed_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Detail::DetailSystem::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::Suppressed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppressed-info")
    {
        for(auto const & c : suppressed_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo>();
        c->parent = this;
        suppressed_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : suppressed_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Detail::DetailSystem::Suppressed::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::SuppressedInfo()
    :
    aid{YType::str, "aid"},
    alarm_name{YType::str, "alarm-name"},
    description{YType::str, "description"},
    eid{YType::str, "eid"},
    group{YType::enumeration, "group"},
    interface{YType::str, "interface"},
    location{YType::str, "location"},
    module{YType::str, "module"},
    pending_sync{YType::boolean, "pending-sync"},
    reporting_agent_id{YType::uint32, "reporting-agent-id"},
    service_affecting{YType::enumeration, "service-affecting"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    severity{YType::enumeration, "severity"},
    status{YType::enumeration, "status"},
    suppressed_time{YType::str, "suppressed-time"},
    suppressed_timestamp{YType::uint64, "suppressed-timestamp"},
    tag{YType::str, "tag"}
    	,
    otn(std::make_shared<Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn>())
{
    otn->parent = this;

    yang_name = "suppressed-info"; yang_parent_name = "suppressed";
}

Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::~SuppressedInfo()
{
}

bool Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::has_data() const
{
    return aid.is_set
	|| alarm_name.is_set
	|| description.is_set
	|| eid.is_set
	|| group.is_set
	|| interface.is_set
	|| location.is_set
	|| module.is_set
	|| pending_sync.is_set
	|| reporting_agent_id.is_set
	|| service_affecting.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| severity.is_set
	|| status.is_set
	|| suppressed_time.is_set
	|| suppressed_timestamp.is_set
	|| tag.is_set
	|| (otn !=  nullptr && otn->has_data());
}

bool Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(aid.operation)
	|| is_set(alarm_name.operation)
	|| is_set(description.operation)
	|| is_set(eid.operation)
	|| is_set(group.operation)
	|| is_set(interface.operation)
	|| is_set(location.operation)
	|| is_set(module.operation)
	|| is_set(pending_sync.operation)
	|| is_set(reporting_agent_id.operation)
	|| is_set(service_affecting.operation)
	|| is_set(set_time.operation)
	|| is_set(set_timestamp.operation)
	|| is_set(severity.operation)
	|| is_set(status.operation)
	|| is_set(suppressed_time.operation)
	|| is_set(suppressed_timestamp.operation)
	|| is_set(tag.operation)
	|| (otn !=  nullptr && otn->has_operation());
}

std::string Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed-info";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/suppressed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.operation)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.operation)) leaf_name_data.push_back(alarm_name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (eid.is_set || is_set(eid.operation)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (module.is_set || is_set(module.operation)) leaf_name_data.push_back(module.get_name_leafdata());
    if (pending_sync.is_set || is_set(pending_sync.operation)) leaf_name_data.push_back(pending_sync.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.operation)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (service_affecting.is_set || is_set(service_affecting.operation)) leaf_name_data.push_back(service_affecting.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.operation)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.operation)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.operation)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());
    if (suppressed_timestamp.is_set || is_set(suppressed_timestamp.operation)) leaf_name_data.push_back(suppressed_timestamp.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    return children;
}

void Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aid")
    {
        aid = value;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "eid")
    {
        eid = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "module")
    {
        module = value;
    }
    if(value_path == "pending-sync")
    {
        pending_sync = value;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id = value;
    }
    if(value_path == "service-affecting")
    {
        service_affecting = value;
    }
    if(value_path == "set-time")
    {
        set_time = value;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "suppressed-time")
    {
        suppressed_time = value;
    }
    if(value_path == "suppressed-timestamp")
    {
        suppressed_timestamp = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::Otn()
    :
    direction{YType::enumeration, "direction"},
    notification_source{YType::enumeration, "notification-source"}
{
    yang_name = "otn"; yang_parent_name = "suppressed-info";
}

Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::~Otn()
{
}

bool Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::has_data() const
{
    return direction.is_set
	|| notification_source.is_set;
}

bool Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(notification_source.operation);
}

std::string Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/suppressed/suppressed-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (notification_source.is_set || is_set(notification_source.operation)) leaf_name_data.push_back(notification_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "notification-source")
    {
        notification_source = value;
    }
}

Alarms::Detail::DetailSystem::Stats::Stats()
    :
    active{YType::uint64, "active"},
    cache_hit{YType::uint32, "cache-hit"},
    cache_miss{YType::uint32, "cache-miss"},
    dropped{YType::uint64, "dropped"},
    dropped_clear_without_set{YType::uint32, "dropped-clear-without-set"},
    dropped_db_error{YType::uint32, "dropped-db-error"},
    dropped_duplicate{YType::uint32, "dropped-duplicate"},
    dropped_insuff_mem{YType::uint32, "dropped-insuff-mem"},
    dropped_invalid_aid{YType::uint32, "dropped-invalid-aid"},
    history{YType::uint64, "history"},
    reported{YType::uint64, "reported"},
    suppressed{YType::uint64, "suppressed"},
    sysadmin_active{YType::uint64, "sysadmin-active"},
    sysadmin_history{YType::uint64, "sysadmin-history"},
    sysadmin_suppressed{YType::uint64, "sysadmin-suppressed"}
{
    yang_name = "stats"; yang_parent_name = "detail-system";
}

Alarms::Detail::DetailSystem::Stats::~Stats()
{
}

bool Alarms::Detail::DetailSystem::Stats::has_data() const
{
    return active.is_set
	|| cache_hit.is_set
	|| cache_miss.is_set
	|| dropped.is_set
	|| dropped_clear_without_set.is_set
	|| dropped_db_error.is_set
	|| dropped_duplicate.is_set
	|| dropped_insuff_mem.is_set
	|| dropped_invalid_aid.is_set
	|| history.is_set
	|| reported.is_set
	|| suppressed.is_set
	|| sysadmin_active.is_set
	|| sysadmin_history.is_set
	|| sysadmin_suppressed.is_set;
}

bool Alarms::Detail::DetailSystem::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(cache_hit.operation)
	|| is_set(cache_miss.operation)
	|| is_set(dropped.operation)
	|| is_set(dropped_clear_without_set.operation)
	|| is_set(dropped_db_error.operation)
	|| is_set(dropped_duplicate.operation)
	|| is_set(dropped_insuff_mem.operation)
	|| is_set(dropped_invalid_aid.operation)
	|| is_set(history.operation)
	|| is_set(reported.operation)
	|| is_set(suppressed.operation)
	|| is_set(sysadmin_active.operation)
	|| is_set(sysadmin_history.operation)
	|| is_set(sysadmin_suppressed.operation);
}

std::string Alarms::Detail::DetailSystem::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (cache_hit.is_set || is_set(cache_hit.operation)) leaf_name_data.push_back(cache_hit.get_name_leafdata());
    if (cache_miss.is_set || is_set(cache_miss.operation)) leaf_name_data.push_back(cache_miss.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (dropped_clear_without_set.is_set || is_set(dropped_clear_without_set.operation)) leaf_name_data.push_back(dropped_clear_without_set.get_name_leafdata());
    if (dropped_db_error.is_set || is_set(dropped_db_error.operation)) leaf_name_data.push_back(dropped_db_error.get_name_leafdata());
    if (dropped_duplicate.is_set || is_set(dropped_duplicate.operation)) leaf_name_data.push_back(dropped_duplicate.get_name_leafdata());
    if (dropped_insuff_mem.is_set || is_set(dropped_insuff_mem.operation)) leaf_name_data.push_back(dropped_insuff_mem.get_name_leafdata());
    if (dropped_invalid_aid.is_set || is_set(dropped_invalid_aid.operation)) leaf_name_data.push_back(dropped_invalid_aid.get_name_leafdata());
    if (history.is_set || is_set(history.operation)) leaf_name_data.push_back(history.get_name_leafdata());
    if (reported.is_set || is_set(reported.operation)) leaf_name_data.push_back(reported.get_name_leafdata());
    if (suppressed.is_set || is_set(suppressed.operation)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (sysadmin_active.is_set || is_set(sysadmin_active.operation)) leaf_name_data.push_back(sysadmin_active.get_name_leafdata());
    if (sysadmin_history.is_set || is_set(sysadmin_history.operation)) leaf_name_data.push_back(sysadmin_history.get_name_leafdata());
    if (sysadmin_suppressed.is_set || is_set(sysadmin_suppressed.operation)) leaf_name_data.push_back(sysadmin_suppressed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailSystem::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "cache-hit")
    {
        cache_hit = value;
    }
    if(value_path == "cache-miss")
    {
        cache_miss = value;
    }
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "dropped-clear-without-set")
    {
        dropped_clear_without_set = value;
    }
    if(value_path == "dropped-db-error")
    {
        dropped_db_error = value;
    }
    if(value_path == "dropped-duplicate")
    {
        dropped_duplicate = value;
    }
    if(value_path == "dropped-insuff-mem")
    {
        dropped_insuff_mem = value;
    }
    if(value_path == "dropped-invalid-aid")
    {
        dropped_invalid_aid = value;
    }
    if(value_path == "history")
    {
        history = value;
    }
    if(value_path == "reported")
    {
        reported = value;
    }
    if(value_path == "suppressed")
    {
        suppressed = value;
    }
    if(value_path == "sysadmin-active")
    {
        sysadmin_active = value;
    }
    if(value_path == "sysadmin-history")
    {
        sysadmin_history = value;
    }
    if(value_path == "sysadmin-suppressed")
    {
        sysadmin_suppressed = value;
    }
}

Alarms::Detail::DetailSystem::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "detail-system";
}

Alarms::Detail::DetailSystem::Clients::~Clients()
{
}

bool Alarms::Detail::DetailSystem::Clients::has_data() const
{
    for (std::size_t index=0; index<client_info.size(); index++)
    {
        if(client_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailSystem::Clients::has_operation() const
{
    for (std::size_t index=0; index<client_info.size(); index++)
    {
        if(client_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Detail::DetailSystem::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::Clients::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-info")
    {
        for(auto const & c : client_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Detail::DetailSystem::Clients::ClientInfo>();
        c->parent = this;
        client_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Detail::DetailSystem::Clients::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Detail::DetailSystem::Clients::ClientInfo::ClientInfo()
    :
    connect_count{YType::uint32, "connect-count"},
    connect_timestamp{YType::str, "connect-timestamp"},
    filter_disp{YType::boolean, "filter-disp"},
    filter_group{YType::enumeration, "filter-group"},
    filter_severity{YType::enumeration, "filter-severity"},
    filter_state{YType::enumeration, "filter-state"},
    get_count{YType::uint32, "get-count"},
    handle{YType::str, "handle"},
    id{YType::uint32, "id"},
    location{YType::str, "location"},
    name{YType::str, "name"},
    report_count{YType::uint32, "report-count"},
    state{YType::enumeration, "state"},
    subscribe_count{YType::uint32, "subscribe-count"},
    subscriber_id{YType::uint32, "subscriber-id"},
    type{YType::enumeration, "type"}
{
    yang_name = "client-info"; yang_parent_name = "clients";
}

Alarms::Detail::DetailSystem::Clients::ClientInfo::~ClientInfo()
{
}

bool Alarms::Detail::DetailSystem::Clients::ClientInfo::has_data() const
{
    return connect_count.is_set
	|| connect_timestamp.is_set
	|| filter_disp.is_set
	|| filter_group.is_set
	|| filter_severity.is_set
	|| filter_state.is_set
	|| get_count.is_set
	|| handle.is_set
	|| id.is_set
	|| location.is_set
	|| name.is_set
	|| report_count.is_set
	|| state.is_set
	|| subscribe_count.is_set
	|| subscriber_id.is_set
	|| type.is_set;
}

bool Alarms::Detail::DetailSystem::Clients::ClientInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(connect_count.operation)
	|| is_set(connect_timestamp.operation)
	|| is_set(filter_disp.operation)
	|| is_set(filter_group.operation)
	|| is_set(filter_severity.operation)
	|| is_set(filter_state.operation)
	|| is_set(get_count.operation)
	|| is_set(handle.operation)
	|| is_set(id.operation)
	|| is_set(location.operation)
	|| is_set(name.operation)
	|| is_set(report_count.operation)
	|| is_set(state.operation)
	|| is_set(subscribe_count.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(type.operation);
}

std::string Alarms::Detail::DetailSystem::Clients::ClientInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-info";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailSystem::Clients::ClientInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/clients/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_count.is_set || is_set(connect_count.operation)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (connect_timestamp.is_set || is_set(connect_timestamp.operation)) leaf_name_data.push_back(connect_timestamp.get_name_leafdata());
    if (filter_disp.is_set || is_set(filter_disp.operation)) leaf_name_data.push_back(filter_disp.get_name_leafdata());
    if (filter_group.is_set || is_set(filter_group.operation)) leaf_name_data.push_back(filter_group.get_name_leafdata());
    if (filter_severity.is_set || is_set(filter_severity.operation)) leaf_name_data.push_back(filter_severity.get_name_leafdata());
    if (filter_state.is_set || is_set(filter_state.operation)) leaf_name_data.push_back(filter_state.get_name_leafdata());
    if (get_count.is_set || is_set(get_count.operation)) leaf_name_data.push_back(get_count.get_name_leafdata());
    if (handle.is_set || is_set(handle.operation)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (report_count.is_set || is_set(report_count.operation)) leaf_name_data.push_back(report_count.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscribe_count.is_set || is_set(subscribe_count.operation)) leaf_name_data.push_back(subscribe_count.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Clients::ClientInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Clients::ClientInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailSystem::Clients::ClientInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-count")
    {
        connect_count = value;
    }
    if(value_path == "connect-timestamp")
    {
        connect_timestamp = value;
    }
    if(value_path == "filter-disp")
    {
        filter_disp = value;
    }
    if(value_path == "filter-group")
    {
        filter_group = value;
    }
    if(value_path == "filter-severity")
    {
        filter_severity = value;
    }
    if(value_path == "filter-state")
    {
        filter_state = value;
    }
    if(value_path == "get-count")
    {
        get_count = value;
    }
    if(value_path == "handle")
    {
        handle = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "report-count")
    {
        report_count = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscribe-count")
    {
        subscribe_count = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Alarms::Detail::DetailCard::DetailCard()
    :
    detail_locations(std::make_shared<Alarms::Detail::DetailCard::DetailLocations>())
{
    detail_locations->parent = this;

    yang_name = "detail-card"; yang_parent_name = "detail";
}

Alarms::Detail::DetailCard::~DetailCard()
{
}

bool Alarms::Detail::DetailCard::has_data() const
{
    return (detail_locations !=  nullptr && detail_locations->has_data());
}

bool Alarms::Detail::DetailCard::has_operation() const
{
    return is_set(operation)
	|| (detail_locations !=  nullptr && detail_locations->has_operation());
}

std::string Alarms::Detail::DetailCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-card";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-locations")
    {
        if(detail_locations == nullptr)
        {
            detail_locations = std::make_shared<Alarms::Detail::DetailCard::DetailLocations>();
        }
        return detail_locations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail_locations != nullptr)
    {
        children["detail-locations"] = detail_locations;
    }

    return children;
}

void Alarms::Detail::DetailCard::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocations()
{
    yang_name = "detail-locations"; yang_parent_name = "detail-card";
}

Alarms::Detail::DetailCard::DetailLocations::~DetailLocations()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::has_data() const
{
    for (std::size_t index=0; index<detail_location.size(); index++)
    {
        if(detail_location[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailCard::DetailLocations::has_operation() const
{
    for (std::size_t index=0; index<detail_location.size(); index++)
    {
        if(detail_location[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Detail::DetailCard::DetailLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-locations";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-card/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-location")
    {
        for(auto const & c : detail_location)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation>();
        c->parent = this;
        detail_location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail_location)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::DetailLocation()
    :
    node_id{YType::str, "node-id"}
    	,
    active(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active>())
	,clients(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients>())
	,history(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History>())
	,stats(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats>())
	,suppressed(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed>())
{
    active->parent = this;

    clients->parent = this;

    history->parent = this;

    stats->parent = this;

    suppressed->parent = this;

    yang_name = "detail-location"; yang_parent_name = "detail-locations";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::~DetailLocation()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::has_data() const
{
    return node_id.is_set
	|| (active !=  nullptr && active->has_data())
	|| (clients !=  nullptr && clients->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (stats !=  nullptr && stats->has_data())
	|| (suppressed !=  nullptr && suppressed->has_data());
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (active !=  nullptr && active->has_operation())
	|| (clients !=  nullptr && clients->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (stats !=  nullptr && stats->has_operation())
	|| (suppressed !=  nullptr && suppressed->has_operation());
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-location" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-card/detail-locations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active>();
        }
        return active;
    }

    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History>();
        }
        return history;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats>();
        }
        return stats;
    }

    if(child_yang_name == "suppressed")
    {
        if(suppressed == nullptr)
        {
            suppressed = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed>();
        }
        return suppressed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    if(suppressed != nullptr)
    {
        children["suppressed"] = suppressed;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::Active()
{
    yang_name = "active"; yang_parent_name = "detail-location";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::~Active()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::has_data() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Active' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        for(auto const & c : alarm_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo>();
        c->parent = this;
        alarm_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::AlarmInfo()
    :
    aid{YType::str, "aid"},
    alarm_name{YType::str, "alarm-name"},
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    description{YType::str, "description"},
    eid{YType::str, "eid"},
    group{YType::enumeration, "group"},
    interface{YType::str, "interface"},
    location{YType::str, "location"},
    module{YType::str, "module"},
    pending_sync{YType::boolean, "pending-sync"},
    reporting_agent_id{YType::uint32, "reporting-agent-id"},
    service_affecting{YType::enumeration, "service-affecting"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    severity{YType::enumeration, "severity"},
    status{YType::enumeration, "status"},
    tag{YType::str, "tag"},
    type{YType::enumeration, "type"}
    	,
    otn(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn>())
	,tca(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca>())
{
    otn->parent = this;

    tca->parent = this;

    yang_name = "alarm-info"; yang_parent_name = "active";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::has_data() const
{
    return aid.is_set
	|| alarm_name.is_set
	|| clear_time.is_set
	|| clear_timestamp.is_set
	|| description.is_set
	|| eid.is_set
	|| group.is_set
	|| interface.is_set
	|| location.is_set
	|| module.is_set
	|| pending_sync.is_set
	|| reporting_agent_id.is_set
	|| service_affecting.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| severity.is_set
	|| status.is_set
	|| tag.is_set
	|| type.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (tca !=  nullptr && tca->has_data());
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(aid.operation)
	|| is_set(alarm_name.operation)
	|| is_set(clear_time.operation)
	|| is_set(clear_timestamp.operation)
	|| is_set(description.operation)
	|| is_set(eid.operation)
	|| is_set(group.operation)
	|| is_set(interface.operation)
	|| is_set(location.operation)
	|| is_set(module.operation)
	|| is_set(pending_sync.operation)
	|| is_set(reporting_agent_id.operation)
	|| is_set(service_affecting.operation)
	|| is_set(set_time.operation)
	|| is_set(set_timestamp.operation)
	|| is_set(severity.operation)
	|| is_set(status.operation)
	|| is_set(tag.operation)
	|| is_set(type.operation)
	|| (otn !=  nullptr && otn->has_operation())
	|| (tca !=  nullptr && tca->has_operation());
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AlarmInfo' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.operation)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.operation)) leaf_name_data.push_back(alarm_name.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.operation)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.operation)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (eid.is_set || is_set(eid.operation)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (module.is_set || is_set(module.operation)) leaf_name_data.push_back(module.get_name_leafdata());
    if (pending_sync.is_set || is_set(pending_sync.operation)) leaf_name_data.push_back(pending_sync.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.operation)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (service_affecting.is_set || is_set(service_affecting.operation)) leaf_name_data.push_back(service_affecting.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.operation)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.operation)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "tca")
    {
        if(tca == nullptr)
        {
            tca = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca>();
        }
        return tca;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    if(tca != nullptr)
    {
        children["tca"] = tca;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aid")
    {
        aid = value;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
    }
    if(value_path == "clear-time")
    {
        clear_time = value;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "eid")
    {
        eid = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "module")
    {
        module = value;
    }
    if(value_path == "pending-sync")
    {
        pending_sync = value;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id = value;
    }
    if(value_path == "service-affecting")
    {
        service_affecting = value;
    }
    if(value_path == "set-time")
    {
        set_time = value;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::Otn()
    :
    direction{YType::enumeration, "direction"},
    notification_source{YType::enumeration, "notification-source"}
{
    yang_name = "otn"; yang_parent_name = "alarm-info";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::~Otn()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::has_data() const
{
    return direction.is_set
	|| notification_source.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(notification_source.operation);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otn' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (notification_source.is_set || is_set(notification_source.operation)) leaf_name_data.push_back(notification_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "notification-source")
    {
        notification_source = value;
    }
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::Tca()
    :
    bucket_type{YType::enumeration, "bucket-type"},
    current_value{YType::str, "current-value"},
    threshold_value{YType::str, "threshold-value"}
{
    yang_name = "tca"; yang_parent_name = "alarm-info";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::~Tca()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::has_data() const
{
    return bucket_type.is_set
	|| current_value.is_set
	|| threshold_value.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::has_operation() const
{
    return is_set(operation)
	|| is_set(bucket_type.operation)
	|| is_set(current_value.operation)
	|| is_set(threshold_value.operation);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tca";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tca' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bucket_type.is_set || is_set(bucket_type.operation)) leaf_name_data.push_back(bucket_type.get_name_leafdata());
    if (current_value.is_set || is_set(current_value.operation)) leaf_name_data.push_back(current_value.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bucket-type")
    {
        bucket_type = value;
    }
    if(value_path == "current-value")
    {
        current_value = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::History()
{
    yang_name = "history"; yang_parent_name = "detail-location";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::~History()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::has_data() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'History' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        for(auto const & c : alarm_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo>();
        c->parent = this;
        alarm_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::AlarmInfo()
    :
    aid{YType::str, "aid"},
    alarm_name{YType::str, "alarm-name"},
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    description{YType::str, "description"},
    eid{YType::str, "eid"},
    group{YType::enumeration, "group"},
    interface{YType::str, "interface"},
    location{YType::str, "location"},
    module{YType::str, "module"},
    pending_sync{YType::boolean, "pending-sync"},
    reporting_agent_id{YType::uint32, "reporting-agent-id"},
    service_affecting{YType::enumeration, "service-affecting"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    severity{YType::enumeration, "severity"},
    status{YType::enumeration, "status"},
    tag{YType::str, "tag"},
    type{YType::enumeration, "type"}
    	,
    otn(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn>())
	,tca(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca>())
{
    otn->parent = this;

    tca->parent = this;

    yang_name = "alarm-info"; yang_parent_name = "history";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::has_data() const
{
    return aid.is_set
	|| alarm_name.is_set
	|| clear_time.is_set
	|| clear_timestamp.is_set
	|| description.is_set
	|| eid.is_set
	|| group.is_set
	|| interface.is_set
	|| location.is_set
	|| module.is_set
	|| pending_sync.is_set
	|| reporting_agent_id.is_set
	|| service_affecting.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| severity.is_set
	|| status.is_set
	|| tag.is_set
	|| type.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (tca !=  nullptr && tca->has_data());
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(aid.operation)
	|| is_set(alarm_name.operation)
	|| is_set(clear_time.operation)
	|| is_set(clear_timestamp.operation)
	|| is_set(description.operation)
	|| is_set(eid.operation)
	|| is_set(group.operation)
	|| is_set(interface.operation)
	|| is_set(location.operation)
	|| is_set(module.operation)
	|| is_set(pending_sync.operation)
	|| is_set(reporting_agent_id.operation)
	|| is_set(service_affecting.operation)
	|| is_set(set_time.operation)
	|| is_set(set_timestamp.operation)
	|| is_set(severity.operation)
	|| is_set(status.operation)
	|| is_set(tag.operation)
	|| is_set(type.operation)
	|| (otn !=  nullptr && otn->has_operation())
	|| (tca !=  nullptr && tca->has_operation());
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AlarmInfo' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.operation)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.operation)) leaf_name_data.push_back(alarm_name.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.operation)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.operation)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (eid.is_set || is_set(eid.operation)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (module.is_set || is_set(module.operation)) leaf_name_data.push_back(module.get_name_leafdata());
    if (pending_sync.is_set || is_set(pending_sync.operation)) leaf_name_data.push_back(pending_sync.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.operation)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (service_affecting.is_set || is_set(service_affecting.operation)) leaf_name_data.push_back(service_affecting.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.operation)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.operation)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "tca")
    {
        if(tca == nullptr)
        {
            tca = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca>();
        }
        return tca;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    if(tca != nullptr)
    {
        children["tca"] = tca;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aid")
    {
        aid = value;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
    }
    if(value_path == "clear-time")
    {
        clear_time = value;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "eid")
    {
        eid = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "module")
    {
        module = value;
    }
    if(value_path == "pending-sync")
    {
        pending_sync = value;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id = value;
    }
    if(value_path == "service-affecting")
    {
        service_affecting = value;
    }
    if(value_path == "set-time")
    {
        set_time = value;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::Otn()
    :
    direction{YType::enumeration, "direction"},
    notification_source{YType::enumeration, "notification-source"}
{
    yang_name = "otn"; yang_parent_name = "alarm-info";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::~Otn()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::has_data() const
{
    return direction.is_set
	|| notification_source.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(notification_source.operation);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otn' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (notification_source.is_set || is_set(notification_source.operation)) leaf_name_data.push_back(notification_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "notification-source")
    {
        notification_source = value;
    }
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::Tca()
    :
    bucket_type{YType::enumeration, "bucket-type"},
    current_value{YType::str, "current-value"},
    threshold_value{YType::str, "threshold-value"}
{
    yang_name = "tca"; yang_parent_name = "alarm-info";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::~Tca()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::has_data() const
{
    return bucket_type.is_set
	|| current_value.is_set
	|| threshold_value.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::has_operation() const
{
    return is_set(operation)
	|| is_set(bucket_type.operation)
	|| is_set(current_value.operation)
	|| is_set(threshold_value.operation);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tca";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tca' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bucket_type.is_set || is_set(bucket_type.operation)) leaf_name_data.push_back(bucket_type.get_name_leafdata());
    if (current_value.is_set || is_set(current_value.operation)) leaf_name_data.push_back(current_value.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bucket-type")
    {
        bucket_type = value;
    }
    if(value_path == "current-value")
    {
        current_value = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::Suppressed()
{
    yang_name = "suppressed"; yang_parent_name = "detail-location";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::~Suppressed()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::has_data() const
{
    for (std::size_t index=0; index<suppressed_info.size(); index++)
    {
        if(suppressed_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::has_operation() const
{
    for (std::size_t index=0; index<suppressed_info.size(); index++)
    {
        if(suppressed_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Suppressed' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppressed-info")
    {
        for(auto const & c : suppressed_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo>();
        c->parent = this;
        suppressed_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : suppressed_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::SuppressedInfo()
    :
    aid{YType::str, "aid"},
    alarm_name{YType::str, "alarm-name"},
    description{YType::str, "description"},
    eid{YType::str, "eid"},
    group{YType::enumeration, "group"},
    interface{YType::str, "interface"},
    location{YType::str, "location"},
    module{YType::str, "module"},
    pending_sync{YType::boolean, "pending-sync"},
    reporting_agent_id{YType::uint32, "reporting-agent-id"},
    service_affecting{YType::enumeration, "service-affecting"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    severity{YType::enumeration, "severity"},
    status{YType::enumeration, "status"},
    suppressed_time{YType::str, "suppressed-time"},
    suppressed_timestamp{YType::uint64, "suppressed-timestamp"},
    tag{YType::str, "tag"}
    	,
    otn(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn>())
{
    otn->parent = this;

    yang_name = "suppressed-info"; yang_parent_name = "suppressed";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::~SuppressedInfo()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::has_data() const
{
    return aid.is_set
	|| alarm_name.is_set
	|| description.is_set
	|| eid.is_set
	|| group.is_set
	|| interface.is_set
	|| location.is_set
	|| module.is_set
	|| pending_sync.is_set
	|| reporting_agent_id.is_set
	|| service_affecting.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| severity.is_set
	|| status.is_set
	|| suppressed_time.is_set
	|| suppressed_timestamp.is_set
	|| tag.is_set
	|| (otn !=  nullptr && otn->has_data());
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(aid.operation)
	|| is_set(alarm_name.operation)
	|| is_set(description.operation)
	|| is_set(eid.operation)
	|| is_set(group.operation)
	|| is_set(interface.operation)
	|| is_set(location.operation)
	|| is_set(module.operation)
	|| is_set(pending_sync.operation)
	|| is_set(reporting_agent_id.operation)
	|| is_set(service_affecting.operation)
	|| is_set(set_time.operation)
	|| is_set(set_timestamp.operation)
	|| is_set(severity.operation)
	|| is_set(status.operation)
	|| is_set(suppressed_time.operation)
	|| is_set(suppressed_timestamp.operation)
	|| is_set(tag.operation)
	|| (otn !=  nullptr && otn->has_operation());
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed-info";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SuppressedInfo' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aid.is_set || is_set(aid.operation)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.operation)) leaf_name_data.push_back(alarm_name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (eid.is_set || is_set(eid.operation)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (module.is_set || is_set(module.operation)) leaf_name_data.push_back(module.get_name_leafdata());
    if (pending_sync.is_set || is_set(pending_sync.operation)) leaf_name_data.push_back(pending_sync.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.operation)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (service_affecting.is_set || is_set(service_affecting.operation)) leaf_name_data.push_back(service_affecting.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.operation)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.operation)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.operation)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());
    if (suppressed_timestamp.is_set || is_set(suppressed_timestamp.operation)) leaf_name_data.push_back(suppressed_timestamp.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aid")
    {
        aid = value;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "eid")
    {
        eid = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "module")
    {
        module = value;
    }
    if(value_path == "pending-sync")
    {
        pending_sync = value;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id = value;
    }
    if(value_path == "service-affecting")
    {
        service_affecting = value;
    }
    if(value_path == "set-time")
    {
        set_time = value;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "suppressed-time")
    {
        suppressed_time = value;
    }
    if(value_path == "suppressed-timestamp")
    {
        suppressed_timestamp = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::Otn()
    :
    direction{YType::enumeration, "direction"},
    notification_source{YType::enumeration, "notification-source"}
{
    yang_name = "otn"; yang_parent_name = "suppressed-info";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::~Otn()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::has_data() const
{
    return direction.is_set
	|| notification_source.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(notification_source.operation);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otn' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (notification_source.is_set || is_set(notification_source.operation)) leaf_name_data.push_back(notification_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "notification-source")
    {
        notification_source = value;
    }
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::Stats()
    :
    active{YType::uint64, "active"},
    cache_hit{YType::uint32, "cache-hit"},
    cache_miss{YType::uint32, "cache-miss"},
    dropped{YType::uint64, "dropped"},
    dropped_clear_without_set{YType::uint32, "dropped-clear-without-set"},
    dropped_db_error{YType::uint32, "dropped-db-error"},
    dropped_duplicate{YType::uint32, "dropped-duplicate"},
    dropped_insuff_mem{YType::uint32, "dropped-insuff-mem"},
    dropped_invalid_aid{YType::uint32, "dropped-invalid-aid"},
    history{YType::uint64, "history"},
    reported{YType::uint64, "reported"},
    suppressed{YType::uint64, "suppressed"},
    sysadmin_active{YType::uint64, "sysadmin-active"},
    sysadmin_history{YType::uint64, "sysadmin-history"},
    sysadmin_suppressed{YType::uint64, "sysadmin-suppressed"}
{
    yang_name = "stats"; yang_parent_name = "detail-location";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::~Stats()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::has_data() const
{
    return active.is_set
	|| cache_hit.is_set
	|| cache_miss.is_set
	|| dropped.is_set
	|| dropped_clear_without_set.is_set
	|| dropped_db_error.is_set
	|| dropped_duplicate.is_set
	|| dropped_insuff_mem.is_set
	|| dropped_invalid_aid.is_set
	|| history.is_set
	|| reported.is_set
	|| suppressed.is_set
	|| sysadmin_active.is_set
	|| sysadmin_history.is_set
	|| sysadmin_suppressed.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(cache_hit.operation)
	|| is_set(cache_miss.operation)
	|| is_set(dropped.operation)
	|| is_set(dropped_clear_without_set.operation)
	|| is_set(dropped_db_error.operation)
	|| is_set(dropped_duplicate.operation)
	|| is_set(dropped_insuff_mem.operation)
	|| is_set(dropped_invalid_aid.operation)
	|| is_set(history.operation)
	|| is_set(reported.operation)
	|| is_set(suppressed.operation)
	|| is_set(sysadmin_active.operation)
	|| is_set(sysadmin_history.operation)
	|| is_set(sysadmin_suppressed.operation);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stats' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (cache_hit.is_set || is_set(cache_hit.operation)) leaf_name_data.push_back(cache_hit.get_name_leafdata());
    if (cache_miss.is_set || is_set(cache_miss.operation)) leaf_name_data.push_back(cache_miss.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (dropped_clear_without_set.is_set || is_set(dropped_clear_without_set.operation)) leaf_name_data.push_back(dropped_clear_without_set.get_name_leafdata());
    if (dropped_db_error.is_set || is_set(dropped_db_error.operation)) leaf_name_data.push_back(dropped_db_error.get_name_leafdata());
    if (dropped_duplicate.is_set || is_set(dropped_duplicate.operation)) leaf_name_data.push_back(dropped_duplicate.get_name_leafdata());
    if (dropped_insuff_mem.is_set || is_set(dropped_insuff_mem.operation)) leaf_name_data.push_back(dropped_insuff_mem.get_name_leafdata());
    if (dropped_invalid_aid.is_set || is_set(dropped_invalid_aid.operation)) leaf_name_data.push_back(dropped_invalid_aid.get_name_leafdata());
    if (history.is_set || is_set(history.operation)) leaf_name_data.push_back(history.get_name_leafdata());
    if (reported.is_set || is_set(reported.operation)) leaf_name_data.push_back(reported.get_name_leafdata());
    if (suppressed.is_set || is_set(suppressed.operation)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (sysadmin_active.is_set || is_set(sysadmin_active.operation)) leaf_name_data.push_back(sysadmin_active.get_name_leafdata());
    if (sysadmin_history.is_set || is_set(sysadmin_history.operation)) leaf_name_data.push_back(sysadmin_history.get_name_leafdata());
    if (sysadmin_suppressed.is_set || is_set(sysadmin_suppressed.operation)) leaf_name_data.push_back(sysadmin_suppressed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "cache-hit")
    {
        cache_hit = value;
    }
    if(value_path == "cache-miss")
    {
        cache_miss = value;
    }
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "dropped-clear-without-set")
    {
        dropped_clear_without_set = value;
    }
    if(value_path == "dropped-db-error")
    {
        dropped_db_error = value;
    }
    if(value_path == "dropped-duplicate")
    {
        dropped_duplicate = value;
    }
    if(value_path == "dropped-insuff-mem")
    {
        dropped_insuff_mem = value;
    }
    if(value_path == "dropped-invalid-aid")
    {
        dropped_invalid_aid = value;
    }
    if(value_path == "history")
    {
        history = value;
    }
    if(value_path == "reported")
    {
        reported = value;
    }
    if(value_path == "suppressed")
    {
        suppressed = value;
    }
    if(value_path == "sysadmin-active")
    {
        sysadmin_active = value;
    }
    if(value_path == "sysadmin-history")
    {
        sysadmin_history = value;
    }
    if(value_path == "sysadmin-suppressed")
    {
        sysadmin_suppressed = value;
    }
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "detail-location";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::~Clients()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::has_data() const
{
    for (std::size_t index=0; index<client_info.size(); index++)
    {
        if(client_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::has_operation() const
{
    for (std::size_t index=0; index<client_info.size(); index++)
    {
        if(client_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clients' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-info")
    {
        for(auto const & c : client_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo>();
        c->parent = this;
        client_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::ClientInfo()
    :
    connect_count{YType::uint32, "connect-count"},
    connect_timestamp{YType::str, "connect-timestamp"},
    filter_disp{YType::boolean, "filter-disp"},
    filter_group{YType::enumeration, "filter-group"},
    filter_severity{YType::enumeration, "filter-severity"},
    filter_state{YType::enumeration, "filter-state"},
    get_count{YType::uint32, "get-count"},
    handle{YType::str, "handle"},
    id{YType::uint32, "id"},
    location{YType::str, "location"},
    name{YType::str, "name"},
    report_count{YType::uint32, "report-count"},
    state{YType::enumeration, "state"},
    subscribe_count{YType::uint32, "subscribe-count"},
    subscriber_id{YType::uint32, "subscriber-id"},
    type{YType::enumeration, "type"}
{
    yang_name = "client-info"; yang_parent_name = "clients";
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::~ClientInfo()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::has_data() const
{
    return connect_count.is_set
	|| connect_timestamp.is_set
	|| filter_disp.is_set
	|| filter_group.is_set
	|| filter_severity.is_set
	|| filter_state.is_set
	|| get_count.is_set
	|| handle.is_set
	|| id.is_set
	|| location.is_set
	|| name.is_set
	|| report_count.is_set
	|| state.is_set
	|| subscribe_count.is_set
	|| subscriber_id.is_set
	|| type.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(connect_count.operation)
	|| is_set(connect_timestamp.operation)
	|| is_set(filter_disp.operation)
	|| is_set(filter_group.operation)
	|| is_set(filter_severity.operation)
	|| is_set(filter_state.operation)
	|| is_set(get_count.operation)
	|| is_set(handle.operation)
	|| is_set(id.operation)
	|| is_set(location.operation)
	|| is_set(name.operation)
	|| is_set(report_count.operation)
	|| is_set(state.operation)
	|| is_set(subscribe_count.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(type.operation);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-info";

    return path_buffer.str();

}

const EntityPath Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientInfo' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_count.is_set || is_set(connect_count.operation)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (connect_timestamp.is_set || is_set(connect_timestamp.operation)) leaf_name_data.push_back(connect_timestamp.get_name_leafdata());
    if (filter_disp.is_set || is_set(filter_disp.operation)) leaf_name_data.push_back(filter_disp.get_name_leafdata());
    if (filter_group.is_set || is_set(filter_group.operation)) leaf_name_data.push_back(filter_group.get_name_leafdata());
    if (filter_severity.is_set || is_set(filter_severity.operation)) leaf_name_data.push_back(filter_severity.get_name_leafdata());
    if (filter_state.is_set || is_set(filter_state.operation)) leaf_name_data.push_back(filter_state.get_name_leafdata());
    if (get_count.is_set || is_set(get_count.operation)) leaf_name_data.push_back(get_count.get_name_leafdata());
    if (handle.is_set || is_set(handle.operation)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (report_count.is_set || is_set(report_count.operation)) leaf_name_data.push_back(report_count.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscribe_count.is_set || is_set(subscribe_count.operation)) leaf_name_data.push_back(subscribe_count.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-count")
    {
        connect_count = value;
    }
    if(value_path == "connect-timestamp")
    {
        connect_timestamp = value;
    }
    if(value_path == "filter-disp")
    {
        filter_disp = value;
    }
    if(value_path == "filter-group")
    {
        filter_group = value;
    }
    if(value_path == "filter-severity")
    {
        filter_severity = value;
    }
    if(value_path == "filter-state")
    {
        filter_state = value;
    }
    if(value_path == "get-count")
    {
        get_count = value;
    }
    if(value_path == "handle")
    {
        handle = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "report-count")
    {
        report_count = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscribe-count")
    {
        subscribe_count = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Alarms::Brief::Brief()
    :
    brief_card(std::make_shared<Alarms::Brief::BriefCard>())
	,brief_system(std::make_shared<Alarms::Brief::BriefSystem>())
{
    brief_card->parent = this;

    brief_system->parent = this;

    yang_name = "brief"; yang_parent_name = "alarms";
}

Alarms::Brief::~Brief()
{
}

bool Alarms::Brief::has_data() const
{
    return (brief_card !=  nullptr && brief_card->has_data())
	|| (brief_system !=  nullptr && brief_system->has_data());
}

bool Alarms::Brief::has_operation() const
{
    return is_set(operation)
	|| (brief_card !=  nullptr && brief_card->has_operation())
	|| (brief_system !=  nullptr && brief_system->has_operation());
}

std::string Alarms::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-card")
    {
        if(brief_card == nullptr)
        {
            brief_card = std::make_shared<Alarms::Brief::BriefCard>();
        }
        return brief_card;
    }

    if(child_yang_name == "brief-system")
    {
        if(brief_system == nullptr)
        {
            brief_system = std::make_shared<Alarms::Brief::BriefSystem>();
        }
        return brief_system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief_card != nullptr)
    {
        children["brief-card"] = brief_card;
    }

    if(brief_system != nullptr)
    {
        children["brief-system"] = brief_system;
    }

    return children;
}

void Alarms::Brief::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Brief::BriefCard::BriefCard()
    :
    brief_locations(std::make_shared<Alarms::Brief::BriefCard::BriefLocations>())
{
    brief_locations->parent = this;

    yang_name = "brief-card"; yang_parent_name = "brief";
}

Alarms::Brief::BriefCard::~BriefCard()
{
}

bool Alarms::Brief::BriefCard::has_data() const
{
    return (brief_locations !=  nullptr && brief_locations->has_data());
}

bool Alarms::Brief::BriefCard::has_operation() const
{
    return is_set(operation)
	|| (brief_locations !=  nullptr && brief_locations->has_operation());
}

std::string Alarms::Brief::BriefCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-card";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefCard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-locations")
    {
        if(brief_locations == nullptr)
        {
            brief_locations = std::make_shared<Alarms::Brief::BriefCard::BriefLocations>();
        }
        return brief_locations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief_locations != nullptr)
    {
        children["brief-locations"] = brief_locations;
    }

    return children;
}

void Alarms::Brief::BriefCard::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocations()
{
    yang_name = "brief-locations"; yang_parent_name = "brief-card";
}

Alarms::Brief::BriefCard::BriefLocations::~BriefLocations()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::has_data() const
{
    for (std::size_t index=0; index<brief_location.size(); index++)
    {
        if(brief_location[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefCard::BriefLocations::has_operation() const
{
    for (std::size_t index=0; index<brief_location.size(); index++)
    {
        if(brief_location[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Brief::BriefCard::BriefLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-locations";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefCard::BriefLocations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-card/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-location")
    {
        for(auto const & c : brief_location)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation>();
        c->parent = this;
        brief_location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : brief_location)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::BriefLocation()
    :
    node_id{YType::str, "node-id"}
    	,
    active(std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active>())
	,history(std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History>())
	,suppressed(std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed>())
{
    active->parent = this;

    history->parent = this;

    suppressed->parent = this;

    yang_name = "brief-location"; yang_parent_name = "brief-locations";
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::~BriefLocation()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::has_data() const
{
    return node_id.is_set
	|| (active !=  nullptr && active->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (suppressed !=  nullptr && suppressed->has_data());
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (active !=  nullptr && active->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (suppressed !=  nullptr && suppressed->has_operation());
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-location" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefCard::BriefLocations::BriefLocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-card/brief-locations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active>();
        }
        return active;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History>();
        }
        return history;
    }

    if(child_yang_name == "suppressed")
    {
        if(suppressed == nullptr)
        {
            suppressed = std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed>();
        }
        return suppressed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(suppressed != nullptr)
    {
        children["suppressed"] = suppressed;
    }

    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::Active()
{
    yang_name = "active"; yang_parent_name = "brief-location";
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::~Active()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::has_data() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Active' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        for(auto const & c : alarm_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo>();
        c->parent = this;
        alarm_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::AlarmInfo()
    :
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    description{YType::str, "description"},
    group{YType::enumeration, "group"},
    location{YType::str, "location"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "alarm-info"; yang_parent_name = "active";
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::has_data() const
{
    return clear_time.is_set
	|| clear_timestamp.is_set
	|| description.is_set
	|| group.is_set
	|| location.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| severity.is_set;
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(clear_time.operation)
	|| is_set(clear_timestamp.operation)
	|| is_set(description.operation)
	|| is_set(group.operation)
	|| is_set(location.operation)
	|| is_set(set_time.operation)
	|| is_set(set_timestamp.operation)
	|| is_set(severity.operation);
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AlarmInfo' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_time.is_set || is_set(clear_time.operation)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.operation)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.operation)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.operation)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear-time")
    {
        clear_time = value;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "set-time")
    {
        set_time = value;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::History()
{
    yang_name = "history"; yang_parent_name = "brief-location";
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::~History()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::has_data() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'History' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        for(auto const & c : alarm_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo>();
        c->parent = this;
        alarm_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::AlarmInfo()
    :
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    description{YType::str, "description"},
    group{YType::enumeration, "group"},
    location{YType::str, "location"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "alarm-info"; yang_parent_name = "history";
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::has_data() const
{
    return clear_time.is_set
	|| clear_timestamp.is_set
	|| description.is_set
	|| group.is_set
	|| location.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| severity.is_set;
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(clear_time.operation)
	|| is_set(clear_timestamp.operation)
	|| is_set(description.operation)
	|| is_set(group.operation)
	|| is_set(location.operation)
	|| is_set(set_time.operation)
	|| is_set(set_timestamp.operation)
	|| is_set(severity.operation);
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AlarmInfo' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_time.is_set || is_set(clear_time.operation)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.operation)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.operation)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.operation)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear-time")
    {
        clear_time = value;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "set-time")
    {
        set_time = value;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::Suppressed()
{
    yang_name = "suppressed"; yang_parent_name = "brief-location";
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::~Suppressed()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::has_data() const
{
    for (std::size_t index=0; index<suppressed_info.size(); index++)
    {
        if(suppressed_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::has_operation() const
{
    for (std::size_t index=0; index<suppressed_info.size(); index++)
    {
        if(suppressed_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Suppressed' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppressed-info")
    {
        for(auto const & c : suppressed_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo>();
        c->parent = this;
        suppressed_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : suppressed_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::SuppressedInfo()
    :
    description{YType::str, "description"},
    group{YType::enumeration, "group"},
    location{YType::str, "location"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    severity{YType::enumeration, "severity"},
    suppressed_time{YType::str, "suppressed-time"},
    suppressed_timestamp{YType::uint64, "suppressed-timestamp"}
{
    yang_name = "suppressed-info"; yang_parent_name = "suppressed";
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::~SuppressedInfo()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::has_data() const
{
    return description.is_set
	|| group.is_set
	|| location.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| severity.is_set
	|| suppressed_time.is_set
	|| suppressed_timestamp.is_set;
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(group.operation)
	|| is_set(location.operation)
	|| is_set(set_time.operation)
	|| is_set(set_timestamp.operation)
	|| is_set(severity.operation)
	|| is_set(suppressed_time.operation)
	|| is_set(suppressed_timestamp.operation);
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed-info";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SuppressedInfo' in Cisco_IOS_XR_alarmgr_server_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.operation)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.operation)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.operation)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());
    if (suppressed_timestamp.is_set || is_set(suppressed_timestamp.operation)) leaf_name_data.push_back(suppressed_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "set-time")
    {
        set_time = value;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "suppressed-time")
    {
        suppressed_time = value;
    }
    if(value_path == "suppressed-timestamp")
    {
        suppressed_timestamp = value;
    }
}

Alarms::Brief::BriefSystem::BriefSystem()
    :
    active(std::make_shared<Alarms::Brief::BriefSystem::Active>())
	,history(std::make_shared<Alarms::Brief::BriefSystem::History>())
	,suppressed(std::make_shared<Alarms::Brief::BriefSystem::Suppressed>())
{
    active->parent = this;

    history->parent = this;

    suppressed->parent = this;

    yang_name = "brief-system"; yang_parent_name = "brief";
}

Alarms::Brief::BriefSystem::~BriefSystem()
{
}

bool Alarms::Brief::BriefSystem::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (suppressed !=  nullptr && suppressed->has_data());
}

bool Alarms::Brief::BriefSystem::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (suppressed !=  nullptr && suppressed->has_operation());
}

std::string Alarms::Brief::BriefSystem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-system";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefSystem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Alarms::Brief::BriefSystem::Active>();
        }
        return active;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Alarms::Brief::BriefSystem::History>();
        }
        return history;
    }

    if(child_yang_name == "suppressed")
    {
        if(suppressed == nullptr)
        {
            suppressed = std::make_shared<Alarms::Brief::BriefSystem::Suppressed>();
        }
        return suppressed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(suppressed != nullptr)
    {
        children["suppressed"] = suppressed;
    }

    return children;
}

void Alarms::Brief::BriefSystem::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Brief::BriefSystem::Active::Active()
{
    yang_name = "active"; yang_parent_name = "brief-system";
}

Alarms::Brief::BriefSystem::Active::~Active()
{
}

bool Alarms::Brief::BriefSystem::Active::has_data() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefSystem::Active::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Brief::BriefSystem::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefSystem::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        for(auto const & c : alarm_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Brief::BriefSystem::Active::AlarmInfo>();
        c->parent = this;
        alarm_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Brief::BriefSystem::Active::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Brief::BriefSystem::Active::AlarmInfo::AlarmInfo()
    :
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    description{YType::str, "description"},
    group{YType::enumeration, "group"},
    location{YType::str, "location"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "alarm-info"; yang_parent_name = "active";
}

Alarms::Brief::BriefSystem::Active::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Brief::BriefSystem::Active::AlarmInfo::has_data() const
{
    return clear_time.is_set
	|| clear_timestamp.is_set
	|| description.is_set
	|| group.is_set
	|| location.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| severity.is_set;
}

bool Alarms::Brief::BriefSystem::Active::AlarmInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(clear_time.operation)
	|| is_set(clear_timestamp.operation)
	|| is_set(description.operation)
	|| is_set(group.operation)
	|| is_set(location.operation)
	|| is_set(set_time.operation)
	|| is_set(set_timestamp.operation)
	|| is_set(severity.operation);
}

std::string Alarms::Brief::BriefSystem::Active::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefSystem::Active::AlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-system/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_time.is_set || is_set(clear_time.operation)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.operation)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.operation)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.operation)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::Active::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::Active::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Brief::BriefSystem::Active::AlarmInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear-time")
    {
        clear_time = value;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "set-time")
    {
        set_time = value;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Alarms::Brief::BriefSystem::History::History()
{
    yang_name = "history"; yang_parent_name = "brief-system";
}

Alarms::Brief::BriefSystem::History::~History()
{
}

bool Alarms::Brief::BriefSystem::History::has_data() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefSystem::History::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.size(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Brief::BriefSystem::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefSystem::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        for(auto const & c : alarm_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Brief::BriefSystem::History::AlarmInfo>();
        c->parent = this;
        alarm_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alarm_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Brief::BriefSystem::History::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Brief::BriefSystem::History::AlarmInfo::AlarmInfo()
    :
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    description{YType::str, "description"},
    group{YType::enumeration, "group"},
    location{YType::str, "location"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "alarm-info"; yang_parent_name = "history";
}

Alarms::Brief::BriefSystem::History::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Brief::BriefSystem::History::AlarmInfo::has_data() const
{
    return clear_time.is_set
	|| clear_timestamp.is_set
	|| description.is_set
	|| group.is_set
	|| location.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| severity.is_set;
}

bool Alarms::Brief::BriefSystem::History::AlarmInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(clear_time.operation)
	|| is_set(clear_timestamp.operation)
	|| is_set(description.operation)
	|| is_set(group.operation)
	|| is_set(location.operation)
	|| is_set(set_time.operation)
	|| is_set(set_timestamp.operation)
	|| is_set(severity.operation);
}

std::string Alarms::Brief::BriefSystem::History::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefSystem::History::AlarmInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-system/history/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear_time.is_set || is_set(clear_time.operation)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.operation)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.operation)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.operation)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::History::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::History::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Brief::BriefSystem::History::AlarmInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear-time")
    {
        clear_time = value;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "set-time")
    {
        set_time = value;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Alarms::Brief::BriefSystem::Suppressed::Suppressed()
{
    yang_name = "suppressed"; yang_parent_name = "brief-system";
}

Alarms::Brief::BriefSystem::Suppressed::~Suppressed()
{
}

bool Alarms::Brief::BriefSystem::Suppressed::has_data() const
{
    for (std::size_t index=0; index<suppressed_info.size(); index++)
    {
        if(suppressed_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefSystem::Suppressed::has_operation() const
{
    for (std::size_t index=0; index<suppressed_info.size(); index++)
    {
        if(suppressed_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Alarms::Brief::BriefSystem::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefSystem::Suppressed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppressed-info")
    {
        for(auto const & c : suppressed_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo>();
        c->parent = this;
        suppressed_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : suppressed_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Alarms::Brief::BriefSystem::Suppressed::set_value(const std::string & value_path, std::string value)
{
}

Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::SuppressedInfo()
    :
    description{YType::str, "description"},
    group{YType::enumeration, "group"},
    location{YType::str, "location"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    severity{YType::enumeration, "severity"},
    suppressed_time{YType::str, "suppressed-time"},
    suppressed_timestamp{YType::uint64, "suppressed-timestamp"}
{
    yang_name = "suppressed-info"; yang_parent_name = "suppressed";
}

Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::~SuppressedInfo()
{
}

bool Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::has_data() const
{
    return description.is_set
	|| group.is_set
	|| location.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| severity.is_set
	|| suppressed_time.is_set
	|| suppressed_timestamp.is_set;
}

bool Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(group.operation)
	|| is_set(location.operation)
	|| is_set(set_time.operation)
	|| is_set(set_timestamp.operation)
	|| is_set(severity.operation)
	|| is_set(suppressed_time.operation)
	|| is_set(suppressed_timestamp.operation);
}

std::string Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed-info";

    return path_buffer.str();

}

const EntityPath Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-system/suppressed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.operation)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.operation)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.operation)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());
    if (suppressed_timestamp.is_set || is_set(suppressed_timestamp.operation)) leaf_name_data.push_back(suppressed_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "set-time")
    {
        set_time = value;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "suppressed-time")
    {
        suppressed_time = value;
    }
    if(value_path == "suppressed-timestamp")
    {
        suppressed_timestamp = value;
    }
}

const Enum::YLeaf TimingBucketEnum::not_specified {0, "not-specified"};
const Enum::YLeaf TimingBucketEnum::fifteen_min {1, "fifteen-min"};
const Enum::YLeaf TimingBucketEnum::one_day {2, "one-day"};

const Enum::YLeaf AlarmSeverityEnum::unknown {0, "unknown"};
const Enum::YLeaf AlarmSeverityEnum::not_reported {1, "not-reported"};
const Enum::YLeaf AlarmSeverityEnum::not_alarmed {2, "not-alarmed"};
const Enum::YLeaf AlarmSeverityEnum::minor {3, "minor"};
const Enum::YLeaf AlarmSeverityEnum::major {4, "major"};
const Enum::YLeaf AlarmSeverityEnum::critical {5, "critical"};
const Enum::YLeaf AlarmSeverityEnum::severity_last {6, "severity-last"};

const Enum::YLeaf AlarmDirectionEnum::not_specified {0, "not-specified"};
const Enum::YLeaf AlarmDirectionEnum::send {1, "send"};
const Enum::YLeaf AlarmDirectionEnum::receive {2, "receive"};
const Enum::YLeaf AlarmDirectionEnum::send_receive {3, "send-receive"};

const Enum::YLeaf AlarmStatusEnum::unknown {0, "unknown"};
const Enum::YLeaf AlarmStatusEnum::set {1, "set"};
const Enum::YLeaf AlarmStatusEnum::clear {2, "clear"};
const Enum::YLeaf AlarmStatusEnum::suppress {3, "suppress"};
const Enum::YLeaf AlarmStatusEnum::last {4, "last"};

const Enum::YLeaf AlarmServiceAffectingEnum::unknown {0, "unknown"};
const Enum::YLeaf AlarmServiceAffectingEnum::not_service_affecting {1, "not-service-affecting"};
const Enum::YLeaf AlarmServiceAffectingEnum::service_affecting {2, "service-affecting"};

const Enum::YLeaf AlarmNotificationSrcEnum::not_specified {0, "not-specified"};
const Enum::YLeaf AlarmNotificationSrcEnum::near_end {1, "near-end"};
const Enum::YLeaf AlarmNotificationSrcEnum::far_end {2, "far-end"};

const Enum::YLeaf AlarmEventEnum::default_ {0, "default"};
const Enum::YLeaf AlarmEventEnum::notification {1, "notification"};
const Enum::YLeaf AlarmEventEnum::last {2, "last"};

const Enum::YLeaf AlarmClientEnum::unknown {1, "unknown"};
const Enum::YLeaf AlarmClientEnum::producer {2, "producer"};
const Enum::YLeaf AlarmClientEnum::consumer {4, "consumer"};
const Enum::YLeaf AlarmClientEnum::subscriber {8, "subscriber"};
const Enum::YLeaf AlarmClientEnum::client_last {16, "client-last"};

const Enum::YLeaf AlarmClientStateEnum::start {0, "start"};
const Enum::YLeaf AlarmClientStateEnum::init {1, "init"};
const Enum::YLeaf AlarmClientStateEnum::connecting {2, "connecting"};
const Enum::YLeaf AlarmClientStateEnum::connected {3, "connected"};
const Enum::YLeaf AlarmClientStateEnum::registered {4, "registered"};
const Enum::YLeaf AlarmClientStateEnum::disconnected {5, "disconnected"};
const Enum::YLeaf AlarmClientStateEnum::ready {6, "ready"};

const Enum::YLeaf AlarmGroupsEnum::unknown {0, "unknown"};
const Enum::YLeaf AlarmGroupsEnum::environ {1, "environ"};
const Enum::YLeaf AlarmGroupsEnum::ethernet {2, "ethernet"};
const Enum::YLeaf AlarmGroupsEnum::fabric {3, "fabric"};
const Enum::YLeaf AlarmGroupsEnum::power {4, "power"};
const Enum::YLeaf AlarmGroupsEnum::software {5, "software"};
const Enum::YLeaf AlarmGroupsEnum::slice {6, "slice"};
const Enum::YLeaf AlarmGroupsEnum::cpu {7, "cpu"};
const Enum::YLeaf AlarmGroupsEnum::controller {8, "controller"};
const Enum::YLeaf AlarmGroupsEnum::sonet {9, "sonet"};
const Enum::YLeaf AlarmGroupsEnum::otn {10, "otn"};
const Enum::YLeaf AlarmGroupsEnum::sdh_controller {11, "sdh-controller"};
const Enum::YLeaf AlarmGroupsEnum::asic {12, "asic"};
const Enum::YLeaf AlarmGroupsEnum::fpd_infra {13, "fpd-infra"};
const Enum::YLeaf AlarmGroupsEnum::shelf {14, "shelf"};
const Enum::YLeaf AlarmGroupsEnum::mpa {15, "mpa"};
const Enum::YLeaf AlarmGroupsEnum::ots {16, "ots"};
const Enum::YLeaf AlarmGroupsEnum::last {17, "last"};


}
}

