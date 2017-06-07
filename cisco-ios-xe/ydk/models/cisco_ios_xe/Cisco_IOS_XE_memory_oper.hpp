#ifndef _CISCO_IOS_XE_MEMORY_OPER_
#define _CISCO_IOS_XE_MEMORY_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_memory_oper {

class MemoryStats : public Entity
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
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class MemoryStat; //type: MemoryStats::MemoryStat

        std::vector<std::shared_ptr<Cisco_IOS_XE_memory_oper::MemoryStats::MemoryStat> > memory_stat;
        
}; // MemoryStats


class MemoryStats::MemoryStat : public Entity
{
    public:
        MemoryStat();
        ~MemoryStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf total_memory; //type: uint64
        YLeaf used_memory; //type: uint64
        YLeaf free_memory; //type: uint64
        YLeaf lowest_usage; //type: uint64
        YLeaf highest_usage; //type: uint64

}; // MemoryStats::MemoryStat


}
}

#endif /* _CISCO_IOS_XE_MEMORY_OPER_ */

