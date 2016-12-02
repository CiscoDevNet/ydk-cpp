#ifndef _CISCO_IOS_XR_ASR9K_QOS_OPER_
#define _CISCO_IOS_XR_ASR9K_QOS_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_qos_oper {

class PlatformQos : public Entity
{
    public:
        PlatformQos();
        ~PlatformQos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node_name; //type: string


            class Capability : public Entity
            {
                public:
                    Capability();
                    ~Capability();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value max_policy_maps; //type: uint32
                    Value max_policy_hierarchy; //type: uint32
                    Value max_policy_name_length; //type: uint32
                    Value max_classes_per_child_policy; //type: uint32
                    Value max_classes_per_policy; //type: uint32
                    Value max_classes_per_grand_parent_policy; //type: uint32
                    Value max_police_actions_per_class; //type: uint32
                    Value max_marking_actions_per_class; //type: uint32
                    Value max_matches_per_class; //type: uint32
                    Value max_classmap_name_length; //type: uint32
                    Value max_bundle_members; //type: uint32
                    Value max_instance_name_length; //type: uint32




            }; // PlatformQos::Nodes::Node::Capability


            class Interfaces : public Entity
            {
                public:
                    Interfaces();
                    ~Interfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Interface : public Entity
                {
                    public:
                        Interface();
                        ~Interface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string


                    class Input : public Entity
                    {
                        public:
                            Input();
                            ~Input();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Details : public Entity
                        {
                            public:
                                Details();
                                ~Details();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Header : public Entity
                            {
                                public:
                                    Header();
                                    ~Header();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value classes; //type: uint16
                                    Value policy_name; //type: string


                                class InterfaceParameters : public Entity
                                {
                                    public:
                                        InterfaceParameters();
                                        ~InterfaceParameters();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class PortConfigBandwidth : public Entity
                                    {
                                        public:
                                            PortConfigBandwidth();
                                            ~PortConfigBandwidth();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value value_; //type: uint32
                                            Value unit; //type: QosUnitEnum


                                            class QosUnitEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortConfigBandwidth


                                    class AncpConfigBandwidth : public Entity
                                    {
                                        public:
                                            AncpConfigBandwidth();
                                            ~AncpConfigBandwidth();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value value_; //type: uint32
                                            Value unit; //type: QosUnitEnum


                                            class QosUnitEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpConfigBandwidth


                                    class AncpProgrammedBandwidth : public Entity
                                    {
                                        public:
                                            AncpProgrammedBandwidth();
                                            ~AncpProgrammedBandwidth();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value value_; //type: uint32
                                            Value unit; //type: QosUnitEnum


                                            class QosUnitEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpProgrammedBandwidth


                                    class PortShaperRate : public Entity
                                    {
                                        public:
                                            PortShaperRate();
                                            ~PortShaperRate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value value_; //type: uint32
                                            Value unit; //type: QosUnitEnum


                                            class QosUnitEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortShaperRate


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpConfigBandwidth> ancp_config_bandwidth;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::AncpProgrammedBandwidth> ancp_programmed_bandwidth;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortConfigBandwidth> port_config_bandwidth;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters::PortShaperRate> port_shaper_rate;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters


                                class ProgrammedBandwidth : public Entity
                                {
                                    public:
                                        ProgrammedBandwidth();
                                        ~ProgrammedBandwidth();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value value_; //type: uint32
                                        Value unit; //type: QosUnitEnum


                                        class QosUnitEnum;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::ProgrammedBandwidth


                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::InterfaceParameters> interface_parameters;
                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header::ProgrammedBandwidth> programmed_bandwidth;


                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header


                            class Policy : public Entity
                            {
                                public:
                                    Policy();
                                    ~Policy();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class QosShowEaStV1 : public Entity
                                {
                                    public:
                                        QosShowEaStV1();
                                        ~QosShowEaStV1();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value class_level; //type: uint8
                                        Value class_name; //type: string
                                        Value policy_name; //type: string
                                        Value parent_policy_name; //type: string
                                        Value parent_class_name; //type: string


                                    class Queue : public Entity
                                    {
                                        public:
                                            Queue();
                                            ~Queue();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value queue_id; //type: uint32
                                            Value queue_type; //type: QueueEnum
                                            Value class_name; //type: string


                                            class QueueEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Queue


                                    class QueueLimitParameters : public Entity
                                    {
                                        public:
                                            QueueLimitParameters();
                                            ~QueueLimitParameters();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value profile_id; //type: uint32
                                            Value scaling_profile_id; //type: uint32


                                        class QueueLimit : public Entity
                                        {
                                            public:
                                                QueueLimit();
                                                ~QueueLimit();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit


                                        class ConfigQueueLimit : public Entity
                                        {
                                            public:
                                                ConfigQueueLimit();
                                                ~ConfigQueueLimit();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit> queue_limit;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters


                                    class Shape : public Entity
                                    {
                                        public:
                                            Shape();
                                            ~Shape();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value profile_id; //type: uint16


                                        class Cir : public Entity
                                        {
                                            public:
                                                Cir();
                                                ~Cir();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cir


                                        class ConfigBandwidth : public Entity
                                        {
                                            public:
                                                ConfigBandwidth();
                                                ~ConfigBandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class MinimumRate : public Entity
                                            {
                                                public:
                                                    MinimumRate();
                                                    ~MinimumRate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate> minimum_rate;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth


                                        class Cbs : public Entity
                                        {
                                            public:
                                                Cbs();
                                                ~Cbs();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cbs


                                        class Pir : public Entity
                                        {
                                            public:
                                                Pir();
                                                ~Pir();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pir


                                        class Pbs : public Entity
                                        {
                                            public:
                                                Pbs();
                                                ~Pbs();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pbs


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cbs> cbs;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Cir> cir;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth> config_bandwidth;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pbs> pbs;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape::Pir> pir;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape


                                    class Police : public Entity
                                    {
                                        public:
                                            Police();
                                            ~Police();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value policer_type; //type: TbAlgorithmEnum
                                            Value profile_id; //type: uint32


                                        class Cir : public Entity
                                        {
                                            public:
                                                Cir();
                                                ~Cir();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cir


                                        class Cbs : public Entity
                                        {
                                            public:
                                                Cbs();
                                                ~Cbs();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cbs


                                        class Pir : public Entity
                                        {
                                            public:
                                                Pir();
                                                ~Pir();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pir


                                        class Pbs : public Entity
                                        {
                                            public:
                                                Pbs();
                                                ~Pbs();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pbs


                                        class PoliceConfigParameters : public Entity
                                        {
                                            public:
                                                PoliceConfigParameters();
                                                ~PoliceConfigParameters();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class AverageRate : public Entity
                                            {
                                                public:
                                                    AverageRate();
                                                    ~AverageRate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate


                                            class PeakRate : public Entity
                                            {
                                                public:
                                                    PeakRate();
                                                    ~PeakRate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate


                                            class ConformBurst : public Entity
                                            {
                                                public:
                                                    ConformBurst();
                                                    ~ConformBurst();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst


                                            class ExceedBurst : public Entity
                                            {
                                                public:
                                                    ExceedBurst();
                                                    ~ExceedBurst();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate> average_rate;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst> conform_burst;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate> peak_rate;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cbs> cbs;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Cir> cir;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pbs> pbs;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::Pir> pir;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters> police_config_parameters;
                                            class TbAlgorithmEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police


                                    class Wfq : public Entity
                                    {
                                        public:
                                            Wfq();
                                            ~Wfq();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value profile_id; //type: uint32
                                            Value committed_weight; //type: uint32
                                            Value excess_weight; //type: uint16
                                            Value excess_ratio; //type: uint16
                                            Value chunk_id; //type: uint32
                                            Value level; //type: uint8


                                        class ParentBandwidth : public Entity
                                        {
                                            public:
                                                ParentBandwidth();
                                                ~ParentBandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth


                                        class Bandwidth : public Entity
                                        {
                                            public:
                                                Bandwidth();
                                                ~Bandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::Bandwidth


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::Bandwidth> bandwidth;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth> parent_bandwidth;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq


                                    class Wred : public Entity
                                    {
                                        public:
                                            Wred();
                                            ~Wred();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value type; //type: WredEnum
                                            Value curve_xr; //type: uint16
                                            Value table_id; //type: uint8
                                            Value profile_id; //type: uint32
                                            Value scaling_profile_id; //type: uint32


                                        class Curve : public Entity
                                        {
                                            public:
                                                Curve();
                                                ~Curve();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value match; //type: string


                                            class MinThreshold : public Entity
                                            {
                                                public:
                                                    MinThreshold();
                                                    ~MinThreshold();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold


                                            class MinThresholdUserConfig : public Entity
                                            {
                                                public:
                                                    MinThresholdUserConfig();
                                                    ~MinThresholdUserConfig();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig


                                            class MaxThreshold : public Entity
                                            {
                                                public:
                                                    MaxThreshold();
                                                    ~MaxThreshold();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold


                                            class MaxThresholdUserConfig : public Entity
                                            {
                                                public:
                                                    MaxThresholdUserConfig();
                                                    ~MaxThresholdUserConfig();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold> max_threshold;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold> min_threshold;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred::Curve> > curve;
                                            class WredEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred


                                    class Mark : public Entity
                                    {
                                        public:
                                            Mark();
                                            ~Mark();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ChildMark : public Entity
                                        {
                                            public:
                                                ChildMark();
                                                ~ChildMark();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark


                                        class PoliceConform : public Entity
                                        {
                                            public:
                                                PoliceConform();
                                                ~PoliceConform();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform


                                        class PoliceExceed : public Entity
                                        {
                                            public:
                                                PoliceExceed();
                                                ~PoliceExceed();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed


                                        class PoliceViolate : public Entity
                                        {
                                            public:
                                                PoliceViolate();
                                                ~PoliceViolate();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate


                                        class ParentMark : public Entity
                                        {
                                            public:
                                                ParentMark();
                                                ~ParentMark();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark


                                        class ParentPoliceConform : public Entity
                                        {
                                            public:
                                                ParentPoliceConform();
                                                ~ParentPoliceConform();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform


                                        class ParentPoliceExceed : public Entity
                                        {
                                            public:
                                                ParentPoliceExceed();
                                                ~ParentPoliceExceed();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed


                                        class ParentPoliceViolate : public Entity
                                        {
                                            public:
                                                ParentPoliceViolate();
                                                ~ParentPoliceViolate();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ChildMark> child_mark;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentMark> parent_mark;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform> parent_police_conform;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed> parent_police_exceed;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate> parent_police_violate;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceConform> police_conform;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceExceed> police_exceed;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark::PoliceViolate> police_violate;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Mark> mark;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Police> police;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Queue> queue;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::QueueLimitParameters> queue_limit_parameters;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Shape> shape;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wfq> wfq;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1::Wred> wred;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy::QosShowEaStV1> > qos_show_ea_st_v1;


                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy


                            class PolicyTyphoon : public Entity
                            {
                                public:
                                    PolicyTyphoon();
                                    ~PolicyTyphoon();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class QosShowEaStV2 : public Entity
                                {
                                    public:
                                        QosShowEaStV2();
                                        ~QosShowEaStV2();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value class_level; //type: uint8
                                        Value class_name; //type: string
                                        Value policy_name; //type: string
                                        Value parent_policy_name; //type: string
                                        Value parent_class_name; //type: string


                                    class Queue : public Entity
                                    {
                                        public:
                                            Queue();
                                            ~Queue();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value queue_id; //type: uint32
                                            Value queue_type; //type: QueueEnum
                                            Value class_name; //type: string


                                            class QueueEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue


                                    class QueueLimitParameters : public Entity
                                    {
                                        public:
                                            QueueLimitParameters();
                                            ~QueueLimitParameters();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value absolute_index; //type: uint16
                                            Value template_id; //type: uint16
                                            Value curve_id; //type: uint16


                                        class QueueLimit : public Entity
                                        {
                                            public:
                                                QueueLimit();
                                                ~QueueLimit();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit


                                        class ConfigQueueLimit : public Entity
                                        {
                                            public:
                                                ConfigQueueLimit();
                                                ~ConfigQueueLimit();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit> queue_limit;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters


                                    class Shape : public Entity
                                    {
                                        public:
                                            Shape();
                                            ~Shape();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value cir_shape_type; //type: ShapeProfiletypeV2Enum
                                            Value pir_shape_type; //type: ShapeProfiletypeV2Enum


                                        class CirShape : public Entity
                                        {
                                            public:
                                                CirShape();
                                                ~CirShape();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value chunk_id; //type: uint32
                                                Value profile_id; //type: uint16
                                                Value scale_factor; //type: uint16


                                            class Cir : public Entity
                                            {
                                                public:
                                                    Cir();
                                                    ~Cir();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir


                                            class ConfigBandwidth : public Entity
                                            {
                                                public:
                                                    ConfigBandwidth();
                                                    ~ConfigBandwidth();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class MinimumRate : public Entity
                                                {
                                                    public:
                                                        MinimumRate();
                                                        ~MinimumRate();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate> minimum_rate;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth


                                            class Cbs : public Entity
                                            {
                                                public:
                                                    Cbs();
                                                    ~Cbs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs> cbs;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir> cir;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth> config_bandwidth;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape


                                        class PirShape : public Entity
                                        {
                                            public:
                                                PirShape();
                                                ~PirShape();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value chunk_id; //type: uint32
                                                Value profile_id; //type: uint16
                                                Value scale_factor; //type: uint16


                                            class Pir : public Entity
                                            {
                                                public:
                                                    Pir();
                                                    ~Pir();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir


                                            class Pbs : public Entity
                                            {
                                                public:
                                                    Pbs();
                                                    ~Pbs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs> pbs;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir> pir;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape> cir_shape;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape> pir_shape;
                                            class ShapeProfiletypeV2Enum;
                                            class ShapeProfiletypeV2Enum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape


                                    class Police : public Entity
                                    {
                                        public:
                                            Police();
                                            ~Police();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value policer_type; //type: TbAlgorithmEnum
                                            Value profile_id; //type: uint32


                                        class Cir : public Entity
                                        {
                                            public:
                                                Cir();
                                                ~Cir();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir


                                        class Cbs : public Entity
                                        {
                                            public:
                                                Cbs();
                                                ~Cbs();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs


                                        class Pir : public Entity
                                        {
                                            public:
                                                Pir();
                                                ~Pir();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir


                                        class Pbs : public Entity
                                        {
                                            public:
                                                Pbs();
                                                ~Pbs();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs


                                        class PoliceConfigParameters : public Entity
                                        {
                                            public:
                                                PoliceConfigParameters();
                                                ~PoliceConfigParameters();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class AverageRate : public Entity
                                            {
                                                public:
                                                    AverageRate();
                                                    ~AverageRate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate


                                            class PeakRate : public Entity
                                            {
                                                public:
                                                    PeakRate();
                                                    ~PeakRate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate


                                            class ConformBurst : public Entity
                                            {
                                                public:
                                                    ConformBurst();
                                                    ~ConformBurst();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst


                                            class ExceedBurst : public Entity
                                            {
                                                public:
                                                    ExceedBurst();
                                                    ~ExceedBurst();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate> average_rate;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst> conform_burst;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate> peak_rate;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs> cbs;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir> cir;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs> pbs;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir> pir;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters> police_config_parameters;
                                            class TbAlgorithmEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police


                                    class Wfq : public Entity
                                    {
                                        public:
                                            Wfq();
                                            ~Wfq();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value profile_id; //type: uint32
                                            Value committed_weight; //type: uint32
                                            Value excess_weight; //type: uint16
                                            Value excess_ratio; //type: uint16
                                            Value chunk_id; //type: uint32
                                            Value level; //type: uint8


                                        class ParentBandwidth : public Entity
                                        {
                                            public:
                                                ParentBandwidth();
                                                ~ParentBandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth


                                        class Bandwidth : public Entity
                                        {
                                            public:
                                                Bandwidth();
                                                ~Bandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth> bandwidth;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth> parent_bandwidth;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq


                                    class Wred : public Entity
                                    {
                                        public:
                                            Wred();
                                            ~Wred();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value type; //type: WredEnum
                                            Value curve_xr; //type: uint16


                                        class Curve : public Entity
                                        {
                                            public:
                                                Curve();
                                                ~Curve();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value absolute_index; //type: uint16
                                                Value template_id; //type: uint16
                                                Value curve_id; //type: uint16
                                                Value match; //type: string
                                                Value exp_match; //type: string


                                            class MinThreshold : public Entity
                                            {
                                                public:
                                                    MinThreshold();
                                                    ~MinThreshold();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold


                                            class MinThresholdUserConfig : public Entity
                                            {
                                                public:
                                                    MinThresholdUserConfig();
                                                    ~MinThresholdUserConfig();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig


                                            class MaxThreshold : public Entity
                                            {
                                                public:
                                                    MaxThreshold();
                                                    ~MaxThreshold();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold


                                            class MaxThresholdUserConfig : public Entity
                                            {
                                                public:
                                                    MaxThresholdUserConfig();
                                                    ~MaxThresholdUserConfig();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold> max_threshold;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold> min_threshold;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve> > curve;
                                            class WredEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred


                                    class Mark : public Entity
                                    {
                                        public:
                                            Mark();
                                            ~Mark();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ChildMark : public Entity
                                        {
                                            public:
                                                ChildMark();
                                                ~ChildMark();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark


                                        class PoliceConform : public Entity
                                        {
                                            public:
                                                PoliceConform();
                                                ~PoliceConform();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform


                                        class PoliceExceed : public Entity
                                        {
                                            public:
                                                PoliceExceed();
                                                ~PoliceExceed();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed


                                        class PoliceViolate : public Entity
                                        {
                                            public:
                                                PoliceViolate();
                                                ~PoliceViolate();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate


                                        class ParentMark : public Entity
                                        {
                                            public:
                                                ParentMark();
                                                ~ParentMark();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark


                                        class ParentPoliceConform : public Entity
                                        {
                                            public:
                                                ParentPoliceConform();
                                                ~ParentPoliceConform();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform


                                        class ParentPoliceExceed : public Entity
                                        {
                                            public:
                                                ParentPoliceExceed();
                                                ~ParentPoliceExceed();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed


                                        class ParentPoliceViolate : public Entity
                                        {
                                            public:
                                                ParentPoliceViolate();
                                                ~ParentPoliceViolate();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark> child_mark;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark> parent_mark;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform> parent_police_conform;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed> parent_police_exceed;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate> parent_police_violate;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform> police_conform;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed> police_exceed;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate> police_violate;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Mark> mark;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Police> police;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Queue> queue;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters> queue_limit_parameters;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Shape> shape;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wfq> wfq;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2::Wred> wred;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon::QosShowEaStV2> > qos_show_ea_st_v2;


                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon


                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Header> header;
                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::Policy> policy;
                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details::PolicyTyphoon> policy_typhoon;


                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details


                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Details> details;


                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input


                    class Output : public Entity
                    {
                        public:
                            Output();
                            ~Output();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Details : public Entity
                        {
                            public:
                                Details();
                                ~Details();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Header : public Entity
                            {
                                public:
                                    Header();
                                    ~Header();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value classes; //type: uint16
                                    Value policy_name; //type: string


                                class InterfaceParameters : public Entity
                                {
                                    public:
                                        InterfaceParameters();
                                        ~InterfaceParameters();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class PortConfigBandwidth : public Entity
                                    {
                                        public:
                                            PortConfigBandwidth();
                                            ~PortConfigBandwidth();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value value_; //type: uint32
                                            Value unit; //type: QosUnitEnum


                                            class QosUnitEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth


                                    class AncpConfigBandwidth : public Entity
                                    {
                                        public:
                                            AncpConfigBandwidth();
                                            ~AncpConfigBandwidth();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value value_; //type: uint32
                                            Value unit; //type: QosUnitEnum


                                            class QosUnitEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth


                                    class AncpProgrammedBandwidth : public Entity
                                    {
                                        public:
                                            AncpProgrammedBandwidth();
                                            ~AncpProgrammedBandwidth();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value value_; //type: uint32
                                            Value unit; //type: QosUnitEnum


                                            class QosUnitEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth


                                    class PortShaperRate : public Entity
                                    {
                                        public:
                                            PortShaperRate();
                                            ~PortShaperRate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value value_; //type: uint32
                                            Value unit; //type: QosUnitEnum


                                            class QosUnitEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpConfigBandwidth> ancp_config_bandwidth;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::AncpProgrammedBandwidth> ancp_programmed_bandwidth;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortConfigBandwidth> port_config_bandwidth;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters::PortShaperRate> port_shaper_rate;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters


                                class ProgrammedBandwidth : public Entity
                                {
                                    public:
                                        ProgrammedBandwidth();
                                        ~ProgrammedBandwidth();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value value_; //type: uint32
                                        Value unit; //type: QosUnitEnum


                                        class QosUnitEnum;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth


                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::InterfaceParameters> interface_parameters;
                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header::ProgrammedBandwidth> programmed_bandwidth;


                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header


                            class Policy : public Entity
                            {
                                public:
                                    Policy();
                                    ~Policy();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class QosShowEaStV1 : public Entity
                                {
                                    public:
                                        QosShowEaStV1();
                                        ~QosShowEaStV1();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value class_level; //type: uint8
                                        Value class_name; //type: string
                                        Value policy_name; //type: string
                                        Value parent_policy_name; //type: string
                                        Value parent_class_name; //type: string


                                    class Queue : public Entity
                                    {
                                        public:
                                            Queue();
                                            ~Queue();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value queue_id; //type: uint32
                                            Value queue_type; //type: QueueEnum
                                            Value class_name; //type: string


                                            class QueueEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue


                                    class QueueLimitParameters : public Entity
                                    {
                                        public:
                                            QueueLimitParameters();
                                            ~QueueLimitParameters();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value profile_id; //type: uint32
                                            Value scaling_profile_id; //type: uint32


                                        class QueueLimit : public Entity
                                        {
                                            public:
                                                QueueLimit();
                                                ~QueueLimit();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit


                                        class ConfigQueueLimit : public Entity
                                        {
                                            public:
                                                ConfigQueueLimit();
                                                ~ConfigQueueLimit();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit> queue_limit;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters


                                    class Shape : public Entity
                                    {
                                        public:
                                            Shape();
                                            ~Shape();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value profile_id; //type: uint16


                                        class Cir : public Entity
                                        {
                                            public:
                                                Cir();
                                                ~Cir();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir


                                        class ConfigBandwidth : public Entity
                                        {
                                            public:
                                                ConfigBandwidth();
                                                ~ConfigBandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class MinimumRate : public Entity
                                            {
                                                public:
                                                    MinimumRate();
                                                    ~MinimumRate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate> minimum_rate;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth


                                        class Cbs : public Entity
                                        {
                                            public:
                                                Cbs();
                                                ~Cbs();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs


                                        class Pir : public Entity
                                        {
                                            public:
                                                Pir();
                                                ~Pir();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir


                                        class Pbs : public Entity
                                        {
                                            public:
                                                Pbs();
                                                ~Pbs();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cbs> cbs;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Cir> cir;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth> config_bandwidth;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pbs> pbs;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape::Pir> pir;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape


                                    class Police : public Entity
                                    {
                                        public:
                                            Police();
                                            ~Police();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value policer_type; //type: TbAlgorithmEnum
                                            Value profile_id; //type: uint32


                                        class Cir : public Entity
                                        {
                                            public:
                                                Cir();
                                                ~Cir();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir


                                        class Cbs : public Entity
                                        {
                                            public:
                                                Cbs();
                                                ~Cbs();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs


                                        class Pir : public Entity
                                        {
                                            public:
                                                Pir();
                                                ~Pir();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir


                                        class Pbs : public Entity
                                        {
                                            public:
                                                Pbs();
                                                ~Pbs();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs


                                        class PoliceConfigParameters : public Entity
                                        {
                                            public:
                                                PoliceConfigParameters();
                                                ~PoliceConfigParameters();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class AverageRate : public Entity
                                            {
                                                public:
                                                    AverageRate();
                                                    ~AverageRate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate


                                            class PeakRate : public Entity
                                            {
                                                public:
                                                    PeakRate();
                                                    ~PeakRate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate


                                            class ConformBurst : public Entity
                                            {
                                                public:
                                                    ConformBurst();
                                                    ~ConformBurst();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst


                                            class ExceedBurst : public Entity
                                            {
                                                public:
                                                    ExceedBurst();
                                                    ~ExceedBurst();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate> average_rate;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst> conform_burst;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate> peak_rate;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cbs> cbs;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Cir> cir;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pbs> pbs;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::Pir> pir;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters> police_config_parameters;
                                            class TbAlgorithmEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police


                                    class Wfq : public Entity
                                    {
                                        public:
                                            Wfq();
                                            ~Wfq();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value profile_id; //type: uint32
                                            Value committed_weight; //type: uint32
                                            Value excess_weight; //type: uint16
                                            Value excess_ratio; //type: uint16
                                            Value chunk_id; //type: uint32
                                            Value level; //type: uint8


                                        class ParentBandwidth : public Entity
                                        {
                                            public:
                                                ParentBandwidth();
                                                ~ParentBandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth


                                        class Bandwidth : public Entity
                                        {
                                            public:
                                                Bandwidth();
                                                ~Bandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::Bandwidth> bandwidth;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth> parent_bandwidth;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq


                                    class Wred : public Entity
                                    {
                                        public:
                                            Wred();
                                            ~Wred();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value type; //type: WredEnum
                                            Value curve_xr; //type: uint16
                                            Value table_id; //type: uint8
                                            Value profile_id; //type: uint32
                                            Value scaling_profile_id; //type: uint32


                                        class Curve : public Entity
                                        {
                                            public:
                                                Curve();
                                                ~Curve();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value match; //type: string


                                            class MinThreshold : public Entity
                                            {
                                                public:
                                                    MinThreshold();
                                                    ~MinThreshold();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold


                                            class MinThresholdUserConfig : public Entity
                                            {
                                                public:
                                                    MinThresholdUserConfig();
                                                    ~MinThresholdUserConfig();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig


                                            class MaxThreshold : public Entity
                                            {
                                                public:
                                                    MaxThreshold();
                                                    ~MaxThreshold();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold


                                            class MaxThresholdUserConfig : public Entity
                                            {
                                                public:
                                                    MaxThresholdUserConfig();
                                                    ~MaxThresholdUserConfig();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold> max_threshold;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold> min_threshold;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred::Curve> > curve;
                                            class WredEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred


                                    class Mark : public Entity
                                    {
                                        public:
                                            Mark();
                                            ~Mark();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ChildMark : public Entity
                                        {
                                            public:
                                                ChildMark();
                                                ~ChildMark();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark


                                        class PoliceConform : public Entity
                                        {
                                            public:
                                                PoliceConform();
                                                ~PoliceConform();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform


                                        class PoliceExceed : public Entity
                                        {
                                            public:
                                                PoliceExceed();
                                                ~PoliceExceed();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed


                                        class PoliceViolate : public Entity
                                        {
                                            public:
                                                PoliceViolate();
                                                ~PoliceViolate();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate


                                        class ParentMark : public Entity
                                        {
                                            public:
                                                ParentMark();
                                                ~ParentMark();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark


                                        class ParentPoliceConform : public Entity
                                        {
                                            public:
                                                ParentPoliceConform();
                                                ~ParentPoliceConform();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform


                                        class ParentPoliceExceed : public Entity
                                        {
                                            public:
                                                ParentPoliceExceed();
                                                ~ParentPoliceExceed();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed


                                        class ParentPoliceViolate : public Entity
                                        {
                                            public:
                                                ParentPoliceViolate();
                                                ~ParentPoliceViolate();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ChildMark> child_mark;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentMark> parent_mark;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform> parent_police_conform;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed> parent_police_exceed;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate> parent_police_violate;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceConform> police_conform;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceExceed> police_exceed;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark::PoliceViolate> police_violate;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Mark> mark;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Police> police;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Queue> queue;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::QueueLimitParameters> queue_limit_parameters;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Shape> shape;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wfq> wfq;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1::Wred> wred;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy::QosShowEaStV1> > qos_show_ea_st_v1;


                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy


                            class PolicyTyphoon : public Entity
                            {
                                public:
                                    PolicyTyphoon();
                                    ~PolicyTyphoon();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class QosShowEaStV2 : public Entity
                                {
                                    public:
                                        QosShowEaStV2();
                                        ~QosShowEaStV2();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value class_level; //type: uint8
                                        Value class_name; //type: string
                                        Value policy_name; //type: string
                                        Value parent_policy_name; //type: string
                                        Value parent_class_name; //type: string


                                    class Queue : public Entity
                                    {
                                        public:
                                            Queue();
                                            ~Queue();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value queue_id; //type: uint32
                                            Value queue_type; //type: QueueEnum
                                            Value class_name; //type: string


                                            class QueueEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue


                                    class QueueLimitParameters : public Entity
                                    {
                                        public:
                                            QueueLimitParameters();
                                            ~QueueLimitParameters();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value absolute_index; //type: uint16
                                            Value template_id; //type: uint16
                                            Value curve_id; //type: uint16


                                        class QueueLimit : public Entity
                                        {
                                            public:
                                                QueueLimit();
                                                ~QueueLimit();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit


                                        class ConfigQueueLimit : public Entity
                                        {
                                            public:
                                                ConfigQueueLimit();
                                                ~ConfigQueueLimit();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit> queue_limit;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters


                                    class Shape : public Entity
                                    {
                                        public:
                                            Shape();
                                            ~Shape();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value cir_shape_type; //type: ShapeProfiletypeV2Enum
                                            Value pir_shape_type; //type: ShapeProfiletypeV2Enum


                                        class CirShape : public Entity
                                        {
                                            public:
                                                CirShape();
                                                ~CirShape();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value chunk_id; //type: uint32
                                                Value profile_id; //type: uint16
                                                Value scale_factor; //type: uint16


                                            class Cir : public Entity
                                            {
                                                public:
                                                    Cir();
                                                    ~Cir();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir


                                            class ConfigBandwidth : public Entity
                                            {
                                                public:
                                                    ConfigBandwidth();
                                                    ~ConfigBandwidth();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class MinimumRate : public Entity
                                                {
                                                    public:
                                                        MinimumRate();
                                                        ~MinimumRate();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate> minimum_rate;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth


                                            class Cbs : public Entity
                                            {
                                                public:
                                                    Cbs();
                                                    ~Cbs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs> cbs;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir> cir;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth> config_bandwidth;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape


                                        class PirShape : public Entity
                                        {
                                            public:
                                                PirShape();
                                                ~PirShape();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value chunk_id; //type: uint32
                                                Value profile_id; //type: uint16
                                                Value scale_factor; //type: uint16


                                            class Pir : public Entity
                                            {
                                                public:
                                                    Pir();
                                                    ~Pir();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir


                                            class Pbs : public Entity
                                            {
                                                public:
                                                    Pbs();
                                                    ~Pbs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs> pbs;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir> pir;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape> cir_shape;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape> pir_shape;
                                            class ShapeProfiletypeV2Enum;
                                            class ShapeProfiletypeV2Enum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape


                                    class Police : public Entity
                                    {
                                        public:
                                            Police();
                                            ~Police();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value policer_type; //type: TbAlgorithmEnum
                                            Value profile_id; //type: uint32


                                        class Cir : public Entity
                                        {
                                            public:
                                                Cir();
                                                ~Cir();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir


                                        class Cbs : public Entity
                                        {
                                            public:
                                                Cbs();
                                                ~Cbs();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs


                                        class Pir : public Entity
                                        {
                                            public:
                                                Pir();
                                                ~Pir();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir


                                        class Pbs : public Entity
                                        {
                                            public:
                                                Pbs();
                                                ~Pbs();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs


                                        class PoliceConfigParameters : public Entity
                                        {
                                            public:
                                                PoliceConfigParameters();
                                                ~PoliceConfigParameters();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class AverageRate : public Entity
                                            {
                                                public:
                                                    AverageRate();
                                                    ~AverageRate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate


                                            class PeakRate : public Entity
                                            {
                                                public:
                                                    PeakRate();
                                                    ~PeakRate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate


                                            class ConformBurst : public Entity
                                            {
                                                public:
                                                    ConformBurst();
                                                    ~ConformBurst();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst


                                            class ExceedBurst : public Entity
                                            {
                                                public:
                                                    ExceedBurst();
                                                    ~ExceedBurst();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate> average_rate;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst> conform_burst;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate> peak_rate;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs> cbs;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir> cir;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs> pbs;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir> pir;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters> police_config_parameters;
                                            class TbAlgorithmEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police


                                    class Wfq : public Entity
                                    {
                                        public:
                                            Wfq();
                                            ~Wfq();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value profile_id; //type: uint32
                                            Value committed_weight; //type: uint32
                                            Value excess_weight; //type: uint16
                                            Value excess_ratio; //type: uint16
                                            Value chunk_id; //type: uint32
                                            Value level; //type: uint8


                                        class ParentBandwidth : public Entity
                                        {
                                            public:
                                                ParentBandwidth();
                                                ~ParentBandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth


                                        class Bandwidth : public Entity
                                        {
                                            public:
                                                Bandwidth();
                                                ~Bandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth> bandwidth;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth> parent_bandwidth;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq


                                    class Wred : public Entity
                                    {
                                        public:
                                            Wred();
                                            ~Wred();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value type; //type: WredEnum
                                            Value curve_xr; //type: uint16


                                        class Curve : public Entity
                                        {
                                            public:
                                                Curve();
                                                ~Curve();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value absolute_index; //type: uint16
                                                Value template_id; //type: uint16
                                                Value curve_id; //type: uint16
                                                Value match; //type: string
                                                Value exp_match; //type: string


                                            class MinThreshold : public Entity
                                            {
                                                public:
                                                    MinThreshold();
                                                    ~MinThreshold();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold


                                            class MinThresholdUserConfig : public Entity
                                            {
                                                public:
                                                    MinThresholdUserConfig();
                                                    ~MinThresholdUserConfig();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig


                                            class MaxThreshold : public Entity
                                            {
                                                public:
                                                    MaxThreshold();
                                                    ~MaxThreshold();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold


                                            class MaxThresholdUserConfig : public Entity
                                            {
                                                public:
                                                    MaxThresholdUserConfig();
                                                    ~MaxThresholdUserConfig();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold> max_threshold;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold> min_threshold;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve> > curve;
                                            class WredEnum;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred


                                    class Mark : public Entity
                                    {
                                        public:
                                            Mark();
                                            ~Mark();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class ChildMark : public Entity
                                        {
                                            public:
                                                ChildMark();
                                                ~ChildMark();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark


                                        class PoliceConform : public Entity
                                        {
                                            public:
                                                PoliceConform();
                                                ~PoliceConform();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform


                                        class PoliceExceed : public Entity
                                        {
                                            public:
                                                PoliceExceed();
                                                ~PoliceExceed();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed


                                        class PoliceViolate : public Entity
                                        {
                                            public:
                                                PoliceViolate();
                                                ~PoliceViolate();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate


                                        class ParentMark : public Entity
                                        {
                                            public:
                                                ParentMark();
                                                ~ParentMark();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark


                                        class ParentPoliceConform : public Entity
                                        {
                                            public:
                                                ParentPoliceConform();
                                                ~ParentPoliceConform();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform


                                        class ParentPoliceExceed : public Entity
                                        {
                                            public:
                                                ParentPoliceExceed();
                                                ~ParentPoliceExceed();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed


                                        class ParentPoliceViolate : public Entity
                                        {
                                            public:
                                                ParentPoliceViolate();
                                                ~ParentPoliceViolate();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value action_type; //type: ActionEnum


                                            class MarkDetail : public Entity
                                            {
                                                public:
                                                    MarkDetail();
                                                    ~MarkDetail();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value mark_value; //type: uint8
                                                    Value action_opcode; //type: ActionOpcodeEnum


                                                    class ActionOpcodeEnum;


                                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;
                                                class ActionEnum;


                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark> child_mark;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark> parent_mark;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform> parent_police_conform;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed> parent_police_exceed;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate> parent_police_violate;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform> police_conform;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed> police_exceed;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate> police_violate;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Mark> mark;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Police> police;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Queue> queue;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters> queue_limit_parameters;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Shape> shape;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wfq> wfq;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2::Wred> wred;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon::QosShowEaStV2> > qos_show_ea_st_v2;


                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon


                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Header> header;
                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::Policy> policy;
                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details::PolicyTyphoon> policy_typhoon;


                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details


                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Details> details;


                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output


                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input> input;
                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output> output;


                }; // PlatformQos::Nodes::Node::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface> > interface;


            }; // PlatformQos::Nodes::Node::Interfaces


            class BundleInterfaces : public Entity
            {
                public:
                    BundleInterfaces();
                    ~BundleInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BundleInterface : public Entity
                {
                    public:
                        BundleInterface();
                        ~BundleInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string


                    class BundleOutput : public Entity
                    {
                        public:
                            BundleOutput();
                            ~BundleOutput();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class MemberInterfaces : public Entity
                        {
                            public:
                                MemberInterfaces();
                                ~MemberInterfaces();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MemberInterface : public Entity
                            {
                                public:
                                    MemberInterface();
                                    ~MemberInterface();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string


                                class Details : public Entity
                                {
                                    public:
                                        Details();
                                        ~Details();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Header : public Entity
                                    {
                                        public:
                                            Header();
                                            ~Header();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value classes; //type: uint16
                                            Value policy_name; //type: string


                                        class InterfaceParameters : public Entity
                                        {
                                            public:
                                                InterfaceParameters();
                                                ~InterfaceParameters();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class PortConfigBandwidth : public Entity
                                            {
                                                public:
                                                    PortConfigBandwidth();
                                                    ~PortConfigBandwidth();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth


                                            class AncpConfigBandwidth : public Entity
                                            {
                                                public:
                                                    AncpConfigBandwidth();
                                                    ~AncpConfigBandwidth();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth


                                            class AncpProgrammedBandwidth : public Entity
                                            {
                                                public:
                                                    AncpProgrammedBandwidth();
                                                    ~AncpProgrammedBandwidth();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth


                                            class PortShaperRate : public Entity
                                            {
                                                public:
                                                    PortShaperRate();
                                                    ~PortShaperRate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth> ancp_config_bandwidth;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth> ancp_programmed_bandwidth;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth> port_config_bandwidth;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate> port_shaper_rate;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters


                                        class ProgrammedBandwidth : public Entity
                                        {
                                            public:
                                                ProgrammedBandwidth();
                                                ~ProgrammedBandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters> interface_parameters;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth> programmed_bandwidth;


                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header


                                    class Policy : public Entity
                                    {
                                        public:
                                            Policy();
                                            ~Policy();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class QosShowEaStV1 : public Entity
                                        {
                                            public:
                                                QosShowEaStV1();
                                                ~QosShowEaStV1();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value class_level; //type: uint8
                                                Value class_name; //type: string
                                                Value policy_name; //type: string
                                                Value parent_policy_name; //type: string
                                                Value parent_class_name; //type: string


                                            class Queue : public Entity
                                            {
                                                public:
                                                    Queue();
                                                    ~Queue();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value queue_id; //type: uint32
                                                    Value queue_type; //type: QueueEnum
                                                    Value class_name; //type: string


                                                    class QueueEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue


                                            class QueueLimitParameters : public Entity
                                            {
                                                public:
                                                    QueueLimitParameters();
                                                    ~QueueLimitParameters();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value profile_id; //type: uint32
                                                    Value scaling_profile_id; //type: uint32


                                                class QueueLimit : public Entity
                                                {
                                                    public:
                                                        QueueLimit();
                                                        ~QueueLimit();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit


                                                class ConfigQueueLimit : public Entity
                                                {
                                                    public:
                                                        ConfigQueueLimit();
                                                        ~ConfigQueueLimit();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit> queue_limit;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters


                                            class Shape : public Entity
                                            {
                                                public:
                                                    Shape();
                                                    ~Shape();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value profile_id; //type: uint16


                                                class Cir : public Entity
                                                {
                                                    public:
                                                        Cir();
                                                        ~Cir();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir


                                                class ConfigBandwidth : public Entity
                                                {
                                                    public:
                                                        ConfigBandwidth();
                                                        ~ConfigBandwidth();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class MinimumRate : public Entity
                                                    {
                                                        public:
                                                            MinimumRate();
                                                            ~MinimumRate();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate> minimum_rate;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth


                                                class Cbs : public Entity
                                                {
                                                    public:
                                                        Cbs();
                                                        ~Cbs();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs


                                                class Pir : public Entity
                                                {
                                                    public:
                                                        Pir();
                                                        ~Pir();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir


                                                class Pbs : public Entity
                                                {
                                                    public:
                                                        Pbs();
                                                        ~Pbs();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs> cbs;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir> cir;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth> config_bandwidth;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs> pbs;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir> pir;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape


                                            class Police : public Entity
                                            {
                                                public:
                                                    Police();
                                                    ~Police();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value policer_type; //type: TbAlgorithmEnum
                                                    Value profile_id; //type: uint32


                                                class Cir : public Entity
                                                {
                                                    public:
                                                        Cir();
                                                        ~Cir();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir


                                                class Cbs : public Entity
                                                {
                                                    public:
                                                        Cbs();
                                                        ~Cbs();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs


                                                class Pir : public Entity
                                                {
                                                    public:
                                                        Pir();
                                                        ~Pir();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir


                                                class Pbs : public Entity
                                                {
                                                    public:
                                                        Pbs();
                                                        ~Pbs();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs


                                                class PoliceConfigParameters : public Entity
                                                {
                                                    public:
                                                        PoliceConfigParameters();
                                                        ~PoliceConfigParameters();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class AverageRate : public Entity
                                                    {
                                                        public:
                                                            AverageRate();
                                                            ~AverageRate();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate


                                                    class PeakRate : public Entity
                                                    {
                                                        public:
                                                            PeakRate();
                                                            ~PeakRate();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate


                                                    class ConformBurst : public Entity
                                                    {
                                                        public:
                                                            ConformBurst();
                                                            ~ConformBurst();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst


                                                    class ExceedBurst : public Entity
                                                    {
                                                        public:
                                                            ExceedBurst();
                                                            ~ExceedBurst();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate> average_rate;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst> conform_burst;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate> peak_rate;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs> cbs;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir> cir;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs> pbs;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir> pir;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters> police_config_parameters;
                                                    class TbAlgorithmEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police


                                            class Wfq : public Entity
                                            {
                                                public:
                                                    Wfq();
                                                    ~Wfq();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value profile_id; //type: uint32
                                                    Value committed_weight; //type: uint32
                                                    Value excess_weight; //type: uint16
                                                    Value excess_ratio; //type: uint16
                                                    Value chunk_id; //type: uint32
                                                    Value level; //type: uint8


                                                class ParentBandwidth : public Entity
                                                {
                                                    public:
                                                        ParentBandwidth();
                                                        ~ParentBandwidth();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth


                                                class Bandwidth : public Entity
                                                {
                                                    public:
                                                        Bandwidth();
                                                        ~Bandwidth();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth> bandwidth;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth> parent_bandwidth;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq


                                            class Wred : public Entity
                                            {
                                                public:
                                                    Wred();
                                                    ~Wred();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value type; //type: WredEnum
                                                    Value curve_xr; //type: uint16
                                                    Value table_id; //type: uint8
                                                    Value profile_id; //type: uint32
                                                    Value scaling_profile_id; //type: uint32


                                                class Curve : public Entity
                                                {
                                                    public:
                                                        Curve();
                                                        ~Curve();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value match; //type: string


                                                    class MinThreshold : public Entity
                                                    {
                                                        public:
                                                            MinThreshold();
                                                            ~MinThreshold();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold


                                                    class MinThresholdUserConfig : public Entity
                                                    {
                                                        public:
                                                            MinThresholdUserConfig();
                                                            ~MinThresholdUserConfig();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig


                                                    class MaxThreshold : public Entity
                                                    {
                                                        public:
                                                            MaxThreshold();
                                                            ~MaxThreshold();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold


                                                    class MaxThresholdUserConfig : public Entity
                                                    {
                                                        public:
                                                            MaxThresholdUserConfig();
                                                            ~MaxThresholdUserConfig();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold> max_threshold;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold> min_threshold;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve> > curve;
                                                    class WredEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred


                                            class Mark : public Entity
                                            {
                                                public:
                                                    Mark();
                                                    ~Mark();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ChildMark : public Entity
                                                {
                                                    public:
                                                        ChildMark();
                                                        ~ChildMark();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark


                                                class PoliceConform : public Entity
                                                {
                                                    public:
                                                        PoliceConform();
                                                        ~PoliceConform();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform


                                                class PoliceExceed : public Entity
                                                {
                                                    public:
                                                        PoliceExceed();
                                                        ~PoliceExceed();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed


                                                class PoliceViolate : public Entity
                                                {
                                                    public:
                                                        PoliceViolate();
                                                        ~PoliceViolate();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate


                                                class ParentMark : public Entity
                                                {
                                                    public:
                                                        ParentMark();
                                                        ~ParentMark();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark


                                                class ParentPoliceConform : public Entity
                                                {
                                                    public:
                                                        ParentPoliceConform();
                                                        ~ParentPoliceConform();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform


                                                class ParentPoliceExceed : public Entity
                                                {
                                                    public:
                                                        ParentPoliceExceed();
                                                        ~ParentPoliceExceed();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed


                                                class ParentPoliceViolate : public Entity
                                                {
                                                    public:
                                                        ParentPoliceViolate();
                                                        ~ParentPoliceViolate();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark> child_mark;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark> parent_mark;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform> parent_police_conform;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed> parent_police_exceed;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate> parent_police_violate;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform> police_conform;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed> police_exceed;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate> police_violate;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark> mark;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police> police;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue> queue;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters> queue_limit_parameters;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape> shape;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq> wfq;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred> wred;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1> > qos_show_ea_st_v1;


                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy


                                    class PolicyTyphoon : public Entity
                                    {
                                        public:
                                            PolicyTyphoon();
                                            ~PolicyTyphoon();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class QosShowEaStV2 : public Entity
                                        {
                                            public:
                                                QosShowEaStV2();
                                                ~QosShowEaStV2();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value class_level; //type: uint8
                                                Value class_name; //type: string
                                                Value policy_name; //type: string
                                                Value parent_policy_name; //type: string
                                                Value parent_class_name; //type: string


                                            class Queue : public Entity
                                            {
                                                public:
                                                    Queue();
                                                    ~Queue();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value queue_id; //type: uint32
                                                    Value queue_type; //type: QueueEnum
                                                    Value class_name; //type: string


                                                    class QueueEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue


                                            class QueueLimitParameters : public Entity
                                            {
                                                public:
                                                    QueueLimitParameters();
                                                    ~QueueLimitParameters();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value absolute_index; //type: uint16
                                                    Value template_id; //type: uint16
                                                    Value curve_id; //type: uint16


                                                class QueueLimit : public Entity
                                                {
                                                    public:
                                                        QueueLimit();
                                                        ~QueueLimit();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit


                                                class ConfigQueueLimit : public Entity
                                                {
                                                    public:
                                                        ConfigQueueLimit();
                                                        ~ConfigQueueLimit();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit> queue_limit;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters


                                            class Shape : public Entity
                                            {
                                                public:
                                                    Shape();
                                                    ~Shape();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value cir_shape_type; //type: ShapeProfiletypeV2Enum
                                                    Value pir_shape_type; //type: ShapeProfiletypeV2Enum


                                                class CirShape : public Entity
                                                {
                                                    public:
                                                        CirShape();
                                                        ~CirShape();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value chunk_id; //type: uint32
                                                        Value profile_id; //type: uint16
                                                        Value scale_factor; //type: uint16


                                                    class Cir : public Entity
                                                    {
                                                        public:
                                                            Cir();
                                                            ~Cir();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir


                                                    class ConfigBandwidth : public Entity
                                                    {
                                                        public:
                                                            ConfigBandwidth();
                                                            ~ConfigBandwidth();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                        class MinimumRate : public Entity
                                                        {
                                                            public:
                                                                MinimumRate();
                                                                ~MinimumRate();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;
                                                                Value value_; //type: uint32
                                                                Value unit; //type: QosUnitEnum


                                                                class QosUnitEnum;


                                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate


                                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate> minimum_rate;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth


                                                    class Cbs : public Entity
                                                    {
                                                        public:
                                                            Cbs();
                                                            ~Cbs();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs> cbs;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir> cir;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth> config_bandwidth;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape


                                                class PirShape : public Entity
                                                {
                                                    public:
                                                        PirShape();
                                                        ~PirShape();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value chunk_id; //type: uint32
                                                        Value profile_id; //type: uint16
                                                        Value scale_factor; //type: uint16


                                                    class Pir : public Entity
                                                    {
                                                        public:
                                                            Pir();
                                                            ~Pir();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir


                                                    class Pbs : public Entity
                                                    {
                                                        public:
                                                            Pbs();
                                                            ~Pbs();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs> pbs;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir> pir;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape> cir_shape;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape> pir_shape;
                                                    class ShapeProfiletypeV2Enum;
                                                    class ShapeProfiletypeV2Enum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape


                                            class Police : public Entity
                                            {
                                                public:
                                                    Police();
                                                    ~Police();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value policer_type; //type: TbAlgorithmEnum
                                                    Value profile_id; //type: uint32


                                                class Cir : public Entity
                                                {
                                                    public:
                                                        Cir();
                                                        ~Cir();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir


                                                class Cbs : public Entity
                                                {
                                                    public:
                                                        Cbs();
                                                        ~Cbs();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs


                                                class Pir : public Entity
                                                {
                                                    public:
                                                        Pir();
                                                        ~Pir();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir


                                                class Pbs : public Entity
                                                {
                                                    public:
                                                        Pbs();
                                                        ~Pbs();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs


                                                class PoliceConfigParameters : public Entity
                                                {
                                                    public:
                                                        PoliceConfigParameters();
                                                        ~PoliceConfigParameters();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class AverageRate : public Entity
                                                    {
                                                        public:
                                                            AverageRate();
                                                            ~AverageRate();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate


                                                    class PeakRate : public Entity
                                                    {
                                                        public:
                                                            PeakRate();
                                                            ~PeakRate();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate


                                                    class ConformBurst : public Entity
                                                    {
                                                        public:
                                                            ConformBurst();
                                                            ~ConformBurst();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst


                                                    class ExceedBurst : public Entity
                                                    {
                                                        public:
                                                            ExceedBurst();
                                                            ~ExceedBurst();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate> average_rate;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst> conform_burst;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate> peak_rate;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs> cbs;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir> cir;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs> pbs;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir> pir;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters> police_config_parameters;
                                                    class TbAlgorithmEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police


                                            class Wfq : public Entity
                                            {
                                                public:
                                                    Wfq();
                                                    ~Wfq();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value profile_id; //type: uint32
                                                    Value committed_weight; //type: uint32
                                                    Value excess_weight; //type: uint16
                                                    Value excess_ratio; //type: uint16
                                                    Value chunk_id; //type: uint32
                                                    Value level; //type: uint8


                                                class ParentBandwidth : public Entity
                                                {
                                                    public:
                                                        ParentBandwidth();
                                                        ~ParentBandwidth();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth


                                                class Bandwidth : public Entity
                                                {
                                                    public:
                                                        Bandwidth();
                                                        ~Bandwidth();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth> bandwidth;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth> parent_bandwidth;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq


                                            class Wred : public Entity
                                            {
                                                public:
                                                    Wred();
                                                    ~Wred();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value type; //type: WredEnum
                                                    Value curve_xr; //type: uint16


                                                class Curve : public Entity
                                                {
                                                    public:
                                                        Curve();
                                                        ~Curve();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value absolute_index; //type: uint16
                                                        Value template_id; //type: uint16
                                                        Value curve_id; //type: uint16
                                                        Value match; //type: string
                                                        Value exp_match; //type: string


                                                    class MinThreshold : public Entity
                                                    {
                                                        public:
                                                            MinThreshold();
                                                            ~MinThreshold();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold


                                                    class MinThresholdUserConfig : public Entity
                                                    {
                                                        public:
                                                            MinThresholdUserConfig();
                                                            ~MinThresholdUserConfig();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig


                                                    class MaxThreshold : public Entity
                                                    {
                                                        public:
                                                            MaxThreshold();
                                                            ~MaxThreshold();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold


                                                    class MaxThresholdUserConfig : public Entity
                                                    {
                                                        public:
                                                            MaxThresholdUserConfig();
                                                            ~MaxThresholdUserConfig();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold> max_threshold;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold> min_threshold;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve> > curve;
                                                    class WredEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred


                                            class Mark : public Entity
                                            {
                                                public:
                                                    Mark();
                                                    ~Mark();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ChildMark : public Entity
                                                {
                                                    public:
                                                        ChildMark();
                                                        ~ChildMark();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark


                                                class PoliceConform : public Entity
                                                {
                                                    public:
                                                        PoliceConform();
                                                        ~PoliceConform();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform


                                                class PoliceExceed : public Entity
                                                {
                                                    public:
                                                        PoliceExceed();
                                                        ~PoliceExceed();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed


                                                class PoliceViolate : public Entity
                                                {
                                                    public:
                                                        PoliceViolate();
                                                        ~PoliceViolate();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate


                                                class ParentMark : public Entity
                                                {
                                                    public:
                                                        ParentMark();
                                                        ~ParentMark();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark


                                                class ParentPoliceConform : public Entity
                                                {
                                                    public:
                                                        ParentPoliceConform();
                                                        ~ParentPoliceConform();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform


                                                class ParentPoliceExceed : public Entity
                                                {
                                                    public:
                                                        ParentPoliceExceed();
                                                        ~ParentPoliceExceed();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed


                                                class ParentPoliceViolate : public Entity
                                                {
                                                    public:
                                                        ParentPoliceViolate();
                                                        ~ParentPoliceViolate();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark> child_mark;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark> parent_mark;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform> parent_police_conform;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed> parent_police_exceed;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate> parent_police_violate;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform> police_conform;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed> police_exceed;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate> police_violate;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark> mark;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police> police;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue> queue;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters> queue_limit_parameters;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape> shape;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq> wfq;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred> wred;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2> > qos_show_ea_st_v2;


                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Header> header;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::Policy> policy;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon> policy_typhoon;


                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details


                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details> details;


                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface


                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface> > member_interface;


                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces


                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces> member_interfaces;


                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput


                    class BundleInput : public Entity
                    {
                        public:
                            BundleInput();
                            ~BundleInput();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class MemberInterfaces : public Entity
                        {
                            public:
                                MemberInterfaces();
                                ~MemberInterfaces();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MemberInterface : public Entity
                            {
                                public:
                                    MemberInterface();
                                    ~MemberInterface();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string


                                class Details : public Entity
                                {
                                    public:
                                        Details();
                                        ~Details();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Header : public Entity
                                    {
                                        public:
                                            Header();
                                            ~Header();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value classes; //type: uint16
                                            Value policy_name; //type: string


                                        class InterfaceParameters : public Entity
                                        {
                                            public:
                                                InterfaceParameters();
                                                ~InterfaceParameters();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class PortConfigBandwidth : public Entity
                                            {
                                                public:
                                                    PortConfigBandwidth();
                                                    ~PortConfigBandwidth();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth


                                            class AncpConfigBandwidth : public Entity
                                            {
                                                public:
                                                    AncpConfigBandwidth();
                                                    ~AncpConfigBandwidth();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth


                                            class AncpProgrammedBandwidth : public Entity
                                            {
                                                public:
                                                    AncpProgrammedBandwidth();
                                                    ~AncpProgrammedBandwidth();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth


                                            class PortShaperRate : public Entity
                                            {
                                                public:
                                                    PortShaperRate();
                                                    ~PortShaperRate();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value value_; //type: uint32
                                                    Value unit; //type: QosUnitEnum


                                                    class QosUnitEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth> ancp_config_bandwidth;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth> ancp_programmed_bandwidth;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth> port_config_bandwidth;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate> port_shaper_rate;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters


                                        class ProgrammedBandwidth : public Entity
                                        {
                                            public:
                                                ProgrammedBandwidth();
                                                ~ProgrammedBandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value value_; //type: uint32
                                                Value unit; //type: QosUnitEnum


                                                class QosUnitEnum;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth


                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters> interface_parameters;
                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth> programmed_bandwidth;


                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header


                                    class Policy : public Entity
                                    {
                                        public:
                                            Policy();
                                            ~Policy();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class QosShowEaStV1 : public Entity
                                        {
                                            public:
                                                QosShowEaStV1();
                                                ~QosShowEaStV1();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value class_level; //type: uint8
                                                Value class_name; //type: string
                                                Value policy_name; //type: string
                                                Value parent_policy_name; //type: string
                                                Value parent_class_name; //type: string


                                            class Queue : public Entity
                                            {
                                                public:
                                                    Queue();
                                                    ~Queue();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value queue_id; //type: uint32
                                                    Value queue_type; //type: QueueEnum
                                                    Value class_name; //type: string


                                                    class QueueEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue


                                            class QueueLimitParameters : public Entity
                                            {
                                                public:
                                                    QueueLimitParameters();
                                                    ~QueueLimitParameters();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value profile_id; //type: uint32
                                                    Value scaling_profile_id; //type: uint32


                                                class QueueLimit : public Entity
                                                {
                                                    public:
                                                        QueueLimit();
                                                        ~QueueLimit();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit


                                                class ConfigQueueLimit : public Entity
                                                {
                                                    public:
                                                        ConfigQueueLimit();
                                                        ~ConfigQueueLimit();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit> queue_limit;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters


                                            class Shape : public Entity
                                            {
                                                public:
                                                    Shape();
                                                    ~Shape();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value profile_id; //type: uint16


                                                class Cir : public Entity
                                                {
                                                    public:
                                                        Cir();
                                                        ~Cir();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir


                                                class ConfigBandwidth : public Entity
                                                {
                                                    public:
                                                        ConfigBandwidth();
                                                        ~ConfigBandwidth();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class MinimumRate : public Entity
                                                    {
                                                        public:
                                                            MinimumRate();
                                                            ~MinimumRate();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate> minimum_rate;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth


                                                class Cbs : public Entity
                                                {
                                                    public:
                                                        Cbs();
                                                        ~Cbs();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs


                                                class Pir : public Entity
                                                {
                                                    public:
                                                        Pir();
                                                        ~Pir();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir


                                                class Pbs : public Entity
                                                {
                                                    public:
                                                        Pbs();
                                                        ~Pbs();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs> cbs;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir> cir;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth> config_bandwidth;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs> pbs;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir> pir;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape


                                            class Police : public Entity
                                            {
                                                public:
                                                    Police();
                                                    ~Police();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value policer_type; //type: TbAlgorithmEnum
                                                    Value profile_id; //type: uint32


                                                class Cir : public Entity
                                                {
                                                    public:
                                                        Cir();
                                                        ~Cir();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir


                                                class Cbs : public Entity
                                                {
                                                    public:
                                                        Cbs();
                                                        ~Cbs();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs


                                                class Pir : public Entity
                                                {
                                                    public:
                                                        Pir();
                                                        ~Pir();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir


                                                class Pbs : public Entity
                                                {
                                                    public:
                                                        Pbs();
                                                        ~Pbs();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs


                                                class PoliceConfigParameters : public Entity
                                                {
                                                    public:
                                                        PoliceConfigParameters();
                                                        ~PoliceConfigParameters();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class AverageRate : public Entity
                                                    {
                                                        public:
                                                            AverageRate();
                                                            ~AverageRate();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate


                                                    class PeakRate : public Entity
                                                    {
                                                        public:
                                                            PeakRate();
                                                            ~PeakRate();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate


                                                    class ConformBurst : public Entity
                                                    {
                                                        public:
                                                            ConformBurst();
                                                            ~ConformBurst();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst


                                                    class ExceedBurst : public Entity
                                                    {
                                                        public:
                                                            ExceedBurst();
                                                            ~ExceedBurst();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate> average_rate;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst> conform_burst;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate> peak_rate;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs> cbs;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir> cir;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs> pbs;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir> pir;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters> police_config_parameters;
                                                    class TbAlgorithmEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police


                                            class Wfq : public Entity
                                            {
                                                public:
                                                    Wfq();
                                                    ~Wfq();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value profile_id; //type: uint32
                                                    Value committed_weight; //type: uint32
                                                    Value excess_weight; //type: uint16
                                                    Value excess_ratio; //type: uint16
                                                    Value chunk_id; //type: uint32
                                                    Value level; //type: uint8


                                                class ParentBandwidth : public Entity
                                                {
                                                    public:
                                                        ParentBandwidth();
                                                        ~ParentBandwidth();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth


                                                class Bandwidth : public Entity
                                                {
                                                    public:
                                                        Bandwidth();
                                                        ~Bandwidth();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth> bandwidth;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth> parent_bandwidth;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq


                                            class Wred : public Entity
                                            {
                                                public:
                                                    Wred();
                                                    ~Wred();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value type; //type: WredEnum
                                                    Value curve_xr; //type: uint16
                                                    Value table_id; //type: uint8
                                                    Value profile_id; //type: uint32
                                                    Value scaling_profile_id; //type: uint32


                                                class Curve : public Entity
                                                {
                                                    public:
                                                        Curve();
                                                        ~Curve();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value match; //type: string


                                                    class MinThreshold : public Entity
                                                    {
                                                        public:
                                                            MinThreshold();
                                                            ~MinThreshold();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold


                                                    class MinThresholdUserConfig : public Entity
                                                    {
                                                        public:
                                                            MinThresholdUserConfig();
                                                            ~MinThresholdUserConfig();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig


                                                    class MaxThreshold : public Entity
                                                    {
                                                        public:
                                                            MaxThreshold();
                                                            ~MaxThreshold();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold


                                                    class MaxThresholdUserConfig : public Entity
                                                    {
                                                        public:
                                                            MaxThresholdUserConfig();
                                                            ~MaxThresholdUserConfig();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold> max_threshold;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold> min_threshold;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve> > curve;
                                                    class WredEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred


                                            class Mark : public Entity
                                            {
                                                public:
                                                    Mark();
                                                    ~Mark();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ChildMark : public Entity
                                                {
                                                    public:
                                                        ChildMark();
                                                        ~ChildMark();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark


                                                class PoliceConform : public Entity
                                                {
                                                    public:
                                                        PoliceConform();
                                                        ~PoliceConform();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform


                                                class PoliceExceed : public Entity
                                                {
                                                    public:
                                                        PoliceExceed();
                                                        ~PoliceExceed();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed


                                                class PoliceViolate : public Entity
                                                {
                                                    public:
                                                        PoliceViolate();
                                                        ~PoliceViolate();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate


                                                class ParentMark : public Entity
                                                {
                                                    public:
                                                        ParentMark();
                                                        ~ParentMark();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark


                                                class ParentPoliceConform : public Entity
                                                {
                                                    public:
                                                        ParentPoliceConform();
                                                        ~ParentPoliceConform();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform


                                                class ParentPoliceExceed : public Entity
                                                {
                                                    public:
                                                        ParentPoliceExceed();
                                                        ~ParentPoliceExceed();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed


                                                class ParentPoliceViolate : public Entity
                                                {
                                                    public:
                                                        ParentPoliceViolate();
                                                        ~ParentPoliceViolate();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark> child_mark;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark> parent_mark;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform> parent_police_conform;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed> parent_police_exceed;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate> parent_police_violate;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform> police_conform;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed> police_exceed;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate> police_violate;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark> mark;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police> police;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue> queue;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters> queue_limit_parameters;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape> shape;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq> wfq;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred> wred;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1> > qos_show_ea_st_v1;


                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy


                                    class PolicyTyphoon : public Entity
                                    {
                                        public:
                                            PolicyTyphoon();
                                            ~PolicyTyphoon();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class QosShowEaStV2 : public Entity
                                        {
                                            public:
                                                QosShowEaStV2();
                                                ~QosShowEaStV2();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value class_level; //type: uint8
                                                Value class_name; //type: string
                                                Value policy_name; //type: string
                                                Value parent_policy_name; //type: string
                                                Value parent_class_name; //type: string


                                            class Queue : public Entity
                                            {
                                                public:
                                                    Queue();
                                                    ~Queue();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value queue_id; //type: uint32
                                                    Value queue_type; //type: QueueEnum
                                                    Value class_name; //type: string


                                                    class QueueEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue


                                            class QueueLimitParameters : public Entity
                                            {
                                                public:
                                                    QueueLimitParameters();
                                                    ~QueueLimitParameters();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value absolute_index; //type: uint16
                                                    Value template_id; //type: uint16
                                                    Value curve_id; //type: uint16


                                                class QueueLimit : public Entity
                                                {
                                                    public:
                                                        QueueLimit();
                                                        ~QueueLimit();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit


                                                class ConfigQueueLimit : public Entity
                                                {
                                                    public:
                                                        ConfigQueueLimit();
                                                        ~ConfigQueueLimit();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit> config_queue_limit;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit> queue_limit;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters


                                            class Shape : public Entity
                                            {
                                                public:
                                                    Shape();
                                                    ~Shape();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value cir_shape_type; //type: ShapeProfiletypeV2Enum
                                                    Value pir_shape_type; //type: ShapeProfiletypeV2Enum


                                                class CirShape : public Entity
                                                {
                                                    public:
                                                        CirShape();
                                                        ~CirShape();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value chunk_id; //type: uint32
                                                        Value profile_id; //type: uint16
                                                        Value scale_factor; //type: uint16


                                                    class Cir : public Entity
                                                    {
                                                        public:
                                                            Cir();
                                                            ~Cir();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir


                                                    class ConfigBandwidth : public Entity
                                                    {
                                                        public:
                                                            ConfigBandwidth();
                                                            ~ConfigBandwidth();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                        class MinimumRate : public Entity
                                                        {
                                                            public:
                                                                MinimumRate();
                                                                ~MinimumRate();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;
                                                                Value value_; //type: uint32
                                                                Value unit; //type: QosUnitEnum


                                                                class QosUnitEnum;


                                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate


                                                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate> minimum_rate;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth


                                                    class Cbs : public Entity
                                                    {
                                                        public:
                                                            Cbs();
                                                            ~Cbs();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs> cbs;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir> cir;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth> config_bandwidth;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape


                                                class PirShape : public Entity
                                                {
                                                    public:
                                                        PirShape();
                                                        ~PirShape();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value chunk_id; //type: uint32
                                                        Value profile_id; //type: uint16
                                                        Value scale_factor; //type: uint16


                                                    class Pir : public Entity
                                                    {
                                                        public:
                                                            Pir();
                                                            ~Pir();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir


                                                    class Pbs : public Entity
                                                    {
                                                        public:
                                                            Pbs();
                                                            ~Pbs();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs> pbs;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir> pir;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape> cir_shape;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape> pir_shape;
                                                    class ShapeProfiletypeV2Enum;
                                                    class ShapeProfiletypeV2Enum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape


                                            class Police : public Entity
                                            {
                                                public:
                                                    Police();
                                                    ~Police();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value policer_type; //type: TbAlgorithmEnum
                                                    Value profile_id; //type: uint32


                                                class Cir : public Entity
                                                {
                                                    public:
                                                        Cir();
                                                        ~Cir();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir


                                                class Cbs : public Entity
                                                {
                                                    public:
                                                        Cbs();
                                                        ~Cbs();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs


                                                class Pir : public Entity
                                                {
                                                    public:
                                                        Pir();
                                                        ~Pir();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir


                                                class Pbs : public Entity
                                                {
                                                    public:
                                                        Pbs();
                                                        ~Pbs();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs


                                                class PoliceConfigParameters : public Entity
                                                {
                                                    public:
                                                        PoliceConfigParameters();
                                                        ~PoliceConfigParameters();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class AverageRate : public Entity
                                                    {
                                                        public:
                                                            AverageRate();
                                                            ~AverageRate();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate


                                                    class PeakRate : public Entity
                                                    {
                                                        public:
                                                            PeakRate();
                                                            ~PeakRate();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate


                                                    class ConformBurst : public Entity
                                                    {
                                                        public:
                                                            ConformBurst();
                                                            ~ConformBurst();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst


                                                    class ExceedBurst : public Entity
                                                    {
                                                        public:
                                                            ExceedBurst();
                                                            ~ExceedBurst();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate> average_rate;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst> conform_burst;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst> exceed_burst;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate> peak_rate;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs> cbs;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir> cir;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs> pbs;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir> pir;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters> police_config_parameters;
                                                    class TbAlgorithmEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police


                                            class Wfq : public Entity
                                            {
                                                public:
                                                    Wfq();
                                                    ~Wfq();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value profile_id; //type: uint32
                                                    Value committed_weight; //type: uint32
                                                    Value excess_weight; //type: uint16
                                                    Value excess_ratio; //type: uint16
                                                    Value chunk_id; //type: uint32
                                                    Value level; //type: uint8


                                                class ParentBandwidth : public Entity
                                                {
                                                    public:
                                                        ParentBandwidth();
                                                        ~ParentBandwidth();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth


                                                class Bandwidth : public Entity
                                                {
                                                    public:
                                                        Bandwidth();
                                                        ~Bandwidth();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value value_; //type: uint32
                                                        Value unit; //type: QosUnitEnum


                                                        class QosUnitEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth> bandwidth;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth> parent_bandwidth;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq


                                            class Wred : public Entity
                                            {
                                                public:
                                                    Wred();
                                                    ~Wred();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value type; //type: WredEnum
                                                    Value curve_xr; //type: uint16


                                                class Curve : public Entity
                                                {
                                                    public:
                                                        Curve();
                                                        ~Curve();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value absolute_index; //type: uint16
                                                        Value template_id; //type: uint16
                                                        Value curve_id; //type: uint16
                                                        Value match; //type: string
                                                        Value exp_match; //type: string


                                                    class MinThreshold : public Entity
                                                    {
                                                        public:
                                                            MinThreshold();
                                                            ~MinThreshold();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold


                                                    class MinThresholdUserConfig : public Entity
                                                    {
                                                        public:
                                                            MinThresholdUserConfig();
                                                            ~MinThresholdUserConfig();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig


                                                    class MaxThreshold : public Entity
                                                    {
                                                        public:
                                                            MaxThreshold();
                                                            ~MaxThreshold();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold


                                                    class MaxThresholdUserConfig : public Entity
                                                    {
                                                        public:
                                                            MaxThresholdUserConfig();
                                                            ~MaxThresholdUserConfig();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value value_; //type: uint32
                                                            Value unit; //type: QosUnitEnum


                                                            class QosUnitEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig


                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold> max_threshold;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig> max_threshold_user_config;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold> min_threshold;
                                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig> min_threshold_user_config;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve> > curve;
                                                    class WredEnum;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred


                                            class Mark : public Entity
                                            {
                                                public:
                                                    Mark();
                                                    ~Mark();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class ChildMark : public Entity
                                                {
                                                    public:
                                                        ChildMark();
                                                        ~ChildMark();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark


                                                class PoliceConform : public Entity
                                                {
                                                    public:
                                                        PoliceConform();
                                                        ~PoliceConform();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform


                                                class PoliceExceed : public Entity
                                                {
                                                    public:
                                                        PoliceExceed();
                                                        ~PoliceExceed();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed


                                                class PoliceViolate : public Entity
                                                {
                                                    public:
                                                        PoliceViolate();
                                                        ~PoliceViolate();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate


                                                class ParentMark : public Entity
                                                {
                                                    public:
                                                        ParentMark();
                                                        ~ParentMark();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark


                                                class ParentPoliceConform : public Entity
                                                {
                                                    public:
                                                        ParentPoliceConform();
                                                        ~ParentPoliceConform();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform


                                                class ParentPoliceExceed : public Entity
                                                {
                                                    public:
                                                        ParentPoliceExceed();
                                                        ~ParentPoliceExceed();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed


                                                class ParentPoliceViolate : public Entity
                                                {
                                                    public:
                                                        ParentPoliceViolate();
                                                        ~ParentPoliceViolate();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value action_type; //type: ActionEnum


                                                    class MarkDetail : public Entity
                                                    {
                                                        public:
                                                            MarkDetail();
                                                            ~MarkDetail();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value mark_value; //type: uint8
                                                            Value action_opcode; //type: ActionOpcodeEnum


                                                            class ActionOpcodeEnum;


                                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail> > mark_detail;
                                                        class ActionEnum;


                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate


                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark> child_mark;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark> parent_mark;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform> parent_police_conform;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed> parent_police_exceed;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate> parent_police_violate;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform> police_conform;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed> police_exceed;
                                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate> police_violate;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark


                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark> mark;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police> police;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue> queue;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters> queue_limit_parameters;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape> shape;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq> wfq;
                                                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred> wred;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2> > qos_show_ea_st_v2;


                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon


                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header> header;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy> policy;
                                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon> policy_typhoon;


                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details


                                    std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details> details;


                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface


                                std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface> > member_interface;


                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces


                            std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces> member_interfaces;


                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput


                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput> bundle_input;
                        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput> bundle_output;


                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface> > bundle_interface;


            }; // PlatformQos::Nodes::Node::BundleInterfaces


                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces> bundle_interfaces;
                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Capability> capability;
                std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node::Interfaces> interfaces;


        }; // PlatformQos::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes::Node> > node;


    }; // PlatformQos::Nodes


        std::unique_ptr<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos::Nodes> nodes;


}; // PlatformQos


class ActionOpcodeEnum : public Enum
{
    public:
        static const Enum::Value precedence;
        static const Enum::Value dscp;
        static const Enum::Value discard_class;
        static const Enum::Value qos_group;
        static const Enum::Value cos_inner;
        static const Enum::Value cos;
        static const Enum::Value exp_top;
        static const Enum::Value exp_imp;
        static const Enum::Value tunnel_precedence;
        static const Enum::Value tunnel_dscp;
        static const Enum::Value itag_dei;
        static const Enum::Value itag_cos;
        static const Enum::Value cos_imposition;
        static const Enum::Value dei_imposition;
        static const Enum::Value dei;
        static const Enum::Value no_marking;

};

class WredEnum : public Enum
{
    public:
        static const Enum::Value wred_cos;
        static const Enum::Value wred_dscp;
        static const Enum::Value wred_precedence;
        static const Enum::Value wred_discard_class;
        static const Enum::Value wred_mpls_exp;
        static const Enum::Value red_with_user_min_max;
        static const Enum::Value red_with_default_min_max;
        static const Enum::Value wred_dei;

};

class TbAlgorithmEnum : public Enum
{
    public:
        static const Enum::Value inactive;
        static const Enum::Value single;
        static const Enum::Value single_rate_tcm;
        static const Enum::Value two_rate_tcm;
        static const Enum::Value mef_tcm;
        static const Enum::Value dummy;

};

class PolicyParamUnitEnum : public Enum
{
    public:
        static const Enum::Value policy_param_unit_invalid;
        static const Enum::Value policy_param_unit_bytes;
        static const Enum::Value policy_param_unit_kbytes;
        static const Enum::Value policy_param_unit_mbytes;
        static const Enum::Value policy_param_unit_gbytes;
        static const Enum::Value policy_param_unit_bitsps;
        static const Enum::Value policy_param_unit_kbitsps;
        static const Enum::Value policy_param_unit_mbitsps;
        static const Enum::Value policy_param_unit_gbitsps;
        static const Enum::Value policy_param_unit_cells_ps;
        static const Enum::Value policy_param_unit_packets_ps;
        static const Enum::Value policy_param_unit_us;
        static const Enum::Value policy_param_unit_ms;
        static const Enum::Value policy_param_unit_seconds;
        static const Enum::Value policy_param_unit_packets;
        static const Enum::Value policy_param_unit_cells;
        static const Enum::Value policy_param_unit_percent;
        static const Enum::Value policy_param_unit_per_thousand;
        static const Enum::Value policy_param_unit_per_million;
        static const Enum::Value policy_param_unit_hz;
        static const Enum::Value policy_param_unit_khz;
        static const Enum::Value policy_param_unit_mhz;
        static const Enum::Value policy_param_unit_ratio;
        static const Enum::Value policy_param_unit_max;

};

class ShapeProfiletypeV2Enum : public Enum
{
    public:
        static const Enum::Value invalid;
        static const Enum::Value always;
        static const Enum::Value never;
        static const Enum::Value explicit_;
        static const Enum::Value scale;
        static const Enum::Value grid;

};

class QueueEnum : public Enum
{
    public:
        static const Enum::Value port_default;
        static const Enum::Value class_default;
        static const Enum::Value priority1_queue;
        static const Enum::Value priority2_queue;
        static const Enum::Value priority3_queue;
        static const Enum::Value priority4_queue;
        static const Enum::Value priority5_queue;
        static const Enum::Value priority6_queue;
        static const Enum::Value priority7_queue;
        static const Enum::Value first_p1_class_name;
        static const Enum::Value first_p2_class_name;
        static const Enum::Value first_p3_class_name;
        static const Enum::Value first_p4_class_name;
        static const Enum::Value first_p5_class_name;
        static const Enum::Value first_p6_class_name;
        static const Enum::Value first_p7_class_name;
        static const Enum::Value port_priority1;
        static const Enum::Value port_priority2;
        static const Enum::Value port_priority3;
        static const Enum::Value port_priority4;
        static const Enum::Value port_priority5;
        static const Enum::Value port_priority6;
        static const Enum::Value port_priority7;
        static const Enum::Value new_;
        static const Enum::Value parent_class;
        static const Enum::Value priority1;
        static const Enum::Value priority2;
        static const Enum::Value priority3;
        static const Enum::Value priority4;
        static const Enum::Value priority5;
        static const Enum::Value priority6;
        static const Enum::Value priority7;
        static const Enum::Value priority_ignored_normal;
        static const Enum::Value normal_priority;
        static const Enum::Value class_unknown;
        static const Enum::Value unknown_priority;

};

class Wred1Enum : public Enum
{
    public:
        static const Enum::Value wred_cos_cmd;
        static const Enum::Value wred_dscp_cmd;
        static const Enum::Value wred_precedence_cmd;
        static const Enum::Value wred_discard_class_cmd;
        static const Enum::Value wred_mpls_exp_cmd;
        static const Enum::Value red_with_user_min_max;
        static const Enum::Value red_with_default_min_max;
        static const Enum::Value wred_dei_cmd;
        static const Enum::Value wred_ecn_cmd;
        static const Enum::Value wred_invalid_cmd;

};

class ActionEnum : public Enum
{
    public:
        static const Enum::Value police_transmit;
        static const Enum::Value police_set_transmit;
        static const Enum::Value police_drop;
        static const Enum::Value police_unknown;

};

class QosUnitEnum : public Enum
{
    public:
        static const Enum::Value invalid;
        static const Enum::Value bytes;
        static const Enum::Value kilobytes;
        static const Enum::Value megabytes;
        static const Enum::Value gigabytes;
        static const Enum::Value bps;
        static const Enum::Value kbps;
        static const Enum::Value mbps;
        static const Enum::Value gbps;
        static const Enum::Value cells_per_second;
        static const Enum::Value packets_per_second;
        static const Enum::Value microsecond;
        static const Enum::Value millisecond;
        static const Enum::Value packets;
        static const Enum::Value cells;
        static const Enum::Value percentage;
        static const Enum::Value ratio;

};

class CacStateEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value admit;
        static const Enum::Value redirect;
        static const Enum::Value ubrl;

};

class PolicyStateEnum : public Enum
{
    public:
        static const Enum::Value active;
        static const Enum::Value suspended;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_QOS_OPER_ */

