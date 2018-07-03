
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_alarmgr_server_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_alarmgr_server_oper {

Alarms::Alarms()
    :
    detail(std::make_shared<Alarms::Detail>())
    , brief(std::make_shared<Alarms::Brief>())
{
    detail->parent = this;
    brief->parent = this;

    yang_name = "alarms"; yang_parent_name = "Cisco-IOS-XR-alarmgr-server-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Alarms::~Alarms()
{
}

bool Alarms::has_data() const
{
    if (is_presence_container) return true;
    return (detail !=  nullptr && detail->has_data())
	|| (brief !=  nullptr && brief->has_data());
}

bool Alarms::has_operation() const
{
    return is_set(yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (brief !=  nullptr && brief->has_operation());
}

std::string Alarms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Alarms::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Alarms::Brief>();
        }
        return brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    return children;
}

void Alarms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> Alarms::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Alarms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "brief")
        return true;
    return false;
}

Alarms::Detail::Detail()
    :
    detail_system(std::make_shared<Alarms::Detail::DetailSystem>())
    , detail_card(std::make_shared<Alarms::Detail::DetailCard>())
{
    detail_system->parent = this;
    detail_card->parent = this;

    yang_name = "detail"; yang_parent_name = "alarms"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::~Detail()
{
}

bool Alarms::Detail::has_data() const
{
    if (is_presence_container) return true;
    return (detail_system !=  nullptr && detail_system->has_data())
	|| (detail_card !=  nullptr && detail_card->has_data());
}

bool Alarms::Detail::has_operation() const
{
    return is_set(yfilter)
	|| (detail_system !=  nullptr && detail_system->has_operation())
	|| (detail_card !=  nullptr && detail_card->has_operation());
}

std::string Alarms::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-system")
    {
        if(detail_system == nullptr)
        {
            detail_system = std::make_shared<Alarms::Detail::DetailSystem>();
        }
        return detail_system;
    }

    if(child_yang_name == "detail-card")
    {
        if(detail_card == nullptr)
        {
            detail_card = std::make_shared<Alarms::Detail::DetailCard>();
        }
        return detail_card;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detail_system != nullptr)
    {
        children["detail-system"] = detail_system;
    }

    if(detail_card != nullptr)
    {
        children["detail-card"] = detail_card;
    }

    return children;
}

void Alarms::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-system" || name == "detail-card")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::DetailSystem()
    :
    active(std::make_shared<Alarms::Detail::DetailSystem::Active>())
    , history(std::make_shared<Alarms::Detail::DetailSystem::History>())
    , suppressed(std::make_shared<Alarms::Detail::DetailSystem::Suppressed>())
    , stats(std::make_shared<Alarms::Detail::DetailSystem::Stats>())
    , clients(std::make_shared<Alarms::Detail::DetailSystem::Clients>())
{
    active->parent = this;
    history->parent = this;
    suppressed->parent = this;
    stats->parent = this;
    clients->parent = this;

    yang_name = "detail-system"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::~DetailSystem()
{
}

bool Alarms::Detail::DetailSystem::has_data() const
{
    if (is_presence_container) return true;
    return (active !=  nullptr && active->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (suppressed !=  nullptr && suppressed->has_data())
	|| (stats !=  nullptr && stats->has_data())
	|| (clients !=  nullptr && clients->has_data());
}

bool Alarms::Detail::DetailSystem::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (suppressed !=  nullptr && suppressed->has_operation())
	|| (stats !=  nullptr && stats->has_operation())
	|| (clients !=  nullptr && clients->has_operation());
}

std::string Alarms::Detail::DetailSystem::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Alarms::Detail::DetailSystem::History>();
        }
        return history;
    }

    if(child_yang_name == "suppressed")
    {
        if(suppressed == nullptr)
        {
            suppressed = std::make_shared<Alarms::Detail::DetailSystem::Suppressed>();
        }
        return suppressed;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Alarms::Detail::DetailSystem::Stats>();
        }
        return stats;
    }

    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Alarms::Detail::DetailSystem::Clients>();
        }
        return clients;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    return children;
}

