#ifndef _CISCO_IOS_XR_INFRA_TC_CFG_
#define _CISCO_IOS_XR_INFRA_TC_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_tc_cfg {

class TrafficCollector : public ydk::Entity
{
    public:
        TrafficCollector();
        ~TrafficCollector();

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

        ydk::YLeaf enable_traffic_collector; //type: empty
        class ExternalInterfaces; //type: TrafficCollector::ExternalInterfaces
        class Statistics; //type: TrafficCollector::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_tc_cfg::TrafficCollector::ExternalInterfaces> external_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_tc_cfg::TrafficCollector::Statistics> statistics;
        
}; // TrafficCollector


class TrafficCollector::ExternalInterfaces : public ydk::Entity
{
    public:
        ExternalInterfaces();
        ~ExternalInterfaces();

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

        class ExternalInterface; //type: TrafficCollector::ExternalInterfaces::ExternalInterface

        ydk::YList external_interface;
        
}; // TrafficCollector::ExternalInterfaces


class TrafficCollector::ExternalInterfaces::ExternalInterface : public ydk::Entity
{
    public:
        ExternalInterface();
        ~ExternalInterface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf enable; //type: empty

}; // TrafficCollector::ExternalInterfaces::ExternalInterface


class TrafficCollector::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        ydk::YLeaf history_size; //type: one of uint32, enumeration
        ydk::YLeaf collection_interval; //type: CollectIonInterval
        ydk::YLeaf enable_traffic_collector_statistics; //type: empty
        ydk::YLeaf history_timeout; //type: one of uint32, enumeration

}; // TrafficCollector::Statistics

class HistoryTimeout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max;

        static int get_enum_value(const std::string & name) {
            if (name == "max") return 720;
            return -1;
        }
};

class HistorySize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max;

        static int get_enum_value(const std::string & name) {
            if (name == "max") return 10;
            return -1;
        }
};

class CollectIonInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1_minute;
        static const ydk::Enum::YLeaf Y_2_minutes;
        static const ydk::Enum::YLeaf Y_3_minutes;
        static const ydk::Enum::YLeaf Y_4_minutes;
        static const ydk::Enum::YLeaf Y_5_minutes;
        static const ydk::Enum::YLeaf Y_6_minutes;
        static const ydk::Enum::YLeaf Y_10_minutes;
        static const ydk::Enum::YLeaf Y_12_minutes;
        static const ydk::Enum::YLeaf Y_15_minutes;
        static const ydk::Enum::YLeaf Y_20_minutes;
        static const ydk::Enum::YLeaf Y_30_minutes;
        static const ydk::Enum::YLeaf Y_60_minutes;

        static int get_enum_value(const std::string & name) {
            if (name == "1-minute") return 1;
            if (name == "2-minutes") return 2;
            if (name == "3-minutes") return 3;
            if (name == "4-minutes") return 4;
            if (name == "5-minutes") return 5;
            if (name == "6-minutes") return 6;
            if (name == "10-minutes") return 10;
            if (name == "12-minutes") return 12;
            if (name == "15-minutes") return 15;
            if (name == "20-minutes") return 20;
            if (name == "30-minutes") return 30;
            if (name == "60-minutes") return 60;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_INFRA_TC_CFG_ */

