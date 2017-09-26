#ifndef _CISCO_IOS_XE_PROCESS_CPU_OPER_
#define _CISCO_IOS_XE_PROCESS_CPU_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_process_cpu_oper {

class CpuUsage : public ydk::Entity
{
    public:
        CpuUsage();
        ~CpuUsage();

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

        class CpuUtilization; //type: CpuUsage::CpuUtilization

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_process_cpu_oper::CpuUsage::CpuUtilization> cpu_utilization;
        
}; // CpuUsage


class CpuUsage::CpuUtilization : public ydk::Entity
{
    public:
        CpuUtilization();
        ~CpuUtilization();

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

        ydk::YLeaf five_seconds; //type: uint8
        ydk::YLeaf five_seconds_intr; //type: uint8
        ydk::YLeaf one_minute; //type: uint8
        ydk::YLeaf five_minutes; //type: uint8
        class CpuUsageProcesses; //type: CpuUsage::CpuUtilization::CpuUsageProcesses

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_process_cpu_oper::CpuUsage::CpuUtilization::CpuUsageProcesses> cpu_usage_processes;
        
}; // CpuUsage::CpuUtilization


class CpuUsage::CpuUtilization::CpuUsageProcesses : public ydk::Entity
{
    public:
        CpuUsageProcesses();
        ~CpuUsageProcesses();

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

        class CpuUsageProcess; //type: CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_process_cpu_oper::CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess> > cpu_usage_process;
        
}; // CpuUsage::CpuUtilization::CpuUsageProcesses


class CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess : public ydk::Entity
{
    public:
        CpuUsageProcess();
        ~CpuUsageProcess();

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

        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf tty; //type: uint16
        ydk::YLeaf total_run_time; //type: uint64
        ydk::YLeaf invocation_count; //type: uint32
        ydk::YLeaf avg_run_time; //type: uint64
        ydk::YLeaf five_seconds; //type: decimal64
        ydk::YLeaf one_minute; //type: decimal64
        ydk::YLeaf five_minutes; //type: decimal64

}; // CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess


}
}

#endif /* _CISCO_IOS_XE_PROCESS_CPU_OPER_ */

