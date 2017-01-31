#ifndef _CISCO_IOS_XR_SKP_QOS_OPER_
#define _CISCO_IOS_XR_SKP_QOS_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_skp_qos_oper {

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


                YLeaf node_name; //type: string

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


                        YLeaf interface_name; //type: string

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


                                YLeaf interface_name; //type: string

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


                                        YLeaf interface_name; //type: string
                                        YLeaf policy_name; //type: string
                                        YLeaf direction; //type: string
                                        YLeaf classes; //type: uint16



                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header


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



                                    class InterfaceConfigRate : public Entity
                                    {
                                        public:
                                            InterfaceConfigRate();
                                            ~InterfaceConfigRate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate


                                    class InterfaceProgramRate : public Entity
                                    {
                                        public:
                                            InterfaceProgramRate();
                                            ~InterfaceProgramRate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate


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


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate> interface_config_rate;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate> interface_program_rate;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate> port_shaper_rate;


                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters


                                class SkywarpQosPolicyClass : public Entity
                                {
                                    public:
                                        SkywarpQosPolicyClass();
                                        ~SkywarpQosPolicyClass();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class QosShowPclassSt : public Entity
                                    {
                                        public:
                                            QosShowPclassSt();
                                            ~QosShowPclassSt();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf class_level; //type: uint8
                                            YLeaf class_name; //type: string

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


                                                YLeaf queue_id; //type: uint32
                                                YLeaf queue_type; //type: string



                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue


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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir


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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs> pbs;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir> pir;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape


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


                                                YLeaf excess_weight; //type: uint16

                                            class CommittedWeight : public Entity
                                            {
                                                public:
                                                    CommittedWeight();
                                                    ~CommittedWeight();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight


                                            class ProgrammedWfq : public Entity
                                            {
                                                public:
                                                    ProgrammedWfq();
                                                    ~ProgrammedWfq();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf excess_ratio; //type: uint16

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


                                                        YLeaf value_; //type: uint32
                                                        YLeaf unit; //type: QosUnitEnum



                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth


                                                class SumOfBandwidth : public Entity
                                                {
                                                    public:
                                                        SumOfBandwidth();
                                                        ~SumOfBandwidth();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf value_; //type: uint32
                                                        YLeaf unit; //type: QosUnitEnum



                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth


                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth> bandwidth;
                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth> sum_of_bandwidth;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight> committed_weight;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq> programmed_wfq;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq


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


                                                YLeaf policer_id; //type: uint32
                                                YLeaf policer_type; //type: TbAlgorithmEnum

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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir


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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs> cbs;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir> cir;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police


                                        class Marking : public Entity
                                        {
                                            public:
                                                Marking();
                                                ~Marking();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class MarkOnly : public Entity
                                            {
                                                public:
                                                    MarkOnly();
                                                    ~MarkOnly();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf action_type; //type: ActionEnum

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


                                                        YLeaf mark_value; //type: uint8
                                                        YLeaf action_opcode; //type: ActionOpcodeEnum



                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail> > mark_detail;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly


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


                                                    YLeaf action_type; //type: ActionEnum

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


                                                        YLeaf mark_value; //type: uint8
                                                        YLeaf action_opcode; //type: ActionOpcodeEnum



                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail> > mark_detail;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform


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


                                                    YLeaf action_type; //type: ActionEnum

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


                                                        YLeaf mark_value; //type: uint8
                                                        YLeaf action_opcode; //type: ActionOpcodeEnum



                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail> > mark_detail;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly> mark_only;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform> police_conform;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed> police_exceed;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking


                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking> marking;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police> police;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue> queue;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape> shape;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq> wfq;


                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt> > qos_show_pclass_st;


                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass


                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header> header;
                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters> interface_parameters;
                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass> skywarp_qos_policy_class;


                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput


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


                                        YLeaf interface_name; //type: string
                                        YLeaf policy_name; //type: string
                                        YLeaf direction; //type: string
                                        YLeaf classes; //type: uint16



                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header


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



                                    class InterfaceConfigRate : public Entity
                                    {
                                        public:
                                            InterfaceConfigRate();
                                            ~InterfaceConfigRate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate


                                    class InterfaceProgramRate : public Entity
                                    {
                                        public:
                                            InterfaceProgramRate();
                                            ~InterfaceProgramRate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate


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


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate> interface_config_rate;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate> interface_program_rate;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate> port_shaper_rate;


                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters


                                class SkywarpQosPolicyClass : public Entity
                                {
                                    public:
                                        SkywarpQosPolicyClass();
                                        ~SkywarpQosPolicyClass();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class QosShowPclassSt : public Entity
                                    {
                                        public:
                                            QosShowPclassSt();
                                            ~QosShowPclassSt();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf class_level; //type: uint8
                                            YLeaf class_name; //type: string

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


                                                YLeaf queue_id; //type: uint32
                                                YLeaf queue_type; //type: string



                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue


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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir


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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs> pbs;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir> pir;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape


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


                                                YLeaf excess_weight; //type: uint16

                                            class CommittedWeight : public Entity
                                            {
                                                public:
                                                    CommittedWeight();
                                                    ~CommittedWeight();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight


                                            class ProgrammedWfq : public Entity
                                            {
                                                public:
                                                    ProgrammedWfq();
                                                    ~ProgrammedWfq();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf excess_ratio; //type: uint16

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


                                                        YLeaf value_; //type: uint32
                                                        YLeaf unit; //type: QosUnitEnum



                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth


                                                class SumOfBandwidth : public Entity
                                                {
                                                    public:
                                                        SumOfBandwidth();
                                                        ~SumOfBandwidth();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf value_; //type: uint32
                                                        YLeaf unit; //type: QosUnitEnum



                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth


                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth> bandwidth;
                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth> sum_of_bandwidth;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight> committed_weight;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq> programmed_wfq;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq


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


                                                YLeaf policer_id; //type: uint32
                                                YLeaf policer_type; //type: TbAlgorithmEnum

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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir


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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs> cbs;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir> cir;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police


                                        class Marking : public Entity
                                        {
                                            public:
                                                Marking();
                                                ~Marking();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class MarkOnly : public Entity
                                            {
                                                public:
                                                    MarkOnly();
                                                    ~MarkOnly();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf action_type; //type: ActionEnum

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


                                                        YLeaf mark_value; //type: uint8
                                                        YLeaf action_opcode; //type: ActionOpcodeEnum



                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail> > mark_detail;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly


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


                                                    YLeaf action_type; //type: ActionEnum

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


                                                        YLeaf mark_value; //type: uint8
                                                        YLeaf action_opcode; //type: ActionOpcodeEnum



                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail> > mark_detail;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform


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


                                                    YLeaf action_type; //type: ActionEnum

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


                                                        YLeaf mark_value; //type: uint8
                                                        YLeaf action_opcode; //type: ActionOpcodeEnum



                                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail> > mark_detail;


                                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly> mark_only;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform> police_conform;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed> police_exceed;


                                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking


                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking> marking;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police> police;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue> queue;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape> shape;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq> wfq;


                                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt> > qos_show_pclass_st;


                                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass


                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header> header;
                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters> interface_parameters;
                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass> skywarp_qos_policy_class;


                            }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput


                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput> bundle_input;
                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput> bundle_output;


                        }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface


                            std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface> > member_interface;


                    }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces


                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces> member_interfaces;


                }; // PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface> > bundle_interface;


            }; // PlatformQos::Nodes::Node::BundleInterfaces


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


                    YLeaf max_policy_maps; //type: uint32
                    YLeaf max_policy_hierarchy; //type: uint32
                    YLeaf max_policy_name_length; //type: uint32
                    YLeaf max_classes_per_policy; //type: uint32
                    YLeaf max_police_actions_per_class; //type: uint32
                    YLeaf max_marking_actions_per_class; //type: uint32
                    YLeaf max_matches_per_class; //type: uint32
                    YLeaf max_classmap_name_length; //type: uint32
                    YLeaf max_bundle_members; //type: uint32



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


                        YLeaf interface_name; //type: string

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


                                YLeaf interface_name; //type: string
                                YLeaf policy_name; //type: string
                                YLeaf direction; //type: string
                                YLeaf classes; //type: uint16



                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header


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



                            class InterfaceConfigRate : public Entity
                            {
                                public:
                                    InterfaceConfigRate();
                                    ~InterfaceConfigRate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf value_; //type: uint32
                                    YLeaf unit; //type: QosUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate


                            class InterfaceProgramRate : public Entity
                            {
                                public:
                                    InterfaceProgramRate();
                                    ~InterfaceProgramRate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf value_; //type: uint32
                                    YLeaf unit; //type: QosUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate


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


                                    YLeaf value_; //type: uint32
                                    YLeaf unit; //type: QosUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate


                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate> interface_config_rate;
                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate> interface_program_rate;
                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate> port_shaper_rate;


                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters


                        class SkywarpQosPolicyClass : public Entity
                        {
                            public:
                                SkywarpQosPolicyClass();
                                ~SkywarpQosPolicyClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class QosShowPclassSt : public Entity
                            {
                                public:
                                    QosShowPclassSt();
                                    ~QosShowPclassSt();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf class_level; //type: uint8
                                    YLeaf class_name; //type: string

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


                                        YLeaf queue_id; //type: uint32
                                        YLeaf queue_type; //type: string



                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue


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


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir


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


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs> pbs;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir> pir;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape


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


                                        YLeaf excess_weight; //type: uint16

                                    class CommittedWeight : public Entity
                                    {
                                        public:
                                            CommittedWeight();
                                            ~CommittedWeight();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight


                                    class ProgrammedWfq : public Entity
                                    {
                                        public:
                                            ProgrammedWfq();
                                            ~ProgrammedWfq();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf excess_ratio; //type: uint16

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


                                                YLeaf value_; //type: uint32
                                                YLeaf unit; //type: QosUnitEnum



                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth


                                        class SumOfBandwidth : public Entity
                                        {
                                            public:
                                                SumOfBandwidth();
                                                ~SumOfBandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf value_; //type: uint32
                                                YLeaf unit; //type: QosUnitEnum



                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth


                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth> bandwidth;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth> sum_of_bandwidth;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight> committed_weight;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq> programmed_wfq;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq


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


                                        YLeaf policer_id; //type: uint32
                                        YLeaf policer_type; //type: TbAlgorithmEnum

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


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir


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


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs> cbs;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir> cir;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police


                                class Marking : public Entity
                                {
                                    public:
                                        Marking();
                                        ~Marking();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class MarkOnly : public Entity
                                    {
                                        public:
                                            MarkOnly();
                                            ~MarkOnly();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf action_type; //type: ActionEnum

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


                                                YLeaf mark_value; //type: uint8
                                                YLeaf action_opcode; //type: ActionOpcodeEnum



                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail> > mark_detail;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly


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


                                            YLeaf action_type; //type: ActionEnum

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


                                                YLeaf mark_value; //type: uint8
                                                YLeaf action_opcode; //type: ActionOpcodeEnum



                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail> > mark_detail;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform


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


                                            YLeaf action_type; //type: ActionEnum

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


                                                YLeaf mark_value; //type: uint8
                                                YLeaf action_opcode; //type: ActionOpcodeEnum



                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail> > mark_detail;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly> mark_only;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform> police_conform;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed> police_exceed;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking


                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking> marking;
                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police> police;
                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue> queue;
                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape> shape;
                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq> wfq;


                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt


                                std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt> > qos_show_pclass_st;


                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass


                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header> header;
                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters> interface_parameters;
                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass> skywarp_qos_policy_class;


                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Output


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


                                YLeaf interface_name; //type: string
                                YLeaf policy_name; //type: string
                                YLeaf direction; //type: string
                                YLeaf classes; //type: uint16



                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header


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



                            class InterfaceConfigRate : public Entity
                            {
                                public:
                                    InterfaceConfigRate();
                                    ~InterfaceConfigRate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf value_; //type: uint32
                                    YLeaf unit; //type: QosUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate


                            class InterfaceProgramRate : public Entity
                            {
                                public:
                                    InterfaceProgramRate();
                                    ~InterfaceProgramRate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf value_; //type: uint32
                                    YLeaf unit; //type: QosUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate


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


                                    YLeaf value_; //type: uint32
                                    YLeaf unit; //type: QosUnitEnum



                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate


                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate> interface_config_rate;
                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate> interface_program_rate;
                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate> port_shaper_rate;


                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters


                        class SkywarpQosPolicyClass : public Entity
                        {
                            public:
                                SkywarpQosPolicyClass();
                                ~SkywarpQosPolicyClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class QosShowPclassSt : public Entity
                            {
                                public:
                                    QosShowPclassSt();
                                    ~QosShowPclassSt();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf class_level; //type: uint8
                                    YLeaf class_name; //type: string

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


                                        YLeaf queue_id; //type: uint32
                                        YLeaf queue_type; //type: string



                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue


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


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir


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


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs> pbs;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir> pir;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape


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


                                        YLeaf excess_weight; //type: uint16

                                    class CommittedWeight : public Entity
                                    {
                                        public:
                                            CommittedWeight();
                                            ~CommittedWeight();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight


                                    class ProgrammedWfq : public Entity
                                    {
                                        public:
                                            ProgrammedWfq();
                                            ~ProgrammedWfq();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf excess_ratio; //type: uint16

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


                                                YLeaf value_; //type: uint32
                                                YLeaf unit; //type: QosUnitEnum



                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth


                                        class SumOfBandwidth : public Entity
                                        {
                                            public:
                                                SumOfBandwidth();
                                                ~SumOfBandwidth();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf value_; //type: uint32
                                                YLeaf unit; //type: QosUnitEnum



                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth


                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth> bandwidth;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth> sum_of_bandwidth;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight> committed_weight;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq> programmed_wfq;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq


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


                                        YLeaf policer_id; //type: uint32
                                        YLeaf policer_type; //type: TbAlgorithmEnum

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


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir


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


                                            YLeaf value_; //type: uint32
                                            YLeaf unit; //type: QosUnitEnum



                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs> cbs;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir> cir;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police


                                class Marking : public Entity
                                {
                                    public:
                                        Marking();
                                        ~Marking();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class MarkOnly : public Entity
                                    {
                                        public:
                                            MarkOnly();
                                            ~MarkOnly();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf action_type; //type: ActionEnum

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


                                                YLeaf mark_value; //type: uint8
                                                YLeaf action_opcode; //type: ActionOpcodeEnum



                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail> > mark_detail;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly


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


                                            YLeaf action_type; //type: ActionEnum

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


                                                YLeaf mark_value; //type: uint8
                                                YLeaf action_opcode; //type: ActionOpcodeEnum



                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail> > mark_detail;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform


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


                                            YLeaf action_type; //type: ActionEnum

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


                                                YLeaf mark_value; //type: uint8
                                                YLeaf action_opcode; //type: ActionOpcodeEnum



                                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail> > mark_detail;


                                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly> mark_only;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform> police_conform;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed> police_exceed;


                                }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking


                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking> marking;
                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police> police;
                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue> queue;
                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape> shape;
                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq> wfq;


                            }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt


                                std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt> > qos_show_pclass_st;


                        }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass


                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header> header;
                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters> interface_parameters;
                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass> skywarp_qos_policy_class;


                    }; // PlatformQos::Nodes::Node::Interfaces::Interface::Input


                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Input> input;
                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface::Output> output;


                }; // PlatformQos::Nodes::Node::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces::Interface> > interface;


            }; // PlatformQos::Nodes::Node::Interfaces


                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::BundleInterfaces> bundle_interfaces;
                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Capability> capability;
                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node::Interfaces> interfaces;


        }; // PlatformQos::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes::Node> > node;


    }; // PlatformQos::Nodes


        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQos::Nodes> nodes;


}; // PlatformQos

class PlatformQosEa : public Entity
{
    public:
        PlatformQosEa();
        ~PlatformQosEa();

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


                YLeaf node_name; //type: string

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


                        YLeaf interface_name; //type: string

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


                                YLeaf interface_name; //type: string

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


                                            YLeaf interface_name; //type: string
                                            YLeaf policy_name; //type: string
                                            YLeaf direction; //type: string
                                            YLeaf classes; //type: uint16



                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header


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


                                            YLeaf policy_name; //type: string
                                            YLeaf hierarchical_depth; //type: uint8
                                            YLeaf interface_type; //type: string
                                            YLeaf interface_rate; //type: uint32
                                            YLeaf port_shaper_rate; //type: uint32
                                            YLeaf interface_handle; //type: string
                                            YLeaf under_line_interface_handle; //type: string
                                            YLeaf bundle_id; //type: uint16
                                            YLeaf uidb_index; //type: uint16
                                            YLeaf qos_interface_handle; //type: uint64
                                            YLeaf port; //type: uint32
                                            YLeaf policy_map_id; //type: uint16



                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters


                                    class SkywarpQosPolicyClass : public Entity
                                    {
                                        public:
                                            SkywarpQosPolicyClass();
                                            ~SkywarpQosPolicyClass();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class QosShowEaPclassSt : public Entity
                                        {
                                            public:
                                                QosShowEaPclassSt();
                                                ~QosShowEaPclassSt();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf index_; //type: uint16
                                                YLeaf class_level; //type: uint8
                                                YLeaf class_name; //type: string
                                                YLeaf policy_name; //type: string
                                                YLeaf node_flags; //type: string
                                                YLeaf stats_flags; //type: string

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


                                                    YLeaf node_config; //type: string

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


                                                        YLeaf color_aware; //type: boolean
                                                        YLeaf policer_type; //type: TbAlgorithmEnum

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


                                                            YLeaf value_; //type: uint32
                                                            YLeaf unit; //type: QosUnitEnum



                                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir


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


                                                            YLeaf value_; //type: uint32
                                                            YLeaf unit; //type: QosUnitEnum



                                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs


                                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs> cbs;
                                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir> cir;


                                                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police


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


                                                            YLeaf value_; //type: uint32
                                                            YLeaf unit; //type: QosUnitEnum



                                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir


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


                                                            YLeaf value_; //type: uint32
                                                            YLeaf unit; //type: QosUnitEnum



                                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs


                                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs> pbs;
                                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir> pir;


                                                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape


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


                                                        YLeaf excess_ratio; //type: uint16

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


                                                            YLeaf value_; //type: uint32
                                                            YLeaf unit; //type: QosUnitEnum



                                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth


                                                    class SumOfBandwidth : public Entity
                                                    {
                                                        public:
                                                            SumOfBandwidth();
                                                            ~SumOfBandwidth();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf value_; //type: uint32
                                                            YLeaf unit; //type: QosUnitEnum



                                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth


                                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth> bandwidth;
                                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth> sum_of_bandwidth;


                                                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq


                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police> police;
                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape> shape;
                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq> wfq;


                                            }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config


                                            class Result : public Entity
                                            {
                                                public:
                                                    Result();
                                                    ~Result();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf stats_id; //type: uint32

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


                                                        YLeaf queue_id; //type: uint32
                                                        YLeaf commit_tx; //type: uint32
                                                        YLeaf excess_tx; //type: uint32
                                                        YLeaf drop; //type: uint32



                                                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue


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


                                                        YLeaf token_bucket_id; //type: uint32
                                                        YLeaf conform; //type: uint32
                                                        YLeaf exceed; //type: uint32
                                                        YLeaf violate; //type: uint32



                                                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police


                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police> police;
                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue> queue;


                                            }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config> config;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result> result;


                                        }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt> > qos_show_ea_pclass_st;


                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header> header;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters> interface_parameters;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass> skywarp_qos_policy_class;


                                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details


                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details> details;


                            }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput


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


                                            YLeaf interface_name; //type: string
                                            YLeaf policy_name; //type: string
                                            YLeaf direction; //type: string
                                            YLeaf classes; //type: uint16



                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header


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


                                            YLeaf policy_name; //type: string
                                            YLeaf hierarchical_depth; //type: uint8
                                            YLeaf interface_type; //type: string
                                            YLeaf interface_rate; //type: uint32
                                            YLeaf port_shaper_rate; //type: uint32
                                            YLeaf interface_handle; //type: string
                                            YLeaf under_line_interface_handle; //type: string
                                            YLeaf bundle_id; //type: uint16
                                            YLeaf uidb_index; //type: uint16
                                            YLeaf qos_interface_handle; //type: uint64
                                            YLeaf port; //type: uint32
                                            YLeaf policy_map_id; //type: uint16



                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters


                                    class SkywarpQosPolicyClass : public Entity
                                    {
                                        public:
                                            SkywarpQosPolicyClass();
                                            ~SkywarpQosPolicyClass();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class QosShowEaPclassSt : public Entity
                                        {
                                            public:
                                                QosShowEaPclassSt();
                                                ~QosShowEaPclassSt();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf index_; //type: uint16
                                                YLeaf class_level; //type: uint8
                                                YLeaf class_name; //type: string
                                                YLeaf policy_name; //type: string
                                                YLeaf node_flags; //type: string
                                                YLeaf stats_flags; //type: string

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


                                                    YLeaf node_config; //type: string

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


                                                        YLeaf color_aware; //type: boolean
                                                        YLeaf policer_type; //type: TbAlgorithmEnum

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


                                                            YLeaf value_; //type: uint32
                                                            YLeaf unit; //type: QosUnitEnum



                                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir


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


                                                            YLeaf value_; //type: uint32
                                                            YLeaf unit; //type: QosUnitEnum



                                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs


                                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs> cbs;
                                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir> cir;


                                                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police


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


                                                            YLeaf value_; //type: uint32
                                                            YLeaf unit; //type: QosUnitEnum



                                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir


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


                                                            YLeaf value_; //type: uint32
                                                            YLeaf unit; //type: QosUnitEnum



                                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs


                                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs> pbs;
                                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir> pir;


                                                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape


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


                                                        YLeaf excess_ratio; //type: uint16

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


                                                            YLeaf value_; //type: uint32
                                                            YLeaf unit; //type: QosUnitEnum



                                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth


                                                    class SumOfBandwidth : public Entity
                                                    {
                                                        public:
                                                            SumOfBandwidth();
                                                            ~SumOfBandwidth();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf value_; //type: uint32
                                                            YLeaf unit; //type: QosUnitEnum



                                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth


                                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth> bandwidth;
                                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth> sum_of_bandwidth;


                                                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq


                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police> police;
                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape> shape;
                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq> wfq;


                                            }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config


                                            class Result : public Entity
                                            {
                                                public:
                                                    Result();
                                                    ~Result();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf stats_id; //type: uint32

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


                                                        YLeaf queue_id; //type: uint32
                                                        YLeaf commit_tx; //type: uint32
                                                        YLeaf excess_tx; //type: uint32
                                                        YLeaf drop; //type: uint32



                                                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue


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


                                                        YLeaf token_bucket_id; //type: uint32
                                                        YLeaf conform; //type: uint32
                                                        YLeaf exceed; //type: uint32
                                                        YLeaf violate; //type: uint32



                                                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police


                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police> police;
                                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue> queue;


                                            }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config> config;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result> result;


                                        }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt> > qos_show_ea_pclass_st;


                                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header> header;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters> interface_parameters;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass> skywarp_qos_policy_class;


                                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details


                                    std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details> details;


                            }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput


                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput> bundle_input;
                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput> bundle_output;


                        }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface


                            std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface> > member_interface;


                    }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces


                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces> member_interfaces;


                }; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface> > bundle_interface;


            }; // PlatformQosEa::Nodes::Node::BundleInterfaces


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


                        YLeaf interface_name; //type: string

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


                                    YLeaf interface_name; //type: string
                                    YLeaf policy_name; //type: string
                                    YLeaf direction; //type: string
                                    YLeaf classes; //type: uint16



                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header


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


                                    YLeaf policy_name; //type: string
                                    YLeaf hierarchical_depth; //type: uint8
                                    YLeaf interface_type; //type: string
                                    YLeaf interface_rate; //type: uint32
                                    YLeaf port_shaper_rate; //type: uint32
                                    YLeaf interface_handle; //type: string
                                    YLeaf under_line_interface_handle; //type: string
                                    YLeaf bundle_id; //type: uint16
                                    YLeaf uidb_index; //type: uint16
                                    YLeaf qos_interface_handle; //type: uint64
                                    YLeaf port; //type: uint32
                                    YLeaf policy_map_id; //type: uint16



                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters


                            class SkywarpQosPolicyClass : public Entity
                            {
                                public:
                                    SkywarpQosPolicyClass();
                                    ~SkywarpQosPolicyClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class QosShowEaPclassSt : public Entity
                                {
                                    public:
                                        QosShowEaPclassSt();
                                        ~QosShowEaPclassSt();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf index_; //type: uint16
                                        YLeaf class_level; //type: uint8
                                        YLeaf class_name; //type: string
                                        YLeaf policy_name; //type: string
                                        YLeaf node_flags; //type: string
                                        YLeaf stats_flags; //type: string

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


                                            YLeaf node_config; //type: string

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


                                                YLeaf color_aware; //type: boolean
                                                YLeaf policer_type; //type: TbAlgorithmEnum

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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir


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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs> cbs;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir> cir;


                                        }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police


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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir


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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs> pbs;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir> pir;


                                        }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape


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


                                                YLeaf excess_ratio; //type: uint16

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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth


                                            class SumOfBandwidth : public Entity
                                            {
                                                public:
                                                    SumOfBandwidth();
                                                    ~SumOfBandwidth();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth> bandwidth;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth> sum_of_bandwidth;


                                        }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq


                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police> police;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape> shape;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq> wfq;


                                    }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config


                                    class Result : public Entity
                                    {
                                        public:
                                            Result();
                                            ~Result();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf stats_id; //type: uint32

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


                                                YLeaf queue_id; //type: uint32
                                                YLeaf commit_tx; //type: uint32
                                                YLeaf excess_tx; //type: uint32
                                                YLeaf drop; //type: uint32



                                        }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue


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


                                                YLeaf token_bucket_id; //type: uint32
                                                YLeaf conform; //type: uint32
                                                YLeaf exceed; //type: uint32
                                                YLeaf violate; //type: uint32



                                        }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police


                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police> police;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue> queue;


                                    }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config> config;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result> result;


                                }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt> > qos_show_ea_pclass_st;


                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass


                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header> header;
                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters> interface_parameters;
                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass> skywarp_qos_policy_class;


                        }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details


                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details> details;


                    }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output


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


                                    YLeaf interface_name; //type: string
                                    YLeaf policy_name; //type: string
                                    YLeaf direction; //type: string
                                    YLeaf classes; //type: uint16



                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header


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


                                    YLeaf policy_name; //type: string
                                    YLeaf hierarchical_depth; //type: uint8
                                    YLeaf interface_type; //type: string
                                    YLeaf interface_rate; //type: uint32
                                    YLeaf port_shaper_rate; //type: uint32
                                    YLeaf interface_handle; //type: string
                                    YLeaf under_line_interface_handle; //type: string
                                    YLeaf bundle_id; //type: uint16
                                    YLeaf uidb_index; //type: uint16
                                    YLeaf qos_interface_handle; //type: uint64
                                    YLeaf port; //type: uint32
                                    YLeaf policy_map_id; //type: uint16



                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters


                            class SkywarpQosPolicyClass : public Entity
                            {
                                public:
                                    SkywarpQosPolicyClass();
                                    ~SkywarpQosPolicyClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class QosShowEaPclassSt : public Entity
                                {
                                    public:
                                        QosShowEaPclassSt();
                                        ~QosShowEaPclassSt();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf index_; //type: uint16
                                        YLeaf class_level; //type: uint8
                                        YLeaf class_name; //type: string
                                        YLeaf policy_name; //type: string
                                        YLeaf node_flags; //type: string
                                        YLeaf stats_flags; //type: string

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


                                            YLeaf node_config; //type: string

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


                                                YLeaf color_aware; //type: boolean
                                                YLeaf policer_type; //type: TbAlgorithmEnum

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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir


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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs> cbs;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir> cir;


                                        }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police


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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir


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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs> pbs;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir> pir;


                                        }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape


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


                                                YLeaf excess_ratio; //type: uint16

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


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth


                                            class SumOfBandwidth : public Entity
                                            {
                                                public:
                                                    SumOfBandwidth();
                                                    ~SumOfBandwidth();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf value_; //type: uint32
                                                    YLeaf unit; //type: QosUnitEnum



                                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth


                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth> bandwidth;
                                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth> sum_of_bandwidth;


                                        }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq


                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police> police;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape> shape;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq> wfq;


                                    }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config


                                    class Result : public Entity
                                    {
                                        public:
                                            Result();
                                            ~Result();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf stats_id; //type: uint32

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


                                                YLeaf queue_id; //type: uint32
                                                YLeaf commit_tx; //type: uint32
                                                YLeaf excess_tx; //type: uint32
                                                YLeaf drop; //type: uint32



                                        }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue


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


                                                YLeaf token_bucket_id; //type: uint32
                                                YLeaf conform; //type: uint32
                                                YLeaf exceed; //type: uint32
                                                YLeaf violate; //type: uint32



                                        }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police


                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police> police;
                                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue> queue;


                                    }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result


                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config> config;
                                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result> result;


                                }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt> > qos_show_ea_pclass_st;


                            }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass


                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header> header;
                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters> interface_parameters;
                                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass> skywarp_qos_policy_class;


                        }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details


                            std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details> details;


                    }; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input


                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input> input;
                        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output> output;


                }; // PlatformQosEa::Nodes::Node::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface> > interface;


            }; // PlatformQosEa::Nodes::Node::Interfaces


                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces> bundle_interfaces;
                std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces> interfaces;


        }; // PlatformQosEa::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node> > node;


    }; // PlatformQosEa::Nodes


        std::unique_ptr<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes> nodes;


}; // PlatformQosEa


class WredEnum : public Enum
{
    public:
        static const Enum::YLeaf wred_cos_cmd;
        static const Enum::YLeaf wred_dscp_cmd;
        static const Enum::YLeaf wred_precedence_cmd;
        static const Enum::YLeaf wred_discard_class_cmd;
        static const Enum::YLeaf wred_mpls_exp_cmd;
        static const Enum::YLeaf red_with_user_min_max;
        static const Enum::YLeaf red_with_default_min_max;
        static const Enum::YLeaf wred_dei_cmd;
        static const Enum::YLeaf wred_ecn_cmd;
        static const Enum::YLeaf wred_invalid_cmd;

};

class ActionOpcodeEnum : public Enum
{
    public:
        static const Enum::YLeaf precedence;
        static const Enum::YLeaf dscp;
        static const Enum::YLeaf discard_class;
        static const Enum::YLeaf qos_group;
        static const Enum::YLeaf cos_inner;
        static const Enum::YLeaf cos;
        static const Enum::YLeaf exp_top;
        static const Enum::YLeaf exp_imp;
        static const Enum::YLeaf tunnel_precedence;
        static const Enum::YLeaf tunnel_dscp;
        static const Enum::YLeaf itag_dei;
        static const Enum::YLeaf itag_cos;
        static const Enum::YLeaf cos_imposition;
        static const Enum::YLeaf dei_imposition;
        static const Enum::YLeaf dei;
        static const Enum::YLeaf no_marking;

};

class TbAlgorithmEnum : public Enum
{
    public:
        static const Enum::YLeaf inactive;
        static const Enum::YLeaf single;
        static const Enum::YLeaf single_rate_tcm;
        static const Enum::YLeaf two_rate_tcm;
        static const Enum::YLeaf mef_tcm;
        static const Enum::YLeaf dummy;

};

class PolicyParamUnitEnum : public Enum
{
    public:
        static const Enum::YLeaf policy_param_unit_invalid;
        static const Enum::YLeaf policy_param_unit_bytes;
        static const Enum::YLeaf policy_param_unit_kbytes;
        static const Enum::YLeaf policy_param_unit_mbytes;
        static const Enum::YLeaf policy_param_unit_gbytes;
        static const Enum::YLeaf policy_param_unit_bitsps;
        static const Enum::YLeaf policy_param_unit_kbitsps;
        static const Enum::YLeaf policy_param_unit_mbitsps;
        static const Enum::YLeaf policy_param_unit_gbitsps;
        static const Enum::YLeaf policy_param_unit_cells_ps;
        static const Enum::YLeaf policy_param_unit_packets_ps;
        static const Enum::YLeaf policy_param_unit_us;
        static const Enum::YLeaf policy_param_unit_ms;
        static const Enum::YLeaf policy_param_unit_seconds;
        static const Enum::YLeaf policy_param_unit_packets;
        static const Enum::YLeaf policy_param_unit_cells;
        static const Enum::YLeaf policy_param_unit_percent;
        static const Enum::YLeaf policy_param_unit_per_thousand;
        static const Enum::YLeaf policy_param_unit_per_million;
        static const Enum::YLeaf policy_param_unit_hz;
        static const Enum::YLeaf policy_param_unit_khz;
        static const Enum::YLeaf policy_param_unit_mhz;
        static const Enum::YLeaf policy_param_unit_ratio;
        static const Enum::YLeaf policy_param_unit_max;

};

class ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf police_transmit;
        static const Enum::YLeaf police_set_transmit;
        static const Enum::YLeaf police_drop;
        static const Enum::YLeaf police_unknown;

};

class CacStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf admit;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf ubrl;

};

class QosUnitEnum : public Enum
{
    public:
        static const Enum::YLeaf invalid;
        static const Enum::YLeaf bytes;
        static const Enum::YLeaf kilobytes;
        static const Enum::YLeaf megabytes;
        static const Enum::YLeaf gigabytes;
        static const Enum::YLeaf bps;
        static const Enum::YLeaf kbps;
        static const Enum::YLeaf mbps;
        static const Enum::YLeaf gbps;
        static const Enum::YLeaf cells_per_second;
        static const Enum::YLeaf packets_per_second;
        static const Enum::YLeaf microsecond;
        static const Enum::YLeaf millisecond;
        static const Enum::YLeaf packets;
        static const Enum::YLeaf cells;
        static const Enum::YLeaf percentage;
        static const Enum::YLeaf ratio;

};

class PolicyStateEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf suspended;

};


}
}

#endif /* _CISCO_IOS_XR_SKP_QOS_OPER_ */

