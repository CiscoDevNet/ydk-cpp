
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_pm.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_pm {

Processes::Processes()
    :
    all_locations(this, {"location"})
{

    yang_name = "processes"; yang_parent_name = "Cisco-IOS-XR-sysadmin-pm"; is_top_level_class = true; has_list_ancestor = false; 
}

Processes::~Processes()
{
}

bool Processes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_locations.len(); index++)
    {
        if(all_locations[index]->has_data())
            return true;
    }
    return false;
}

bool Processes::has_operation() const
{
    for (std::size_t index=0; index<all_locations.len(); index++)
    {
        if(all_locations[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-pm:processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Processes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-locations")
    {
        auto ent_ = std::make_shared<Processes::AllLocations>();
        ent_->parent = this;
        all_locations.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_locations.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Processes::clone_ptr() const
{
    return std::make_shared<Processes>();
}

std::string Processes::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Processes::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Processes::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Processes::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-locations")
        return true;
    return false;
}

Processes::AllLocations::AllLocations()
    :
    location{YType::str, "location"},
    ip_addr{YType::str, "ip-addr"},
    pcbs{YType::uint32, "pcbs"}
        ,
    name(this, {"proc_name", "instance_id"})
{

    yang_name = "all-locations"; yang_parent_name = "processes"; is_top_level_class = false; has_list_ancestor = false; 
}

Processes::AllLocations::~AllLocations()
{
}

bool Processes::AllLocations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return location.is_set
	|| ip_addr.is_set
	|| pcbs.is_set;
}

bool Processes::AllLocations::has_operation() const
{
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(pcbs.yfilter);
}

std::string Processes::AllLocations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-pm:processes/" << get_segment_path();
    return path_buffer.str();
}

std::string Processes::AllLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-locations";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Processes::AllLocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (pcbs.is_set || is_set(pcbs.yfilter)) leaf_name_data.push_back(pcbs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Processes::AllLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        auto ent_ = std::make_shared<Processes::AllLocations::Name>();
        ent_->parent = this;
        name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Processes::AllLocations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Processes::AllLocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcbs")
    {
        pcbs = value;
        pcbs.value_namespace = name_space;
        pcbs.value_namespace_prefix = name_space_prefix;
    }
}

void Processes::AllLocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "pcbs")
    {
        pcbs.yfilter = yfilter;
    }
}

bool Processes::AllLocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "location" || name == "ip-addr" || name == "pcbs")
        return true;
    return false;
}

Processes::AllLocations::Name::Name()
    :
    proc_name{YType::str, "proc-name"},
    instance_id{YType::uint32, "instance-id"},
    path{YType::str, "path"},
    startup_file{YType::str, "startup-file"},
    startup_mode{YType::enumeration, "startup-mode"},
    heart_beat_timeout{YType::uint32, "heart-beat-timeout"},
    last_heart_beat_time{YType::str, "last-heart-beat-time"},
    max_restarts{YType::uint32, "max-restarts"},
    respawn_reset_timer{YType::uint32, "respawn-reset-timer"},
    mandatory{YType::boolean, "mandatory"},
    maint_mode{YType::boolean, "maint-mode"},
    args{YType::str, "args"},
    proc_state{YType::enumeration, "proc-state"},
    pid{YType::int32, "pid"},
    proc_aborted{YType::boolean, "proc-aborted"},
    exit_status{YType::str, "exit-status"},
    respawns{YType::int32, "respawns"},
    start_time{YType::str, "start-time"},
    ready_time{YType::str, "ready-time"},
    last_exit_time{YType::str, "last-exit-time"}
        ,
    services(this, {"service_name"})
{

    yang_name = "name"; yang_parent_name = "all-locations"; is_top_level_class = false; has_list_ancestor = true; 
}

Processes::AllLocations::Name::~Name()
{
}

bool Processes::AllLocations::Name::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<services.len(); index++)
    {
        if(services[index]->has_data())
            return true;
    }
    return proc_name.is_set
	|| instance_id.is_set
	|| path.is_set
	|| startup_file.is_set
	|| startup_mode.is_set
	|| heart_beat_timeout.is_set
	|| last_heart_beat_time.is_set
	|| max_restarts.is_set
	|| respawn_reset_timer.is_set
	|| mandatory.is_set
	|| maint_mode.is_set
	|| args.is_set
	|| proc_state.is_set
	|| pid.is_set
	|| proc_aborted.is_set
	|| exit_status.is_set
	|| respawns.is_set
	|| start_time.is_set
	|| ready_time.is_set
	|| last_exit_time.is_set;
}

