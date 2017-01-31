#ifndef _CISCO_IOS_XR_ASR9K_SC_ENVMON_OPER_
#define _CISCO_IOS_XR_ASR9K_SC_ENVMON_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_sc_envmon_oper {

class EnvironmentalMonitoring : public Entity
{
    public:
        EnvironmentalMonitoring();
        ~EnvironmentalMonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Racks : public Entity
    {
        public:
            Racks();
            ~Racks();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Rack : public Entity
        {
            public:
                Rack();
                ~Rack();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf rack; //type: int32

            class Slots : public Entity
            {
                public:
                    Slots();
                    ~Slots();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Slot : public Entity
                {
                    public:
                        Slot();
                        ~Slot();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf slot; //type: string

                    class Modules : public Entity
                    {
                        public:
                            Modules();
                            ~Modules();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Module : public Entity
                        {
                            public:
                                Module();
                                ~Module();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf module; //type: string

                            class Power : public Entity
                            {
                                public:
                                    Power();
                                    ~Power();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class PowerBag : public Entity
                                {
                                    public:
                                        PowerBag();
                                        ~PowerBag();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf power_value; //type: int32
                                        YLeaf power_max_value; //type: int32
                                        YLeaf power_unit_multiplier; //type: uint32
                                        YLeaf power_accuracy; //type: uint32
                                        YLeaf power_measure_caliber; //type: uint32
                                        YLeaf power_current_type; //type: uint32
                                        YLeaf power_origin; //type: uint32
                                        YLeaf power_admin_state; //type: uint32
                                        YLeaf power_oper_state; //type: uint32
                                        YLeaf power_state_enter_reason; //type: string



                                }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag


                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power::PowerBag> power_bag;


                            }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power


                            class SensorTypes : public Entity
                            {
                                public:
                                    SensorTypes();
                                    ~SensorTypes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class SensorType : public Entity
                                {
                                    public:
                                        SensorType();
                                        ~SensorType();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf type; //type: string

                                    class SensorNames : public Entity
                                    {
                                        public:
                                            SensorNames();
                                            ~SensorNames();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class SensorName : public Entity
                                        {
                                            public:
                                                SensorName();
                                                ~SensorName();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf name; //type: string
                                                YLeaf value_brief; //type: int32

                                            class Thresholds : public Entity
                                            {
                                                public:
                                                    Thresholds();
                                                    ~Thresholds();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class Threshold : public Entity
                                                {
                                                    public:
                                                        Threshold();
                                                        ~Threshold();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf type; //type: string
                                                        YLeaf trap; //type: boolean
                                                        YLeaf value_brief; //type: int32

                                                    class ValueDetailed : public Entity
                                                    {
                                                        public:
                                                            ValueDetailed();
                                                            ~ValueDetailed();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf threshold_severity; //type: uint32
                                                            YLeaf threshold_relation; //type: uint32
                                                            YLeaf threshold_value; //type: uint32
                                                            YLeaf threshold_evaluation; //type: boolean
                                                            YLeaf threshold_notification_enabled; //type: boolean



                                                    }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold::ValueDetailed> value_detailed;


                                                }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds::Threshold> > threshold;


                                            }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds


                                            class ValueDetailed : public Entity
                                            {
                                                public:
                                                    ValueDetailed();
                                                    ~ValueDetailed();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf field_validity_bitmap; //type: uint32
                                                    YLeaf device_description; //type: string
                                                    YLeaf units; //type: string
                                                    YLeaf device_id; //type: uint32
                                                    YLeaf value_; //type: uint32
                                                    YLeaf alarm_type; //type: uint32
                                                    YLeaf data_type; //type: uint32
                                                    YLeaf scale; //type: uint32
                                                    YLeaf precision; //type: uint32
                                                    YLeaf status; //type: uint32
                                                    YLeaf age_time_stamp; //type: uint32
                                                    YLeaf update_rate; //type: uint32



                                            }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::Thresholds> thresholds;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName::ValueDetailed> value_detailed;


                                        }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames::SensorName> > sensor_name;


                                    }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType::SensorNames> sensor_names;


                                }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes::SensorType> > sensor_type;


                            }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes


                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::Power> power;
                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module::SensorTypes> sensor_types;


                        }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module


                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules::Module> > module;


                    }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules


                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot::Modules> modules;


                }; // EnvironmentalMonitoring::Racks::Rack::Slots::Slot


                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots::Slot> > slot;


            }; // EnvironmentalMonitoring::Racks::Rack::Slots


                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack::Slots> slots;


        }; // EnvironmentalMonitoring::Racks::Rack


            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks::Rack> > rack;


    }; // EnvironmentalMonitoring::Racks


        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring::Racks> racks;


}; // EnvironmentalMonitoring



}
}

#endif /* _CISCO_IOS_XR_ASR9K_SC_ENVMON_OPER_ */

