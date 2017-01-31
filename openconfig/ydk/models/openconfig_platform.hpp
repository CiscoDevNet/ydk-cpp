#ifndef _OPENCONFIG_PLATFORM_
#define _OPENCONFIG_PLATFORM_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


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
            YLeaf name;

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


                YLeaf name; //type: string



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


                YLeaf name; //type: string
                YLeaf type; //type: identityref
                YLeaf id; //type: string
                YLeaf description; //type: string
                YLeaf mfg_name; //type: string
                YLeaf version; //type: string
                YLeaf serial_no; //type: string
                YLeaf part_no; //type: string



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
                    YLeaf name;

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


                        YLeaf name; //type: string
                        YLeaf value_; //type: one of uint64, boolean, int64, string, decimal64



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


                        YLeaf name; //type: string
                        YLeaf value_; //type: one of uint64, boolean, int64, string, decimal64
                        YLeaf configurable; //type: boolean



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
                    YLeaf name;

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
                        YLeaf name;



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
                        YLeaf name;



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


                    YLeaf enabled; //type: boolean
                    YLeaf form_factor; //type: Transceiver_Form_Factor_TypeIdentity



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


                    YLeaf enabled; //type: boolean
                    YLeaf form_factor; //type: Transceiver_Form_Factor_TypeIdentity
                    YLeaf present; //type: PresentEnum
                    YLeaf connector_type; //type: Fiber_Connector_TypeIdentity
                    YLeaf internal_temp; //type: int16
                    YLeaf vendor; //type: string
                    YLeaf vendor_part; //type: string
                    YLeaf vendor_rev; //type: string
                    YLeaf ethernet_compliance_code; //type: Ethernet_Pmd_TypeIdentity
                    YLeaf sonet_sdh_compliance_code; //type: Sonet_Application_CodeIdentity
                    YLeaf otn_compliance_code; //type: Otn_Application_CodeIdentity
                    YLeaf serial_no; //type: string
                    YLeaf date_code; //type: string
                    YLeaf fault_condition; //type: boolean

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
                        YLeaf index_;

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


                            YLeaf index_; //type: uint16
                            YLeaf description; //type: string
                            YLeaf tx_laser; //type: boolean
                            YLeaf target_output_power; //type: decimal64



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


                            YLeaf index_; //type: uint16
                            YLeaf description; //type: string
                            YLeaf tx_laser; //type: boolean
                            YLeaf target_output_power; //type: decimal64
                            YLeaf output_frequency; //type: uint64

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


                                YLeaf instant; //type: decimal64
                                YLeaf avg; //type: decimal64
                                YLeaf min; //type: decimal64
                                YLeaf max; //type: decimal64



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


                                YLeaf instant; //type: decimal64
                                YLeaf avg; //type: decimal64
                                YLeaf min; //type: decimal64
                                YLeaf max; //type: decimal64



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


                                YLeaf instant; //type: decimal64
                                YLeaf avg; //type: decimal64
                                YLeaf min; //type: decimal64
                                YLeaf max; //type: decimal64



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
        static const Enum::YLeaf PRESENT;
        static const Enum::YLeaf NOT_PRESENT;

};


}
}

#endif /* _OPENCONFIG_PLATFORM_ */

