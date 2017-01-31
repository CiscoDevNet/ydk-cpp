#ifndef _CISCO_IOS_XR_WD_CFG_
#define _CISCO_IOS_XR_WD_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_wd_cfg {

class Watchdog : public Entity
{
    public:
        Watchdog();
        ~Watchdog();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf threshold_memory_switchover; //type: uint32
        YLeaf restart_deadlock_disable; //type: empty
        YLeaf monitor_qnet_timeout; //type: uint32
        YLeaf monitor_cpuhog_timeout; //type: uint32
        YLeaf monitor_procnto_timeout; //type: uint32
        YLeaf overload_notification; //type: empty
        YLeaf restart_cpuhog_disable; //type: empty
        YLeaf restart_memoryhog_disable; //type: empty
        YLeaf overload_throttle_timeout; //type: uint32

    class ThresholdMemory : public Entity
    {
        public:
            ThresholdMemory();
            ~ThresholdMemory();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf minor; //type: uint32
            YLeaf severe; //type: uint32
            YLeaf critical; //type: uint32



    }; // Watchdog::ThresholdMemory


        std::unique_ptr<Cisco_IOS_XR_wd_cfg::Watchdog::ThresholdMemory> threshold_memory;


}; // Watchdog



}
}

#endif /* _CISCO_IOS_XR_WD_CFG_ */

