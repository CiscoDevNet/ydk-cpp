#ifndef _CISCO_IOS_XR_L2_ETH_INFRA_OPER_
#define _CISCO_IOS_XR_L2_ETH_INFRA_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_l2_eth_infra_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2_eth_infra_oper {

class MacAccounting : public Entity
{
    public:
        MacAccounting();
        ~MacAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


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
                    Value is_ingress_enabled; //type: boolean
                    Value is_egress_enabled; //type: boolean
                    Value number_available_ingress; //type: uint32
                    Value number_available_egress; //type: uint32
                    Value number_available_on_node; //type: uint32




            }; // MacAccounting::Interfaces::Interface::State


            class IngressStatistic : public Entity
            {
                public:
                    IngressStatistic();
                    ~IngressStatistic();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value mac_address; //type: string
                    Value packets; //type: uint64
                    Value bytes; //type: uint64




            }; // MacAccounting::Interfaces::Interface::IngressStatistic


            class EgressStatistic : public Entity
            {
                public:
                    EgressStatistic();
                    ~EgressStatistic();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value mac_address; //type: string
                    Value packets; //type: uint64
                    Value bytes; //type: uint64




            }; // MacAccounting::Interfaces::Interface::EgressStatistic


                std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting::Interfaces::Interface::EgressStatistic> > egress_statistic;
                std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting::Interfaces::Interface::IngressStatistic> > ingress_statistic;
                std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting::Interfaces::Interface::State> state;


        }; // MacAccounting::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting::Interfaces::Interface> > interface;


    }; // MacAccounting::Interfaces


        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting::Interfaces> interfaces;


}; // MacAccounting

class Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

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
                Value node_id; //type: string


            class Trunks : public Entity
            {
                public:
                    Trunks();
                    ~Trunks();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Trunk : public Entity
                {
                    public:
                        Trunk();
                        ~Trunk();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface; //type: string
                        Value interface_xr; //type: string
                        Value state; //type: ImStateEnumEnum
                        Value mtu; //type: uint16
                        Value qinq_outer_ether_type; //type: VlanQinqOuterEtypeEnum
                        Value dot1ad_count; //type: uint32
                        Value untagged_interface; //type: string
                        Value mac_filtering; //type: EthFilteringEnum


                    class Layer2SubInterfaces : public Entity
                    {
                        public:
                            Layer2SubInterfaces();
                            ~Layer2SubInterfaces();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value total_count; //type: uint32
                            Value dot1q_count; //type: uint32
                            Value qin_q_count; //type: uint32
                            Value qin_any_count; //type: uint32
                            Value untagged_count; //type: uint32


                        class StateCounters : public Entity
                        {
                            public:
                                StateCounters();
                                ~StateCounters();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value up; //type: uint32
                                Value down; //type: uint32
                                Value admin_down; //type: uint32




                        }; // Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters


                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters> state_counters;


                    }; // Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces


                    class Layer3SubInterfaces : public Entity
                    {
                        public:
                            Layer3SubInterfaces();
                            ~Layer3SubInterfaces();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value total_count; //type: uint32
                            Value dot1q_count; //type: uint32
                            Value qin_q_count; //type: uint32
                            Value untagged_count; //type: uint32
                            Value native_vlan; //type: uint16


                        class StateCounters : public Entity
                        {
                            public:
                                StateCounters();
                                ~StateCounters();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value up; //type: uint32
                                Value down; //type: uint32
                                Value admin_down; //type: uint32




                        }; // Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters


                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters> state_counters;


                    }; // Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces


                        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces> layer2_sub_interfaces;
                        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces> layer3_sub_interfaces;
                        class EthFilteringEnum;
                        class VlanQinqOuterEtypeEnum;
                        class ImStateEnumEnum;


                }; // Vlan::Nodes::Node::Trunks::Trunk


                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks::Trunk> > trunk;


            }; // Vlan::Nodes::Node::Trunks


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
                        Value interface; //type: string
                        Value interface_xr; //type: string
                        Value parent_interface; //type: string
                        Value service; //type: VlanServiceEnum
                        Value state; //type: ImStateEnumEnum
                        Value mtu; //type: uint16
                        Value switched_mtu; //type: uint16


                    class EncapsulationDetails : public Entity
                    {
                        public:
                            EncapsulationDetails();
                            ~EncapsulationDetails();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value vlan_encapsulation; //type: VlanEncapsEnum
                            Value tag; //type: uint16
                            Value outer_tag; //type: uint16
                            Value native_tag; //type: uint16
                            Value dot1ad_tag; //type: uint16
                            Value dot1ad_native_tag; //type: uint16
                            Value dot1ad_outer_tag; //type: uint16


                        class Stack : public Entity
                        {
                            public:
                                Stack();
                                ~Stack();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value outer_tag; //type: uint16
                                Value second_tag; //type: uint16




                        }; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack


                        class ServiceInstanceDetails : public Entity
                        {
                            public:
                                ServiceInstanceDetails();
                                ~ServiceInstanceDetails();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value payload_ethertype; //type: EfpPayloadEtypeEnum
                                Value tags_popped; //type: uint16
                                Value is_exact_match; //type: boolean
                                Value is_native_vlan; //type: boolean
                                Value is_native_preserving; //type: boolean
                                Value source_mac_match; //type: string
                                Value destination_mac_match; //type: string


                            class LocalTrafficStack : public Entity
                            {
                                public:
                                    LocalTrafficStack();
                                    ~LocalTrafficStack();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class LocalTrafficTag : public Entity
                                {
                                    public:
                                        LocalTrafficTag();
                                        ~LocalTrafficTag();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value ethertype; //type: EfpTagEtypeEnum
                                        Value vlan_id; //type: uint16


                                        class EfpTagEtypeEnum;


                                }; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag> > local_traffic_tag;


                            }; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack


                            class TagsToMatch : public Entity
                            {
                                public:
                                    TagsToMatch();
                                    ~TagsToMatch();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value ethertype; //type: EfpTagEtypeEnum
                                    Value priority; //type: EfpTagPriorityEnum


                                class VlanRange : public Entity
                                {
                                    public:
                                        VlanRange();
                                        ~VlanRange();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value vlan_id_low; //type: uint16
                                        Value vlan_id_high; //type: uint16




                                }; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange> > vlan_range;
                                    class EfpTagEtypeEnum;
                                    class EfpTagPriorityEnum;


                            }; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch


                            class Pushe : public Entity
                            {
                                public:
                                    Pushe();
                                    ~Pushe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value ethertype; //type: EfpTagEtypeEnum
                                    Value vlan_id; //type: uint16


                                    class EfpTagEtypeEnum;


                            }; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe


                                std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack> local_traffic_stack;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe> > pushe;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch> > tags_to_match;
                                class EfpPayloadEtypeEnum;


                        }; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails


                        class Dot1AdDot1QStack : public Entity
                        {
                            public:
                                Dot1AdDot1QStack();
                                ~Dot1AdDot1QStack();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value outer_tag; //type: uint16
                                Value second_tag; //type: uint16




                        }; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack


                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack> dot1ad_dot1q_stack;
                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails> service_instance_details;
                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack> stack;
                            class VlanEncapsEnum;


                    }; // Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails


                        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails> encapsulation_details;
                        class VlanServiceEnum;
                        class ImStateEnumEnum;


                }; // Vlan::Nodes::Node::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces::Interface> > interface;


            }; // Vlan::Nodes::Node::Interfaces


            class TagAllocations : public Entity
            {
                public:
                    TagAllocations();
                    ~TagAllocations();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class TagAllocation : public Entity
                {
                    public:
                        TagAllocation();
                        ~TagAllocation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface; //type: string
                        Value first_tag; //type: uint32
                        Value second_tag; //type: one of uint32, enumeration
                        Value interface_xr; //type: string
                        Value parent_interface; //type: string
                        Value service; //type: VlanServiceEnum
                        Value state; //type: ImStateEnumEnum
                        Value mtu; //type: uint16
                        Value switched_mtu; //type: uint16


                    class EncapsulationDetails : public Entity
                    {
                        public:
                            EncapsulationDetails();
                            ~EncapsulationDetails();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value vlan_encapsulation; //type: VlanEncapsEnum
                            Value tag; //type: uint16
                            Value outer_tag; //type: uint16
                            Value native_tag; //type: uint16
                            Value dot1ad_tag; //type: uint16
                            Value dot1ad_native_tag; //type: uint16
                            Value dot1ad_outer_tag; //type: uint16


                        class Stack : public Entity
                        {
                            public:
                                Stack();
                                ~Stack();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value outer_tag; //type: uint16
                                Value second_tag; //type: uint16




                        }; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack


                        class ServiceInstanceDetails : public Entity
                        {
                            public:
                                ServiceInstanceDetails();
                                ~ServiceInstanceDetails();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value payload_ethertype; //type: EfpPayloadEtypeEnum
                                Value tags_popped; //type: uint16
                                Value is_exact_match; //type: boolean
                                Value is_native_vlan; //type: boolean
                                Value is_native_preserving; //type: boolean
                                Value source_mac_match; //type: string
                                Value destination_mac_match; //type: string


                            class LocalTrafficStack : public Entity
                            {
                                public:
                                    LocalTrafficStack();
                                    ~LocalTrafficStack();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class LocalTrafficTag : public Entity
                                {
                                    public:
                                        LocalTrafficTag();
                                        ~LocalTrafficTag();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value ethertype; //type: EfpTagEtypeEnum
                                        Value vlan_id; //type: uint16


                                        class EfpTagEtypeEnum;


                                }; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag> > local_traffic_tag;


                            }; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack


                            class TagsToMatch : public Entity
                            {
                                public:
                                    TagsToMatch();
                                    ~TagsToMatch();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value ethertype; //type: EfpTagEtypeEnum
                                    Value priority; //type: EfpTagPriorityEnum


                                class VlanRange : public Entity
                                {
                                    public:
                                        VlanRange();
                                        ~VlanRange();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value vlan_id_low; //type: uint16
                                        Value vlan_id_high; //type: uint16




                                }; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange> > vlan_range;
                                    class EfpTagEtypeEnum;
                                    class EfpTagPriorityEnum;


                            }; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch


                            class Pushe : public Entity
                            {
                                public:
                                    Pushe();
                                    ~Pushe();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value ethertype; //type: EfpTagEtypeEnum
                                    Value vlan_id; //type: uint16


                                    class EfpTagEtypeEnum;


                            }; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe


                                std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack> local_traffic_stack;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe> > pushe;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch> > tags_to_match;
                                class EfpPayloadEtypeEnum;


                        }; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails


                        class Dot1AdDot1QStack : public Entity
                        {
                            public:
                                Dot1AdDot1QStack();
                                ~Dot1AdDot1QStack();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value outer_tag; //type: uint16
                                Value second_tag; //type: uint16




                        }; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack


                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack> dot1ad_dot1q_stack;
                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails> service_instance_details;
                            std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack> stack;
                            class VlanEncapsEnum;


                    }; // Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails


                        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails> encapsulation_details;
                        class VlanTagOrAnyEnum;
                        class VlanServiceEnum;
                        class ImStateEnumEnum;


                }; // Vlan::Nodes::Node::TagAllocations::TagAllocation


                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations::TagAllocation> > tag_allocation;


            }; // Vlan::Nodes::Node::TagAllocations


                std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::TagAllocations> tag_allocations;
                std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node::Trunks> trunks;


        }; // Vlan::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes::Node> > node;


    }; // Vlan::Nodes


        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::Vlan::Nodes> nodes;


}; // Vlan

