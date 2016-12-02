#ifndef _OPENCONFIG_PLATFORM_
#define _OPENCONFIG_PLATFORM_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "openconfig_platform_types.hpp"
#include "openconfig_transport_types.hpp"

namespace ydk {
namespace openconfig_platform {

class Components : public Entity
{
    public:
        Components();
        ~Components();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Component : public Entity
    {
        public:
            Component();
            ~Component();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            //type: string (refers to openconfig_platform::Components::Component::Config::name)
            Value name;


        class Config : public Entity
        {
            public:
                Config();
                ~Config();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string




        }; // Components::Component::Config


        class State : public Entity
        {
            public:
                State();
                ~State();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value type; //type: identityref
                Value id; //type: string
                Value description; //type: string
                Value mfg_name; //type: string
                Value version; //type: string
                Value serial_no; //type: string
                Value part_no; //type: string




        }; // Components::Component::State


        class Properties : public Entity
        {
            public:
                Properties();
                ~Properties();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Property : public Entity
            {
                public:
                    Property();
                    ~Property();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    //type: string (refers to openconfig_platform::Components::Component::Properties::Property::Config::name)
                    Value name;


                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string
                        Value value_; //type: one of uint64, boolean, int64, string, decimal64




                }; // Components::Component::Properties::Property::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string
                        Value value_; //type: one of uint64, boolean, int64, string, decimal64
                        Value configurable; //type: boolean




                }; // Components::Component::Properties::Property::State


                    std::unique_ptr<openconfig_platform::Components::Component::Properties::Property::Config> config;
                    std::unique_ptr<openconfig_platform::Components::Component::Properties::Property::State> state;


            }; // Components::Component::Properties::Property


                std::vector<std::unique_ptr<openconfig_platform::Components::Component::Properties::Property> > property;


        }; // Components::Component::Properties


        class Subcomponents : public Entity
        {
            public:
                Subcomponents();
                ~Subcomponents();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Subcomponent : public Entity
            {
                public:
                    Subcomponent();
                    ~Subcomponent();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    //type: leafref (refers to openconfig_platform::Components::Component::Subcomponents::Subcomponent::Config::name)
                    Value name;


                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        //type: string (refers to openconfig_platform::Components::Component::Config::name)
                        Value name;




                }; // Components::Component::Subcomponents::Subcomponent::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        //type: string (refers to openconfig_platform::Components::Component::Config::name)
                        Value name;




                }; // Components::Component::Subcomponents::Subcomponent::State


                    std::unique_ptr<openconfig_platform::Components::Component::Subcomponents::Subcomponent::Config> config;
                    std::unique_ptr<openconfig_platform::Components::Component::Subcomponents::Subcomponent::State> state;


            }; // Components::Component::Subcomponents::Subcomponent


                std::vector<std::unique_ptr<openconfig_platform::Components::Component::Subcomponents::Subcomponent> > subcomponent;


        }; // Components::Component::Subcomponents


        class Transceiver : public Entity
        {
            public:
                Transceiver();
                ~Transceiver();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value enabled; //type: boolean
                    Value form_factor; //type: Transceiver_Form_Factor_TypeIdentity




            }; // Components::Component::Transceiver::Config


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value enabled; //type: boolean
                    Value form_factor; //type: Transceiver_Form_Factor_TypeIdentity
                    Value present; //type: PresentEnum
                    Value connector_type; //type: Fiber_Connector_TypeIdentity
                    Value internal_temp; //type: int16
                    Value vendor; //type: string
                    Value vendor_part; //type: string
                    Value vendor_rev; //type: string
                    Value ethernet_compliance_code; //type: Ethernet_Pmd_TypeIdentity
                    Value sonet_sdh_compliance_code; //type: Sonet_Application_CodeIdentity
                    Value otn_compliance_code; //type: Otn_Application_CodeIdentity
                    Value serial_no; //type: string
                    Value date_code; //type: string
                    Value fault_condition; //type: boolean


                    class PresentEnum;


            }; // Components::Component::Transceiver::State


            class PhysicalChannels : public Entity
            {
                public:
                    PhysicalChannels();
                    ~PhysicalChannels();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Channel : public Entity
                {
                    public:
                        Channel();
                        ~Channel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        //type: uint16 (refers to openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::Config::index_)
                        Value index_;


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value index_; //type: uint16
                            Value description; //type: string
                            Value tx_laser; //type: boolean
                            Value target_output_power; //type: decimal64




                    }; // Components::Component::Transceiver::PhysicalChannels::Channel::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value index_; //type: uint16
                            Value description; //type: string
                            Value tx_laser; //type: boolean
                            Value target_output_power; //type: decimal64
                            Value output_frequency; //type: uint64


                        class OutputPower : public Entity
                        {
                            public:
                                OutputPower();
                                ~OutputPower();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value instant; //type: decimal64
                                Value avg; //type: decimal64
                                Value min; //type: decimal64
                                Value max; //type: decimal64




                        }; // Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower


                        class InputPower : public Entity
                        {
                            public:
                                InputPower();
                                ~InputPower();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value instant; //type: decimal64
                                Value avg; //type: decimal64
                                Value min; //type: decimal64
                                Value max; //type: decimal64




                        }; // Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower


                        class LaserBiasCurrent : public Entity
                        {
                            public:
                                LaserBiasCurrent();
                                ~LaserBiasCurrent();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value instant; //type: decimal64
                                Value avg; //type: decimal64
                                Value min; //type: decimal64
                                Value max; //type: decimal64




                        }; // Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent


                            std::unique_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::State::InputPower> input_power;
                            std::unique_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::State::LaserBiasCurrent> laser_bias_current;
                            std::unique_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::State::OutputPower> output_power;


                    }; // Components::Component::Transceiver::PhysicalChannels::Channel::State


                        std::unique_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::Config> config;
                        std::unique_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel::State> state;


                }; // Components::Component::Transceiver::PhysicalChannels::Channel


                    std::vector<std::unique_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels::Channel> > channel;


            }; // Components::Component::Transceiver::PhysicalChannels


                std::unique_ptr<openconfig_platform::Components::Component::Transceiver::Config> config;
                std::unique_ptr<openconfig_platform::Components::Component::Transceiver::PhysicalChannels> physical_channels;
                std::unique_ptr<openconfig_platform::Components::Component::Transceiver::State> state;


        }; // Components::Component::Transceiver


            std::unique_ptr<openconfig_platform::Components::Component::Config> config;
            std::unique_ptr<openconfig_platform::Components::Component::Properties> properties;
            std::unique_ptr<openconfig_platform::Components::Component::State> state;
            std::unique_ptr<openconfig_platform::Components::Component::Subcomponents> subcomponents;
            std::unique_ptr<openconfig_platform::Components::Component::Transceiver> transceiver;


    }; // Components::Component


        std::vector<std::unique_ptr<openconfig_platform::Components::Component> > component;


}; // Components


class Components::Component::Transceiver::State::PresentEnum : public Enum
{
    public:
        static const Enum::Value PRESENT;
        static const Enum::Value NOT_PRESENT;

};


}
}

#endif /* _OPENCONFIG_PLATFORM_ */