bool Processes::AllLocations::Name::has_operation() const
{
    for (std::size_t index=0; index<services.len(); index++)
    {
        if(services[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(proc_name.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(startup_file.yfilter)
	|| ydk::is_set(startup_mode.yfilter)
	|| ydk::is_set(heart_beat_timeout.yfilter)
	|| ydk::is_set(last_heart_beat_time.yfilter)
	|| ydk::is_set(max_restarts.yfilter)
	|| ydk::is_set(respawn_reset_timer.yfilter)
	|| ydk::is_set(mandatory.yfilter)
	|| ydk::is_set(maint_mode.yfilter)
	|| ydk::is_set(args.yfilter)
	|| ydk::is_set(proc_state.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(proc_aborted.yfilter)
	|| ydk::is_set(exit_status.yfilter)
	|| ydk::is_set(respawns.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(ready_time.yfilter)
	|| ydk::is_set(last_exit_time.yfilter);
}

std::string Processes::AllLocations::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    ADD_KEY_TOKEN(proc_name, "proc-name");
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Processes::AllLocations::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proc_name.is_set || is_set(proc_name.yfilter)) leaf_name_data.push_back(proc_name.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (startup_file.is_set || is_set(startup_file.yfilter)) leaf_name_data.push_back(startup_file.get_name_leafdata());
    if (startup_mode.is_set || is_set(startup_mode.yfilter)) leaf_name_data.push_back(startup_mode.get_name_leafdata());
    if (heart_beat_timeout.is_set || is_set(heart_beat_timeout.yfilter)) leaf_name_data.push_back(heart_beat_timeout.get_name_leafdata());
    if (last_heart_beat_time.is_set || is_set(last_heart_beat_time.yfilter)) leaf_name_data.push_back(last_heart_beat_time.get_name_leafdata());
    if (max_restarts.is_set || is_set(max_restarts.yfilter)) leaf_name_data.push_back(max_restarts.get_name_leafdata());
    if (respawn_reset_timer.is_set || is_set(respawn_reset_timer.yfilter)) leaf_name_data.push_back(respawn_reset_timer.get_name_leafdata());
    if (mandatory.is_set || is_set(mandatory.yfilter)) leaf_name_data.push_back(mandatory.get_name_leafdata());
    if (maint_mode.is_set || is_set(maint_mode.yfilter)) leaf_name_data.push_back(maint_mode.get_name_leafdata());
    if (args.is_set || is_set(args.yfilter)) leaf_name_data.push_back(args.get_name_leafdata());
    if (proc_state.is_set || is_set(proc_state.yfilter)) leaf_name_data.push_back(proc_state.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (proc_aborted.is_set || is_set(proc_aborted.yfilter)) leaf_name_data.push_back(proc_aborted.get_name_leafdata());
    if (exit_status.is_set || is_set(exit_status.yfilter)) leaf_name_data.push_back(exit_status.get_name_leafdata());
    if (respawns.is_set || is_set(respawns.yfilter)) leaf_name_data.push_back(respawns.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (ready_time.is_set || is_set(ready_time.yfilter)) leaf_name_data.push_back(ready_time.get_name_leafdata());
    if (last_exit_time.is_set || is_set(last_exit_time.yfilter)) leaf_name_data.push_back(last_exit_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Processes::AllLocations::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "services")
    {
        auto ent_ = std::make_shared<Processes::AllLocations::Name::Services>();
        ent_->parent = this;
        services.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Processes::AllLocations::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : services.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Processes::AllLocations::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proc-name")
    {
        proc_name = value;
        proc_name.value_namespace = name_space;
        proc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-file")
    {
        startup_file = value;
        startup_file.value_namespace = name_space;
        startup_file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-mode")
    {
        startup_mode = value;
        startup_mode.value_namespace = name_space;
        startup_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "heart-beat-timeout")
    {
        heart_beat_timeout = value;
        heart_beat_timeout.value_namespace = name_space;
        heart_beat_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-heart-beat-time")
    {
        last_heart_beat_time = value;
        last_heart_beat_time.value_namespace = name_space;
        last_heart_beat_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-restarts")
    {
        max_restarts = value;
        max_restarts.value_namespace = name_space;
        max_restarts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-reset-timer")
    {
        respawn_reset_timer = value;
        respawn_reset_timer.value_namespace = name_space;
        respawn_reset_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mandatory")
    {
        mandatory = value;
        mandatory.value_namespace = name_space;
        mandatory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maint-mode")
    {
        maint_mode = value;
        maint_mode.value_namespace = name_space;
        maint_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "args")
    {
        args = value;
        args.value_namespace = name_space;
        args.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-state")
    {
        proc_state = value;
        proc_state.value_namespace = name_space;
        proc_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-aborted")
    {
        proc_aborted = value;
        proc_aborted.value_namespace = name_space;
        proc_aborted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exit-status")
    {
        exit_status = value;
        exit_status.value_namespace = name_space;
        exit_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawns")
    {
        respawns = value;
        respawns.value_namespace = name_space;
        respawns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ready-time")
    {
        ready_time = value;
        ready_time.value_namespace = name_space;
        ready_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-exit-time")
    {
        last_exit_time = value;
        last_exit_time.value_namespace = name_space;
        last_exit_time.value_namespace_prefix = name_space_prefix;
    }
}

void Processes::AllLocations::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proc-name")
    {
        proc_name.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "startup-file")
    {
        startup_file.yfilter = yfilter;
    }
    if(value_path == "startup-mode")
    {
        startup_mode.yfilter = yfilter;
    }
    if(value_path == "heart-beat-timeout")
    {
        heart_beat_timeout.yfilter = yfilter;
    }
    if(value_path == "last-heart-beat-time")
    {
        last_heart_beat_time.yfilter = yfilter;
    }
    if(value_path == "max-restarts")
    {
        max_restarts.yfilter = yfilter;
    }
    if(value_path == "respawn-reset-timer")
    {
        respawn_reset_timer.yfilter = yfilter;
    }
    if(value_path == "mandatory")
    {
        mandatory.yfilter = yfilter;
    }
    if(value_path == "maint-mode")
    {
        maint_mode.yfilter = yfilter;
    }
    if(value_path == "args")
    {
        args.yfilter = yfilter;
    }
    if(value_path == "proc-state")
    {
        proc_state.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "proc-aborted")
    {
        proc_aborted.yfilter = yfilter;
    }
    if(value_path == "exit-status")
    {
        exit_status.yfilter = yfilter;
    }
    if(value_path == "respawns")
    {
        respawns.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "ready-time")
    {
        ready_time.yfilter = yfilter;
    }
    if(value_path == "last-exit-time")
    {
        last_exit_time.yfilter = yfilter;
    }
}

bool Processes::AllLocations::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "services" || name == "proc-name" || name == "instance-id" || name == "path" || name == "startup-file" || name == "startup-mode" || name == "heart-beat-timeout" || name == "last-heart-beat-time" || name == "max-restarts" || name == "respawn-reset-timer" || name == "mandatory" || name == "maint-mode" || name == "args" || name == "proc-state" || name == "pid" || name == "proc-aborted" || name == "exit-status" || name == "respawns" || name == "start-time" || name == "ready-time" || name == "last-exit-time")
        return true;
    return false;
}

Processes::AllLocations::Name::Services::Services()
    :
    service_name{YType::str, "service-name"},
    scope{YType::enumeration, "scope"},
    redundancy{YType::boolean, "redundancy"},
    ha_ready{YType::boolean, "ha-ready"},
    service_state{YType::enumeration, "service-state"},
    ha_role{YType::enumeration, "ha-role"},
    new_ha_role{YType::enumeration, "new-ha-role"},
    selected{YType::boolean, "selected"},
    ip1{YType::str, "ip1"},
    ip2{YType::str, "ip2"},
    svc_start_time{YType::str, "svc-start-time"},
    svc_ready_time{YType::str, "svc-ready-time"},
    svc_haready_time{YType::str, "svc-haready-time"}
{

    yang_name = "services"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

Processes::AllLocations::Name::Services::~Services()
{
}

bool Processes::AllLocations::Name::Services::has_data() const
{
    if (is_presence_container) return true;
    return service_name.is_set
	|| scope.is_set
	|| redundancy.is_set
	|| ha_ready.is_set
	|| service_state.is_set
	|| ha_role.is_set
	|| new_ha_role.is_set
	|| selected.is_set
	|| ip1.is_set
	|| ip2.is_set
	|| svc_start_time.is_set
	|| svc_ready_time.is_set
	|| svc_haready_time.is_set;
}

bool Processes::AllLocations::Name::Services::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(ha_ready.yfilter)
	|| ydk::is_set(service_state.yfilter)
	|| ydk::is_set(ha_role.yfilter)
	|| ydk::is_set(new_ha_role.yfilter)
	|| ydk::is_set(selected.yfilter)
	|| ydk::is_set(ip1.yfilter)
	|| ydk::is_set(ip2.yfilter)
	|| ydk::is_set(svc_start_time.yfilter)
	|| ydk::is_set(svc_ready_time.yfilter)
	|| ydk::is_set(svc_haready_time.yfilter);
}

std::string Processes::AllLocations::Name::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";
    ADD_KEY_TOKEN(service_name, "service-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Processes::AllLocations::Name::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (ha_ready.is_set || is_set(ha_ready.yfilter)) leaf_name_data.push_back(ha_ready.get_name_leafdata());
    if (service_state.is_set || is_set(service_state.yfilter)) leaf_name_data.push_back(service_state.get_name_leafdata());
    if (ha_role.is_set || is_set(ha_role.yfilter)) leaf_name_data.push_back(ha_role.get_name_leafdata());
    if (new_ha_role.is_set || is_set(new_ha_role.yfilter)) leaf_name_data.push_back(new_ha_role.get_name_leafdata());
    if (selected.is_set || is_set(selected.yfilter)) leaf_name_data.push_back(selected.get_name_leafdata());
    if (ip1.is_set || is_set(ip1.yfilter)) leaf_name_data.push_back(ip1.get_name_leafdata());
    if (ip2.is_set || is_set(ip2.yfilter)) leaf_name_data.push_back(ip2.get_name_leafdata());
    if (svc_start_time.is_set || is_set(svc_start_time.yfilter)) leaf_name_data.push_back(svc_start_time.get_name_leafdata());
    if (svc_ready_time.is_set || is_set(svc_ready_time.yfilter)) leaf_name_data.push_back(svc_ready_time.get_name_leafdata());
    if (svc_haready_time.is_set || is_set(svc_haready_time.yfilter)) leaf_name_data.push_back(svc_haready_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Processes::AllLocations::Name::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Processes::AllLocations::Name::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Processes::AllLocations::Name::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ha-ready")
    {
        ha_ready = value;
        ha_ready.value_namespace = name_space;
        ha_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-state")
    {
        service_state = value;
        service_state.value_namespace = name_space;
        service_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ha-role")
    {
        ha_role = value;
        ha_role.value_namespace = name_space;
        ha_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-ha-role")
    {
        new_ha_role = value;
        new_ha_role.value_namespace = name_space;
        new_ha_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected")
    {
        selected = value;
        selected.value_namespace = name_space;
        selected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip1")
    {
        ip1 = value;
        ip1.value_namespace = name_space;
        ip1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip2")
    {
        ip2 = value;
        ip2.value_namespace = name_space;
        ip2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svc-start-time")
    {
        svc_start_time = value;
        svc_start_time.value_namespace = name_space;
        svc_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svc-ready-time")
    {
        svc_ready_time = value;
        svc_ready_time.value_namespace = name_space;
        svc_ready_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svc-haready-time")
    {
        svc_haready_time = value;
        svc_haready_time.value_namespace = name_space;
        svc_haready_time.value_namespace_prefix = name_space_prefix;
    }
}

void Processes::AllLocations::Name::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "ha-ready")
    {
        ha_ready.yfilter = yfilter;
    }
    if(value_path == "service-state")
    {
        service_state.yfilter = yfilter;
    }
    if(value_path == "ha-role")
    {
        ha_role.yfilter = yfilter;
    }
    if(value_path == "new-ha-role")
    {
        new_ha_role.yfilter = yfilter;
    }
    if(value_path == "selected")
    {
        selected.yfilter = yfilter;
    }
    if(value_path == "ip1")
    {
        ip1.yfilter = yfilter;
    }
    if(value_path == "ip2")
    {
        ip2.yfilter = yfilter;
    }
    if(value_path == "svc-start-time")
    {
        svc_start_time.yfilter = yfilter;
    }
    if(value_path == "svc-ready-time")
    {
        svc_ready_time.yfilter = yfilter;
    }
    if(value_path == "svc-haready-time")
    {
        svc_haready_time.yfilter = yfilter;
    }
}

bool Processes::AllLocations::Name::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name" || name == "scope" || name == "redundancy" || name == "ha-ready" || name == "service-state" || name == "ha-role" || name == "new-ha-role" || name == "selected" || name == "ip1" || name == "ip2" || name == "svc-start-time" || name == "svc-ready-time" || name == "svc-haready-time")
        return true;
    return false;
}

ProcessManager::ProcessManager()
    :
    all_locations_info(this, {"location_info"})
{

    yang_name = "process-manager"; yang_parent_name = "Cisco-IOS-XR-sysadmin-pm"; is_top_level_class = true; has_list_ancestor = false; 
}

ProcessManager::~ProcessManager()
{
}

bool ProcessManager::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_locations_info.len(); index++)
    {
        if(all_locations_info[index]->has_data())
            return true;
    }
    return false;
}

bool ProcessManager::has_operation() const
{
    for (std::size_t index=0; index<all_locations_info.len(); index++)
    {
        if(all_locations_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ProcessManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-pm:process-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ProcessManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-locations-info")
    {
        auto ent_ = std::make_shared<ProcessManager::AllLocationsInfo>();
        ent_->parent = this;
        all_locations_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ProcessManager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_locations_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ProcessManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ProcessManager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ProcessManager::clone_ptr() const
{
    return std::make_shared<ProcessManager>();
}

std::string ProcessManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ProcessManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ProcessManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ProcessManager::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ProcessManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-locations-info")
        return true;
    return false;
}

ProcessManager::AllLocationsInfo::AllLocationsInfo()
    :
    location_info{YType::str, "location-info"},
    ip_addr_info{YType::str, "ip-addr-info"},
    pm_start_time{YType::str, "pm-start-time"},
    mand_proc_down{YType::boolean, "mand-proc-down"},
    vmm_capi_up{YType::boolean, "vmm-capi-up"},
    wdmon_capi_up{YType::boolean, "wdmon-capi-up"},
    wdmon_capi_timestamp{YType::str, "wdmon-capi-timestamp"},
    wdmon_num_capi_connects{YType::uint32, "wdmon-num-capi-connects"}
{

    yang_name = "all-locations-info"; yang_parent_name = "process-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

ProcessManager::AllLocationsInfo::~AllLocationsInfo()
{
}

bool ProcessManager::AllLocationsInfo::has_data() const
{
    if (is_presence_container) return true;
    return location_info.is_set
	|| ip_addr_info.is_set
	|| pm_start_time.is_set
	|| mand_proc_down.is_set
	|| vmm_capi_up.is_set
	|| wdmon_capi_up.is_set
	|| wdmon_capi_timestamp.is_set
	|| wdmon_num_capi_connects.is_set;
}

bool ProcessManager::AllLocationsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_info.yfilter)
	|| ydk::is_set(ip_addr_info.yfilter)
	|| ydk::is_set(pm_start_time.yfilter)
	|| ydk::is_set(mand_proc_down.yfilter)
	|| ydk::is_set(vmm_capi_up.yfilter)
	|| ydk::is_set(wdmon_capi_up.yfilter)
	|| ydk::is_set(wdmon_capi_timestamp.yfilter)
	|| ydk::is_set(wdmon_num_capi_connects.yfilter);
}

std::string ProcessManager::AllLocationsInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-pm:process-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string ProcessManager::AllLocationsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-locations-info";
    ADD_KEY_TOKEN(location_info, "location-info");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ProcessManager::AllLocationsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_info.is_set || is_set(location_info.yfilter)) leaf_name_data.push_back(location_info.get_name_leafdata());
    if (ip_addr_info.is_set || is_set(ip_addr_info.yfilter)) leaf_name_data.push_back(ip_addr_info.get_name_leafdata());
    if (pm_start_time.is_set || is_set(pm_start_time.yfilter)) leaf_name_data.push_back(pm_start_time.get_name_leafdata());
    if (mand_proc_down.is_set || is_set(mand_proc_down.yfilter)) leaf_name_data.push_back(mand_proc_down.get_name_leafdata());
    if (vmm_capi_up.is_set || is_set(vmm_capi_up.yfilter)) leaf_name_data.push_back(vmm_capi_up.get_name_leafdata());
    if (wdmon_capi_up.is_set || is_set(wdmon_capi_up.yfilter)) leaf_name_data.push_back(wdmon_capi_up.get_name_leafdata());
    if (wdmon_capi_timestamp.is_set || is_set(wdmon_capi_timestamp.yfilter)) leaf_name_data.push_back(wdmon_capi_timestamp.get_name_leafdata());
    if (wdmon_num_capi_connects.is_set || is_set(wdmon_num_capi_connects.yfilter)) leaf_name_data.push_back(wdmon_num_capi_connects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ProcessManager::AllLocationsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ProcessManager::AllLocationsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ProcessManager::AllLocationsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-info")
    {
        location_info = value;
        location_info.value_namespace = name_space;
        location_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr-info")
    {
        ip_addr_info = value;
        ip_addr_info.value_namespace = name_space;
        ip_addr_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pm-start-time")
    {
        pm_start_time = value;
        pm_start_time.value_namespace = name_space;
        pm_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mand-proc-down")
    {
        mand_proc_down = value;
        mand_proc_down.value_namespace = name_space;
        mand_proc_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmm-capi-up")
    {
        vmm_capi_up = value;
        vmm_capi_up.value_namespace = name_space;
        vmm_capi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wdmon-capi-up")
    {
        wdmon_capi_up = value;
        wdmon_capi_up.value_namespace = name_space;
        wdmon_capi_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wdmon-capi-timestamp")
    {
        wdmon_capi_timestamp = value;
        wdmon_capi_timestamp.value_namespace = name_space;
        wdmon_capi_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wdmon-num-capi-connects")
    {
        wdmon_num_capi_connects = value;
        wdmon_num_capi_connects.value_namespace = name_space;
        wdmon_num_capi_connects.value_namespace_prefix = name_space_prefix;
    }
}

void ProcessManager::AllLocationsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-info")
    {
        location_info.yfilter = yfilter;
    }
    if(value_path == "ip-addr-info")
    {
        ip_addr_info.yfilter = yfilter;
    }
    if(value_path == "pm-start-time")
    {
        pm_start_time.yfilter = yfilter;
    }
    if(value_path == "mand-proc-down")
    {
        mand_proc_down.yfilter = yfilter;
    }
    if(value_path == "vmm-capi-up")
    {
        vmm_capi_up.yfilter = yfilter;
    }
    if(value_path == "wdmon-capi-up")
    {
        wdmon_capi_up.yfilter = yfilter;
    }
    if(value_path == "wdmon-capi-timestamp")
    {
        wdmon_capi_timestamp.yfilter = yfilter;
    }
    if(value_path == "wdmon-num-capi-connects")
    {
        wdmon_num_capi_connects.yfilter = yfilter;
    }
}

bool ProcessManager::AllLocationsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-info" || name == "ip-addr-info" || name == "pm-start-time" || name == "mand-proc-down" || name == "vmm-capi-up" || name == "wdmon-capi-up" || name == "wdmon-capi-timestamp" || name == "wdmon-num-capi-connects")
        return true;
    return false;
}

Pm::Pm()
    :
    pm(std::make_shared<Pm::Pm_>())
{
    pm->parent = this;

    yang_name = "pm"; yang_parent_name = "Cisco-IOS-XR-sysadmin-pm"; is_top_level_class = true; has_list_ancestor = false; 
}

Pm::~Pm()
{
}

bool Pm::has_data() const
{
    if (is_presence_container) return true;
    return (pm !=  nullptr && pm->has_data());
}

bool Pm::has_operation() const
{
    return is_set(yfilter)
	|| (pm !=  nullptr && pm->has_operation());
}

std::string Pm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-pm:pm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pm")
    {
        if(pm == nullptr)
        {
            pm = std::make_shared<Pm::Pm_>();
        }
        return pm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pm != nullptr)
    {
        _children["pm"] = pm;
    }

    return _children;
}

void Pm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Pm::clone_ptr() const
{
    return std::make_shared<Pm>();
}

std::string Pm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Pm::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Pm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pm")
        return true;
    return false;
}

Pm::Pm_::Pm_()
    :
    trace(this, {"buffer"})
{

    yang_name = "pm"; yang_parent_name = "pm"; is_top_level_class = false; has_list_ancestor = false; 
}

Pm::Pm_::~Pm_()
{
}

bool Pm::Pm_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Pm::Pm_::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pm::Pm_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-pm:pm/" << get_segment_path();
    return path_buffer.str();
}

std::string Pm::Pm_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pm::Pm_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pm::Pm_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Pm::Pm_::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pm::Pm_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pm::Pm_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pm::Pm_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pm::Pm_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Pm::Pm_::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "pm"; is_top_level_class = false; has_list_ancestor = false; 
}

Pm::Pm_::Trace::~Trace()
{
}

bool Pm::Pm_::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Pm::Pm_::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Pm::Pm_::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-pm:pm/pm/" << get_segment_path();
    return path_buffer.str();
}

std::string Pm::Pm_::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pm::Pm_::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pm::Pm_::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Pm::Pm_::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pm::Pm_::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pm::Pm_::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Pm::Pm_::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Pm::Pm_::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Pm::Pm_::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Pm::Pm_::Trace::Location::~Location()
{
}

bool Pm::Pm_::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Pm::Pm_::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Pm::Pm_::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pm::Pm_::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pm::Pm_::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Pm::Pm_::Trace::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pm::Pm_::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_options.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pm::Pm_::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pm::Pm_::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Pm::Pm_::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Pm::Pm_::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Pm::Pm_::Trace::Location::AllOptions::~AllOptions()
{
}

bool Pm::Pm_::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Pm::Pm_::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Pm::Pm_::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pm::Pm_::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pm::Pm_::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Pm::Pm_::Trace::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pm::Pm_::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_blocks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pm::Pm_::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Pm::Pm_::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Pm::Pm_::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Pm::Pm_::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Pm::Pm_::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Pm::Pm_::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Pm::Pm_::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Pm::Pm_::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pm::Pm_::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pm::Pm_::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pm::Pm_::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pm::Pm_::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Pm::Pm_::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Pm::Pm_::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

const Enum::YLeaf StartupMode::ON_BOOTUP {0, "ON-BOOTUP"};
const Enum::YLeaf StartupMode::ON_SELECTION {1, "ON-SELECTION"};
const Enum::YLeaf StartupMode::ON_DEMAND {2, "ON-DEMAND"};

const Enum::YLeaf ServiceRole::NONE {0, "NONE"};
const Enum::YLeaf ServiceRole::ACTIVE {1, "ACTIVE"};
const Enum::YLeaf ServiceRole::STANDBY {2, "STANDBY"};

const Enum::YLeaf ServiceState::SS_IDLE {0, "SS_IDLE"};
const Enum::YLeaf ServiceState::SS_RUNNING {1, "SS_RUNNING"};
const Enum::YLeaf ServiceState::SS_ACK_PENDING {2, "SS_ACK_PENDING"};

const Enum::YLeaf ProcessState::IDLE {0, "IDLE"};
const Enum::YLeaf ProcessState::RUNNING {1, "RUNNING"};
const Enum::YLeaf ProcessState::STOPPING {2, "STOPPING"};
const Enum::YLeaf ProcessState::STOPPED {3, "STOPPED"};
const Enum::YLeaf ProcessState::DESELECTING {4, "DESELECTING"};
const Enum::YLeaf ProcessState::DESELECTED {5, "DESELECTED"};

const Enum::YLeaf ServiceScope::SYSTEM {0, "SYSTEM"};
const Enum::YLeaf ServiceScope::RACK {1, "RACK"};


}
}