class EthernetEncapsulation : public Entity
{
    public:
        EthernetEncapsulation();
        ~EthernetEncapsulation();

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


            class UnicastMacFilters : public Entity
            {
                public:
                    UnicastMacFilters();
                    ~UnicastMacFilters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class UnicastMacFilter : public Entity
                {
                    public:
                        UnicastMacFilter();
                        ~UnicastMacFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string


                    class UnicastFilter : public Entity
                    {
                        public:
                            UnicastFilter();
                            ~UnicastFilter();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value mac_address; //type: string
                            Value mode; //type: EthCapsUcastMacModeEnum


                            class EthCapsUcastMacModeEnum;


                    }; // EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter


                        std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter> > unicast_filter;


                }; // EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter


                    std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter> > unicast_mac_filter;


            }; // EthernetEncapsulation::Nodes::Node::UnicastMacFilters


                std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation::Nodes::Node::UnicastMacFilters> unicast_mac_filters;


        }; // EthernetEncapsulation::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation::Nodes::Node> > node;


    }; // EthernetEncapsulation::Nodes


        std::unique_ptr<Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation::Nodes> nodes;


}; // EthernetEncapsulation


class VlanEncapsEnum : public Enum
{
    public:
        static const Enum::Value no_encapsulation;
        static const Enum::Value dot1q;
        static const Enum::Value qinq;
        static const Enum::Value qin_any;
        static const Enum::Value dot1q_native;
        static const Enum::Value dot1ad;
        static const Enum::Value dot1ad_native;
        static const Enum::Value service_instance;
        static const Enum::Value dot1ad_dot1q;
        static const Enum::Value dot1ad_any;

};

