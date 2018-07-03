#ifndef _CISCO_IOS_XE_PLATFORM_SOFTWARE_OPER_
#define _CISCO_IOS_XE_PLATFORM_SOFTWARE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_platform_software_oper {

class CiscoPlatformSoftware : public ydk::Entity
{
    public:
        CiscoPlatformSoftware();
        ~CiscoPlatformSoftware();

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

        class ControlProcesses; //type: CiscoPlatformSoftware::ControlProcesses
        class QFilesystem; //type: CiscoPlatformSoftware::QFilesystem

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::ControlProcesses> control_processes;
        ydk::YList q_filesystem;
        
}; // CiscoPlatformSoftware


class CiscoPlatformSoftware::ControlProcesses : public ydk::Entity
{
    public:
        ControlProcesses();
        ~ControlProcesses();

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

        class ControlProcess; //type: CiscoPlatformSoftware::ControlProcesses::ControlProcess

        ydk::YList control_process;
        
}; // CiscoPlatformSoftware::ControlProcesses


class CiscoPlatformSoftware::ControlProcesses::ControlProcess : public ydk::Entity
{
    public:
        ControlProcess();
        ~ControlProcess();

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

        ydk::YLeaf fru; //type: BFru
        ydk::YLeaf slotnum; //type: int16
        ydk::YLeaf baynum; //type: int16
        ydk::YLeaf chassisnum; //type: int16
        ydk::YLeaf control_process_status; //type: string
        ydk::YLeaf updated; //type: uint64
        class LoadAverageStats; //type: CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats
        class LoadAvgMinutes; //type: CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes
        class MemoryStats; //type: CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats
        class PerCoreStats; //type: CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats> load_average_stats;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes> load_avg_minutes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats> memory_stats;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats> per_core_stats;
        
}; // CiscoPlatformSoftware::ControlProcesses::ControlProcess


class CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats : public ydk::Entity
{
    public:
        LoadAverageStats();
        ~LoadAverageStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_average_status; //type: string

}; // CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAverageStats


class CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes : public ydk::Entity
{
    public:
        LoadAvgMinutes();
        ~LoadAvgMinutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LoadAvgMinute; //type: CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute

        ydk::YList load_avg_minute;
        
}; // CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes


class CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute : public ydk::Entity
{
    public:
        LoadAvgMinute();
        ~LoadAvgMinute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint64
        ydk::YLeaf average; //type: decimal64
        class Status; //type: CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status> status;
        
}; // CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute


class CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf condition; //type: string
        ydk::YLeaf threshold_status; //type: string
        ydk::YLeaf threshold_value; //type: decimal64

}; // CiscoPlatformSoftware::ControlProcesses::ControlProcess::LoadAvgMinutes::LoadAvgMinute::Status


class CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats : public ydk::Entity
{
    public:
        MemoryStats();
        ~MemoryStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf memory_status; //type: string
        ydk::YLeaf total; //type: uint64
        ydk::YLeaf used_number; //type: uint64
        ydk::YLeaf used_percent; //type: uint64
        ydk::YLeaf free_number; //type: uint64
        ydk::YLeaf free_percent; //type: uint64
        ydk::YLeaf available_number; //type: uint64
        ydk::YLeaf available_percent; //type: uint64
        ydk::YLeaf committed_number; //type: uint64
        ydk::YLeaf committed_percent; //type: uint8
        class Status; //type: CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_platform_software_oper::CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status> status;
        
}; // CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats


class CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf warning_threshold_percent; //type: uint32
        ydk::YLeaf critical_threshold_percent; //type: uint32

}; // CiscoPlatformSoftware::ControlProcesses::ControlProcess::MemoryStats::Status


class CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats : public ydk::Entity
{
    public:
        PerCoreStats();
        ~PerCoreStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerCoreStat; //type: CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat

        ydk::YList per_core_stat;
        
}; // CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats


class CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat : public ydk::Entity
{
    public:
        PerCoreStat();
        ~PerCoreStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint32
        ydk::YLeaf user; //type: decimal64
        ydk::YLeaf system; //type: decimal64
        ydk::YLeaf nice; //type: decimal64
        ydk::YLeaf idle; //type: decimal64
        ydk::YLeaf irq; //type: decimal64
        ydk::YLeaf sirq; //type: decimal64
        ydk::YLeaf io_wait; //type: decimal64

}; // CiscoPlatformSoftware::ControlProcesses::ControlProcess::PerCoreStats::PerCoreStat


class CiscoPlatformSoftware::QFilesystem : public ydk::Entity
{
    public:
        QFilesystem();
        ~QFilesystem();

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

        ydk::YLeaf fru; //type: BFru
        ydk::YLeaf slotnum; //type: int16
        ydk::YLeaf baynum; //type: int16
        ydk::YLeaf chassisnum; //type: int16
        class Partitions; //type: CiscoPlatformSoftware::QFilesystem::Partitions
        class CoreFiles; //type: CiscoPlatformSoftware::QFilesystem::CoreFiles

        ydk::YList partitions;
        ydk::YList core_files;
        
}; // CiscoPlatformSoftware::QFilesystem


class CiscoPlatformSoftware::QFilesystem::Partitions : public ydk::Entity
{
    public:
        Partitions();
        ~Partitions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf total_size; //type: uint64
        ydk::YLeaf used_size; //type: uint64

}; // CiscoPlatformSoftware::QFilesystem::Partitions


class CiscoPlatformSoftware::QFilesystem::CoreFiles : public ydk::Entity
{
    public:
        CoreFiles();
        ~CoreFiles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filename; //type: string
        ydk::YLeaf time; //type: string

}; // CiscoPlatformSoftware::QFilesystem::CoreFiles

class BFru : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf platform_fru_rp;
        static const ydk::Enum::YLeaf platform_fru_fp;
        static const ydk::Enum::YLeaf platform_fru_cc;
        static const ydk::Enum::YLeaf platform_fru_max;

};


}
}

#endif /* _CISCO_IOS_XE_PLATFORM_SOFTWARE_OPER_ */

