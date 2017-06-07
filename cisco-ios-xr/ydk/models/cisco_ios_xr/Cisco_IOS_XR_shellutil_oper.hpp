#ifndef _CISCO_IOS_XR_SHELLUTIL_OPER_
#define _CISCO_IOS_XR_SHELLUTIL_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_shellutil_oper {

class SystemTime : public Entity
{
    public:
        SystemTime();
        ~SystemTime();

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

        class Clock; //type: SystemTime::Clock
        class Uptime; //type: SystemTime::Uptime

        std::shared_ptr<Cisco_IOS_XR_shellutil_oper::SystemTime::Clock> clock;
        std::shared_ptr<Cisco_IOS_XR_shellutil_oper::SystemTime::Uptime> uptime;
        
}; // SystemTime


class SystemTime::Clock : public Entity
{
    public:
        Clock();
        ~Clock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf year; //type: uint16
        YLeaf month; //type: uint8
        YLeaf day; //type: uint8
        YLeaf hour; //type: uint8
        YLeaf minute; //type: uint8
        YLeaf second; //type: uint8
        YLeaf millisecond; //type: uint16
        YLeaf wday; //type: uint16
        YLeaf time_zone; //type: string
        YLeaf time_source; //type: TimeSourceEnum

}; // SystemTime::Clock


class SystemTime::Uptime : public Entity
{
    public:
        Uptime();
        ~Uptime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host_name; //type: string
        YLeaf uptime; //type: uint32

}; // SystemTime::Uptime

class TimeSourceEnum : public Enum
{
    public:
        static const Enum::YLeaf error;
        static const Enum::YLeaf none;
        static const Enum::YLeaf ntp;
        static const Enum::YLeaf manual;
        static const Enum::YLeaf calendar;

};


}
}

#endif /* _CISCO_IOS_XR_SHELLUTIL_OPER_ */

