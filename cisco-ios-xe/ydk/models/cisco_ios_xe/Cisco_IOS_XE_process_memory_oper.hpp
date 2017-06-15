#ifndef _CISCO_IOS_XE_PROCESS_MEMORY_OPER_
#define _CISCO_IOS_XE_PROCESS_MEMORY_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_process_memory_oper {

class MemoryUsageProcesses : public Entity
{
    public:
        MemoryUsageProcesses();
        ~MemoryUsageProcesses();

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

        class MemoryUsageProcess; //type: MemoryUsageProcesses::MemoryUsageProcess

        std::vector<std::shared_ptr<Cisco_IOS_XE_process_memory_oper::MemoryUsageProcesses::MemoryUsageProcess> > memory_usage_process_;
        
}; // MemoryUsageProcesses


class MemoryUsageProcesses::MemoryUsageProcess : public Entity
{
    public:
        MemoryUsageProcess();
        ~MemoryUsageProcess();

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
        YLeaf allocated_memory; //type: uint64
        YLeaf freed_memory; //type: uint64
        YLeaf holding_memory; //type: uint64
        YLeaf get_buffers; //type: uint32
        YLeaf ret_buffers; //type: uint32

}; // MemoryUsageProcesses::MemoryUsageProcess


}
}

#endif /* _CISCO_IOS_XE_PROCESS_MEMORY_OPER_ */

