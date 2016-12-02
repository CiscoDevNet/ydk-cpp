#ifndef _CISCO_IOS_XR_INFRA_INFRA_CLOCK_LINUX_CFG_
#define _CISCO_IOS_XR_INFRA_INFRA_CLOCK_LINUX_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_infra_clock_linux_cfg {

class Clock : public Entity
{
    public:
        Clock();
        ~Clock();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class TimeZone : public Entity
    {
        public:
            TimeZone();
            ~TimeZone();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value time_zone_name; //type: string
            Value area_name; //type: string




    }; // Clock::TimeZone


        std::unique_ptr<Cisco_IOS_XR_infra_infra_clock_linux_cfg::Clock::TimeZone> time_zone; // presence node


}; // Clock



}
}

#endif /* _CISCO_IOS_XR_INFRA_INFRA_CLOCK_LINUX_CFG_ */

