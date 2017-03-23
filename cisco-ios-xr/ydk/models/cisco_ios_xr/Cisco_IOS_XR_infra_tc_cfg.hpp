#ifndef _CISCO_IOS_XR_INFRA_TC_CFG_
#define _CISCO_IOS_XR_INFRA_TC_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_tc_cfg {

class TrafficCollector : public Entity
{
    public:
        TrafficCollector();
        ~TrafficCollector();

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


        YLeaf enable_traffic_collector; //type: empty

        class ExternalInterfaces; //type: TrafficCollector::ExternalInterfaces
        class Statistics; //type: TrafficCollector::Statistics

        std::shared_ptr<Cisco_IOS_XR_infra_tc_cfg::TrafficCollector::ExternalInterfaces> external_interfaces;
        std::shared_ptr<Cisco_IOS_XR_infra_tc_cfg::TrafficCollector::Statistics> statistics;


}; // TrafficCollector


class TrafficCollector::ExternalInterfaces : public Entity
{
    public:
        ExternalInterfaces();
        ~ExternalInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExternalInterface; //type: TrafficCollector::ExternalInterfaces::ExternalInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_cfg::TrafficCollector::ExternalInterfaces::ExternalInterface> > external_interface;


}; // TrafficCollector::ExternalInterfaces


class TrafficCollector::ExternalInterfaces::ExternalInterface : public Entity
{
    public:
        ExternalInterface();
        ~ExternalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf enable; //type: empty



}; // TrafficCollector::ExternalInterfaces::ExternalInterface


class TrafficCollector::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf history_size; //type: one of uint32, enumeration
        YLeaf collection_interval; //type: CollectIonIntervalEnum
        YLeaf enable_traffic_collector_statistics; //type: empty
        YLeaf history_timeout; //type: one of uint32, enumeration



}; // TrafficCollector::Statistics

class HistoryTimeoutEnum : public Enum
{
    public:
        static const Enum::YLeaf max;

};

class HistorySizeEnum : public Enum
{
    public:
        static const Enum::YLeaf max;

};

class CollectIonIntervalEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1_minute;
        static const Enum::YLeaf Y_2_minutes;
        static const Enum::YLeaf Y_3_minutes;
        static const Enum::YLeaf Y_4_minutes;
        static const Enum::YLeaf Y_5_minutes;
        static const Enum::YLeaf Y_6_minutes;
        static const Enum::YLeaf Y_10_minutes;
        static const Enum::YLeaf Y_12_minutes;
        static const Enum::YLeaf Y_15_minutes;
        static const Enum::YLeaf Y_20_minutes;
        static const Enum::YLeaf Y_30_minutes;
        static const Enum::YLeaf Y_60_minutes;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_TC_CFG_ */

