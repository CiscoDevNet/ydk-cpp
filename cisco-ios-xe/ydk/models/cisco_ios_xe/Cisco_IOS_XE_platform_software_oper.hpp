#ifndef _CISCO_IOS_XE_PLATFORM_SOFTWARE_OPER_
#define _CISCO_IOS_XE_PLATFORM_SOFTWARE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_platform_software_oper {

class CiscoPlatformSoftware : public Entity
{
    public:
        CiscoPlatformSoftware();
        ~CiscoPlatformSoftware();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class PlatformSoftwareStatusControlProcesses; //type: CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses
        class PlatformSoftwareInterfaceRpActiveBriefForwarding; //type: CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding

        std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding> platform_software_interface_rp_active_brief_forwarding;
        std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses> platform_software_status_control_processes;
        
}; // CiscoPlatformSoftware


class CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses : public Entity
{
    public:
        PlatformSoftwareStatusControlProcesses();
        ~PlatformSoftwareStatusControlProcesses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ControlProcesses; //type: CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses

        std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses> control_processes;
        
}; // CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses


class CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses : public Entity
{
    public:
        ControlProcesses();
        ~ControlProcesses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ControlProcess; //type: CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess

        std::vector<std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess> > control_process;
        
}; // CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses


class CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess : public Entity
{
    public:
        ControlProcess();
        ~ControlProcess();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf status; //type: string
        YLeaf updated; //type: uint64
        class LoadAverageStats; //type: CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats
        class LoadAvgMinutes; //type: CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes
        class MemoryStats; //type: CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats
        class PerCoreStats; //type: CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats

        std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats> load_average_stats;
        std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes> load_avg_minutes;
        std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats> memory_stats;
        std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats> per_core_stats;
        
}; // CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess


class CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats : public Entity
{
    public:
        LoadAverageStats();
        ~LoadAverageStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_average_status; //type: string

}; // CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAverageStats


class CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes : public Entity
{
    public:
        LoadAvgMinutes();
        ~LoadAvgMinutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LoadAvgMinute; //type: CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute

        std::vector<std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute> > load_avg_minute;
        
}; // CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes


class CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute : public Entity
{
    public:
        LoadAvgMinute();
        ~LoadAvgMinute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint64
        YLeaf average; //type: string
        class Status; //type: CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status

        std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status> status;
        
}; // CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute


class CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf condition; //type: string
        YLeaf threshold_status; //type: string
        YLeaf threshold_value; //type: string

}; // CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status


class CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats : public Entity
{
    public:
        MemoryStats();
        ~MemoryStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf memory_status; //type: string
        YLeaf total; //type: uint64
        YLeaf used_number; //type: uint64
        YLeaf used_percent; //type: uint64
        YLeaf free_number; //type: uint64
        YLeaf free_percent; //type: uint64
        YLeaf available_number; //type: uint64
        YLeaf available_percent; //type: uint64
        YLeaf committed_number; //type: uint64
        YLeaf committed_percent; //type: uint8
        class Status; //type: CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status

        std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status> status;
        
}; // CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats


class CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf condition; //type: string
        YLeaf threshold_status; //type: string
        YLeaf threshold_value_percent; //type: uint64

}; // CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::MemoryStats::Status


class CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats : public Entity
{
    public:
        PerCoreStats();
        ~PerCoreStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PerCoreStat; //type: CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat

        std::vector<std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat> > per_core_stat;
        
}; // CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats


class CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat : public Entity
{
    public:
        PerCoreStat();
        ~PerCoreStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf user; //type: string
        YLeaf system; //type: string
        YLeaf nice; //type: string
        YLeaf idle; //type: string
        YLeaf irq; //type: string
        YLeaf sirq; //type: string
        YLeaf io_wait; //type: string

}; // CiscoPlatformSoftware::PlatformSoftwareStatusControlProcesses::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat


class CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding : public Entity
{
    public:
        PlatformSoftwareInterfaceRpActiveBriefForwarding();
        ~PlatformSoftwareInterfaceRpActiveBriefForwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class XosInterfaces; //type: CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces

        std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces> xos_interfaces;
        
}; // CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding


class CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces : public Entity
{
    public:
        XosInterfaces();
        ~XosInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class XosInterface; //type: CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface> > xos_interface;
        
}; // CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces


class CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface : public Entity
{
    public:
        XosInterface();
        ~XosInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf id; //type: uint64
        YLeaf qfp_id; //type: uint64

}; // CiscoPlatformSoftware::PlatformSoftwareInterfaceRpActiveBriefForwarding::XosInterfaces::XosInterface


}
}

#endif /* _CISCO_IOS_XE_PLATFORM_SOFTWARE_OPER_ */

