#ifndef _CISCO_IOS_XR_SYSADMIN_PM_
#define _CISCO_IOS_XR_SYSADMIN_PM_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_pm {

class Processes : public ydk::Entity
{
    public:
        Processes();
        ~Processes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class AllLocations; //type: Processes::AllLocations

        ydk::YList all_locations;
        
}; // Processes


class Processes::AllLocations : public ydk::Entity
{
    public:
        AllLocations();
        ~AllLocations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location; //type: string
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf pcbs; //type: uint32
        class Name; //type: Processes::AllLocations::Name

        ydk::YList name;
        
}; // Processes::AllLocations


class Processes::AllLocations::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proc_name; //type: string
        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf path; //type: string
        ydk::YLeaf startup_file; //type: string
        ydk::YLeaf startup_mode; //type: StartupMode
        ydk::YLeaf heart_beat_timeout; //type: uint32
        ydk::YLeaf last_heart_beat_time; //type: string
        ydk::YLeaf max_restarts; //type: uint32
        ydk::YLeaf respawn_reset_timer; //type: uint32
        ydk::YLeaf mandatory; //type: boolean
        ydk::YLeaf maint_mode; //type: boolean
        ydk::YLeaf args; //type: string
        ydk::YLeaf proc_state; //type: ProcessState
        ydk::YLeaf pid; //type: int32
        ydk::YLeaf proc_aborted; //type: boolean
        ydk::YLeaf exit_status; //type: string
        ydk::YLeaf respawns; //type: int32
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf ready_time; //type: string
        ydk::YLeaf last_exit_time; //type: string
        class Services; //type: Processes::AllLocations::Name::Services

        ydk::YList services;
        
}; // Processes::AllLocations::Name


class Processes::AllLocations::Name::Services : public ydk::Entity
{
    public:
        Services();
        ~Services();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_name; //type: string
        ydk::YLeaf scope; //type: ServiceScope
        ydk::YLeaf redundancy; //type: boolean
        ydk::YLeaf ha_ready; //type: boolean
        ydk::YLeaf service_state; //type: ServiceState
        ydk::YLeaf ha_role; //type: ServiceRole
        ydk::YLeaf new_ha_role; //type: ServiceRole
        ydk::YLeaf selected; //type: boolean
        ydk::YLeaf ip1; //type: string
        ydk::YLeaf ip2; //type: string
        ydk::YLeaf svc_start_time; //type: string
        ydk::YLeaf svc_ready_time; //type: string
        ydk::YLeaf svc_haready_time; //type: string

}; // Processes::AllLocations::Name::Services

class ProcessManager : public ydk::Entity
{
    public:
        ProcessManager();
        ~ProcessManager();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class AllLocationsInfo; //type: ProcessManager::AllLocationsInfo

        ydk::YList all_locations_info;
        
}; // ProcessManager


class ProcessManager::AllLocationsInfo : public ydk::Entity
{
    public:
        AllLocationsInfo();
        ~AllLocationsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf location_info; //type: string
        ydk::YLeaf ip_addr_info; //type: string
        ydk::YLeaf pm_start_time; //type: string
        ydk::YLeaf mand_proc_down; //type: boolean
        ydk::YLeaf vmm_capi_up; //type: boolean
        ydk::YLeaf wdmon_capi_up; //type: boolean
        ydk::YLeaf wdmon_capi_timestamp; //type: string
        ydk::YLeaf wdmon_num_capi_connects; //type: uint32

}; // ProcessManager::AllLocationsInfo

class Pm : public ydk::Entity
{
    public:
        Pm();
        ~Pm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Pm_; //type: Pm::Pm_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_pm::Pm::Pm_> pm;
        
}; // Pm


class Pm::Pm_ : public ydk::Entity
{
    public:
        Pm_();
        ~Pm_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Trace; //type: Pm::Pm_::Trace

        ydk::YList trace;
        
}; // Pm::Pm_


class Pm::Pm_::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf buffer; //type: string
        class Location; //type: Pm::Pm_::Trace::Location

        ydk::YList location;
        
}; // Pm::Pm_::Trace


class Pm::Pm_::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Pm::Pm_::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Pm::Pm_::Trace::Location


class Pm::Pm_::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Pm::Pm_::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Pm::Pm_::Trace::Location::AllOptions


class Pm::Pm_::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Pm::Pm_::Trace::Location::AllOptions::TraceBlocks

class StartupMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ON_BOOTUP;
        static const ydk::Enum::YLeaf ON_SELECTION;
        static const ydk::Enum::YLeaf ON_DEMAND;

};

class ProcessState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IDLE;
        static const ydk::Enum::YLeaf RUNNING;
        static const ydk::Enum::YLeaf STOPPING;
        static const ydk::Enum::YLeaf STOPPED;
        static const ydk::Enum::YLeaf DESELECTING;
        static const ydk::Enum::YLeaf DESELECTED;

};

class ServiceScope : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SYSTEM;
        static const ydk::Enum::YLeaf RACK;

};

class ServiceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SS_IDLE;
        static const ydk::Enum::YLeaf SS_RUNNING;
        static const ydk::Enum::YLeaf SS_ACK_PENDING;

};

class ServiceRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf NONE;
        static const ydk::Enum::YLeaf ACTIVE;
        static const ydk::Enum::YLeaf STANDBY;

};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_PM_ */

