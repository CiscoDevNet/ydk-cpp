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


                YLeaf number; //type: int32

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


                        YLeaf number; //type: int32

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


                                YLeaf number; //type: int32

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


                                        YLeaf number; //type: int32

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


                                                    YLeaf number; //type: int32

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


                                                            YLeaf description; //type: string
                                                            YLeaf vendor_type; //type: string
                                                            YLeaf name; //type: string
                                                            YLeaf hardware_revision; //type: string
                                                            YLeaf firmware_revision; //type: string
                                                            YLeaf software_revision; //type: string
                                                            YLeaf chip_hardware_revision; //type: string
                                                            YLeaf serial_number; //type: string
                                                            YLeaf manufacturer_name; //type: string
                                                            YLeaf model_name; //type: string
                                                            YLeaf asset_id_str; //type: string
                                                            YLeaf asset_identification; //type: int32
                                                            YLeaf is_field_replaceable_unit; //type: boolean
                                                            YLeaf manufacturer_asset_tags; //type: int32
                                                            YLeaf composite_class_code; //type: int32
                                                            YLeaf memory_size; //type: int32
                                                            YLeaf environmental_monitor_path; //type: string
                                                            YLeaf alias; //type: string
                                                            YLeaf group_flag; //type: boolean
                                                            YLeaf new_deviation_number; //type: int32
                                                            YLeaf physical_layer_interface_module_type; //type: int32
                                                            YLeaf unrecognized_fru; //type: boolean
                                                            YLeaf redundancystate; //type: int32
                                                            YLeaf ceport; //type: boolean
                                                            YLeaf xr_scoped; //type: boolean



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


                                                            YLeaf card_administrative_state; //type: int32
                                                            YLeaf power_administrative_state; //type: int32
                                                            YLeaf card_operational_state; //type: InvCardStateEnum
                                                            YLeaf card_monitor_state; //type: int32
                                                            YLeaf card_reset_reason; //type: CardResetReasonEnum
                                                            YLeaf power_current_measurement; //type: int32
                                                            YLeaf power_operational_state; //type: InvCardStateEnum

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


                                                                YLeaf time_in_seconds; //type: int32
                                                                YLeaf time_in_nano_seconds; //type: int32



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


                                                                YLeaf time_in_seconds; //type: int32
                                                                YLeaf time_in_nano_seconds; //type: int32



                                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime


                                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;


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


                                                    YLeaf number; //type: int32

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


                                                                YLeaf description; //type: string
                                                                YLeaf vendor_type; //type: string
                                                                YLeaf name; //type: string
                                                                YLeaf hardware_revision; //type: string
                                                                YLeaf firmware_revision; //type: string
                                                                YLeaf software_revision; //type: string
                                                                YLeaf chip_hardware_revision; //type: string
                                                                YLeaf serial_number; //type: string
                                                                YLeaf manufacturer_name; //type: string
                                                                YLeaf model_name; //type: string
                                                                YLeaf asset_id_str; //type: string
                                                                YLeaf asset_identification; //type: int32
                                                                YLeaf is_field_replaceable_unit; //type: boolean
                                                                YLeaf manufacturer_asset_tags; //type: int32
                                                                YLeaf composite_class_code; //type: int32
                                                                YLeaf memory_size; //type: int32
                                                                YLeaf environmental_monitor_path; //type: string
                                                                YLeaf alias; //type: string
                                                                YLeaf group_flag; //type: boolean
                                                                YLeaf new_deviation_number; //type: int32
                                                                YLeaf physical_layer_interface_module_type; //type: int32
                                                                YLeaf unrecognized_fru; //type: boolean
                                                                YLeaf redundancystate; //type: int32
                                                                YLeaf ceport; //type: boolean
                                                                YLeaf xr_scoped; //type: boolean



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


                                                                YLeaf card_administrative_state; //type: int32
                                                                YLeaf power_administrative_state; //type: int32
                                                                YLeaf card_operational_state; //type: InvCardStateEnum
                                                                YLeaf card_monitor_state; //type: int32
                                                                YLeaf card_reset_reason; //type: CardResetReasonEnum
                                                                YLeaf power_current_measurement; //type: int32
                                                                YLeaf power_operational_state; //type: InvCardStateEnum

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


                                                                    YLeaf time_in_seconds; //type: int32
                                                                    YLeaf time_in_nano_seconds; //type: int32



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


                                                                    YLeaf time_in_seconds; //type: int32
                                                                    YLeaf time_in_nano_seconds; //type: int32



                                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime


                                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;


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


                                                            YLeaf description; //type: string
                                                            YLeaf vendor_type; //type: string
                                                            YLeaf name; //type: string
                                                            YLeaf hardware_revision; //type: string
                                                            YLeaf firmware_revision; //type: string
                                                            YLeaf software_revision; //type: string
                                                            YLeaf chip_hardware_revision; //type: string
                                                            YLeaf serial_number; //type: string
                                                            YLeaf manufacturer_name; //type: string
                                                            YLeaf model_name; //type: string
                                                            YLeaf asset_id_str; //type: string
                                                            YLeaf asset_identification; //type: int32
                                                            YLeaf is_field_replaceable_unit; //type: boolean
                                                            YLeaf manufacturer_asset_tags; //type: int32
                                                            YLeaf composite_class_code; //type: int32
                                                            YLeaf memory_size; //type: int32
                                                            YLeaf environmental_monitor_path; //type: string
                                                            YLeaf alias; //type: string
                                                            YLeaf group_flag; //type: boolean
                                                            YLeaf new_deviation_number; //type: int32
                                                            YLeaf physical_layer_interface_module_type; //type: int32
                                                            YLeaf unrecognized_fru; //type: boolean
                                                            YLeaf redundancystate; //type: int32
                                                            YLeaf ceport; //type: boolean
                                                            YLeaf xr_scoped; //type: boolean



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


                                                            YLeaf card_administrative_state; //type: int32
                                                            YLeaf power_administrative_state; //type: int32
                                                            YLeaf card_operational_state; //type: InvCardStateEnum
                                                            YLeaf card_monitor_state; //type: int32
                                                            YLeaf card_reset_reason; //type: CardResetReasonEnum
                                                            YLeaf power_current_measurement; //type: int32
                                                            YLeaf power_operational_state; //type: InvCardStateEnum

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


                                                                YLeaf time_in_seconds; //type: int32
                                                                YLeaf time_in_nano_seconds; //type: int32



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


                                                                YLeaf time_in_seconds; //type: int32
                                                                YLeaf time_in_nano_seconds; //type: int32



                                                        }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime


                                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                            std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;


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


                                                    YLeaf description; //type: string
                                                    YLeaf vendor_type; //type: string
                                                    YLeaf name; //type: string
                                                    YLeaf hardware_revision; //type: string
                                                    YLeaf firmware_revision; //type: string
                                                    YLeaf software_revision; //type: string
                                                    YLeaf chip_hardware_revision; //type: string
                                                    YLeaf serial_number; //type: string
                                                    YLeaf manufacturer_name; //type: string
                                                    YLeaf model_name; //type: string
                                                    YLeaf asset_id_str; //type: string
                                                    YLeaf asset_identification; //type: int32
                                                    YLeaf is_field_replaceable_unit; //type: boolean
                                                    YLeaf manufacturer_asset_tags; //type: int32
                                                    YLeaf composite_class_code; //type: int32
                                                    YLeaf memory_size; //type: int32
                                                    YLeaf environmental_monitor_path; //type: string
                                                    YLeaf alias; //type: string
                                                    YLeaf group_flag; //type: boolean
                                                    YLeaf new_deviation_number; //type: int32
                                                    YLeaf physical_layer_interface_module_type; //type: int32
                                                    YLeaf unrecognized_fru; //type: boolean
                                                    YLeaf redundancystate; //type: int32
                                                    YLeaf ceport; //type: boolean
                                                    YLeaf xr_scoped; //type: boolean



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


                                                    YLeaf card_administrative_state; //type: int32
                                                    YLeaf power_administrative_state; //type: int32
                                                    YLeaf card_operational_state; //type: InvCardStateEnum
                                                    YLeaf card_monitor_state; //type: int32
                                                    YLeaf card_reset_reason; //type: CardResetReasonEnum
                                                    YLeaf power_current_measurement; //type: int32
                                                    YLeaf power_operational_state; //type: InvCardStateEnum

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


                                                        YLeaf time_in_seconds; //type: int32
                                                        YLeaf time_in_nano_seconds; //type: int32



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


                                                        YLeaf time_in_seconds; //type: int32
                                                        YLeaf time_in_nano_seconds; //type: int32



                                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;


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


                                                YLeaf description; //type: string
                                                YLeaf vendor_type; //type: string
                                                YLeaf name; //type: string
                                                YLeaf hardware_revision; //type: string
                                                YLeaf firmware_revision; //type: string
                                                YLeaf software_revision; //type: string
                                                YLeaf chip_hardware_revision; //type: string
                                                YLeaf serial_number; //type: string
                                                YLeaf manufacturer_name; //type: string
                                                YLeaf model_name; //type: string
                                                YLeaf asset_id_str; //type: string
                                                YLeaf asset_identification; //type: int32
                                                YLeaf is_field_replaceable_unit; //type: boolean
                                                YLeaf manufacturer_asset_tags; //type: int32
                                                YLeaf composite_class_code; //type: int32
                                                YLeaf memory_size; //type: int32
                                                YLeaf environmental_monitor_path; //type: string
                                                YLeaf alias; //type: string
                                                YLeaf group_flag; //type: boolean
                                                YLeaf new_deviation_number; //type: int32
                                                YLeaf physical_layer_interface_module_type; //type: int32
                                                YLeaf unrecognized_fru; //type: boolean
                                                YLeaf redundancystate; //type: int32
                                                YLeaf ceport; //type: boolean
                                                YLeaf xr_scoped; //type: boolean



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


                                                YLeaf card_administrative_state; //type: int32
                                                YLeaf power_administrative_state; //type: int32
                                                YLeaf card_operational_state; //type: InvCardStateEnum
                                                YLeaf card_monitor_state; //type: int32
                                                YLeaf card_reset_reason; //type: CardResetReasonEnum
                                                YLeaf power_current_measurement; //type: int32
                                                YLeaf power_operational_state; //type: InvCardStateEnum

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


                                                    YLeaf time_in_seconds; //type: int32
                                                    YLeaf time_in_nano_seconds; //type: int32



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


                                                    YLeaf time_in_seconds; //type: int32
                                                    YLeaf time_in_nano_seconds; //type: int32



                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;


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


                                        YLeaf number; //type: int32

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


                                                YLeaf number; //type: int32

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


                                                        YLeaf description; //type: string
                                                        YLeaf vendor_type; //type: string
                                                        YLeaf name; //type: string
                                                        YLeaf hardware_revision; //type: string
                                                        YLeaf firmware_revision; //type: string
                                                        YLeaf software_revision; //type: string
                                                        YLeaf chip_hardware_revision; //type: string
                                                        YLeaf serial_number; //type: string
                                                        YLeaf manufacturer_name; //type: string
                                                        YLeaf model_name; //type: string
                                                        YLeaf asset_id_str; //type: string
                                                        YLeaf asset_identification; //type: int32
                                                        YLeaf is_field_replaceable_unit; //type: boolean
                                                        YLeaf manufacturer_asset_tags; //type: int32
                                                        YLeaf composite_class_code; //type: int32
                                                        YLeaf memory_size; //type: int32
                                                        YLeaf environmental_monitor_path; //type: string
                                                        YLeaf alias; //type: string
                                                        YLeaf group_flag; //type: boolean
                                                        YLeaf new_deviation_number; //type: int32
                                                        YLeaf physical_layer_interface_module_type; //type: int32
                                                        YLeaf unrecognized_fru; //type: boolean
                                                        YLeaf redundancystate; //type: int32
                                                        YLeaf ceport; //type: boolean
                                                        YLeaf xr_scoped; //type: boolean



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


                                                        YLeaf card_administrative_state; //type: int32
                                                        YLeaf power_administrative_state; //type: int32
                                                        YLeaf card_operational_state; //type: InvCardStateEnum
                                                        YLeaf card_monitor_state; //type: int32
                                                        YLeaf card_reset_reason; //type: CardResetReasonEnum
                                                        YLeaf power_current_measurement; //type: int32
                                                        YLeaf power_operational_state; //type: InvCardStateEnum

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


                                                            YLeaf time_in_seconds; //type: int32
                                                            YLeaf time_in_nano_seconds; //type: int32



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


                                                            YLeaf time_in_seconds; //type: int32
                                                            YLeaf time_in_nano_seconds; //type: int32



                                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;


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


                                                YLeaf description; //type: string
                                                YLeaf vendor_type; //type: string
                                                YLeaf name; //type: string
                                                YLeaf hardware_revision; //type: string
                                                YLeaf firmware_revision; //type: string
                                                YLeaf software_revision; //type: string
                                                YLeaf chip_hardware_revision; //type: string
                                                YLeaf serial_number; //type: string
                                                YLeaf manufacturer_name; //type: string
                                                YLeaf model_name; //type: string
                                                YLeaf asset_id_str; //type: string
                                                YLeaf asset_identification; //type: int32
                                                YLeaf is_field_replaceable_unit; //type: boolean
                                                YLeaf manufacturer_asset_tags; //type: int32
                                                YLeaf composite_class_code; //type: int32
                                                YLeaf memory_size; //type: int32
                                                YLeaf environmental_monitor_path; //type: string
                                                YLeaf alias; //type: string
                                                YLeaf group_flag; //type: boolean
                                                YLeaf new_deviation_number; //type: int32
                                                YLeaf physical_layer_interface_module_type; //type: int32
                                                YLeaf unrecognized_fru; //type: boolean
                                                YLeaf redundancystate; //type: int32
                                                YLeaf ceport; //type: boolean
                                                YLeaf xr_scoped; //type: boolean



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


                                                YLeaf card_administrative_state; //type: int32
                                                YLeaf power_administrative_state; //type: int32
                                                YLeaf card_operational_state; //type: InvCardStateEnum
                                                YLeaf card_monitor_state; //type: int32
                                                YLeaf card_reset_reason; //type: CardResetReasonEnum
                                                YLeaf power_current_measurement; //type: int32
                                                YLeaf power_operational_state; //type: InvCardStateEnum

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


                                                    YLeaf time_in_seconds; //type: int32
                                                    YLeaf time_in_nano_seconds; //type: int32



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


                                                    YLeaf time_in_seconds; //type: int32
                                                    YLeaf time_in_nano_seconds; //type: int32



                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;


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


                                        YLeaf number; //type: int32

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


                                                YLeaf description; //type: string
                                                YLeaf vendor_type; //type: string
                                                YLeaf name; //type: string
                                                YLeaf hardware_revision; //type: string
                                                YLeaf firmware_revision; //type: string
                                                YLeaf software_revision; //type: string
                                                YLeaf chip_hardware_revision; //type: string
                                                YLeaf serial_number; //type: string
                                                YLeaf manufacturer_name; //type: string
                                                YLeaf model_name; //type: string
                                                YLeaf asset_id_str; //type: string
                                                YLeaf asset_identification; //type: int32
                                                YLeaf is_field_replaceable_unit; //type: boolean
                                                YLeaf manufacturer_asset_tags; //type: int32
                                                YLeaf composite_class_code; //type: int32
                                                YLeaf memory_size; //type: int32
                                                YLeaf environmental_monitor_path; //type: string
                                                YLeaf alias; //type: string
                                                YLeaf group_flag; //type: boolean
                                                YLeaf new_deviation_number; //type: int32
                                                YLeaf physical_layer_interface_module_type; //type: int32
                                                YLeaf unrecognized_fru; //type: boolean
                                                YLeaf redundancystate; //type: int32
                                                YLeaf ceport; //type: boolean
                                                YLeaf xr_scoped; //type: boolean



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


                                                YLeaf card_administrative_state; //type: int32
                                                YLeaf power_administrative_state; //type: int32
                                                YLeaf card_operational_state; //type: InvCardStateEnum
                                                YLeaf card_monitor_state; //type: int32
                                                YLeaf card_reset_reason; //type: CardResetReasonEnum
                                                YLeaf power_current_measurement; //type: int32
                                                YLeaf power_operational_state; //type: InvCardStateEnum

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


                                                    YLeaf time_in_seconds; //type: int32
                                                    YLeaf time_in_nano_seconds; //type: int32



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


                                                    YLeaf time_in_seconds; //type: int32
                                                    YLeaf time_in_nano_seconds; //type: int32



                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;


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


                                        YLeaf number; //type: int32

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


                                                    YLeaf description; //type: string
                                                    YLeaf vendor_type; //type: string
                                                    YLeaf name; //type: string
                                                    YLeaf hardware_revision; //type: string
                                                    YLeaf firmware_revision; //type: string
                                                    YLeaf software_revision; //type: string
                                                    YLeaf chip_hardware_revision; //type: string
                                                    YLeaf serial_number; //type: string
                                                    YLeaf manufacturer_name; //type: string
                                                    YLeaf model_name; //type: string
                                                    YLeaf asset_id_str; //type: string
                                                    YLeaf asset_identification; //type: int32
                                                    YLeaf is_field_replaceable_unit; //type: boolean
                                                    YLeaf manufacturer_asset_tags; //type: int32
                                                    YLeaf composite_class_code; //type: int32
                                                    YLeaf memory_size; //type: int32
                                                    YLeaf environmental_monitor_path; //type: string
                                                    YLeaf alias; //type: string
                                                    YLeaf group_flag; //type: boolean
                                                    YLeaf new_deviation_number; //type: int32
                                                    YLeaf physical_layer_interface_module_type; //type: int32
                                                    YLeaf unrecognized_fru; //type: boolean
                                                    YLeaf redundancystate; //type: int32
                                                    YLeaf ceport; //type: boolean
                                                    YLeaf xr_scoped; //type: boolean



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


                                                    YLeaf card_administrative_state; //type: int32
                                                    YLeaf power_administrative_state; //type: int32
                                                    YLeaf card_operational_state; //type: InvCardStateEnum
                                                    YLeaf card_monitor_state; //type: int32
                                                    YLeaf card_reset_reason; //type: CardResetReasonEnum
                                                    YLeaf power_current_measurement; //type: int32
                                                    YLeaf power_operational_state; //type: InvCardStateEnum

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


                                                        YLeaf time_in_seconds; //type: int32
                                                        YLeaf time_in_nano_seconds; //type: int32



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


                                                        YLeaf time_in_seconds; //type: int32
                                                        YLeaf time_in_nano_seconds; //type: int32



                                                }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;


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


                                                YLeaf description; //type: string
                                                YLeaf vendor_type; //type: string
                                                YLeaf name; //type: string
                                                YLeaf hardware_revision; //type: string
                                                YLeaf firmware_revision; //type: string
                                                YLeaf software_revision; //type: string
                                                YLeaf chip_hardware_revision; //type: string
                                                YLeaf serial_number; //type: string
                                                YLeaf manufacturer_name; //type: string
                                                YLeaf model_name; //type: string
                                                YLeaf asset_id_str; //type: string
                                                YLeaf asset_identification; //type: int32
                                                YLeaf is_field_replaceable_unit; //type: boolean
                                                YLeaf manufacturer_asset_tags; //type: int32
                                                YLeaf composite_class_code; //type: int32
                                                YLeaf memory_size; //type: int32
                                                YLeaf environmental_monitor_path; //type: string
                                                YLeaf alias; //type: string
                                                YLeaf group_flag; //type: boolean
                                                YLeaf new_deviation_number; //type: int32
                                                YLeaf physical_layer_interface_module_type; //type: int32
                                                YLeaf unrecognized_fru; //type: boolean
                                                YLeaf redundancystate; //type: int32
                                                YLeaf ceport; //type: boolean
                                                YLeaf xr_scoped; //type: boolean



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


                                                YLeaf card_administrative_state; //type: int32
                                                YLeaf power_administrative_state; //type: int32
                                                YLeaf card_operational_state; //type: InvCardStateEnum
                                                YLeaf card_monitor_state; //type: int32
                                                YLeaf card_reset_reason; //type: CardResetReasonEnum
                                                YLeaf power_current_measurement; //type: int32
                                                YLeaf power_operational_state; //type: InvCardStateEnum

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


                                                    YLeaf time_in_seconds; //type: int32
                                                    YLeaf time_in_nano_seconds; //type: int32



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


                                                    YLeaf time_in_seconds; //type: int32
                                                    YLeaf time_in_nano_seconds; //type: int32



                                            }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;


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


                                        YLeaf description; //type: string
                                        YLeaf vendor_type; //type: string
                                        YLeaf name; //type: string
                                        YLeaf hardware_revision; //type: string
                                        YLeaf firmware_revision; //type: string
                                        YLeaf software_revision; //type: string
                                        YLeaf chip_hardware_revision; //type: string
                                        YLeaf serial_number; //type: string
                                        YLeaf manufacturer_name; //type: string
                                        YLeaf model_name; //type: string
                                        YLeaf asset_id_str; //type: string
                                        YLeaf asset_identification; //type: int32
                                        YLeaf is_field_replaceable_unit; //type: boolean
                                        YLeaf manufacturer_asset_tags; //type: int32
                                        YLeaf composite_class_code; //type: int32
                                        YLeaf memory_size; //type: int32
                                        YLeaf environmental_monitor_path; //type: string
                                        YLeaf alias; //type: string
                                        YLeaf group_flag; //type: boolean
                                        YLeaf new_deviation_number; //type: int32
                                        YLeaf physical_layer_interface_module_type; //type: int32
                                        YLeaf unrecognized_fru; //type: boolean
                                        YLeaf redundancystate; //type: int32
                                        YLeaf ceport; //type: boolean
                                        YLeaf xr_scoped; //type: boolean



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


                                        YLeaf card_administrative_state; //type: int32
                                        YLeaf power_administrative_state; //type: int32
                                        YLeaf card_operational_state; //type: InvCardStateEnum
                                        YLeaf card_monitor_state; //type: int32
                                        YLeaf card_reset_reason; //type: CardResetReasonEnum
                                        YLeaf power_current_measurement; //type: int32
                                        YLeaf power_operational_state; //type: InvCardStateEnum

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


                                            YLeaf time_in_seconds; //type: int32
                                            YLeaf time_in_nano_seconds; //type: int32



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


                                            YLeaf time_in_seconds; //type: int32
                                            YLeaf time_in_nano_seconds; //type: int32



                                    }; // Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;


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


                                YLeaf description; //type: string
                                YLeaf vendor_type; //type: string
                                YLeaf name; //type: string
                                YLeaf hardware_revision; //type: string
                                YLeaf firmware_revision; //type: string
                                YLeaf software_revision; //type: string
                                YLeaf chip_hardware_revision; //type: string
                                YLeaf serial_number; //type: string
                                YLeaf manufacturer_name; //type: string
                                YLeaf model_name; //type: string
                                YLeaf asset_id_str; //type: string
                                YLeaf asset_identification; //type: int32
                                YLeaf is_field_replaceable_unit; //type: boolean
                                YLeaf manufacturer_asset_tags; //type: int32
                                YLeaf composite_class_code; //type: int32
                                YLeaf memory_size; //type: int32
                                YLeaf environmental_monitor_path; //type: string
                                YLeaf alias; //type: string
                                YLeaf group_flag; //type: boolean
                                YLeaf new_deviation_number; //type: int32
                                YLeaf physical_layer_interface_module_type; //type: int32
                                YLeaf unrecognized_fru; //type: boolean
                                YLeaf redundancystate; //type: int32
                                YLeaf ceport; //type: boolean
                                YLeaf xr_scoped; //type: boolean



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


                                YLeaf card_administrative_state; //type: int32
                                YLeaf power_administrative_state; //type: int32
                                YLeaf card_operational_state; //type: InvCardStateEnum
                                YLeaf card_monitor_state; //type: int32
                                YLeaf card_reset_reason; //type: CardResetReasonEnum
                                YLeaf power_current_measurement; //type: int32
                                YLeaf power_operational_state; //type: InvCardStateEnum

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


                                    YLeaf time_in_seconds; //type: int32
                                    YLeaf time_in_nano_seconds; //type: int32



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


                                    YLeaf time_in_seconds; //type: int32
                                    YLeaf time_in_nano_seconds; //type: int32



                            }; // Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime


                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime> card_up_time;
                                std::unique_ptr<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange> last_operational_state_change;


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
        static const Enum::YLeaf reset_unknown;
        static const Enum::YLeaf power_up;
        static const Enum::YLeaf parity_error;
        static const Enum::YLeaf clear_config_reset;
        static const Enum::YLeaf manual_reset;
        static const Enum::YLeaf watch_dog_timeout_reset;
        static const Enum::YLeaf resource_overflow_reset;
        static const Enum::YLeaf missing_task_reset;
        static const Enum::YLeaf low_voltage_reset;
        static const Enum::YLeaf controller_reset;
        static const Enum::YLeaf system_reset;
        static const Enum::YLeaf switchover_reset;
        static const Enum::YLeaf upgrade_reset;
        static const Enum::YLeaf downgrade_reset;
        static const Enum::YLeaf cache_error_reset;
        static const Enum::YLeaf device_driver_reset;
        static const Enum::YLeaf software_exception_reset;
        static const Enum::YLeaf restore_config_reset;
        static const Enum::YLeaf abort_rev_reset;
        static const Enum::YLeaf burn_boot_reset;
        static const Enum::YLeaf standby_cd_healthier_reset;
        static const Enum::YLeaf non_native_config_clear_reset;
        static const Enum::YLeaf memory_protection_error_reset;
        static const Enum::YLeaf card_reset_reason_max;

};

