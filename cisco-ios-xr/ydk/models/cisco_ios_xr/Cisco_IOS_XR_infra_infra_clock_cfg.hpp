#ifndef _CISCO_IOS_XR_INFRA_INFRA_CLOCK_CFG_
#define _CISCO_IOS_XR_INFRA_INFRA_CLOCK_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_infra_clock_cfg {

class Clock : public ydk::Entity
{
    public:
        Clock();
        ~Clock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class SummerTime; //type: Clock::SummerTime
        class TimeZone; //type: Clock::TimeZone

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_infra_clock_cfg::Clock::SummerTime> summer_time; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_infra_clock_cfg::Clock::TimeZone> time_zone; // presence node
        
}; // Clock


class Clock::SummerTime : public ydk::Entity
{
    public:
        SummerTime();
        ~SummerTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time_zone_name; //type: string
        ydk::YLeaf mode; //type: ClockSummerTimeMode
        ydk::YLeaf start_week_number_or_start_date; //type: uint32
        ydk::YLeaf start_weekday_or_start_year; //type: uint32
        ydk::YLeaf start_month; //type: ClockMonth
        ydk::YLeaf start_hour; //type: uint32
        ydk::YLeaf start_minute; //type: uint32
        ydk::YLeaf end_week_number_or_end_date; //type: uint32
        ydk::YLeaf end_weekday_or_end_year; //type: uint32
        ydk::YLeaf end_month; //type: ClockMonth
        ydk::YLeaf end_hour; //type: uint32
        ydk::YLeaf end_minute; //type: uint32
        ydk::YLeaf offset; //type: uint32

}; // Clock::SummerTime


class Clock::TimeZone : public ydk::Entity
{
    public:
        TimeZone();
        ~TimeZone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time_zone_name; //type: string
        ydk::YLeaf hour_offset; //type: int32
        ydk::YLeaf minute_offset; //type: uint32

}; // Clock::TimeZone

class ClockMonth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf january;
        static const ydk::Enum::YLeaf february;
        static const ydk::Enum::YLeaf march;
        static const ydk::Enum::YLeaf april;
        static const ydk::Enum::YLeaf may;
        static const ydk::Enum::YLeaf june;
        static const ydk::Enum::YLeaf july;
        static const ydk::Enum::YLeaf august;
        static const ydk::Enum::YLeaf september;
        static const ydk::Enum::YLeaf october;
        static const ydk::Enum::YLeaf november;
        static const ydk::Enum::YLeaf december;

        static int get_enum_value(const std::string & name) {
            if (name == "january") return 0;
            if (name == "february") return 1;
            if (name == "march") return 2;
            if (name == "april") return 3;
            if (name == "may") return 4;
            if (name == "june") return 5;
            if (name == "july") return 6;
            if (name == "august") return 7;
            if (name == "september") return 8;
            if (name == "october") return 9;
            if (name == "november") return 10;
            if (name == "december") return 11;
            return -1;
        }
};

class ClockSummerTimeMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf recurring;
        static const ydk::Enum::YLeaf date;

        static int get_enum_value(const std::string & name) {
            if (name == "recurring") return 0;
            if (name == "date") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_INFRA_INFRA_CLOCK_CFG_ */

