#ifndef _CISCO_IOS_XR_WATCHD_CFG_
#define _CISCO_IOS_XR_WATCHD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_watchd_cfg {

class Watchdog : public Entity
{
    public:
        Watchdog();
        ~Watchdog();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf overload_notification; //type: empty
        YLeaf restart_deadlock_disable; //type: empty
        YLeaf restart_memoryhog_disable; //type: empty
        YLeaf overload_throttle_timeout; //type: uint32

        class ThresholdMemory; //type: Watchdog::ThresholdMemory

        std::shared_ptr<Cisco_IOS_XR_watchd_cfg::Watchdog::ThresholdMemory> threshold_memory;


}; // Watchdog


class Watchdog::ThresholdMemory : public Entity
{
    public:
        ThresholdMemory();
        ~ThresholdMemory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minor; //type: uint32
        YLeaf severe; //type: uint32
        YLeaf critical; //type: uint32



}; // Watchdog::ThresholdMemory

class Watchd : public Entity
{
    public:
        Watchd();
        ~Watchd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf timeout; //type: uint32



}; // Watchd


}
}

#endif /* _CISCO_IOS_XR_WATCHD_CFG_ */

