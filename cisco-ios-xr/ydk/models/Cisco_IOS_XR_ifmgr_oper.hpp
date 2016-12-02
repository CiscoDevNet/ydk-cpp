#ifndef _CISCO_IOS_XR_IFMGR_OPER_
#define _CISCO_IOS_XR_IFMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_oper {

class InterfaceDampening : public Entity
{
    public:
        InterfaceDampening();
        ~InterfaceDampening();

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


            class IfDampening : public Entity
            {
                public:
                    IfDampening();
                    ~IfDampening();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value state_transition_count; //type: uint32
                    Value last_state_transition_time; //type: uint32
                    Value is_dampening_enabled; //type: boolean
                    Value half_life; //type: uint32
                    Value reuse_threshold; //type: uint32
                    Value suppress_threshold; //type: uint32
                    Value maximum_suppress_time; //type: uint32
                    Value restart_penalty; //type: uint32


                class InterfaceDampening_ : public Entity
                {
                    public:
                        InterfaceDampening_();
                        ~InterfaceDampening_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value penalty; //type: uint32
                        Value is_suppressed_enabled; //type: boolean
                        Value seconds_remaining; //type: uint32
                        Value flaps; //type: uint32
                        Value state; //type: ImStateEnumEnum


                        class ImStateEnumEnum;


                }; // InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_


                class Capsulation : public Entity
                {
                    public:
                        Capsulation();
                        ~Capsulation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value capsulation_number; //type: string


                    class CapsulationDampening : public Entity
                    {
                        public:
                            CapsulationDampening();
                            ~CapsulationDampening();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value penalty; //type: uint32
                            Value is_suppressed_enabled; //type: boolean
                            Value seconds_remaining; //type: uint32
                            Value flaps; //type: uint32
                            Value state; //type: ImStateEnumEnum


                            class ImStateEnumEnum;


                    }; // InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening> capsulation_dampening;


                }; // InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation> > capsulation;
                    std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_> interface_dampening;


            }; // InterfaceDampening::Interfaces::Interface::IfDampening


                std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface::IfDampening> if_dampening;


        }; // InterfaceDampening::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces::Interface> > interface;


    }; // InterfaceDampening::Interfaces


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


            class Show : public Entity
            {
                public:
                    Show();
                    ~Show();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Dampening : public Entity
                {
                    public:
                        Dampening();
                        ~Dampening();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IfHandles : public Entity
                    {
                        public:
                            IfHandles();
                            ~IfHandles();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class IfHandle : public Entity
                        {
                            public:
                                IfHandle();
                                ~IfHandle();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_handle_name; //type: string
                                Value state_transition_count; //type: uint32
                                Value last_state_transition_time; //type: uint32
                                Value is_dampening_enabled; //type: boolean
                                Value half_life; //type: uint32
                                Value reuse_threshold; //type: uint32
                                Value suppress_threshold; //type: uint32
                                Value maximum_suppress_time; //type: uint32
                                Value restart_penalty; //type: uint32


                            class InterfaceDampening_ : public Entity
                            {
                                public:
                                    InterfaceDampening_();
                                    ~InterfaceDampening_();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value penalty; //type: uint32
                                    Value is_suppressed_enabled; //type: boolean
                                    Value seconds_remaining; //type: uint32
                                    Value flaps; //type: uint32
                                    Value state; //type: ImStateEnumEnum


                                    class ImStateEnumEnum;


                            }; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_


                            class Capsulation : public Entity
                            {
                                public:
                                    Capsulation();
                                    ~Capsulation();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value capsulation_number; //type: string


                                class CapsulationDampening : public Entity
                                {
                                    public:
                                        CapsulationDampening();
                                        ~CapsulationDampening();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value penalty; //type: uint32
                                        Value is_suppressed_enabled; //type: boolean
                                        Value seconds_remaining; //type: uint32
                                        Value flaps; //type: uint32
                                        Value state; //type: ImStateEnumEnum


                                        class ImStateEnumEnum;


                                }; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening


                                    std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening> capsulation_dampening;


                            }; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation> > capsulation;
                                std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_> interface_dampening;


                        }; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle> > if_handle;


                    }; // InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles


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
                                Value state_transition_count; //type: uint32
                                Value last_state_transition_time; //type: uint32
                                Value is_dampening_enabled; //type: boolean
                                Value half_life; //type: uint32
                                Value reuse_threshold; //type: uint32
                                Value suppress_threshold; //type: uint32
                                Value maximum_suppress_time; //type: uint32
                                Value restart_penalty; //type: uint32


                            class InterfaceDampening_ : public Entity
                            {
                                public:
                                    InterfaceDampening_();
                                    ~InterfaceDampening_();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value penalty; //type: uint32
                                    Value is_suppressed_enabled; //type: boolean
                                    Value seconds_remaining; //type: uint32
                                    Value flaps; //type: uint32
                                    Value state; //type: ImStateEnumEnum


                                    class ImStateEnumEnum;


                            }; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_


                            class Capsulation : public Entity
                            {
                                public:
                                    Capsulation();
                                    ~Capsulation();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value capsulation_number; //type: string


                                class CapsulationDampening : public Entity
                                {
                                    public:
                                        CapsulationDampening();
                                        ~CapsulationDampening();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value penalty; //type: uint32
                                        Value is_suppressed_enabled; //type: boolean
                                        Value seconds_remaining; //type: uint32
                                        Value flaps; //type: uint32
                                        Value state; //type: ImStateEnumEnum


                                        class ImStateEnumEnum;


                                }; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening


                                    std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening> capsulation_dampening;


                            }; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation> > capsulation;
                                std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_> interface_dampening;


                        }; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface> > interface;


                    }; // InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles> if_handles;
                        std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces> interfaces;


                }; // InterfaceDampening::Nodes::Node::Show::Dampening


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show::Dampening> dampening;


            }; // InterfaceDampening::Nodes::Node::Show


                std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node::Show> show;


        }; // InterfaceDampening::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes::Node> > node;


    }; // InterfaceDampening::Nodes


        std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening::Nodes> nodes;


}; // InterfaceDampening

