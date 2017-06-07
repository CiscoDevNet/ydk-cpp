#ifndef _CISCO_IOS_XR_WDSYSMON_FD_OPER_
#define _CISCO_IOS_XR_WDSYSMON_FD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_wdsysmon_fd_oper {

class SystemMonitoring : public Entity
{
    public:
        SystemMonitoring();
        ~SystemMonitoring();

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

        class CpuUtilization; //type: SystemMonitoring::CpuUtilization

        std::vector<std::shared_ptr<Cisco_IOS_XR_wdsysmon_fd_oper::SystemMonitoring::CpuUtilization> > cpu_utilization;
        
}; // SystemMonitoring


class SystemMonitoring::CpuUtilization : public Entity
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

        YLeaf node_name; //type: string
        YLeaf total_cpu_one_minute; //type: uint32
        YLeaf total_cpu_five_minute; //type: uint32
        YLeaf total_cpu_fifteen_minute; //type: uint32
        class ProcessCpu; //type: SystemMonitoring::CpuUtilization::ProcessCpu

        std::vector<std::shared_ptr<Cisco_IOS_XR_wdsysmon_fd_oper::SystemMonitoring::CpuUtilization::ProcessCpu> > process_cpu;
        
}; // SystemMonitoring::CpuUtilization


class SystemMonitoring::CpuUtilization::ProcessCpu : public Entity
{
    public:
        ProcessCpu();
        ~ProcessCpu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process_name; //type: string
        YLeaf process_id; //type: uint32
        YLeaf process_cpu_one_minute; //type: uint32
        YLeaf process_cpu_five_minute; //type: uint32
        YLeaf process_cpu_fifteen_minute; //type: uint32

}; // SystemMonitoring::CpuUtilization::ProcessCpu


}
}

#endif /* _CISCO_IOS_XR_WDSYSMON_FD_OPER_ */