class InvCardStateEnum : public Enum
{
    public:
        static const Enum::YLeaf inv_card_not_present;
        static const Enum::YLeaf inv_card_present;
        static const Enum::YLeaf inv_card_reset;
        static const Enum::YLeaf inv_card_booting;
        static const Enum::YLeaf inv_card_mbi_booting;
        static const Enum::YLeaf inv_card_running_mbi;
        static const Enum::YLeaf inv_card_running_ena;
        static const Enum::YLeaf inv_card_bring_down;
        static const Enum::YLeaf inv_card_ena_failure;
        static const Enum::YLeaf inv_card_f_diag_run;
        static const Enum::YLeaf inv_card_f_diag_failure;
        static const Enum::YLeaf inv_card_powered;
        static const Enum::YLeaf inv_card_unpowered;
        static const Enum::YLeaf inv_card_mdr;
        static const Enum::YLeaf inv_card_mdr_running_mbi;
        static const Enum::YLeaf inv_card_main_t_mode;
        static const Enum::YLeaf inv_card_admin_down;
        static const Enum::YLeaf inv_card_no_mon;
        static const Enum::YLeaf inv_card_unknown;
        static const Enum::YLeaf inv_card_failed;
        static const Enum::YLeaf inv_card_ok;
        static const Enum::YLeaf inv_card_missing;
        static const Enum::YLeaf inv_card_field_diag_downloading;
        static const Enum::YLeaf inv_card_field_diag_unmonitor;
        static const Enum::YLeaf inv_card_fabric_field_diag_unmonitor;
        static const Enum::YLeaf inv_card_field_diag_rp_launching;
        static const Enum::YLeaf inv_card_field_diag_running;
        static const Enum::YLeaf inv_card_field_diag_pass;
        static const Enum::YLeaf inv_card_field_diag_fail;
        static const Enum::YLeaf inv_card_field_diag_timeout;
        static const Enum::YLeaf inv_card_disabled;
        static const Enum::YLeaf inv_card_spa_booting;
        static const Enum::YLeaf inv_card_not_allowed_online;
        static const Enum::YLeaf inv_card_stopped;
        static const Enum::YLeaf inv_card_incompatible_fw_ver;
        static const Enum::YLeaf inv_card_fpd_hold;
        static const Enum::YLeaf inv_card_node_prep;
        static const Enum::YLeaf inv_card_updating_fpd;
        static const Enum::YLeaf inv_card_num_states;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_SC_INVMGR_OPER_ */

