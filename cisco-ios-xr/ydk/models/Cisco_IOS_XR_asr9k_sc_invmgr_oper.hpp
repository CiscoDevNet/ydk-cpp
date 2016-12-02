#ifndef _CISCO_IOS_XR_ASR9K_SC_INVMGR_OPER_
#define _CISCO_IOS_XR_ASR9K_SC_INVMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_sc_invmgr_oper {

class Inventory : public Entity
{
    public:
        Inventory();
        ~Inventory();

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
                Value number; //type: int32


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
                        Value number; //type: int32


                    class Cards : public Entity
                    {
                        public:
                            Cards();
                            ~Cards();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Card : public Entity
                        {
                            public:
                                Card();
                                ~Card();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value number; //type: int32


                            class SubSlots : public Entity
                            {
                                public:
                                    SubSlots();
                                    ~SubSlots();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class SubSlot : public Entity
                                {
                                    public:
                                        SubSlot();
                                        ~SubSlot();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value number; //type: int32


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


                                        class Sensors : public Entity
                                        {
                                            public:
                                                Sensors();
                                                ~Sensors();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class Sensor : public Entity
                                            {
                                                public:
                                                    Sensor();
                                                    ~Sensor();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value number; //type: int32


                                                class BasicAttributes : public Entity
                                                {
                                                    public:
                                                        BasicAttributes();
                                                        ~BasicAttributes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class BasicInfo : public Entity
                                                    {
                                                        public:
                                                            BasicInfo();
                                                            ~BasicInfo();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value description; //type: string
                                                            Value vendor_type; //type: string
                                                            Value name; //type: string
                                                            Value hardware_revision; //type: string
                                                            Value firmware_revision; //type: string
                                                            Value software_revision; //type: string
                                                            Value chip_hardware_revision; //type: string
                                                            Value serial_number; //type: string
                                                            Value manufacturer_name; //type: string
                                                            Value model_name; //type: string
                                                            Value asset_id_str; //type: string
                                                            Value asset_identification; //type: int32
                                                            Value is_field_replaceable_unit; //type: boolean
                                                            Value manufacturer_asset_tags; //type: int32
                                                            Value composite_class_code; //type: int32
                                                            Value memory_size; //type: int32
                                                            Value environmental_monitor_path; //type: string
                                                            Value alias; //type: string
                                                            Value group_flag; //type: boolean
                                                            Value new_deviation_number; //type: int32
                                                            Value physical_layer_interface_module_type; //type: int32
                                                            Value unrecognized_fru; //type: boolean
                                                            Value redundancystate; //type: int32
                                                            Value ceport; //type: boolean
                                                            Value xr_scoped; //type: boolean




                                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo


                                                    class FruInfo : public Entity
                                                    {
                                                        public:
                                                            FruInfo();
                                                            ~FruInfo();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value card_administrative_state; //type: int32
                                                            Value power_administrative_state; //type: int32
                                                            Value card_operational_state; //type: InvCardStateEnum
                                                            Value card_monitor_state; //type: int32
                                                            Value card_reset_reason; //type: CardResetReasonEnum
                                                            Value power_current_measurement; //type: int32
                                                            Value power_operational_state; //type: InvCardStateEnum


                                                        class LastOperationalStateChange : public Entity
                                                        {
                                                            public:
                                                                LastOperationalStateChange();
                                                                ~LastOperationalStateChange();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;
                                                                Value time_in_seconds; //type: int32
                                                                Value time_in_nano_seconds; //type: int32




                                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange


                                                        class CardUpTime : public Entity
                                                        {
                                                            public:
                                                                CardUpTime();
                                                                ~CardUpTime();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;
                                                                Value time_in_seconds; //type: int32
                                                                Value time_in_nano_seconds; //type: int32




                                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime


                                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
                                                            class InvCardStateEnum;
                                                            class CardResetReasonEnum;
                                                            class InvCardStateEnum;


                                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo> basic_info;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo> fru_info;


                                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes> basic_attributes;


                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor> > sensor;


                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors


                                        class PortSlots : public Entity
                                        {
                                            public:
                                                PortSlots();
                                                ~PortSlots();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class PortSlot : public Entity
                                            {
                                                public:
                                                    PortSlot();
                                                    ~PortSlot();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value number; //type: int32


                                                class Port : public Entity
                                                {
                                                    public:
                                                        Port();
                                                        ~Port();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class BasicAttributes : public Entity
                                                    {
                                                        public:
                                                            BasicAttributes();
                                                            ~BasicAttributes();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                        class BasicInfo : public Entity
                                                        {
                                                            public:
                                                                BasicInfo();
                                                                ~BasicInfo();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;
                                                                Value description; //type: string
                                                                Value vendor_type; //type: string
                                                                Value name; //type: string
                                                                Value hardware_revision; //type: string
                                                                Value firmware_revision; //type: string
                                                                Value software_revision; //type: string
                                                                Value chip_hardware_revision; //type: string
                                                                Value serial_number; //type: string
                                                                Value manufacturer_name; //type: string
                                                                Value model_name; //type: string
                                                                Value asset_id_str; //type: string
                                                                Value asset_identification; //type: int32
                                                                Value is_field_replaceable_unit; //type: boolean
                                                                Value manufacturer_asset_tags; //type: int32
                                                                Value composite_class_code; //type: int32
                                                                Value memory_size; //type: int32
                                                                Value environmental_monitor_path; //type: string
                                                                Value alias; //type: string
                                                                Value group_flag; //type: boolean
                                                                Value new_deviation_number; //type: int32
                                                                Value physical_layer_interface_module_type; //type: int32
                                                                Value unrecognized_fru; //type: boolean
                                                                Value redundancystate; //type: int32
                                                                Value ceport; //type: boolean
                                                                Value xr_scoped; //type: boolean




                                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo


                                                        class FruInfo : public Entity
                                                        {
                                                            public:
                                                                FruInfo();
                                                                ~FruInfo();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;
                                                                Value card_administrative_state; //type: int32
                                                                Value power_administrative_state; //type: int32
                                                                Value card_operational_state; //type: InvCardStateEnum
                                                                Value card_monitor_state; //type: int32
                                                                Value card_reset_reason; //type: CardResetReasonEnum
                                                                Value power_current_measurement; //type: int32
                                                                Value power_operational_state; //type: InvCardStateEnum


                                                            class LastOperationalStateChange : public Entity
                                                            {
                                                                public:
                                                                    LastOperationalStateChange();
                                                                    ~LastOperationalStateChange();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value time_in_seconds; //type: int32
                                                                    Value time_in_nano_seconds; //type: int32




                                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange


                                                            class CardUpTime : public Entity
                                                            {
                                                                public:
                                                                    CardUpTime();
                                                                    ~CardUpTime();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value time_in_seconds; //type: int32
                                                                    Value time_in_nano_seconds; //type: int32




                                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime


                                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
                                                                class InvCardStateEnum;
                                                                class CardResetReasonEnum;
                                                                class InvCardStateEnum;


                                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo


                                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo> basic_info;
                                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo> fru_info;


                                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes> basic_attributes;


                                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port


                                                class BasicAttributes : public Entity
                                                {
                                                    public:
                                                        BasicAttributes();
                                                        ~BasicAttributes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class BasicInfo : public Entity
                                                    {
                                                        public:
                                                            BasicInfo();
                                                            ~BasicInfo();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value description; //type: string
                                                            Value vendor_type; //type: string
                                                            Value name; //type: string
                                                            Value hardware_revision; //type: string
                                                            Value firmware_revision; //type: string
                                                            Value software_revision; //type: string
                                                            Value chip_hardware_revision; //type: string
                                                            Value serial_number; //type: string
                                                            Value manufacturer_name; //type: string
                                                            Value model_name; //type: string
                                                            Value asset_id_str; //type: string
                                                            Value asset_identification; //type: int32
                                                            Value is_field_replaceable_unit; //type: boolean
                                                            Value manufacturer_asset_tags; //type: int32
                                                            Value composite_class_code; //type: int32
                                                            Value memory_size; //type: int32
                                                            Value environmental_monitor_path; //type: string
                                                            Value alias; //type: string
                                                            Value group_flag; //type: boolean
                                                            Value new_deviation_number; //type: int32
                                                            Value physical_layer_interface_module_type; //type: int32
                                                            Value unrecognized_fru; //type: boolean
                                                            Value redundancystate; //type: int32
                                                            Value ceport; //type: boolean
                                                            Value xr_scoped; //type: boolean




                                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo


                                                    class FruInfo : public Entity
                                                    {
                                                        public:
                                                            FruInfo();
                                                            ~FruInfo();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value card_administrative_state; //type: int32
                                                            Value power_administrative_state; //type: int32
                                                            Value card_operational_state; //type: InvCardStateEnum
                                                            Value card_monitor_state; //type: int32
                                                            Value card_reset_reason; //type: CardResetReasonEnum
                                                            Value power_current_measurement; //type: int32
                                                            Value power_operational_state; //type: InvCardStateEnum


                                                        class LastOperationalStateChange : public Entity
                                                        {
                                                            public:
                                                                LastOperationalStateChange();
                                                                ~LastOperationalStateChange();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;
                                                                Value time_in_seconds; //type: int32
                                                                Value time_in_nano_seconds; //type: int32




                                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange


                                                        class CardUpTime : public Entity
                                                        {
                                                            public:
                                                                CardUpTime();
                                                                ~CardUpTime();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;
                                                                Value time_in_seconds; //type: int32
                                                                Value time_in_nano_seconds; //type: int32




                                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime


                                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
                                                            class InvCardStateEnum;
                                                            class CardResetReasonEnum;
                                                            class InvCardStateEnum;


                                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo> basic_info;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo> fru_info;


                                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes> basic_attributes;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port> port;


                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot> > port_slot;


                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots


                                        class BasicAttributes : public Entity
                                        {
                                            public:
                                                BasicAttributes();
                                                ~BasicAttributes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class BasicInfo : public Entity
                                            {
                                                public:
                                                    BasicInfo();
                                                    ~BasicInfo();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value description; //type: string
                                                    Value vendor_type; //type: string
                                                    Value name; //type: string
                                                    Value hardware_revision; //type: string
                                                    Value firmware_revision; //type: string
                                                    Value software_revision; //type: string
                                                    Value chip_hardware_revision; //type: string
                                                    Value serial_number; //type: string
                                                    Value manufacturer_name; //type: string
                                                    Value model_name; //type: string
                                                    Value asset_id_str; //type: string
                                                    Value asset_identification; //type: int32
                                                    Value is_field_replaceable_unit; //type: boolean
                                                    Value manufacturer_asset_tags; //type: int32
                                                    Value composite_class_code; //type: int32
                                                    Value memory_size; //type: int32
                                                    Value environmental_monitor_path; //type: string
                                                    Value alias; //type: string
                                                    Value group_flag; //type: boolean
                                                    Value new_deviation_number; //type: int32
                                                    Value physical_layer_interface_module_type; //type: int32
                                                    Value unrecognized_fru; //type: boolean
                                                    Value redundancystate; //type: int32
                                                    Value ceport; //type: boolean
                                                    Value xr_scoped; //type: boolean




                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo


                                            class FruInfo : public Entity
                                            {
                                                public:
                                                    FruInfo();
                                                    ~FruInfo();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value card_administrative_state; //type: int32
                                                    Value power_administrative_state; //type: int32
                                                    Value card_operational_state; //type: InvCardStateEnum
                                                    Value card_monitor_state; //type: int32
                                                    Value card_reset_reason; //type: CardResetReasonEnum
                                                    Value power_current_measurement; //type: int32
                                                    Value power_operational_state; //type: InvCardStateEnum


                                                class LastOperationalStateChange : public Entity
                                                {
                                                    public:
                                                        LastOperationalStateChange();
                                                        ~LastOperationalStateChange();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value time_in_seconds; //type: int32
                                                        Value time_in_nano_seconds; //type: int32




                                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange


                                                class CardUpTime : public Entity
                                                {
                                                    public:
                                                        CardUpTime();
                                                        ~CardUpTime();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value time_in_seconds; //type: int32
                                                        Value time_in_nano_seconds; //type: int32




                                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
                                                    class InvCardStateEnum;
                                                    class CardResetReasonEnum;
                                                    class InvCardStateEnum;


                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo> basic_info;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo> fru_info;


                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes> basic_attributes;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots> port_slots;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors> sensors;


                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module


                                    class BasicAttributes : public Entity
                                    {
                                        public:
                                            BasicAttributes();
                                            ~BasicAttributes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class BasicInfo : public Entity
                                        {
                                            public:
                                                BasicInfo();
                                                ~BasicInfo();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value description; //type: string
                                                Value vendor_type; //type: string
                                                Value name; //type: string
                                                Value hardware_revision; //type: string
                                                Value firmware_revision; //type: string
                                                Value software_revision; //type: string
                                                Value chip_hardware_revision; //type: string
                                                Value serial_number; //type: string
                                                Value manufacturer_name; //type: string
                                                Value model_name; //type: string
                                                Value asset_id_str; //type: string
                                                Value asset_identification; //type: int32
                                                Value is_field_replaceable_unit; //type: boolean
                                                Value manufacturer_asset_tags; //type: int32
                                                Value composite_class_code; //type: int32
                                                Value memory_size; //type: int32
                                                Value environmental_monitor_path; //type: string
                                                Value alias; //type: string
                                                Value group_flag; //type: boolean
                                                Value new_deviation_number; //type: int32
                                                Value physical_layer_interface_module_type; //type: int32
                                                Value unrecognized_fru; //type: boolean
                                                Value redundancystate; //type: int32
                                                Value ceport; //type: boolean
                                                Value xr_scoped; //type: boolean




                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo


                                        class FruInfo : public Entity
                                        {
                                            public:
                                                FruInfo();
                                                ~FruInfo();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value card_administrative_state; //type: int32
                                                Value power_administrative_state; //type: int32
                                                Value card_operational_state; //type: InvCardStateEnum
                                                Value card_monitor_state; //type: int32
                                                Value card_reset_reason; //type: CardResetReasonEnum
                                                Value power_current_measurement; //type: int32
                                                Value power_operational_state; //type: InvCardStateEnum


                                            class LastOperationalStateChange : public Entity
                                            {
                                                public:
                                                    LastOperationalStateChange();
                                                    ~LastOperationalStateChange();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value time_in_seconds; //type: int32
                                                    Value time_in_nano_seconds; //type: int32




                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange


                                            class CardUpTime : public Entity
                                            {
                                                public:
                                                    CardUpTime();
                                                    ~CardUpTime();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value time_in_seconds; //type: int32
                                                    Value time_in_nano_seconds; //type: int32




                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
                                                class InvCardStateEnum;
                                                class CardResetReasonEnum;
                                                class InvCardStateEnum;


                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo> basic_info;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo> fru_info;


                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes> basic_attributes;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module> module;


                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot> > sub_slot;


                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots


                            class HwComponents : public Entity
                            {
                                public:
                                    HwComponents();
                                    ~HwComponents();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class HwComponent : public Entity
                                {
                                    public:
                                        HwComponent();
                                        ~HwComponent();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value number; //type: int32


                                    class Sensors : public Entity
                                    {
                                        public:
                                            Sensors();
                                            ~Sensors();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Sensor : public Entity
                                        {
                                            public:
                                                Sensor();
                                                ~Sensor();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value number; //type: int32


                                            class BasicAttributes : public Entity
                                            {
                                                public:
                                                    BasicAttributes();
                                                    ~BasicAttributes();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class BasicInfo : public Entity
                                                {
                                                    public:
                                                        BasicInfo();
                                                        ~BasicInfo();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value description; //type: string
                                                        Value vendor_type; //type: string
                                                        Value name; //type: string
                                                        Value hardware_revision; //type: string
                                                        Value firmware_revision; //type: string
                                                        Value software_revision; //type: string
                                                        Value chip_hardware_revision; //type: string
                                                        Value serial_number; //type: string
                                                        Value manufacturer_name; //type: string
                                                        Value model_name; //type: string
                                                        Value asset_id_str; //type: string
                                                        Value asset_identification; //type: int32
                                                        Value is_field_replaceable_unit; //type: boolean
                                                        Value manufacturer_asset_tags; //type: int32
                                                        Value composite_class_code; //type: int32
                                                        Value memory_size; //type: int32
                                                        Value environmental_monitor_path; //type: string
                                                        Value alias; //type: string
                                                        Value group_flag; //type: boolean
                                                        Value new_deviation_number; //type: int32
                                                        Value physical_layer_interface_module_type; //type: int32
                                                        Value unrecognized_fru; //type: boolean
                                                        Value redundancystate; //type: int32
                                                        Value ceport; //type: boolean
                                                        Value xr_scoped; //type: boolean




                                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo


                                                class FruInfo : public Entity
                                                {
                                                    public:
                                                        FruInfo();
                                                        ~FruInfo();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value card_administrative_state; //type: int32
                                                        Value power_administrative_state; //type: int32
                                                        Value card_operational_state; //type: InvCardStateEnum
                                                        Value card_monitor_state; //type: int32
                                                        Value card_reset_reason; //type: CardResetReasonEnum
                                                        Value power_current_measurement; //type: int32
                                                        Value power_operational_state; //type: InvCardStateEnum


                                                    class LastOperationalStateChange : public Entity
                                                    {
                                                        public:
                                                            LastOperationalStateChange();
                                                            ~LastOperationalStateChange();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value time_in_seconds; //type: int32
                                                            Value time_in_nano_seconds; //type: int32




                                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange


                                                    class CardUpTime : public Entity
                                                    {
                                                        public:
                                                            CardUpTime();
                                                            ~CardUpTime();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value time_in_seconds; //type: int32
                                                            Value time_in_nano_seconds; //type: int32




                                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
                                                        class InvCardStateEnum;
                                                        class CardResetReasonEnum;
                                                        class InvCardStateEnum;


                                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo> basic_info;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo> fru_info;


                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes> basic_attributes;


                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor> > sensor;


                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors


                                    class BasicAttributes : public Entity
                                    {
                                        public:
                                            BasicAttributes();
                                            ~BasicAttributes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class BasicInfo : public Entity
                                        {
                                            public:
                                                BasicInfo();
                                                ~BasicInfo();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value description; //type: string
                                                Value vendor_type; //type: string
                                                Value name; //type: string
                                                Value hardware_revision; //type: string
                                                Value firmware_revision; //type: string
                                                Value software_revision; //type: string
                                                Value chip_hardware_revision; //type: string
                                                Value serial_number; //type: string
                                                Value manufacturer_name; //type: string
                                                Value model_name; //type: string
                                                Value asset_id_str; //type: string
                                                Value asset_identification; //type: int32
                                                Value is_field_replaceable_unit; //type: boolean
                                                Value manufacturer_asset_tags; //type: int32
                                                Value composite_class_code; //type: int32
                                                Value memory_size; //type: int32
                                                Value environmental_monitor_path; //type: string
                                                Value alias; //type: string
                                                Value group_flag; //type: boolean
                                                Value new_deviation_number; //type: int32
                                                Value physical_layer_interface_module_type; //type: int32
                                                Value unrecognized_fru; //type: boolean
                                                Value redundancystate; //type: int32
                                                Value ceport; //type: boolean
                                                Value xr_scoped; //type: boolean




                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo


                                        class FruInfo : public Entity
                                        {
                                            public:
                                                FruInfo();
                                                ~FruInfo();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value card_administrative_state; //type: int32
                                                Value power_administrative_state; //type: int32
                                                Value card_operational_state; //type: InvCardStateEnum
                                                Value card_monitor_state; //type: int32
                                                Value card_reset_reason; //type: CardResetReasonEnum
                                                Value power_current_measurement; //type: int32
                                                Value power_operational_state; //type: InvCardStateEnum


                                            class LastOperationalStateChange : public Entity
                                            {
                                                public:
                                                    LastOperationalStateChange();
                                                    ~LastOperationalStateChange();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value time_in_seconds; //type: int32
                                                    Value time_in_nano_seconds; //type: int32




                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange


                                            class CardUpTime : public Entity
                                            {
                                                public:
                                                    CardUpTime();
                                                    ~CardUpTime();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value time_in_seconds; //type: int32
                                                    Value time_in_nano_seconds; //type: int32




                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
                                                class InvCardStateEnum;
                                                class CardResetReasonEnum;
                                                class InvCardStateEnum;


                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo> basic_info;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo> fru_info;


                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes> basic_attributes;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors> sensors;


                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent> > hw_component;


                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents


                            class Sensors : public Entity
                            {
                                public:
                                    Sensors();
                                    ~Sensors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Sensor : public Entity
                                {
                                    public:
                                        Sensor();
                                        ~Sensor();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value number; //type: int32


                                    class BasicAttributes : public Entity
                                    {
                                        public:
                                            BasicAttributes();
                                            ~BasicAttributes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class BasicInfo : public Entity
                                        {
                                            public:
                                                BasicInfo();
                                                ~BasicInfo();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value description; //type: string
                                                Value vendor_type; //type: string
                                                Value name; //type: string
                                                Value hardware_revision; //type: string
                                                Value firmware_revision; //type: string
                                                Value software_revision; //type: string
                                                Value chip_hardware_revision; //type: string
                                                Value serial_number; //type: string
                                                Value manufacturer_name; //type: string
                                                Value model_name; //type: string
                                                Value asset_id_str; //type: string
                                                Value asset_identification; //type: int32
                                                Value is_field_replaceable_unit; //type: boolean
                                                Value manufacturer_asset_tags; //type: int32
                                                Value composite_class_code; //type: int32
                                                Value memory_size; //type: int32
                                                Value environmental_monitor_path; //type: string
                                                Value alias; //type: string
                                                Value group_flag; //type: boolean
                                                Value new_deviation_number; //type: int32
                                                Value physical_layer_interface_module_type; //type: int32
                                                Value unrecognized_fru; //type: boolean
                                                Value redundancystate; //type: int32
                                                Value ceport; //type: boolean
                                                Value xr_scoped; //type: boolean




                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo


                                        class FruInfo : public Entity
                                        {
                                            public:
                                                FruInfo();
                                                ~FruInfo();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value card_administrative_state; //type: int32
                                                Value power_administrative_state; //type: int32
                                                Value card_operational_state; //type: InvCardStateEnum
                                                Value card_monitor_state; //type: int32
                                                Value card_reset_reason; //type: CardResetReasonEnum
                                                Value power_current_measurement; //type: int32
                                                Value power_operational_state; //type: InvCardStateEnum


                                            class LastOperationalStateChange : public Entity
                                            {
                                                public:
                                                    LastOperationalStateChange();
                                                    ~LastOperationalStateChange();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value time_in_seconds; //type: int32
                                                    Value time_in_nano_seconds; //type: int32




                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange


                                            class CardUpTime : public Entity
                                            {
                                                public:
                                                    CardUpTime();
                                                    ~CardUpTime();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value time_in_seconds; //type: int32
                                                    Value time_in_nano_seconds; //type: int32




                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
                                                class InvCardStateEnum;
                                                class CardResetReasonEnum;
                                                class InvCardStateEnum;


                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo> basic_info;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo> fru_info;


                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes> basic_attributes;


                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor> > sensor;


                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors


                            class PortSlots : public Entity
                            {
                                public:
                                    PortSlots();
                                    ~PortSlots();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class PortSlot : public Entity
                                {
                                    public:
                                        PortSlot();
                                        ~PortSlot();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value number; //type: int32


                                    class Port : public Entity
                                    {
                                        public:
                                            Port();
                                            ~Port();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class BasicAttributes : public Entity
                                        {
                                            public:
                                                BasicAttributes();
                                                ~BasicAttributes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class BasicInfo : public Entity
                                            {
                                                public:
                                                    BasicInfo();
                                                    ~BasicInfo();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value description; //type: string
                                                    Value vendor_type; //type: string
                                                    Value name; //type: string
                                                    Value hardware_revision; //type: string
                                                    Value firmware_revision; //type: string
                                                    Value software_revision; //type: string
                                                    Value chip_hardware_revision; //type: string
                                                    Value serial_number; //type: string
                                                    Value manufacturer_name; //type: string
                                                    Value model_name; //type: string
                                                    Value asset_id_str; //type: string
                                                    Value asset_identification; //type: int32
                                                    Value is_field_replaceable_unit; //type: boolean
                                                    Value manufacturer_asset_tags; //type: int32
                                                    Value composite_class_code; //type: int32
                                                    Value memory_size; //type: int32
                                                    Value environmental_monitor_path; //type: string
                                                    Value alias; //type: string
                                                    Value group_flag; //type: boolean
                                                    Value new_deviation_number; //type: int32
                                                    Value physical_layer_interface_module_type; //type: int32
                                                    Value unrecognized_fru; //type: boolean
                                                    Value redundancystate; //type: int32
                                                    Value ceport; //type: boolean
                                                    Value xr_scoped; //type: boolean




                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo


                                            class FruInfo : public Entity
                                            {
                                                public:
                                                    FruInfo();
                                                    ~FruInfo();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value card_administrative_state; //type: int32
                                                    Value power_administrative_state; //type: int32
                                                    Value card_operational_state; //type: InvCardStateEnum
                                                    Value card_monitor_state; //type: int32
                                                    Value card_reset_reason; //type: CardResetReasonEnum
                                                    Value power_current_measurement; //type: int32
                                                    Value power_operational_state; //type: InvCardStateEnum


                                                class LastOperationalStateChange : public Entity
                                                {
                                                    public:
                                                        LastOperationalStateChange();
                                                        ~LastOperationalStateChange();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value time_in_seconds; //type: int32
                                                        Value time_in_nano_seconds; //type: int32




                                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange


                                                class CardUpTime : public Entity
                                                {
                                                    public:
                                                        CardUpTime();
                                                        ~CardUpTime();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value time_in_seconds; //type: int32
                                                        Value time_in_nano_seconds; //type: int32




                                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
                                                    class InvCardStateEnum;
                                                    class CardResetReasonEnum;
                                                    class InvCardStateEnum;


                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo> basic_info;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo> fru_info;


                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes> basic_attributes;


                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port


                                    class BasicAttributes : public Entity
                                    {
                                        public:
                                            BasicAttributes();
                                            ~BasicAttributes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class BasicInfo : public Entity
                                        {
                                            public:
                                                BasicInfo();
                                                ~BasicInfo();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value description; //type: string
                                                Value vendor_type; //type: string
                                                Value name; //type: string
                                                Value hardware_revision; //type: string
                                                Value firmware_revision; //type: string
                                                Value software_revision; //type: string
                                                Value chip_hardware_revision; //type: string
                                                Value serial_number; //type: string
                                                Value manufacturer_name; //type: string
                                                Value model_name; //type: string
                                                Value asset_id_str; //type: string
                                                Value asset_identification; //type: int32
                                                Value is_field_replaceable_unit; //type: boolean
                                                Value manufacturer_asset_tags; //type: int32
                                                Value composite_class_code; //type: int32
                                                Value memory_size; //type: int32
                                                Value environmental_monitor_path; //type: string
                                                Value alias; //type: string
                                                Value group_flag; //type: boolean
                                                Value new_deviation_number; //type: int32
                                                Value physical_layer_interface_module_type; //type: int32
                                                Value unrecognized_fru; //type: boolean
                                                Value redundancystate; //type: int32
                                                Value ceport; //type: boolean
                                                Value xr_scoped; //type: boolean




                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo


                                        class FruInfo : public Entity
                                        {
                                            public:
                                                FruInfo();
                                                ~FruInfo();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value card_administrative_state; //type: int32
                                                Value power_administrative_state; //type: int32
                                                Value card_operational_state; //type: InvCardStateEnum
                                                Value card_monitor_state; //type: int32
                                                Value card_reset_reason; //type: CardResetReasonEnum
                                                Value power_current_measurement; //type: int32
                                                Value power_operational_state; //type: InvCardStateEnum


                                            class LastOperationalStateChange : public Entity
                                            {
                                                public:
                                                    LastOperationalStateChange();
                                                    ~LastOperationalStateChange();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value time_in_seconds; //type: int32
                                                    Value time_in_nano_seconds; //type: int32




                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange


                                            class CardUpTime : public Entity
                                            {
                                                public:
                                                    CardUpTime();
                                                    ~CardUpTime();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value time_in_seconds; //type: int32
                                                    Value time_in_nano_seconds; //type: int32




                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
                                                class InvCardStateEnum;
                                                class CardResetReasonEnum;
                                                class InvCardStateEnum;


                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo> basic_info;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo> fru_info;


                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes> basic_attributes;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port> port;


                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot> > port_slot;


                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots


                            class BasicAttributes : public Entity
                            {
                                public:
                                    BasicAttributes();
                                    ~BasicAttributes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class BasicInfo : public Entity
                                {
                                    public:
                                        BasicInfo();
                                        ~BasicInfo();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value description; //type: string
                                        Value vendor_type; //type: string
                                        Value name; //type: string
                                        Value hardware_revision; //type: string
                                        Value firmware_revision; //type: string
                                        Value software_revision; //type: string
                                        Value chip_hardware_revision; //type: string
                                        Value serial_number; //type: string
                                        Value manufacturer_name; //type: string
                                        Value model_name; //type: string
                                        Value asset_id_str; //type: string
                                        Value asset_identification; //type: int32
                                        Value is_field_replaceable_unit; //type: boolean
                                        Value manufacturer_asset_tags; //type: int32
                                        Value composite_class_code; //type: int32
                                        Value memory_size; //type: int32
                                        Value environmental_monitor_path; //type: string
                                        Value alias; //type: string
                                        Value group_flag; //type: boolean
                                        Value new_deviation_number; //type: int32
                                        Value physical_layer_interface_module_type; //type: int32
                                        Value unrecognized_fru; //type: boolean
                                        Value redundancystate; //type: int32
                                        Value ceport; //type: boolean
                                        Value xr_scoped; //type: boolean




                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo


                                class FruInfo : public Entity
                                {
                                    public:
                                        FruInfo();
                                        ~FruInfo();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value card_administrative_state; //type: int32
                                        Value power_administrative_state; //type: int32
                                        Value card_operational_state; //type: InvCardStateEnum
                                        Value card_monitor_state; //type: int32
                                        Value card_reset_reason; //type: CardResetReasonEnum
                                        Value power_current_measurement; //type: int32
                                        Value power_operational_state; //type: InvCardStateEnum


                                    class LastOperationalStateChange : public Entity
                                    {
                                        public:
                                            LastOperationalStateChange();
                                            ~LastOperationalStateChange();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value time_in_seconds; //type: int32
                                            Value time_in_nano_seconds; //type: int32




                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange


                                    class CardUpTime : public Entity
                                    {
                                        public:
                                            CardUpTime();
                                            ~CardUpTime();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value time_in_seconds; //type: int32
                                            Value time_in_nano_seconds; //type: int32




                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
                                        class InvCardStateEnum;
                                        class CardResetReasonEnum;
                                        class InvCardStateEnum;


                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo


                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo> basic_info;
                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo> fru_info;


                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes


                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes> basic_attributes;
                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents> hw_components;
                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots> port_slots;
                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors> sensors;
                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots> sub_slots;


                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card


                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card> > card;


                    }; // Inventory::Racks::Rack::Slots::Slot::Cards


                    class BasicAttributes : public Entity
                    {
                        public:
                            BasicAttributes();
                            ~BasicAttributes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class BasicInfo : public Entity
                        {
                            public:
                                BasicInfo();
                                ~BasicInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value description; //type: string
                                Value vendor_type; //type: string
                                Value name; //type: string
                                Value hardware_revision; //type: string
                                Value firmware_revision; //type: string
                                Value software_revision; //type: string
                                Value chip_hardware_revision; //type: string
                                Value serial_number; //type: string
                                Value manufacturer_name; //type: string
                                Value model_name; //type: string
                                Value asset_id_str; //type: string
                                Value asset_identification; //type: int32
                                Value is_field_replaceable_unit; //type: boolean
                                Value manufacturer_asset_tags; //type: int32
                                Value composite_class_code; //type: int32
                                Value memory_size; //type: int32
                                Value environmental_monitor_path; //type: string
                                Value alias; //type: string
                                Value group_flag; //type: boolean
                                Value new_deviation_number; //type: int32
                                Value physical_layer_interface_module_type; //type: int32
                                Value unrecognized_fru; //type: boolean
                                Value redundancystate; //type: int32
                                Value ceport; //type: boolean
                                Value xr_scoped; //type: boolean




                        }; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo


                        class FruInfo : public Entity
                        {
                            public:
                                FruInfo();
                                ~FruInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value card_administrative_state; //type: int32
                                Value power_administrative_state; //type: int32
                                Value card_operational_state; //type: InvCardStateEnum
                                Value card_monitor_state; //type: int32
                                Value card_reset_reason; //type: CardResetReasonEnum
                                Value power_current_measurement; //type: int32
                                Value power_operational_state; //type: InvCardStateEnum


                            class LastOperationalStateChange : public Entity
                            {
                                public:
                                    LastOperationalStateChange();
                                    ~LastOperationalStateChange();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value time_in_seconds; //type: int32
                                    Value time_in_nano_seconds; //type: int32




                            }; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange


                            class CardUpTime : public Entity
                            {
                                public:
                                    CardUpTime();
                                    ~CardUpTime();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value time_in_seconds; //type: int32
                                    Value time_in_nano_seconds; //type: int32




                            }; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime


                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;
                                class InvCardStateEnum;
                                class CardResetReasonEnum;
                                class InvCardStateEnum;


                        }; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo


                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo> basic_info;
                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo> fru_info;


                    }; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes


                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes> basic_attributes;
                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards> cards;


                }; // Inventory::Racks::Rack::Slots::Slot


                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot> > slot;


            }; // Inventory::Racks::Rack::Slots


                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots> slots;


        }; // Inventory::Racks::Rack


            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack> > rack;


    }; // Inventory::Racks


        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks> racks;


}; // Inventory


class CardResetReasonEnum : public Enum
{
    public:
        static const Enum::Value reset_unknown;
        static const Enum::Value power_up;
        static const Enum::Value parity_error;
        static const Enum::Value clear_config_reset;
        static const Enum::Value manual_reset;
        static const Enum::Value watch_dog_timeout_reset;
        static const Enum::Value resource_overflow_reset;
        static const Enum::Value missing_task_reset;
        static const Enum::Value low_voltage_reset;
        static const Enum::Value controller_reset;
        static const Enum::Value system_reset;
        static const Enum::Value switchover_reset;
        static const Enum::Value upgrade_reset;
        static const Enum::Value downgrade_reset;
        static const Enum::Value cache_error_reset;
        static const Enum::Value device_driver_reset;
        static const Enum::Value software_exception_reset;
        static const Enum::Value restore_config_reset;
        static const Enum::Value abort_rev_reset;
        static const Enum::Value burn_boot_reset;
        static const Enum::Value standby_cd_healthier_reset;
        static const Enum::Value non_native_config_clear_reset;
        static const Enum::Value memory_protection_error_reset;
        static const Enum::Value card_reset_reason_max;

};

class InvCardStateEnum : public Enum
{
    public:
        static const Enum::Value inv_card_not_present;
        static const Enum::Value inv_card_present;
        static const Enum::Value inv_card_reset;
        static const Enum::Value inv_card_booting;
        static const Enum::Value inv_card_mbi_booting;
        static const Enum::Value inv_card_running_mbi;
        static const Enum::Value inv_card_running_ena;
        static const Enum::Value inv_card_bring_down;
        static const Enum::Value inv_card_ena_failure;
        static const Enum::Value inv_card_f_diag_run;
        static const Enum::Value inv_card_f_diag_failure;
        static const Enum::Value inv_card_powered;
        static const Enum::Value inv_card_unpowered;
        static const Enum::Value inv_card_mdr;
        static const Enum::Value inv_card_mdr_running_mbi;
        static const Enum::Value inv_card_main_t_mode;
        static const Enum::Value inv_card_admin_down;
        static const Enum::Value inv_card_no_mon;
        static const Enum::Value inv_card_unknown;
        static const Enum::Value inv_card_failed;
        static const Enum::Value inv_card_ok;
        static const Enum::Value inv_card_missing;
        static const Enum::Value inv_card_field_diag_downloading;
        static const Enum::Value inv_card_field_diag_unmonitor;
        static const Enum::Value inv_card_fabric_field_diag_unmonitor;
        static const Enum::Value inv_card_field_diag_rp_launching;
        static const Enum::Value inv_card_field_diag_running;
        static const Enum::Value inv_card_field_diag_pass;
        static const Enum::Value inv_card_field_diag_fail;
        static const Enum::Value inv_card_field_diag_timeout;
        static const Enum::Value inv_card_disabled;
        static const Enum::Value inv_card_spa_booting;
        static const Enum::Value inv_card_not_allowed_online;
        static const Enum::Value inv_card_stopped;
        static const Enum::Value inv_card_incompatible_fw_ver;
        static const Enum::Value inv_card_fpd_hold;
        static const Enum::Value inv_card_node_prep;
        static const Enum::Value inv_card_updating_fpd;
        static const Enum::Value inv_card_num_states;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_SC_INVMGR_OPER_ */

