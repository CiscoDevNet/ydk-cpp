#ifndef _CISCO_IOS_XR_INFRA_INFRA_CLOCK_CFG_
#define _CISCO_IOS_XR_INFRA_INFRA_CLOCK_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_infra_clock_cfg {

class Clock : public Entity
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
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class SummerTime; //type: Clock::SummerTime
        class TimeZone; //type: Clock::TimeZone

        std::shared_ptr<Cisco_IOS_XR_infra_infra_clock_cfg::Clock::SummerTime> summer_time; // presence node
        std::shared_ptr<Cisco_IOS_XR_infra_infra_clock_cfg::Clock::TimeZone> time_zone; // presence node
        
}; // Clock


class Clock::SummerTime : public Entity
{
    public:
        SummerTime();
        ~SummerTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_zone_name; //type: string
        YLeaf mode; //type: ClockSummerTimeModeEnum
        YLeaf start_week_number_or_start_date; //type: uint32
        YLeaf start_weekday_or_start_year; //type: uint32
        YLeaf start_month; //type: ClockMonthEnum
        YLeaf start_hour; //type: uint32
        YLeaf start_minute; //type: uint32
        YLeaf end_week_number_or_end_date; //type: uint32
        YLeaf end_weekday_or_end_year; //type: uint32
        YLeaf end_month; //type: ClockMonthEnum
        YLeaf end_hour; //type: uint32
        YLeaf end_minute; //type: uint32
        YLeaf offset; //type: uint32

}; // Clock::SummerTime


class Clock::TimeZone : public Entity
{
    public:
        TimeZone();
        ~TimeZone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_zone_name; //type: string
        YLeaf hour_offset; //type: int32
        YLeaf minute_offset; //type: uint32

}; // Clock::TimeZone

class ClockMonthEnum : public Enum
{
    public:
        static const Enum::YLeaf january;
        static const Enum::YLeaf february;
        static const Enum::YLeaf march;
        static const Enum::YLeaf april;
        static const Enum::YLeaf may;
        static const Enum::YLeaf june;
        static const Enum::YLeaf july;
        static const Enum::YLeaf august;
        static const Enum::YLeaf september;
        static const Enum::YLeaf october;
        static const Enum::YLeaf november;
        static const Enum::YLeaf december;

};

class ClockSummerTimeModeEnum : public Enum
{
    public:
        static const Enum::YLeaf recurring;
        static const Enum::YLeaf date;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_INFRA_CLOCK_CFG_ */