class InterfaceProperties : public Entity
{
    public:
        InterfaceProperties();
        ~InterfaceProperties();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class DataNodes : public Entity
    {
        public:
            DataNodes();
            ~DataNodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class DataNode : public Entity
        {
            public:
                DataNode();
                ~DataNode();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value data_node_name; //type: string


            class Locationviews : public Entity
            {
                public:
                    Locationviews();
                    ~Locationviews();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Locationview : public Entity
                {
                    public:
                        Locationview();
                        ~Locationview();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value locationview_name; //type: string


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
                                Value interface; //type: string
                                Value parent_interface; //type: string
                                Value type; //type: string
                                Value state; //type: ImStateEnumEnum
                                Value actual_state; //type: ImStateEnumEnum
                                Value line_state; //type: ImStateEnumEnum
                                Value actual_line_state; //type: ImStateEnumEnum
                                Value encapsulation; //type: string
                                Value encapsulation_type_string; //type: string
                                Value mtu; //type: uint32
                                Value sub_interface_mtu_overhead; //type: uint32
                                Value l2_transport; //type: boolean
                                Value bandwidth; //type: uint32


                                class ImStateEnumEnum;
                                class ImStateEnumEnum;
                                class ImStateEnumEnum;
                                class ImStateEnumEnum;


                        }; // InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface> > interface;


                    }; // InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces> interfaces;


                }; // InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview> > locationview;


            }; // InterfaceProperties::DataNodes::DataNode::Locationviews


            class PqNodeLocations : public Entity
            {
                public:
                    PqNodeLocations();
                    ~PqNodeLocations();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class PqNodeLocation : public Entity
                {
                    public:
                        PqNodeLocation();
                        ~PqNodeLocation();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value pq_node_name; //type: string


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
                                Value interface; //type: string
                                Value parent_interface; //type: string
                                Value type; //type: string
                                Value state; //type: ImStateEnumEnum
                                Value actual_state; //type: ImStateEnumEnum
                                Value line_state; //type: ImStateEnumEnum
                                Value actual_line_state; //type: ImStateEnumEnum
                                Value encapsulation; //type: string
                                Value encapsulation_type_string; //type: string
                                Value mtu; //type: uint32
                                Value sub_interface_mtu_overhead; //type: uint32
                                Value l2_transport; //type: boolean
                                Value bandwidth; //type: uint32


                                class ImStateEnumEnum;
                                class ImStateEnumEnum;
                                class ImStateEnumEnum;
                                class ImStateEnumEnum;


                        }; // InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface> > interface;


                    }; // InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces


                        std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces> interfaces;


                }; // InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation> > pq_node_location;


            }; // InterfaceProperties::DataNodes::DataNode::PqNodeLocations


            class SystemView : public Entity
            {
                public:
                    SystemView();
                    ~SystemView();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


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
                            Value interface; //type: string
                            Value parent_interface; //type: string
                            Value type; //type: string
                            Value state; //type: ImStateEnumEnum
                            Value actual_state; //type: ImStateEnumEnum
                            Value line_state; //type: ImStateEnumEnum
                            Value actual_line_state; //type: ImStateEnumEnum
                            Value encapsulation; //type: string
                            Value encapsulation_type_string; //type: string
                            Value mtu; //type: uint32
                            Value sub_interface_mtu_overhead; //type: uint32
                            Value l2_transport; //type: boolean
                            Value bandwidth; //type: uint32


                            class ImStateEnumEnum;
                            class ImStateEnumEnum;
                            class ImStateEnumEnum;
                            class ImStateEnumEnum;


                    }; // InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface> > interface;


                }; // InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces


                    std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces> interfaces;


            }; // InterfaceProperties::DataNodes::DataNode::SystemView


                std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::Locationviews> locationviews;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::PqNodeLocations> pq_node_locations;
                std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode::SystemView> system_view;


        }; // InterfaceProperties::DataNodes::DataNode


            std::vector<std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes::DataNode> > data_node;


    }; // InterfaceProperties::DataNodes


        std::unique_ptr<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties::DataNodes> data_nodes;


}; // InterfaceProperties


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


}
}

#endif /* _CISCO_IOS_XR_IFMGR_OPER_ */

