#ifndef _CISCO_IOS_XR_INFRA_INFRA_CLOCK_CFG_
#define _CISCO_IOS_XR_INFRA_INFRA_CLOCK_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_infra_clock_cfg {

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


    class SummerTime : public Entity
    {
        public:
            SummerTime();
            ~SummerTime();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value time_zone_name; //type: string
            Value mode; //type: ClockSummerTimeModeEnum
            Value start_week_number_or_start_date; //type: uint32
            Value start_weekday_or_start_year; //type: uint32
            Value start_month; //type: ClockMonthEnum
            Value start_hour; //type: uint32
            Value start_minute; //type: uint32
            Value end_week_number_or_end_date; //type: uint32
            Value end_weekday_or_end_year; //type: uint32
            Value end_month; //type: ClockMonthEnum
            Value end_hour; //type: uint32
            Value end_minute; //type: uint32
            Value offset; //type: uint32


            class ClockMonthEnum;
            class ClockSummerTimeModeEnum;
            class ClockMonthEnum;


    }; // Clock::SummerTime


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
            Value hour_offset; //type: int32
            Value minute_offset; //type: uint32




    }; // Clock::TimeZone


        std::unique_ptr<Cisco_IOS_XR_infra_infra_clock_cfg::Clock::SummerTime> summer_time; // presence node
        std::unique_ptr<Cisco_IOS_XR_infra_infra_clock_cfg::Clock::TimeZone> time_zone; // presence node


}; // Clock


class ClockMonthEnum : public Enum
{
    public:
        static const Enum::Value january;
        static const Enum::Value february;
        static const Enum::Value march;
        static const Enum::Value april;
        static const Enum::Value may;
        static const Enum::Value june;
        static const Enum::Value july;
        static const Enum::Value august;
        static const Enum::Value september;
        static const Enum::Value october;
        static const Enum::Value november;
        static const Enum::Value december;

};

class ClockSummerTimeModeEnum : public Enum
{
    public:
        static const Enum::Value recurring;
        static const Enum::Value date;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_INFRA_CLOCK_CFG_ */

