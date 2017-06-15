#ifndef _CISCO_IOS_XE_PROCESS_CPU_OPER_
#define _CISCO_IOS_XE_PROCESS_CPU_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_process_cpu_oper {

class CpuUsage : public Entity
{
    public:
        CpuUsage();
        ~CpuUsage();

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

        class CpuUtilization; //type: CpuUsage::CpuUtilization

        std::shared_ptr<Cisco_IOS_XE_process_cpu_oper::CpuUsage::CpuUtilization> cpu_utilization_;
        
}; // CpuUsage


class CpuUsage::CpuUtilization : public Entity
{
    public:
        CpuUtilization();
        ~CpuUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf five_seconds; //type: uint8
        YLeaf five_seconds_intr; //type: uint8
        YLeaf one_minute; //type: uint8
        YLeaf five_minutes; //type: uint8
        class CpuUsageProcesses; //type: CpuUsage::CpuUtilization::CpuUsageProcesses

        std::shared_ptr<Cisco_IOS_XE_process_cpu_oper::CpuUsage::CpuUtilization::CpuUsageProcesses> cpu_usage_processes_;
        
}; // CpuUsage::CpuUtilization


class CpuUsage::CpuUtilization::CpuUsageProcesses : public Entity
{
    public:
        CpuUsageProcesses();
        ~CpuUsageProcesses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CpuUsageProcess; //type: CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess

        std::vector<std::shared_ptr<Cisco_IOS_XE_process_cpu_oper::CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess> > cpu_usage_process_;
        
}; // CpuUsage::CpuUtilization::CpuUsageProcesses


class CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess : public Entity
{
    public:
        CpuUsageProcess();
        ~CpuUsageProcess();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pid; //type: uint32
        YLeaf name; //type: string
        YLeaf tty; //type: uint16
        YLeaf total_run_time; //type: uint64
        YLeaf invocation_count; //type: uint32
        YLeaf avg_run_time; //type: uint64
        YLeaf five_seconds; //type: decimal64
        YLeaf one_minute; //type: decimal64
        YLeaf five_minutes; //type: decimal64

}; // CpuUsage::CpuUtilization::CpuUsageProcesses::CpuUsageProcess


}
}

#endif /* _CISCO_IOS_XE_PROCESS_CPU_OPER_ */

