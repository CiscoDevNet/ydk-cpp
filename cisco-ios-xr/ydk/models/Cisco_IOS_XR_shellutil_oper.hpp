#ifndef _CISCO_IOS_XR_SHELLUTIL_OPER_
#define _CISCO_IOS_XR_SHELLUTIL_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_shellutil_oper {

class SystemTime : public Entity
{
    public:
        SystemTime();
        ~SystemTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


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
            Value year; //type: uint16
            Value month; //type: uint8
            Value day; //type: uint8
            Value hour; //type: uint8
            Value minute; //type: uint8
            Value second; //type: uint8
            Value millisecond; //type: uint16
            Value wday; //type: uint16
            Value time_zone; //type: string
            Value time_source; //type: TimeSourceEnum


            class TimeSourceEnum;


    }; // SystemTime::Clock


    class Uptime : public Entity
    {
        public:
            Uptime();
            ~Uptime();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value host_name; //type: string
            Value uptime; //type: uint32




    }; // SystemTime::Uptime


        std::unique_ptr<Cisco_IOS_XR_shellutil_oper::SystemTime::Clock> clock;
        std::unique_ptr<Cisco_IOS_XR_shellutil_oper::SystemTime::Uptime> uptime;


}; // SystemTime


class TimeSourceEnum : public Enum
{
    public:
        static const Enum::Value error;
        static const Enum::Value none;
        static const Enum::Value ntp;
        static const Enum::Value manual;
        static const Enum::Value calendar;

};


}
}

#endif /* _CISCO_IOS_XR_SHELLUTIL_OPER_ */