void Alarms::Detail::DetailSystem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Detail::DetailSystem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Detail::DetailSystem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "history" || name == "suppressed" || name == "stats" || name == "clients")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::Active::Active()
    :
    alarm_info(this, {})
{

    yang_name = "active"; yang_parent_name = "detail-system"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::Active::~Active()
{
}

bool Alarms::Detail::DetailSystem::Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailSystem::Active::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Detail::DetailSystem::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        auto c = std::make_shared<Alarms::Detail::DetailSystem::Active::AlarmInfo>();
        c->parent = this;
        alarm_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alarm_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Detail::DetailSystem::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Detail::DetailSystem::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Detail::DetailSystem::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-info")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::Active::AlarmInfo::AlarmInfo()
    :
    description{YType::str, "description"},
    location{YType::str, "location"},
    aid{YType::str, "aid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    eid{YType::str, "eid"},
    reporting_agent_id{YType::uint32, "reporting-agent-id"},
    pending_sync{YType::boolean, "pending-sync"},
    severity{YType::enumeration, "severity"},
    status{YType::enumeration, "status"},
    group{YType::enumeration, "group"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    service_affecting{YType::enumeration, "service-affecting"},
    type{YType::enumeration, "type"},
    interface{YType::str, "interface"},
    alarm_name{YType::str, "alarm-name"}
        ,
    otn(std::make_shared<Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn>())
    , tca(std::make_shared<Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca>())
{
    otn->parent = this;
    tca->parent = this;

    yang_name = "alarm-info"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::Active::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| location.is_set
	|| aid.is_set
	|| tag.is_set
	|| module.is_set
	|| eid.is_set
	|| reporting_agent_id.is_set
	|| pending_sync.is_set
	|| severity.is_set
	|| status.is_set
	|| group.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| clear_time.is_set
	|| clear_timestamp.is_set
	|| service_affecting.is_set
	|| type.is_set
	|| interface.is_set
	|| alarm_name.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (tca !=  nullptr && tca->has_data());
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(pending_sync.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(set_timestamp.yfilter)
	|| ydk::is_set(clear_time.yfilter)
	|| ydk::is_set(clear_timestamp.yfilter)
	|| ydk::is_set(service_affecting.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(alarm_name.yfilter)
	|| (otn !=  nullptr && otn->has_operation())
	|| (tca !=  nullptr && tca->has_operation());
}

std::string Alarms::Detail::DetailSystem::Active::AlarmInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::Active::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::Active::AlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (pending_sync.is_set || is_set(pending_sync.yfilter)) leaf_name_data.push_back(pending_sync.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.yfilter)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.yfilter)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (service_affecting.is_set || is_set(service_affecting.yfilter)) leaf_name_data.push_back(service_affecting.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.yfilter)) leaf_name_data.push_back(alarm_name.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
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

void Alarms::Detail::DetailSystem::Active::AlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sync")
    {
        pending_sync = value;
        pending_sync.value_namespace = name_space;
        pending_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
        set_timestamp.value_namespace = name_space;
        set_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
        clear_timestamp.value_namespace = name_space;
        clear_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-affecting")
    {
        service_affecting = value;
        service_affecting.value_namespace = name_space;
        service_affecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
        alarm_name.value_namespace = name_space;
        alarm_name.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailSystem::Active::AlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "pending-sync")
    {
        pending_sync.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "set-time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp.yfilter = yfilter;
    }
    if(value_path == "clear-time")
    {
        clear_time.yfilter = yfilter;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp.yfilter = yfilter;
    }
    if(value_path == "service-affecting")
    {
        service_affecting.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "alarm-name")
    {
        alarm_name.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn" || name == "tca" || name == "description" || name == "location" || name == "aid" || name == "tag" || name == "module" || name == "eid" || name == "reporting-agent-id" || name == "pending-sync" || name == "severity" || name == "status" || name == "group" || name == "set-time" || name == "set-timestamp" || name == "clear-time" || name == "clear-timestamp" || name == "service-affecting" || name == "type" || name == "interface" || name == "alarm-name")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::Otn()
    :
    direction{YType::enumeration, "direction"},
    notification_source{YType::enumeration, "notification-source"}
{

    yang_name = "otn"; yang_parent_name = "alarm-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::~Otn()
{
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| notification_source.is_set;
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(notification_source.yfilter);
}

std::string Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/active/alarm-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (notification_source.is_set || is_set(notification_source.yfilter)) leaf_name_data.push_back(notification_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-source")
    {
        notification_source = value;
        notification_source.value_namespace = name_space;
        notification_source.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "notification-source")
    {
        notification_source.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "notification-source")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::Tca()
    :
    threshold_value{YType::str, "threshold-value"},
    current_value{YType::str, "current-value"},
    bucket_type{YType::enumeration, "bucket-type"}
{

    yang_name = "tca"; yang_parent_name = "alarm-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::~Tca()
{
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::has_data() const
{
    if (is_presence_container) return true;
    return threshold_value.is_set
	|| current_value.is_set
	|| bucket_type.is_set;
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(current_value.yfilter)
	|| ydk::is_set(bucket_type.yfilter);
}

std::string Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/active/alarm-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (current_value.is_set || is_set(current_value.yfilter)) leaf_name_data.push_back(current_value.get_name_leafdata());
    if (bucket_type.is_set || is_set(bucket_type.yfilter)) leaf_name_data.push_back(bucket_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-value")
    {
        current_value = value;
        current_value.value_namespace = name_space;
        current_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-type")
    {
        bucket_type = value;
        bucket_type.value_namespace = name_space;
        bucket_type.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "current-value")
    {
        current_value.yfilter = yfilter;
    }
    if(value_path == "bucket-type")
    {
        bucket_type.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailSystem::Active::AlarmInfo::Tca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-value" || name == "current-value" || name == "bucket-type")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::History::History()
    :
    alarm_info(this, {})
{

    yang_name = "history"; yang_parent_name = "detail-system"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::History::~History()
{
}

bool Alarms::Detail::DetailSystem::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailSystem::History::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Detail::DetailSystem::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        auto c = std::make_shared<Alarms::Detail::DetailSystem::History::AlarmInfo>();
        c->parent = this;
        alarm_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alarm_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Detail::DetailSystem::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Detail::DetailSystem::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Detail::DetailSystem::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-info")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::History::AlarmInfo::AlarmInfo()
    :
    description{YType::str, "description"},
    location{YType::str, "location"},
    aid{YType::str, "aid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    eid{YType::str, "eid"},
    reporting_agent_id{YType::uint32, "reporting-agent-id"},
    pending_sync{YType::boolean, "pending-sync"},
    severity{YType::enumeration, "severity"},
    status{YType::enumeration, "status"},
    group{YType::enumeration, "group"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    service_affecting{YType::enumeration, "service-affecting"},
    type{YType::enumeration, "type"},
    interface{YType::str, "interface"},
    alarm_name{YType::str, "alarm-name"}
        ,
    otn(std::make_shared<Alarms::Detail::DetailSystem::History::AlarmInfo::Otn>())
    , tca(std::make_shared<Alarms::Detail::DetailSystem::History::AlarmInfo::Tca>())
{
    otn->parent = this;
    tca->parent = this;

    yang_name = "alarm-info"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::History::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| location.is_set
	|| aid.is_set
	|| tag.is_set
	|| module.is_set
	|| eid.is_set
	|| reporting_agent_id.is_set
	|| pending_sync.is_set
	|| severity.is_set
	|| status.is_set
	|| group.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| clear_time.is_set
	|| clear_timestamp.is_set
	|| service_affecting.is_set
	|| type.is_set
	|| interface.is_set
	|| alarm_name.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (tca !=  nullptr && tca->has_data());
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(pending_sync.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(set_timestamp.yfilter)
	|| ydk::is_set(clear_time.yfilter)
	|| ydk::is_set(clear_timestamp.yfilter)
	|| ydk::is_set(service_affecting.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(alarm_name.yfilter)
	|| (otn !=  nullptr && otn->has_operation())
	|| (tca !=  nullptr && tca->has_operation());
}

std::string Alarms::Detail::DetailSystem::History::AlarmInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/history/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::History::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::History::AlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (pending_sync.is_set || is_set(pending_sync.yfilter)) leaf_name_data.push_back(pending_sync.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.yfilter)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.yfilter)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (service_affecting.is_set || is_set(service_affecting.yfilter)) leaf_name_data.push_back(service_affecting.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.yfilter)) leaf_name_data.push_back(alarm_name.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
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

void Alarms::Detail::DetailSystem::History::AlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sync")
    {
        pending_sync = value;
        pending_sync.value_namespace = name_space;
        pending_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
        set_timestamp.value_namespace = name_space;
        set_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
        clear_timestamp.value_namespace = name_space;
        clear_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-affecting")
    {
        service_affecting = value;
        service_affecting.value_namespace = name_space;
        service_affecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
        alarm_name.value_namespace = name_space;
        alarm_name.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailSystem::History::AlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "pending-sync")
    {
        pending_sync.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "set-time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp.yfilter = yfilter;
    }
    if(value_path == "clear-time")
    {
        clear_time.yfilter = yfilter;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp.yfilter = yfilter;
    }
    if(value_path == "service-affecting")
    {
        service_affecting.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "alarm-name")
    {
        alarm_name.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn" || name == "tca" || name == "description" || name == "location" || name == "aid" || name == "tag" || name == "module" || name == "eid" || name == "reporting-agent-id" || name == "pending-sync" || name == "severity" || name == "status" || name == "group" || name == "set-time" || name == "set-timestamp" || name == "clear-time" || name == "clear-timestamp" || name == "service-affecting" || name == "type" || name == "interface" || name == "alarm-name")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::Otn()
    :
    direction{YType::enumeration, "direction"},
    notification_source{YType::enumeration, "notification-source"}
{

    yang_name = "otn"; yang_parent_name = "alarm-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::~Otn()
{
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| notification_source.is_set;
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(notification_source.yfilter);
}

std::string Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/history/alarm-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (notification_source.is_set || is_set(notification_source.yfilter)) leaf_name_data.push_back(notification_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-source")
    {
        notification_source = value;
        notification_source.value_namespace = name_space;
        notification_source.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "notification-source")
    {
        notification_source.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "notification-source")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::Tca()
    :
    threshold_value{YType::str, "threshold-value"},
    current_value{YType::str, "current-value"},
    bucket_type{YType::enumeration, "bucket-type"}
{

    yang_name = "tca"; yang_parent_name = "alarm-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::~Tca()
{
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::has_data() const
{
    if (is_presence_container) return true;
    return threshold_value.is_set
	|| current_value.is_set
	|| bucket_type.is_set;
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(current_value.yfilter)
	|| ydk::is_set(bucket_type.yfilter);
}

std::string Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/history/alarm-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (current_value.is_set || is_set(current_value.yfilter)) leaf_name_data.push_back(current_value.get_name_leafdata());
    if (bucket_type.is_set || is_set(bucket_type.yfilter)) leaf_name_data.push_back(bucket_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-value")
    {
        current_value = value;
        current_value.value_namespace = name_space;
        current_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-type")
    {
        bucket_type = value;
        bucket_type.value_namespace = name_space;
        bucket_type.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "current-value")
    {
        current_value.yfilter = yfilter;
    }
    if(value_path == "bucket-type")
    {
        bucket_type.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailSystem::History::AlarmInfo::Tca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-value" || name == "current-value" || name == "bucket-type")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::Suppressed::Suppressed()
    :
    suppressed_info(this, {})
{

    yang_name = "suppressed"; yang_parent_name = "detail-system"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::Suppressed::~Suppressed()
{
}

bool Alarms::Detail::DetailSystem::Suppressed::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<suppressed_info.len(); index++)
    {
        if(suppressed_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailSystem::Suppressed::has_operation() const
{
    for (std::size_t index=0; index<suppressed_info.len(); index++)
    {
        if(suppressed_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Detail::DetailSystem::Suppressed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::Suppressed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppressed-info")
    {
        auto c = std::make_shared<Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo>();
        c->parent = this;
        suppressed_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : suppressed_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Detail::DetailSystem::Suppressed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Detail::DetailSystem::Suppressed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Detail::DetailSystem::Suppressed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppressed-info")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::SuppressedInfo()
    :
    description{YType::str, "description"},
    location{YType::str, "location"},
    aid{YType::str, "aid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    eid{YType::str, "eid"},
    reporting_agent_id{YType::uint32, "reporting-agent-id"},
    pending_sync{YType::boolean, "pending-sync"},
    severity{YType::enumeration, "severity"},
    status{YType::enumeration, "status"},
    group{YType::enumeration, "group"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    suppressed_time{YType::str, "suppressed-time"},
    suppressed_timestamp{YType::uint64, "suppressed-timestamp"},
    service_affecting{YType::enumeration, "service-affecting"},
    interface{YType::str, "interface"},
    alarm_name{YType::str, "alarm-name"}
        ,
    otn(std::make_shared<Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn>())
{
    otn->parent = this;

    yang_name = "suppressed-info"; yang_parent_name = "suppressed"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::~SuppressedInfo()
{
}

bool Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| location.is_set
	|| aid.is_set
	|| tag.is_set
	|| module.is_set
	|| eid.is_set
	|| reporting_agent_id.is_set
	|| pending_sync.is_set
	|| severity.is_set
	|| status.is_set
	|| group.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| suppressed_time.is_set
	|| suppressed_timestamp.is_set
	|| service_affecting.is_set
	|| interface.is_set
	|| alarm_name.is_set
	|| (otn !=  nullptr && otn->has_data());
}

bool Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(pending_sync.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(set_timestamp.yfilter)
	|| ydk::is_set(suppressed_time.yfilter)
	|| ydk::is_set(suppressed_timestamp.yfilter)
	|| ydk::is_set(service_affecting.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(alarm_name.yfilter)
	|| (otn !=  nullptr && otn->has_operation());
}

std::string Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/suppressed/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (pending_sync.is_set || is_set(pending_sync.yfilter)) leaf_name_data.push_back(pending_sync.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.yfilter)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.yfilter)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());
    if (suppressed_timestamp.is_set || is_set(suppressed_timestamp.yfilter)) leaf_name_data.push_back(suppressed_timestamp.get_name_leafdata());
    if (service_affecting.is_set || is_set(service_affecting.yfilter)) leaf_name_data.push_back(service_affecting.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.yfilter)) leaf_name_data.push_back(alarm_name.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    return children;
}

void Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sync")
    {
        pending_sync = value;
        pending_sync.value_namespace = name_space;
        pending_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
        set_timestamp.value_namespace = name_space;
        set_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed-time")
    {
        suppressed_time = value;
        suppressed_time.value_namespace = name_space;
        suppressed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed-timestamp")
    {
        suppressed_timestamp = value;
        suppressed_timestamp.value_namespace = name_space;
        suppressed_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-affecting")
    {
        service_affecting = value;
        service_affecting.value_namespace = name_space;
        service_affecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
        alarm_name.value_namespace = name_space;
        alarm_name.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "pending-sync")
    {
        pending_sync.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "set-time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp.yfilter = yfilter;
    }
    if(value_path == "suppressed-time")
    {
        suppressed_time.yfilter = yfilter;
    }
    if(value_path == "suppressed-timestamp")
    {
        suppressed_timestamp.yfilter = yfilter;
    }
    if(value_path == "service-affecting")
    {
        service_affecting.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "alarm-name")
    {
        alarm_name.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn" || name == "description" || name == "location" || name == "aid" || name == "tag" || name == "module" || name == "eid" || name == "reporting-agent-id" || name == "pending-sync" || name == "severity" || name == "status" || name == "group" || name == "set-time" || name == "set-timestamp" || name == "suppressed-time" || name == "suppressed-timestamp" || name == "service-affecting" || name == "interface" || name == "alarm-name")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::Otn()
    :
    direction{YType::enumeration, "direction"},
    notification_source{YType::enumeration, "notification-source"}
{

    yang_name = "otn"; yang_parent_name = "suppressed-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::~Otn()
{
}

bool Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| notification_source.is_set;
}

bool Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(notification_source.yfilter);
}

std::string Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/suppressed/suppressed-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (notification_source.is_set || is_set(notification_source.yfilter)) leaf_name_data.push_back(notification_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-source")
    {
        notification_source = value;
        notification_source.value_namespace = name_space;
        notification_source.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "notification-source")
    {
        notification_source.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailSystem::Suppressed::SuppressedInfo::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "notification-source")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::Stats::Stats()
    :
    reported{YType::uint64, "reported"},
    dropped{YType::uint64, "dropped"},
    active{YType::uint64, "active"},
    history{YType::uint64, "history"},
    suppressed{YType::uint64, "suppressed"},
    sysadmin_active{YType::uint64, "sysadmin-active"},
    sysadmin_history{YType::uint64, "sysadmin-history"},
    sysadmin_suppressed{YType::uint64, "sysadmin-suppressed"},
    dropped_invalid_aid{YType::uint32, "dropped-invalid-aid"},
    dropped_insuff_mem{YType::uint32, "dropped-insuff-mem"},
    dropped_db_error{YType::uint32, "dropped-db-error"},
    dropped_clear_without_set{YType::uint32, "dropped-clear-without-set"},
    dropped_duplicate{YType::uint32, "dropped-duplicate"},
    cache_hit{YType::uint32, "cache-hit"},
    cache_miss{YType::uint32, "cache-miss"}
{

    yang_name = "stats"; yang_parent_name = "detail-system"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::Stats::~Stats()
{
}

bool Alarms::Detail::DetailSystem::Stats::has_data() const
{
    if (is_presence_container) return true;
    return reported.is_set
	|| dropped.is_set
	|| active.is_set
	|| history.is_set
	|| suppressed.is_set
	|| sysadmin_active.is_set
	|| sysadmin_history.is_set
	|| sysadmin_suppressed.is_set
	|| dropped_invalid_aid.is_set
	|| dropped_insuff_mem.is_set
	|| dropped_db_error.is_set
	|| dropped_clear_without_set.is_set
	|| dropped_duplicate.is_set
	|| cache_hit.is_set
	|| cache_miss.is_set;
}

bool Alarms::Detail::DetailSystem::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reported.yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(suppressed.yfilter)
	|| ydk::is_set(sysadmin_active.yfilter)
	|| ydk::is_set(sysadmin_history.yfilter)
	|| ydk::is_set(sysadmin_suppressed.yfilter)
	|| ydk::is_set(dropped_invalid_aid.yfilter)
	|| ydk::is_set(dropped_insuff_mem.yfilter)
	|| ydk::is_set(dropped_db_error.yfilter)
	|| ydk::is_set(dropped_clear_without_set.yfilter)
	|| ydk::is_set(dropped_duplicate.yfilter)
	|| ydk::is_set(cache_hit.yfilter)
	|| ydk::is_set(cache_miss.yfilter);
}

std::string Alarms::Detail::DetailSystem::Stats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reported.is_set || is_set(reported.yfilter)) leaf_name_data.push_back(reported.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (suppressed.is_set || is_set(suppressed.yfilter)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (sysadmin_active.is_set || is_set(sysadmin_active.yfilter)) leaf_name_data.push_back(sysadmin_active.get_name_leafdata());
    if (sysadmin_history.is_set || is_set(sysadmin_history.yfilter)) leaf_name_data.push_back(sysadmin_history.get_name_leafdata());
    if (sysadmin_suppressed.is_set || is_set(sysadmin_suppressed.yfilter)) leaf_name_data.push_back(sysadmin_suppressed.get_name_leafdata());
    if (dropped_invalid_aid.is_set || is_set(dropped_invalid_aid.yfilter)) leaf_name_data.push_back(dropped_invalid_aid.get_name_leafdata());
    if (dropped_insuff_mem.is_set || is_set(dropped_insuff_mem.yfilter)) leaf_name_data.push_back(dropped_insuff_mem.get_name_leafdata());
    if (dropped_db_error.is_set || is_set(dropped_db_error.yfilter)) leaf_name_data.push_back(dropped_db_error.get_name_leafdata());
    if (dropped_clear_without_set.is_set || is_set(dropped_clear_without_set.yfilter)) leaf_name_data.push_back(dropped_clear_without_set.get_name_leafdata());
    if (dropped_duplicate.is_set || is_set(dropped_duplicate.yfilter)) leaf_name_data.push_back(dropped_duplicate.get_name_leafdata());
    if (cache_hit.is_set || is_set(cache_hit.yfilter)) leaf_name_data.push_back(cache_hit.get_name_leafdata());
    if (cache_miss.is_set || is_set(cache_miss.yfilter)) leaf_name_data.push_back(cache_miss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailSystem::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reported")
    {
        reported = value;
        reported.value_namespace = name_space;
        reported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed")
    {
        suppressed = value;
        suppressed.value_namespace = name_space;
        suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysadmin-active")
    {
        sysadmin_active = value;
        sysadmin_active.value_namespace = name_space;
        sysadmin_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysadmin-history")
    {
        sysadmin_history = value;
        sysadmin_history.value_namespace = name_space;
        sysadmin_history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysadmin-suppressed")
    {
        sysadmin_suppressed = value;
        sysadmin_suppressed.value_namespace = name_space;
        sysadmin_suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-invalid-aid")
    {
        dropped_invalid_aid = value;
        dropped_invalid_aid.value_namespace = name_space;
        dropped_invalid_aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-insuff-mem")
    {
        dropped_insuff_mem = value;
        dropped_insuff_mem.value_namespace = name_space;
        dropped_insuff_mem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-db-error")
    {
        dropped_db_error = value;
        dropped_db_error.value_namespace = name_space;
        dropped_db_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-clear-without-set")
    {
        dropped_clear_without_set = value;
        dropped_clear_without_set.value_namespace = name_space;
        dropped_clear_without_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-duplicate")
    {
        dropped_duplicate = value;
        dropped_duplicate.value_namespace = name_space;
        dropped_duplicate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-hit")
    {
        cache_hit = value;
        cache_hit.value_namespace = name_space;
        cache_hit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-miss")
    {
        cache_miss = value;
        cache_miss.value_namespace = name_space;
        cache_miss.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailSystem::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reported")
    {
        reported.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "suppressed")
    {
        suppressed.yfilter = yfilter;
    }
    if(value_path == "sysadmin-active")
    {
        sysadmin_active.yfilter = yfilter;
    }
    if(value_path == "sysadmin-history")
    {
        sysadmin_history.yfilter = yfilter;
    }
    if(value_path == "sysadmin-suppressed")
    {
        sysadmin_suppressed.yfilter = yfilter;
    }
    if(value_path == "dropped-invalid-aid")
    {
        dropped_invalid_aid.yfilter = yfilter;
    }
    if(value_path == "dropped-insuff-mem")
    {
        dropped_insuff_mem.yfilter = yfilter;
    }
    if(value_path == "dropped-db-error")
    {
        dropped_db_error.yfilter = yfilter;
    }
    if(value_path == "dropped-clear-without-set")
    {
        dropped_clear_without_set.yfilter = yfilter;
    }
    if(value_path == "dropped-duplicate")
    {
        dropped_duplicate.yfilter = yfilter;
    }
    if(value_path == "cache-hit")
    {
        cache_hit.yfilter = yfilter;
    }
    if(value_path == "cache-miss")
    {
        cache_miss.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailSystem::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reported" || name == "dropped" || name == "active" || name == "history" || name == "suppressed" || name == "sysadmin-active" || name == "sysadmin-history" || name == "sysadmin-suppressed" || name == "dropped-invalid-aid" || name == "dropped-insuff-mem" || name == "dropped-db-error" || name == "dropped-clear-without-set" || name == "dropped-duplicate" || name == "cache-hit" || name == "cache-miss")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::Clients::Clients()
    :
    client_info(this, {})
{

    yang_name = "clients"; yang_parent_name = "detail-system"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::Clients::~Clients()
{
}

bool Alarms::Detail::DetailSystem::Clients::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_info.len(); index++)
    {
        if(client_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailSystem::Clients::has_operation() const
{
    for (std::size_t index=0; index<client_info.len(); index++)
    {
        if(client_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Detail::DetailSystem::Clients::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-info")
    {
        auto c = std::make_shared<Alarms::Detail::DetailSystem::Clients::ClientInfo>();
        c->parent = this;
        client_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : client_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Detail::DetailSystem::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Detail::DetailSystem::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Detail::DetailSystem::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-info")
        return true;
    return false;
}

Alarms::Detail::DetailSystem::Clients::ClientInfo::ClientInfo()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    location{YType::str, "location"},
    handle{YType::str, "handle"},
    state{YType::enumeration, "state"},
    type{YType::enumeration, "type"},
    filter_disp{YType::boolean, "filter-disp"},
    subscriber_id{YType::uint32, "subscriber-id"},
    filter_severity{YType::enumeration, "filter-severity"},
    filter_state{YType::enumeration, "filter-state"},
    filter_group{YType::enumeration, "filter-group"},
    connect_count{YType::uint32, "connect-count"},
    connect_timestamp{YType::str, "connect-timestamp"},
    get_count{YType::uint32, "get-count"},
    subscribe_count{YType::uint32, "subscribe-count"},
    report_count{YType::uint32, "report-count"}
{

    yang_name = "client-info"; yang_parent_name = "clients"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailSystem::Clients::ClientInfo::~ClientInfo()
{
}

bool Alarms::Detail::DetailSystem::Clients::ClientInfo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set
	|| location.is_set
	|| handle.is_set
	|| state.is_set
	|| type.is_set
	|| filter_disp.is_set
	|| subscriber_id.is_set
	|| filter_severity.is_set
	|| filter_state.is_set
	|| filter_group.is_set
	|| connect_count.is_set
	|| connect_timestamp.is_set
	|| get_count.is_set
	|| subscribe_count.is_set
	|| report_count.is_set;
}

bool Alarms::Detail::DetailSystem::Clients::ClientInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(filter_disp.yfilter)
	|| ydk::is_set(subscriber_id.yfilter)
	|| ydk::is_set(filter_severity.yfilter)
	|| ydk::is_set(filter_state.yfilter)
	|| ydk::is_set(filter_group.yfilter)
	|| ydk::is_set(connect_count.yfilter)
	|| ydk::is_set(connect_timestamp.yfilter)
	|| ydk::is_set(get_count.yfilter)
	|| ydk::is_set(subscribe_count.yfilter)
	|| ydk::is_set(report_count.yfilter);
}

std::string Alarms::Detail::DetailSystem::Clients::ClientInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-system/clients/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailSystem::Clients::ClientInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailSystem::Clients::ClientInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (filter_disp.is_set || is_set(filter_disp.yfilter)) leaf_name_data.push_back(filter_disp.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (filter_severity.is_set || is_set(filter_severity.yfilter)) leaf_name_data.push_back(filter_severity.get_name_leafdata());
    if (filter_state.is_set || is_set(filter_state.yfilter)) leaf_name_data.push_back(filter_state.get_name_leafdata());
    if (filter_group.is_set || is_set(filter_group.yfilter)) leaf_name_data.push_back(filter_group.get_name_leafdata());
    if (connect_count.is_set || is_set(connect_count.yfilter)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (connect_timestamp.is_set || is_set(connect_timestamp.yfilter)) leaf_name_data.push_back(connect_timestamp.get_name_leafdata());
    if (get_count.is_set || is_set(get_count.yfilter)) leaf_name_data.push_back(get_count.get_name_leafdata());
    if (subscribe_count.is_set || is_set(subscribe_count.yfilter)) leaf_name_data.push_back(subscribe_count.get_name_leafdata());
    if (report_count.is_set || is_set(report_count.yfilter)) leaf_name_data.push_back(report_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailSystem::Clients::ClientInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailSystem::Clients::ClientInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailSystem::Clients::ClientInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-disp")
    {
        filter_disp = value;
        filter_disp.value_namespace = name_space;
        filter_disp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-severity")
    {
        filter_severity = value;
        filter_severity.value_namespace = name_space;
        filter_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-state")
    {
        filter_state = value;
        filter_state.value_namespace = name_space;
        filter_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-group")
    {
        filter_group = value;
        filter_group.value_namespace = name_space;
        filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-count")
    {
        connect_count = value;
        connect_count.value_namespace = name_space;
        connect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-timestamp")
    {
        connect_timestamp = value;
        connect_timestamp.value_namespace = name_space;
        connect_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-count")
    {
        get_count = value;
        get_count.value_namespace = name_space;
        get_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscribe-count")
    {
        subscribe_count = value;
        subscribe_count.value_namespace = name_space;
        subscribe_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-count")
    {
        report_count = value;
        report_count.value_namespace = name_space;
        report_count.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailSystem::Clients::ClientInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "filter-disp")
    {
        filter_disp.yfilter = yfilter;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
    if(value_path == "filter-severity")
    {
        filter_severity.yfilter = yfilter;
    }
    if(value_path == "filter-state")
    {
        filter_state.yfilter = yfilter;
    }
    if(value_path == "filter-group")
    {
        filter_group.yfilter = yfilter;
    }
    if(value_path == "connect-count")
    {
        connect_count.yfilter = yfilter;
    }
    if(value_path == "connect-timestamp")
    {
        connect_timestamp.yfilter = yfilter;
    }
    if(value_path == "get-count")
    {
        get_count.yfilter = yfilter;
    }
    if(value_path == "subscribe-count")
    {
        subscribe_count.yfilter = yfilter;
    }
    if(value_path == "report-count")
    {
        report_count.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailSystem::Clients::ClientInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id" || name == "location" || name == "handle" || name == "state" || name == "type" || name == "filter-disp" || name == "subscriber-id" || name == "filter-severity" || name == "filter-state" || name == "filter-group" || name == "connect-count" || name == "connect-timestamp" || name == "get-count" || name == "subscribe-count" || name == "report-count")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailCard()
    :
    detail_locations(std::make_shared<Alarms::Detail::DetailCard::DetailLocations>())
{
    detail_locations->parent = this;

    yang_name = "detail-card"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailCard::~DetailCard()
{
}

bool Alarms::Detail::DetailCard::has_data() const
{
    if (is_presence_container) return true;
    return (detail_locations !=  nullptr && detail_locations->has_data());
}

bool Alarms::Detail::DetailCard::has_operation() const
{
    return is_set(yfilter)
	|| (detail_locations !=  nullptr && detail_locations->has_operation());
}

std::string Alarms::Detail::DetailCard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
    if(detail_locations != nullptr)
    {
        children["detail-locations"] = detail_locations;
    }

    return children;
}

void Alarms::Detail::DetailCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Detail::DetailCard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Detail::DetailCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-locations")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocations()
    :
    detail_location(this, {"node_id"})
{

    yang_name = "detail-locations"; yang_parent_name = "detail-card"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailCard::DetailLocations::~DetailLocations()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detail_location.len(); index++)
    {
        if(detail_location[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailCard::DetailLocations::has_operation() const
{
    for (std::size_t index=0; index<detail_location.len(); index++)
    {
        if(detail_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Detail::DetailCard::DetailLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-card/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailCard::DetailLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-locations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-location")
    {
        auto c = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation>();
        c->parent = this;
        detail_location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : detail_location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Detail::DetailCard::DetailLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Detail::DetailCard::DetailLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-location")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::DetailLocation()
    :
    node_id{YType::str, "node-id"}
        ,
    active(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active>())
    , history(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History>())
    , suppressed(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed>())
    , stats(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats>())
    , clients(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients>())
{
    active->parent = this;
    history->parent = this;
    suppressed->parent = this;
    stats->parent = this;
    clients->parent = this;

    yang_name = "detail-location"; yang_parent_name = "detail-locations"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::~DetailLocation()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (active !=  nullptr && active->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (suppressed !=  nullptr && suppressed->has_data())
	|| (stats !=  nullptr && stats->has_data())
	|| (clients !=  nullptr && clients->has_data());
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (suppressed !=  nullptr && suppressed->has_operation())
	|| (stats !=  nullptr && stats->has_operation())
	|| (clients !=  nullptr && clients->has_operation());
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/detail/detail-card/detail-locations/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-location";
    ADD_KEY_TOKEN(node_id, "node-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

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

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History>();
        }
        return history;
    }

    if(child_yang_name == "suppressed")
    {
        if(suppressed == nullptr)
        {
            suppressed = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed>();
        }
        return suppressed;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats>();
        }
        return stats;
    }

    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients>();
        }
        return clients;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "history" || name == "suppressed" || name == "stats" || name == "clients" || name == "node-id")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::Active()
    :
    alarm_info(this, {})
{

    yang_name = "active"; yang_parent_name = "detail-location"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::~Active()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        auto c = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo>();
        c->parent = this;
        alarm_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alarm_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-info")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::AlarmInfo()
    :
    description{YType::str, "description"},
    location{YType::str, "location"},
    aid{YType::str, "aid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    eid{YType::str, "eid"},
    reporting_agent_id{YType::uint32, "reporting-agent-id"},
    pending_sync{YType::boolean, "pending-sync"},
    severity{YType::enumeration, "severity"},
    status{YType::enumeration, "status"},
    group{YType::enumeration, "group"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    service_affecting{YType::enumeration, "service-affecting"},
    type{YType::enumeration, "type"},
    interface{YType::str, "interface"},
    alarm_name{YType::str, "alarm-name"}
        ,
    otn(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn>())
    , tca(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca>())
{
    otn->parent = this;
    tca->parent = this;

    yang_name = "alarm-info"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| location.is_set
	|| aid.is_set
	|| tag.is_set
	|| module.is_set
	|| eid.is_set
	|| reporting_agent_id.is_set
	|| pending_sync.is_set
	|| severity.is_set
	|| status.is_set
	|| group.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| clear_time.is_set
	|| clear_timestamp.is_set
	|| service_affecting.is_set
	|| type.is_set
	|| interface.is_set
	|| alarm_name.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (tca !=  nullptr && tca->has_data());
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(pending_sync.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(set_timestamp.yfilter)
	|| ydk::is_set(clear_time.yfilter)
	|| ydk::is_set(clear_timestamp.yfilter)
	|| ydk::is_set(service_affecting.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(alarm_name.yfilter)
	|| (otn !=  nullptr && otn->has_operation())
	|| (tca !=  nullptr && tca->has_operation());
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (pending_sync.is_set || is_set(pending_sync.yfilter)) leaf_name_data.push_back(pending_sync.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.yfilter)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.yfilter)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (service_affecting.is_set || is_set(service_affecting.yfilter)) leaf_name_data.push_back(service_affecting.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.yfilter)) leaf_name_data.push_back(alarm_name.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
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

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sync")
    {
        pending_sync = value;
        pending_sync.value_namespace = name_space;
        pending_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
        set_timestamp.value_namespace = name_space;
        set_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
        clear_timestamp.value_namespace = name_space;
        clear_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-affecting")
    {
        service_affecting = value;
        service_affecting.value_namespace = name_space;
        service_affecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
        alarm_name.value_namespace = name_space;
        alarm_name.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "pending-sync")
    {
        pending_sync.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "set-time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp.yfilter = yfilter;
    }
    if(value_path == "clear-time")
    {
        clear_time.yfilter = yfilter;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp.yfilter = yfilter;
    }
    if(value_path == "service-affecting")
    {
        service_affecting.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "alarm-name")
    {
        alarm_name.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn" || name == "tca" || name == "description" || name == "location" || name == "aid" || name == "tag" || name == "module" || name == "eid" || name == "reporting-agent-id" || name == "pending-sync" || name == "severity" || name == "status" || name == "group" || name == "set-time" || name == "set-timestamp" || name == "clear-time" || name == "clear-timestamp" || name == "service-affecting" || name == "type" || name == "interface" || name == "alarm-name")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::Otn()
    :
    direction{YType::enumeration, "direction"},
    notification_source{YType::enumeration, "notification-source"}
{

    yang_name = "otn"; yang_parent_name = "alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::~Otn()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| notification_source.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(notification_source.yfilter);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (notification_source.is_set || is_set(notification_source.yfilter)) leaf_name_data.push_back(notification_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-source")
    {
        notification_source = value;
        notification_source.value_namespace = name_space;
        notification_source.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "notification-source")
    {
        notification_source.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "notification-source")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::Tca()
    :
    threshold_value{YType::str, "threshold-value"},
    current_value{YType::str, "current-value"},
    bucket_type{YType::enumeration, "bucket-type"}
{

    yang_name = "tca"; yang_parent_name = "alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::~Tca()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::has_data() const
{
    if (is_presence_container) return true;
    return threshold_value.is_set
	|| current_value.is_set
	|| bucket_type.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(current_value.yfilter)
	|| ydk::is_set(bucket_type.yfilter);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (current_value.is_set || is_set(current_value.yfilter)) leaf_name_data.push_back(current_value.get_name_leafdata());
    if (bucket_type.is_set || is_set(bucket_type.yfilter)) leaf_name_data.push_back(bucket_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-value")
    {
        current_value = value;
        current_value.value_namespace = name_space;
        current_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-type")
    {
        bucket_type = value;
        bucket_type.value_namespace = name_space;
        bucket_type.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "current-value")
    {
        current_value.yfilter = yfilter;
    }
    if(value_path == "bucket-type")
    {
        bucket_type.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Active::AlarmInfo::Tca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-value" || name == "current-value" || name == "bucket-type")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::History()
    :
    alarm_info(this, {})
{

    yang_name = "history"; yang_parent_name = "detail-location"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::~History()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        auto c = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo>();
        c->parent = this;
        alarm_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alarm_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-info")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::AlarmInfo()
    :
    description{YType::str, "description"},
    location{YType::str, "location"},
    aid{YType::str, "aid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    eid{YType::str, "eid"},
    reporting_agent_id{YType::uint32, "reporting-agent-id"},
    pending_sync{YType::boolean, "pending-sync"},
    severity{YType::enumeration, "severity"},
    status{YType::enumeration, "status"},
    group{YType::enumeration, "group"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    service_affecting{YType::enumeration, "service-affecting"},
    type{YType::enumeration, "type"},
    interface{YType::str, "interface"},
    alarm_name{YType::str, "alarm-name"}
        ,
    otn(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn>())
    , tca(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca>())
{
    otn->parent = this;
    tca->parent = this;

    yang_name = "alarm-info"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| location.is_set
	|| aid.is_set
	|| tag.is_set
	|| module.is_set
	|| eid.is_set
	|| reporting_agent_id.is_set
	|| pending_sync.is_set
	|| severity.is_set
	|| status.is_set
	|| group.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| clear_time.is_set
	|| clear_timestamp.is_set
	|| service_affecting.is_set
	|| type.is_set
	|| interface.is_set
	|| alarm_name.is_set
	|| (otn !=  nullptr && otn->has_data())
	|| (tca !=  nullptr && tca->has_data());
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(pending_sync.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(set_timestamp.yfilter)
	|| ydk::is_set(clear_time.yfilter)
	|| ydk::is_set(clear_timestamp.yfilter)
	|| ydk::is_set(service_affecting.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(alarm_name.yfilter)
	|| (otn !=  nullptr && otn->has_operation())
	|| (tca !=  nullptr && tca->has_operation());
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (pending_sync.is_set || is_set(pending_sync.yfilter)) leaf_name_data.push_back(pending_sync.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.yfilter)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.yfilter)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (service_affecting.is_set || is_set(service_affecting.yfilter)) leaf_name_data.push_back(service_affecting.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.yfilter)) leaf_name_data.push_back(alarm_name.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
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

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sync")
    {
        pending_sync = value;
        pending_sync.value_namespace = name_space;
        pending_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
        set_timestamp.value_namespace = name_space;
        set_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
        clear_timestamp.value_namespace = name_space;
        clear_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-affecting")
    {
        service_affecting = value;
        service_affecting.value_namespace = name_space;
        service_affecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
        alarm_name.value_namespace = name_space;
        alarm_name.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "pending-sync")
    {
        pending_sync.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "set-time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp.yfilter = yfilter;
    }
    if(value_path == "clear-time")
    {
        clear_time.yfilter = yfilter;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp.yfilter = yfilter;
    }
    if(value_path == "service-affecting")
    {
        service_affecting.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "alarm-name")
    {
        alarm_name.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn" || name == "tca" || name == "description" || name == "location" || name == "aid" || name == "tag" || name == "module" || name == "eid" || name == "reporting-agent-id" || name == "pending-sync" || name == "severity" || name == "status" || name == "group" || name == "set-time" || name == "set-timestamp" || name == "clear-time" || name == "clear-timestamp" || name == "service-affecting" || name == "type" || name == "interface" || name == "alarm-name")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::Otn()
    :
    direction{YType::enumeration, "direction"},
    notification_source{YType::enumeration, "notification-source"}
{

    yang_name = "otn"; yang_parent_name = "alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::~Otn()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| notification_source.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(notification_source.yfilter);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (notification_source.is_set || is_set(notification_source.yfilter)) leaf_name_data.push_back(notification_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-source")
    {
        notification_source = value;
        notification_source.value_namespace = name_space;
        notification_source.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "notification-source")
    {
        notification_source.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "notification-source")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::Tca()
    :
    threshold_value{YType::str, "threshold-value"},
    current_value{YType::str, "current-value"},
    bucket_type{YType::enumeration, "bucket-type"}
{

    yang_name = "tca"; yang_parent_name = "alarm-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::~Tca()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::has_data() const
{
    if (is_presence_container) return true;
    return threshold_value.is_set
	|| current_value.is_set
	|| bucket_type.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(current_value.yfilter)
	|| ydk::is_set(bucket_type.yfilter);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tca";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (current_value.is_set || is_set(current_value.yfilter)) leaf_name_data.push_back(current_value.get_name_leafdata());
    if (bucket_type.is_set || is_set(bucket_type.yfilter)) leaf_name_data.push_back(bucket_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-value")
    {
        current_value = value;
        current_value.value_namespace = name_space;
        current_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-type")
    {
        bucket_type = value;
        bucket_type.value_namespace = name_space;
        bucket_type.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "current-value")
    {
        current_value.yfilter = yfilter;
    }
    if(value_path == "bucket-type")
    {
        bucket_type.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::History::AlarmInfo::Tca::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-value" || name == "current-value" || name == "bucket-type")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::Suppressed()
    :
    suppressed_info(this, {})
{

    yang_name = "suppressed"; yang_parent_name = "detail-location"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::~Suppressed()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<suppressed_info.len(); index++)
    {
        if(suppressed_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::has_operation() const
{
    for (std::size_t index=0; index<suppressed_info.len(); index++)
    {
        if(suppressed_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppressed-info")
    {
        auto c = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo>();
        c->parent = this;
        suppressed_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : suppressed_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppressed-info")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::SuppressedInfo()
    :
    description{YType::str, "description"},
    location{YType::str, "location"},
    aid{YType::str, "aid"},
    tag{YType::str, "tag"},
    module{YType::str, "module"},
    eid{YType::str, "eid"},
    reporting_agent_id{YType::uint32, "reporting-agent-id"},
    pending_sync{YType::boolean, "pending-sync"},
    severity{YType::enumeration, "severity"},
    status{YType::enumeration, "status"},
    group{YType::enumeration, "group"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    suppressed_time{YType::str, "suppressed-time"},
    suppressed_timestamp{YType::uint64, "suppressed-timestamp"},
    service_affecting{YType::enumeration, "service-affecting"},
    interface{YType::str, "interface"},
    alarm_name{YType::str, "alarm-name"}
        ,
    otn(std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn>())
{
    otn->parent = this;

    yang_name = "suppressed-info"; yang_parent_name = "suppressed"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::~SuppressedInfo()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| location.is_set
	|| aid.is_set
	|| tag.is_set
	|| module.is_set
	|| eid.is_set
	|| reporting_agent_id.is_set
	|| pending_sync.is_set
	|| severity.is_set
	|| status.is_set
	|| group.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| suppressed_time.is_set
	|| suppressed_timestamp.is_set
	|| service_affecting.is_set
	|| interface.is_set
	|| alarm_name.is_set
	|| (otn !=  nullptr && otn->has_data());
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(aid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(reporting_agent_id.yfilter)
	|| ydk::is_set(pending_sync.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(set_timestamp.yfilter)
	|| ydk::is_set(suppressed_time.yfilter)
	|| ydk::is_set(suppressed_timestamp.yfilter)
	|| ydk::is_set(service_affecting.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(alarm_name.yfilter)
	|| (otn !=  nullptr && otn->has_operation());
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (aid.is_set || is_set(aid.yfilter)) leaf_name_data.push_back(aid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (reporting_agent_id.is_set || is_set(reporting_agent_id.yfilter)) leaf_name_data.push_back(reporting_agent_id.get_name_leafdata());
    if (pending_sync.is_set || is_set(pending_sync.yfilter)) leaf_name_data.push_back(pending_sync.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.yfilter)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.yfilter)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());
    if (suppressed_timestamp.is_set || is_set(suppressed_timestamp.yfilter)) leaf_name_data.push_back(suppressed_timestamp.get_name_leafdata());
    if (service_affecting.is_set || is_set(service_affecting.yfilter)) leaf_name_data.push_back(service_affecting.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (alarm_name.is_set || is_set(alarm_name.yfilter)) leaf_name_data.push_back(alarm_name.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aid")
    {
        aid = value;
        aid.value_namespace = name_space;
        aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id = value;
        reporting_agent_id.value_namespace = name_space;
        reporting_agent_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sync")
    {
        pending_sync = value;
        pending_sync.value_namespace = name_space;
        pending_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
        set_timestamp.value_namespace = name_space;
        set_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed-time")
    {
        suppressed_time = value;
        suppressed_time.value_namespace = name_space;
        suppressed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed-timestamp")
    {
        suppressed_timestamp = value;
        suppressed_timestamp.value_namespace = name_space;
        suppressed_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-affecting")
    {
        service_affecting = value;
        service_affecting.value_namespace = name_space;
        service_affecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-name")
    {
        alarm_name = value;
        alarm_name.value_namespace = name_space;
        alarm_name.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "aid")
    {
        aid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "reporting-agent-id")
    {
        reporting_agent_id.yfilter = yfilter;
    }
    if(value_path == "pending-sync")
    {
        pending_sync.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "set-time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp.yfilter = yfilter;
    }
    if(value_path == "suppressed-time")
    {
        suppressed_time.yfilter = yfilter;
    }
    if(value_path == "suppressed-timestamp")
    {
        suppressed_timestamp.yfilter = yfilter;
    }
    if(value_path == "service-affecting")
    {
        service_affecting.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "alarm-name")
    {
        alarm_name.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn" || name == "description" || name == "location" || name == "aid" || name == "tag" || name == "module" || name == "eid" || name == "reporting-agent-id" || name == "pending-sync" || name == "severity" || name == "status" || name == "group" || name == "set-time" || name == "set-timestamp" || name == "suppressed-time" || name == "suppressed-timestamp" || name == "service-affecting" || name == "interface" || name == "alarm-name")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::Otn()
    :
    direction{YType::enumeration, "direction"},
    notification_source{YType::enumeration, "notification-source"}
{

    yang_name = "otn"; yang_parent_name = "suppressed-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::~Otn()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| notification_source.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(notification_source.yfilter);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (notification_source.is_set || is_set(notification_source.yfilter)) leaf_name_data.push_back(notification_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-source")
    {
        notification_source = value;
        notification_source.value_namespace = name_space;
        notification_source.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "notification-source")
    {
        notification_source.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Suppressed::SuppressedInfo::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "notification-source")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::Stats()
    :
    reported{YType::uint64, "reported"},
    dropped{YType::uint64, "dropped"},
    active{YType::uint64, "active"},
    history{YType::uint64, "history"},
    suppressed{YType::uint64, "suppressed"},
    sysadmin_active{YType::uint64, "sysadmin-active"},
    sysadmin_history{YType::uint64, "sysadmin-history"},
    sysadmin_suppressed{YType::uint64, "sysadmin-suppressed"},
    dropped_invalid_aid{YType::uint32, "dropped-invalid-aid"},
    dropped_insuff_mem{YType::uint32, "dropped-insuff-mem"},
    dropped_db_error{YType::uint32, "dropped-db-error"},
    dropped_clear_without_set{YType::uint32, "dropped-clear-without-set"},
    dropped_duplicate{YType::uint32, "dropped-duplicate"},
    cache_hit{YType::uint32, "cache-hit"},
    cache_miss{YType::uint32, "cache-miss"}
{

    yang_name = "stats"; yang_parent_name = "detail-location"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::~Stats()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::has_data() const
{
    if (is_presence_container) return true;
    return reported.is_set
	|| dropped.is_set
	|| active.is_set
	|| history.is_set
	|| suppressed.is_set
	|| sysadmin_active.is_set
	|| sysadmin_history.is_set
	|| sysadmin_suppressed.is_set
	|| dropped_invalid_aid.is_set
	|| dropped_insuff_mem.is_set
	|| dropped_db_error.is_set
	|| dropped_clear_without_set.is_set
	|| dropped_duplicate.is_set
	|| cache_hit.is_set
	|| cache_miss.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reported.yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(suppressed.yfilter)
	|| ydk::is_set(sysadmin_active.yfilter)
	|| ydk::is_set(sysadmin_history.yfilter)
	|| ydk::is_set(sysadmin_suppressed.yfilter)
	|| ydk::is_set(dropped_invalid_aid.yfilter)
	|| ydk::is_set(dropped_insuff_mem.yfilter)
	|| ydk::is_set(dropped_db_error.yfilter)
	|| ydk::is_set(dropped_clear_without_set.yfilter)
	|| ydk::is_set(dropped_duplicate.yfilter)
	|| ydk::is_set(cache_hit.yfilter)
	|| ydk::is_set(cache_miss.yfilter);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reported.is_set || is_set(reported.yfilter)) leaf_name_data.push_back(reported.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (suppressed.is_set || is_set(suppressed.yfilter)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (sysadmin_active.is_set || is_set(sysadmin_active.yfilter)) leaf_name_data.push_back(sysadmin_active.get_name_leafdata());
    if (sysadmin_history.is_set || is_set(sysadmin_history.yfilter)) leaf_name_data.push_back(sysadmin_history.get_name_leafdata());
    if (sysadmin_suppressed.is_set || is_set(sysadmin_suppressed.yfilter)) leaf_name_data.push_back(sysadmin_suppressed.get_name_leafdata());
    if (dropped_invalid_aid.is_set || is_set(dropped_invalid_aid.yfilter)) leaf_name_data.push_back(dropped_invalid_aid.get_name_leafdata());
    if (dropped_insuff_mem.is_set || is_set(dropped_insuff_mem.yfilter)) leaf_name_data.push_back(dropped_insuff_mem.get_name_leafdata());
    if (dropped_db_error.is_set || is_set(dropped_db_error.yfilter)) leaf_name_data.push_back(dropped_db_error.get_name_leafdata());
    if (dropped_clear_without_set.is_set || is_set(dropped_clear_without_set.yfilter)) leaf_name_data.push_back(dropped_clear_without_set.get_name_leafdata());
    if (dropped_duplicate.is_set || is_set(dropped_duplicate.yfilter)) leaf_name_data.push_back(dropped_duplicate.get_name_leafdata());
    if (cache_hit.is_set || is_set(cache_hit.yfilter)) leaf_name_data.push_back(cache_hit.get_name_leafdata());
    if (cache_miss.is_set || is_set(cache_miss.yfilter)) leaf_name_data.push_back(cache_miss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reported")
    {
        reported = value;
        reported.value_namespace = name_space;
        reported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed")
    {
        suppressed = value;
        suppressed.value_namespace = name_space;
        suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysadmin-active")
    {
        sysadmin_active = value;
        sysadmin_active.value_namespace = name_space;
        sysadmin_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysadmin-history")
    {
        sysadmin_history = value;
        sysadmin_history.value_namespace = name_space;
        sysadmin_history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysadmin-suppressed")
    {
        sysadmin_suppressed = value;
        sysadmin_suppressed.value_namespace = name_space;
        sysadmin_suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-invalid-aid")
    {
        dropped_invalid_aid = value;
        dropped_invalid_aid.value_namespace = name_space;
        dropped_invalid_aid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-insuff-mem")
    {
        dropped_insuff_mem = value;
        dropped_insuff_mem.value_namespace = name_space;
        dropped_insuff_mem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-db-error")
    {
        dropped_db_error = value;
        dropped_db_error.value_namespace = name_space;
        dropped_db_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-clear-without-set")
    {
        dropped_clear_without_set = value;
        dropped_clear_without_set.value_namespace = name_space;
        dropped_clear_without_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-duplicate")
    {
        dropped_duplicate = value;
        dropped_duplicate.value_namespace = name_space;
        dropped_duplicate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-hit")
    {
        cache_hit = value;
        cache_hit.value_namespace = name_space;
        cache_hit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-miss")
    {
        cache_miss = value;
        cache_miss.value_namespace = name_space;
        cache_miss.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reported")
    {
        reported.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "suppressed")
    {
        suppressed.yfilter = yfilter;
    }
    if(value_path == "sysadmin-active")
    {
        sysadmin_active.yfilter = yfilter;
    }
    if(value_path == "sysadmin-history")
    {
        sysadmin_history.yfilter = yfilter;
    }
    if(value_path == "sysadmin-suppressed")
    {
        sysadmin_suppressed.yfilter = yfilter;
    }
    if(value_path == "dropped-invalid-aid")
    {
        dropped_invalid_aid.yfilter = yfilter;
    }
    if(value_path == "dropped-insuff-mem")
    {
        dropped_insuff_mem.yfilter = yfilter;
    }
    if(value_path == "dropped-db-error")
    {
        dropped_db_error.yfilter = yfilter;
    }
    if(value_path == "dropped-clear-without-set")
    {
        dropped_clear_without_set.yfilter = yfilter;
    }
    if(value_path == "dropped-duplicate")
    {
        dropped_duplicate.yfilter = yfilter;
    }
    if(value_path == "cache-hit")
    {
        cache_hit.yfilter = yfilter;
    }
    if(value_path == "cache-miss")
    {
        cache_miss.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reported" || name == "dropped" || name == "active" || name == "history" || name == "suppressed" || name == "sysadmin-active" || name == "sysadmin-history" || name == "sysadmin-suppressed" || name == "dropped-invalid-aid" || name == "dropped-insuff-mem" || name == "dropped-db-error" || name == "dropped-clear-without-set" || name == "dropped-duplicate" || name == "cache-hit" || name == "cache-miss")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::Clients()
    :
    client_info(this, {})
{

    yang_name = "clients"; yang_parent_name = "detail-location"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::~Clients()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client_info.len(); index++)
    {
        if(client_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::has_operation() const
{
    for (std::size_t index=0; index<client_info.len(); index++)
    {
        if(client_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-info")
    {
        auto c = std::make_shared<Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo>();
        c->parent = this;
        client_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : client_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-info")
        return true;
    return false;
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::ClientInfo()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    location{YType::str, "location"},
    handle{YType::str, "handle"},
    state{YType::enumeration, "state"},
    type{YType::enumeration, "type"},
    filter_disp{YType::boolean, "filter-disp"},
    subscriber_id{YType::uint32, "subscriber-id"},
    filter_severity{YType::enumeration, "filter-severity"},
    filter_state{YType::enumeration, "filter-state"},
    filter_group{YType::enumeration, "filter-group"},
    connect_count{YType::uint32, "connect-count"},
    connect_timestamp{YType::str, "connect-timestamp"},
    get_count{YType::uint32, "get-count"},
    subscribe_count{YType::uint32, "subscribe-count"},
    report_count{YType::uint32, "report-count"}
{

    yang_name = "client-info"; yang_parent_name = "clients"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::~ClientInfo()
{
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set
	|| location.is_set
	|| handle.is_set
	|| state.is_set
	|| type.is_set
	|| filter_disp.is_set
	|| subscriber_id.is_set
	|| filter_severity.is_set
	|| filter_state.is_set
	|| filter_group.is_set
	|| connect_count.is_set
	|| connect_timestamp.is_set
	|| get_count.is_set
	|| subscribe_count.is_set
	|| report_count.is_set;
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(filter_disp.yfilter)
	|| ydk::is_set(subscriber_id.yfilter)
	|| ydk::is_set(filter_severity.yfilter)
	|| ydk::is_set(filter_state.yfilter)
	|| ydk::is_set(filter_group.yfilter)
	|| ydk::is_set(connect_count.yfilter)
	|| ydk::is_set(connect_timestamp.yfilter)
	|| ydk::is_set(get_count.yfilter)
	|| ydk::is_set(subscribe_count.yfilter)
	|| ydk::is_set(report_count.yfilter);
}

std::string Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (filter_disp.is_set || is_set(filter_disp.yfilter)) leaf_name_data.push_back(filter_disp.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (filter_severity.is_set || is_set(filter_severity.yfilter)) leaf_name_data.push_back(filter_severity.get_name_leafdata());
    if (filter_state.is_set || is_set(filter_state.yfilter)) leaf_name_data.push_back(filter_state.get_name_leafdata());
    if (filter_group.is_set || is_set(filter_group.yfilter)) leaf_name_data.push_back(filter_group.get_name_leafdata());
    if (connect_count.is_set || is_set(connect_count.yfilter)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (connect_timestamp.is_set || is_set(connect_timestamp.yfilter)) leaf_name_data.push_back(connect_timestamp.get_name_leafdata());
    if (get_count.is_set || is_set(get_count.yfilter)) leaf_name_data.push_back(get_count.get_name_leafdata());
    if (subscribe_count.is_set || is_set(subscribe_count.yfilter)) leaf_name_data.push_back(subscribe_count.get_name_leafdata());
    if (report_count.is_set || is_set(report_count.yfilter)) leaf_name_data.push_back(report_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-disp")
    {
        filter_disp = value;
        filter_disp.value_namespace = name_space;
        filter_disp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-severity")
    {
        filter_severity = value;
        filter_severity.value_namespace = name_space;
        filter_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-state")
    {
        filter_state = value;
        filter_state.value_namespace = name_space;
        filter_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-group")
    {
        filter_group = value;
        filter_group.value_namespace = name_space;
        filter_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-count")
    {
        connect_count = value;
        connect_count.value_namespace = name_space;
        connect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-timestamp")
    {
        connect_timestamp = value;
        connect_timestamp.value_namespace = name_space;
        connect_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-count")
    {
        get_count = value;
        get_count.value_namespace = name_space;
        get_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscribe-count")
    {
        subscribe_count = value;
        subscribe_count.value_namespace = name_space;
        subscribe_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-count")
    {
        report_count = value;
        report_count.value_namespace = name_space;
        report_count.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "filter-disp")
    {
        filter_disp.yfilter = yfilter;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
    if(value_path == "filter-severity")
    {
        filter_severity.yfilter = yfilter;
    }
    if(value_path == "filter-state")
    {
        filter_state.yfilter = yfilter;
    }
    if(value_path == "filter-group")
    {
        filter_group.yfilter = yfilter;
    }
    if(value_path == "connect-count")
    {
        connect_count.yfilter = yfilter;
    }
    if(value_path == "connect-timestamp")
    {
        connect_timestamp.yfilter = yfilter;
    }
    if(value_path == "get-count")
    {
        get_count.yfilter = yfilter;
    }
    if(value_path == "subscribe-count")
    {
        subscribe_count.yfilter = yfilter;
    }
    if(value_path == "report-count")
    {
        report_count.yfilter = yfilter;
    }
}

bool Alarms::Detail::DetailCard::DetailLocations::DetailLocation::Clients::ClientInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id" || name == "location" || name == "handle" || name == "state" || name == "type" || name == "filter-disp" || name == "subscriber-id" || name == "filter-severity" || name == "filter-state" || name == "filter-group" || name == "connect-count" || name == "connect-timestamp" || name == "get-count" || name == "subscribe-count" || name == "report-count")
        return true;
    return false;
}

Alarms::Brief::Brief()
    :
    brief_card(std::make_shared<Alarms::Brief::BriefCard>())
    , brief_system(std::make_shared<Alarms::Brief::BriefSystem>())
{
    brief_card->parent = this;
    brief_system->parent = this;

    yang_name = "brief"; yang_parent_name = "alarms"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Brief::~Brief()
{
}

bool Alarms::Brief::has_data() const
{
    if (is_presence_container) return true;
    return (brief_card !=  nullptr && brief_card->has_data())
	|| (brief_system !=  nullptr && brief_system->has_data());
}

bool Alarms::Brief::has_operation() const
{
    return is_set(yfilter)
	|| (brief_card !=  nullptr && brief_card->has_operation())
	|| (brief_system !=  nullptr && brief_system->has_operation());
}

std::string Alarms::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
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

void Alarms::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-card" || name == "brief-system")
        return true;
    return false;
}

Alarms::Brief::BriefCard::BriefCard()
    :
    brief_locations(std::make_shared<Alarms::Brief::BriefCard::BriefLocations>())
{
    brief_locations->parent = this;

    yang_name = "brief-card"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Brief::BriefCard::~BriefCard()
{
}

bool Alarms::Brief::BriefCard::has_data() const
{
    if (is_presence_container) return true;
    return (brief_locations !=  nullptr && brief_locations->has_data());
}

bool Alarms::Brief::BriefCard::has_operation() const
{
    return is_set(yfilter)
	|| (brief_locations !=  nullptr && brief_locations->has_operation());
}

std::string Alarms::Brief::BriefCard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Brief::BriefCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
    if(brief_locations != nullptr)
    {
        children["brief-locations"] = brief_locations;
    }

    return children;
}

void Alarms::Brief::BriefCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Brief::BriefCard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Brief::BriefCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-locations")
        return true;
    return false;
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocations()
    :
    brief_location(this, {"node_id"})
{

    yang_name = "brief-locations"; yang_parent_name = "brief-card"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Brief::BriefCard::BriefLocations::~BriefLocations()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<brief_location.len(); index++)
    {
        if(brief_location[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefCard::BriefLocations::has_operation() const
{
    for (std::size_t index=0; index<brief_location.len(); index++)
    {
        if(brief_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Brief::BriefCard::BriefLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-card/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Brief::BriefCard::BriefLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-locations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefCard::BriefLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-location")
    {
        auto c = std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation>();
        c->parent = this;
        brief_location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : brief_location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Brief::BriefCard::BriefLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Brief::BriefCard::BriefLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-location")
        return true;
    return false;
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::BriefLocation()
    :
    node_id{YType::str, "node-id"}
        ,
    active(std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active>())
    , history(std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History>())
    , suppressed(std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed>())
{
    active->parent = this;
    history->parent = this;
    suppressed->parent = this;

    yang_name = "brief-location"; yang_parent_name = "brief-locations"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::~BriefLocation()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (active !=  nullptr && active->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (suppressed !=  nullptr && suppressed->has_data());
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (suppressed !=  nullptr && suppressed->has_operation());
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-card/brief-locations/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-location";
    ADD_KEY_TOKEN(node_id, "node-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefCard::BriefLocations::BriefLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
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

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "history" || name == "suppressed" || name == "node-id")
        return true;
    return false;
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::Active()
    :
    alarm_info(this, {})
{

    yang_name = "active"; yang_parent_name = "brief-location"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::~Active()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        auto c = std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo>();
        c->parent = this;
        alarm_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alarm_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-info")
        return true;
    return false;
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::AlarmInfo()
    :
    location{YType::str, "location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    description{YType::str, "description"}
{

    yang_name = "alarm-info"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| severity.is_set
	|| group.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| clear_time.is_set
	|| clear_timestamp.is_set
	|| description.is_set;
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(set_timestamp.yfilter)
	|| ydk::is_set(clear_time.yfilter)
	|| ydk::is_set(clear_timestamp.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.yfilter)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.yfilter)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
        set_timestamp.value_namespace = name_space;
        set_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
        clear_timestamp.value_namespace = name_space;
        clear_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "set-time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp.yfilter = yfilter;
    }
    if(value_path == "clear-time")
    {
        clear_time.yfilter = yfilter;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Active::AlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "severity" || name == "group" || name == "set-time" || name == "set-timestamp" || name == "clear-time" || name == "clear-timestamp" || name == "description")
        return true;
    return false;
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::History()
    :
    alarm_info(this, {})
{

    yang_name = "history"; yang_parent_name = "brief-location"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::~History()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        auto c = std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo>();
        c->parent = this;
        alarm_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alarm_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-info")
        return true;
    return false;
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::AlarmInfo()
    :
    location{YType::str, "location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    description{YType::str, "description"}
{

    yang_name = "alarm-info"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| severity.is_set
	|| group.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| clear_time.is_set
	|| clear_timestamp.is_set
	|| description.is_set;
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(set_timestamp.yfilter)
	|| ydk::is_set(clear_time.yfilter)
	|| ydk::is_set(clear_timestamp.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.yfilter)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.yfilter)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
        set_timestamp.value_namespace = name_space;
        set_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
        clear_timestamp.value_namespace = name_space;
        clear_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "set-time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp.yfilter = yfilter;
    }
    if(value_path == "clear-time")
    {
        clear_time.yfilter = yfilter;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::History::AlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "severity" || name == "group" || name == "set-time" || name == "set-timestamp" || name == "clear-time" || name == "clear-timestamp" || name == "description")
        return true;
    return false;
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::Suppressed()
    :
    suppressed_info(this, {})
{

    yang_name = "suppressed"; yang_parent_name = "brief-location"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::~Suppressed()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<suppressed_info.len(); index++)
    {
        if(suppressed_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::has_operation() const
{
    for (std::size_t index=0; index<suppressed_info.len(); index++)
    {
        if(suppressed_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppressed-info")
    {
        auto c = std::make_shared<Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo>();
        c->parent = this;
        suppressed_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : suppressed_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppressed-info")
        return true;
    return false;
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::SuppressedInfo()
    :
    location{YType::str, "location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    suppressed_time{YType::str, "suppressed-time"},
    suppressed_timestamp{YType::uint64, "suppressed-timestamp"},
    description{YType::str, "description"}
{

    yang_name = "suppressed-info"; yang_parent_name = "suppressed"; is_top_level_class = false; has_list_ancestor = true; 
}

Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::~SuppressedInfo()
{
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| severity.is_set
	|| group.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| suppressed_time.is_set
	|| suppressed_timestamp.is_set
	|| description.is_set;
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(set_timestamp.yfilter)
	|| ydk::is_set(suppressed_time.yfilter)
	|| ydk::is_set(suppressed_timestamp.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.yfilter)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.yfilter)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());
    if (suppressed_timestamp.is_set || is_set(suppressed_timestamp.yfilter)) leaf_name_data.push_back(suppressed_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
        set_timestamp.value_namespace = name_space;
        set_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed-time")
    {
        suppressed_time = value;
        suppressed_time.value_namespace = name_space;
        suppressed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed-timestamp")
    {
        suppressed_timestamp = value;
        suppressed_timestamp.value_namespace = name_space;
        suppressed_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "set-time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp.yfilter = yfilter;
    }
    if(value_path == "suppressed-time")
    {
        suppressed_time.yfilter = yfilter;
    }
    if(value_path == "suppressed-timestamp")
    {
        suppressed_timestamp.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Alarms::Brief::BriefCard::BriefLocations::BriefLocation::Suppressed::SuppressedInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "severity" || name == "group" || name == "set-time" || name == "set-timestamp" || name == "suppressed-time" || name == "suppressed-timestamp" || name == "description")
        return true;
    return false;
}

Alarms::Brief::BriefSystem::BriefSystem()
    :
    active(std::make_shared<Alarms::Brief::BriefSystem::Active>())
    , history(std::make_shared<Alarms::Brief::BriefSystem::History>())
    , suppressed(std::make_shared<Alarms::Brief::BriefSystem::Suppressed>())
{
    active->parent = this;
    history->parent = this;
    suppressed->parent = this;

    yang_name = "brief-system"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Brief::BriefSystem::~BriefSystem()
{
}

bool Alarms::Brief::BriefSystem::has_data() const
{
    if (is_presence_container) return true;
    return (active !=  nullptr && active->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (suppressed !=  nullptr && suppressed->has_data());
}

bool Alarms::Brief::BriefSystem::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (suppressed !=  nullptr && suppressed->has_operation());
}

std::string Alarms::Brief::BriefSystem::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Brief::BriefSystem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefSystem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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
    char count=0;
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

void Alarms::Brief::BriefSystem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Brief::BriefSystem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Brief::BriefSystem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "history" || name == "suppressed")
        return true;
    return false;
}

Alarms::Brief::BriefSystem::Active::Active()
    :
    alarm_info(this, {})
{

    yang_name = "active"; yang_parent_name = "brief-system"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Brief::BriefSystem::Active::~Active()
{
}

bool Alarms::Brief::BriefSystem::Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefSystem::Active::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Brief::BriefSystem::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-system/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Brief::BriefSystem::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefSystem::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        auto c = std::make_shared<Alarms::Brief::BriefSystem::Active::AlarmInfo>();
        c->parent = this;
        alarm_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alarm_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Brief::BriefSystem::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Brief::BriefSystem::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Brief::BriefSystem::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-info")
        return true;
    return false;
}

Alarms::Brief::BriefSystem::Active::AlarmInfo::AlarmInfo()
    :
    location{YType::str, "location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    description{YType::str, "description"}
{

    yang_name = "alarm-info"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Brief::BriefSystem::Active::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Brief::BriefSystem::Active::AlarmInfo::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| severity.is_set
	|| group.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| clear_time.is_set
	|| clear_timestamp.is_set
	|| description.is_set;
}

bool Alarms::Brief::BriefSystem::Active::AlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(set_timestamp.yfilter)
	|| ydk::is_set(clear_time.yfilter)
	|| ydk::is_set(clear_timestamp.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Alarms::Brief::BriefSystem::Active::AlarmInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-system/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Brief::BriefSystem::Active::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefSystem::Active::AlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.yfilter)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.yfilter)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::Active::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::Active::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Brief::BriefSystem::Active::AlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
        set_timestamp.value_namespace = name_space;
        set_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
        clear_timestamp.value_namespace = name_space;
        clear_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Brief::BriefSystem::Active::AlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "set-time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp.yfilter = yfilter;
    }
    if(value_path == "clear-time")
    {
        clear_time.yfilter = yfilter;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Alarms::Brief::BriefSystem::Active::AlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "severity" || name == "group" || name == "set-time" || name == "set-timestamp" || name == "clear-time" || name == "clear-timestamp" || name == "description")
        return true;
    return false;
}

Alarms::Brief::BriefSystem::History::History()
    :
    alarm_info(this, {})
{

    yang_name = "history"; yang_parent_name = "brief-system"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Brief::BriefSystem::History::~History()
{
}

bool Alarms::Brief::BriefSystem::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefSystem::History::has_operation() const
{
    for (std::size_t index=0; index<alarm_info.len(); index++)
    {
        if(alarm_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Brief::BriefSystem::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-system/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Brief::BriefSystem::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefSystem::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alarm-info")
    {
        auto c = std::make_shared<Alarms::Brief::BriefSystem::History::AlarmInfo>();
        c->parent = this;
        alarm_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alarm_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Brief::BriefSystem::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Brief::BriefSystem::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Brief::BriefSystem::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-info")
        return true;
    return false;
}

Alarms::Brief::BriefSystem::History::AlarmInfo::AlarmInfo()
    :
    location{YType::str, "location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    clear_time{YType::str, "clear-time"},
    clear_timestamp{YType::uint64, "clear-timestamp"},
    description{YType::str, "description"}
{

    yang_name = "alarm-info"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Brief::BriefSystem::History::AlarmInfo::~AlarmInfo()
{
}

bool Alarms::Brief::BriefSystem::History::AlarmInfo::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| severity.is_set
	|| group.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| clear_time.is_set
	|| clear_timestamp.is_set
	|| description.is_set;
}

bool Alarms::Brief::BriefSystem::History::AlarmInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(set_timestamp.yfilter)
	|| ydk::is_set(clear_time.yfilter)
	|| ydk::is_set(clear_timestamp.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Alarms::Brief::BriefSystem::History::AlarmInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-system/history/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Brief::BriefSystem::History::AlarmInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefSystem::History::AlarmInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.yfilter)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (clear_time.is_set || is_set(clear_time.yfilter)) leaf_name_data.push_back(clear_time.get_name_leafdata());
    if (clear_timestamp.is_set || is_set(clear_timestamp.yfilter)) leaf_name_data.push_back(clear_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::History::AlarmInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::History::AlarmInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Brief::BriefSystem::History::AlarmInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
        set_timestamp.value_namespace = name_space;
        set_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-time")
    {
        clear_time = value;
        clear_time.value_namespace = name_space;
        clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp = value;
        clear_timestamp.value_namespace = name_space;
        clear_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Brief::BriefSystem::History::AlarmInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "set-time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp.yfilter = yfilter;
    }
    if(value_path == "clear-time")
    {
        clear_time.yfilter = yfilter;
    }
    if(value_path == "clear-timestamp")
    {
        clear_timestamp.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Alarms::Brief::BriefSystem::History::AlarmInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "severity" || name == "group" || name == "set-time" || name == "set-timestamp" || name == "clear-time" || name == "clear-timestamp" || name == "description")
        return true;
    return false;
}

Alarms::Brief::BriefSystem::Suppressed::Suppressed()
    :
    suppressed_info(this, {})
{

    yang_name = "suppressed"; yang_parent_name = "brief-system"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Brief::BriefSystem::Suppressed::~Suppressed()
{
}

bool Alarms::Brief::BriefSystem::Suppressed::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<suppressed_info.len(); index++)
    {
        if(suppressed_info[index]->has_data())
            return true;
    }
    return false;
}

bool Alarms::Brief::BriefSystem::Suppressed::has_operation() const
{
    for (std::size_t index=0; index<suppressed_info.len(); index++)
    {
        if(suppressed_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Alarms::Brief::BriefSystem::Suppressed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-system/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Brief::BriefSystem::Suppressed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefSystem::Suppressed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::Suppressed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppressed-info")
    {
        auto c = std::make_shared<Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo>();
        c->parent = this;
        suppressed_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::Suppressed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : suppressed_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Alarms::Brief::BriefSystem::Suppressed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Alarms::Brief::BriefSystem::Suppressed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Alarms::Brief::BriefSystem::Suppressed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppressed-info")
        return true;
    return false;
}

Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::SuppressedInfo()
    :
    location{YType::str, "location"},
    severity{YType::enumeration, "severity"},
    group{YType::enumeration, "group"},
    set_time{YType::str, "set-time"},
    set_timestamp{YType::uint64, "set-timestamp"},
    suppressed_time{YType::str, "suppressed-time"},
    suppressed_timestamp{YType::uint64, "suppressed-timestamp"},
    description{YType::str, "description"}
{

    yang_name = "suppressed-info"; yang_parent_name = "suppressed"; is_top_level_class = false; has_list_ancestor = false; 
}

Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::~SuppressedInfo()
{
}

bool Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| severity.is_set
	|| group.is_set
	|| set_time.is_set
	|| set_timestamp.is_set
	|| suppressed_time.is_set
	|| suppressed_timestamp.is_set
	|| description.is_set;
}

bool Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(set_time.yfilter)
	|| ydk::is_set(set_timestamp.yfilter)
	|| ydk::is_set(suppressed_time.yfilter)
	|| ydk::is_set(suppressed_timestamp.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-alarmgr-server-oper:alarms/brief/brief-system/suppressed/" << get_segment_path();
    return path_buffer.str();
}

std::string Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppressed-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (set_time.is_set || is_set(set_time.yfilter)) leaf_name_data.push_back(set_time.get_name_leafdata());
    if (set_timestamp.is_set || is_set(set_timestamp.yfilter)) leaf_name_data.push_back(set_timestamp.get_name_leafdata());
    if (suppressed_time.is_set || is_set(suppressed_time.yfilter)) leaf_name_data.push_back(suppressed_time.get_name_leafdata());
    if (suppressed_timestamp.is_set || is_set(suppressed_timestamp.yfilter)) leaf_name_data.push_back(suppressed_timestamp.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-time")
    {
        set_time = value;
        set_time.value_namespace = name_space;
        set_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp = value;
        set_timestamp.value_namespace = name_space;
        set_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed-time")
    {
        suppressed_time = value;
        suppressed_time.value_namespace = name_space;
        suppressed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressed-timestamp")
    {
        suppressed_timestamp = value;
        suppressed_timestamp.value_namespace = name_space;
        suppressed_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "set-time")
    {
        set_time.yfilter = yfilter;
    }
    if(value_path == "set-timestamp")
    {
        set_timestamp.yfilter = yfilter;
    }
    if(value_path == "suppressed-time")
    {
        suppressed_time.yfilter = yfilter;
    }
    if(value_path == "suppressed-timestamp")
    {
        suppressed_timestamp.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Alarms::Brief::BriefSystem::Suppressed::SuppressedInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "severity" || name == "group" || name == "set-time" || name == "set-timestamp" || name == "suppressed-time" || name == "suppressed-timestamp" || name == "description")
        return true;
    return false;
}

const Enum::YLeaf TimingBucket::not_specified {0, "not-specified"};
const Enum::YLeaf TimingBucket::fifteen_min {1, "fifteen-min"};
const Enum::YLeaf TimingBucket::one_day {2, "one-day"};

const Enum::YLeaf AlarmSeverity::unknown {0, "unknown"};
const Enum::YLeaf AlarmSeverity::not_reported {1, "not-reported"};
const Enum::YLeaf AlarmSeverity::not_alarmed {2, "not-alarmed"};
const Enum::YLeaf AlarmSeverity::minor {3, "minor"};
const Enum::YLeaf AlarmSeverity::major_ {4, "major"};
const Enum::YLeaf AlarmSeverity::critical {5, "critical"};
const Enum::YLeaf AlarmSeverity::severity_last {6, "severity-last"};

const Enum::YLeaf AlarmDirection::not_specified {0, "not-specified"};
const Enum::YLeaf AlarmDirection::send {1, "send"};
const Enum::YLeaf AlarmDirection::receive {2, "receive"};
const Enum::YLeaf AlarmDirection::send_receive {3, "send-receive"};

const Enum::YLeaf AlarmStatus::unknown {0, "unknown"};
const Enum::YLeaf AlarmStatus::set {1, "set"};
const Enum::YLeaf AlarmStatus::clear {2, "clear"};
const Enum::YLeaf AlarmStatus::suppress {3, "suppress"};
const Enum::YLeaf AlarmStatus::last {4, "last"};

const Enum::YLeaf AlarmServiceAffecting::unknown {0, "unknown"};
const Enum::YLeaf AlarmServiceAffecting::not_service_affecting {1, "not-service-affecting"};
const Enum::YLeaf AlarmServiceAffecting::service_affecting {2, "service-affecting"};

const Enum::YLeaf AlarmNotificationSrc::not_specified {0, "not-specified"};
const Enum::YLeaf AlarmNotificationSrc::near_end {1, "near-end"};
const Enum::YLeaf AlarmNotificationSrc::far_end {2, "far-end"};

const Enum::YLeaf AlarmEvent::default_ {0, "default"};
const Enum::YLeaf AlarmEvent::notification {1, "notification"};
const Enum::YLeaf AlarmEvent::last {2, "last"};

const Enum::YLeaf AlarmClient::unknown {1, "unknown"};
const Enum::YLeaf AlarmClient::producer {2, "producer"};
const Enum::YLeaf AlarmClient::consumer {4, "consumer"};
const Enum::YLeaf AlarmClient::subscriber {8, "subscriber"};
const Enum::YLeaf AlarmClient::client_last {16, "client-last"};

const Enum::YLeaf AlarmClientState::start {0, "start"};
const Enum::YLeaf AlarmClientState::init {1, "init"};
const Enum::YLeaf AlarmClientState::connecting {2, "connecting"};
const Enum::YLeaf AlarmClientState::connected {3, "connected"};
const Enum::YLeaf AlarmClientState::registered {4, "registered"};
const Enum::YLeaf AlarmClientState::disconnected {5, "disconnected"};
const Enum::YLeaf AlarmClientState::ready {6, "ready"};

const Enum::YLeaf AlarmGroups::unknown {0, "unknown"};
const Enum::YLeaf AlarmGroups::environ {1, "environ"};
const Enum::YLeaf AlarmGroups::ethernet {2, "ethernet"};
const Enum::YLeaf AlarmGroups::fabric {3, "fabric"};
const Enum::YLeaf AlarmGroups::power {4, "power"};
const Enum::YLeaf AlarmGroups::software {5, "software"};
const Enum::YLeaf AlarmGroups::slice {6, "slice"};
const Enum::YLeaf AlarmGroups::cpu {7, "cpu"};
const Enum::YLeaf AlarmGroups::controller {8, "controller"};
const Enum::YLeaf AlarmGroups::sonet {9, "sonet"};
const Enum::YLeaf AlarmGroups::otn {10, "otn"};
const Enum::YLeaf AlarmGroups::sdh_controller {11, "sdh-controller"};
const Enum::YLeaf AlarmGroups::asic {12, "asic"};
const Enum::YLeaf AlarmGroups::fpd_infra {13, "fpd-infra"};
const Enum::YLeaf AlarmGroups::shelf {14, "shelf"};
const Enum::YLeaf AlarmGroups::mpa {15, "mpa"};
const Enum::YLeaf AlarmGroups::ots {16, "ots"};
const Enum::YLeaf AlarmGroups::timing {17, "timing"};
const Enum::YLeaf AlarmGroups::last {18, "last"};


}
}