class EthCapsUcastMacModeEnum : public Enum
{
    public:
        static const Enum::Value reserved;
        static const Enum::Value permit;

};

class ImStateEnumEnum : public Enum
{
    public:
        static const Enum::Value im_state_not_ready;
        static const Enum::Value im_state_admin_down;
        static const Enum::Value im_state_down;
        static const Enum::Value im_state_up;
        static const Enum::Value im_state_shutdown;
        static const Enum::Value im_state_err_disable;
        static const Enum::Value im_state_down_immediate;
        static const Enum::Value im_state_down_immediate_admin;
        static const Enum::Value im_state_down_graceful;
        static const Enum::Value im_state_begin_shutdown;
        static const Enum::Value im_state_end_shutdown;
        static const Enum::Value im_state_begin_error_disable;
        static const Enum::Value im_state_end_error_disable;
        static const Enum::Value im_state_begin_down_graceful;
        static const Enum::Value im_state_reset;
        static const Enum::Value im_state_operational;
        static const Enum::Value im_state_not_operational;
        static const Enum::Value im_state_unknown;
        static const Enum::Value im_state_last;

};

class EfpTagPriorityEnum : public Enum
{
    public:
        static const Enum::Value priority0;
        static const Enum::Value priority1;
        static const Enum::Value priority2;
        static const Enum::Value priority3;
        static const Enum::Value priority4;
        static const Enum::Value priority5;
        static const Enum::Value priority6;
        static const Enum::Value priority7;
        static const Enum::Value priority_any;

};

class EfpTagEtypeEnum : public Enum
{
    public:
        static const Enum::Value untagged;
        static const Enum::Value dot1q;
        static const Enum::Value dot1ad;

};

class VlanServiceEnum : public Enum
{
    public:
        static const Enum::Value vlan_service_l2;
        static const Enum::Value vlan_service_l3;

};

class EfpPayloadEtypeEnum : public Enum
{
    public:
        static const Enum::Value payload_ethertype_any;
        static const Enum::Value payload_ethertype_ip;
        static const Enum::Value payload_ethertype_pppoe;

};

class VlanQinqOuterEtypeEnum : public Enum
{
    public:
        static const Enum::Value ether_type8100;
        static const Enum::Value ether_type9100;
        static const Enum::Value ether_type9200;

};

class EthFilteringEnum : public Enum
{
    public:
        static const Enum::Value no_filtering;
        static const Enum::Value dot1q_filtering;
        static const Enum::Value dot1ad_filtering;
        static const Enum::Value two_port_mac_relay_filtering;

};


}
}

#endif /* _CISCO_IOS_XR_L2_ETH_INFRA_OPER_ */

