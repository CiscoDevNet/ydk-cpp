#ifndef _CISCO_IOS_XR_INFRA_RSI_OPER_
#define _CISCO_IOS_XR_INFRA_RSI_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_rsi_oper {

class VrfGroup : public Entity
{
    public:
        VrfGroup();
        ~VrfGroup();

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


            class Groups : public Entity
            {
                public:
                    Groups();
                    ~Groups();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Group : public Entity
                {
                    public:
                        Group();
                        ~Group();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value group_name; //type: string
                        Value vr_fs; //type: uint32
                        Value forward_reference; //type: boolean


                    class Vrf : public Entity
                    {
                        public:
                            Vrf();
                            ~Vrf();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value vrf_name; //type: string




                    }; // VrfGroup::Nodes::Node::Groups::Group::Vrf


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::VrfGroup::Nodes::Node::Groups::Group::Vrf> > vrf;


                }; // VrfGroup::Nodes::Node::Groups::Group


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::VrfGroup::Nodes::Node::Groups::Group> > group;


            }; // VrfGroup::Nodes::Node::Groups


                std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::VrfGroup::Nodes::Node::Groups> groups;


        }; // VrfGroup::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::VrfGroup::Nodes::Node> > node;


    }; // VrfGroup::Nodes


        std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::VrfGroup::Nodes> nodes;


}; // VrfGroup

class Srlg : public Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class SrlgMaps : public Entity
    {
        public:
            SrlgMaps();
            ~SrlgMaps();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SrlgMap : public Entity
        {
            public:
                SrlgMap();
                ~SrlgMap();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value srlg_name; //type: string
                Value srlg_value; //type: uint32
                Value srlg_name_xr; //type: string




        }; // Srlg::SrlgMaps::SrlgMap


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::SrlgMaps::SrlgMap> > srlg_map;


    }; // Srlg::SrlgMaps


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


            class SrlgMaps : public Entity
            {
                public:
                    SrlgMaps();
                    ~SrlgMaps();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SrlgMap : public Entity
                {
                    public:
                        SrlgMap();
                        ~SrlgMap();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value srlg_name; //type: string
                        Value srlg_value; //type: uint32
                        Value srlg_name_xr; //type: string




                }; // Srlg::Nodes::Node::SrlgMaps::SrlgMap


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::SrlgMaps::SrlgMap> > srlg_map;


            }; // Srlg::Nodes::Node::SrlgMaps


            class Groups : public Entity
            {
                public:
                    Groups();
                    ~Groups();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Group : public Entity
                {
                    public:
                        Group();
                        ~Group();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value group_name; //type: string
                        Value group_name_xr; //type: string
                        Value group_values; //type: uint32


                    class SrlgAttribute : public Entity
                    {
                        public:
                            SrlgAttribute();
                            ~SrlgAttribute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value srlg_value; //type: uint32
                            Value priority; //type: PriorityEnum
                            Value srlg_index; //type: uint16


                            class PriorityEnum;


                    }; // Srlg::Nodes::Node::Groups::Group::SrlgAttribute


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::Groups::Group::SrlgAttribute> > srlg_attribute;


                }; // Srlg::Nodes::Node::Groups::Group


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::Groups::Group> > group;


            }; // Srlg::Nodes::Node::Groups


            class InheritNodes : public Entity
            {
                public:
                    InheritNodes();
                    ~InheritNodes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class InheritNode : public Entity
                {
                    public:
                        InheritNode();
                        ~InheritNode();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value inherit_node_name; //type: string
                        Value node_name; //type: string
                        Value node_values; //type: uint32


                    class SrlgAttribute : public Entity
                    {
                        public:
                            SrlgAttribute();
                            ~SrlgAttribute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value srlg_value; //type: uint32
                            Value priority; //type: PriorityEnum
                            Value srlg_index; //type: uint16


                            class PriorityEnum;


                    }; // Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InheritNodes::InheritNode::SrlgAttribute> > srlg_attribute;


                }; // Srlg::Nodes::Node::InheritNodes::InheritNode


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InheritNodes::InheritNode> > inherit_node;


            }; // Srlg::Nodes::Node::InheritNodes


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
                        Value interface_name_xr; //type: string
                        Value value_count; //type: uint32
                        Value registrations; //type: uint32
                        ValueList srlg_value; //type: list of  uint32




                }; // Srlg::Nodes::Node::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::Interfaces::Interface> > interface;


            }; // Srlg::Nodes::Node::Interfaces


            class InterfaceDetails : public Entity
            {
                public:
                    InterfaceDetails();
                    ~InterfaceDetails();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class InterfaceDetail : public Entity
                {
                    public:
                        InterfaceDetail();
                        ~InterfaceDetail();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value groups; //type: uint32
                        Value nodes; //type: uint32


                    class SrlgAttribute : public Entity
                    {
                        public:
                            SrlgAttribute();
                            ~SrlgAttribute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value srlg_value; //type: uint32
                            Value priority; //type: PriorityEnum
                            Value source; //type: SourceEnum
                            Value source_name; //type: string
                            Value srlg_index; //type: uint16


                            class PriorityEnum;
                            class SourceEnum;


                    }; // Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail::SrlgAttribute> > srlg_attribute;


                }; // Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceDetails::InterfaceDetail> > interface_detail;


            }; // Srlg::Nodes::Node::InterfaceDetails


            class SrlgValues : public Entity
            {
                public:
                    SrlgValues();
                    ~SrlgValues();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SrlgValue : public Entity
                {
                    public:
                        SrlgValue();
                        ~SrlgValue();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value value_; //type: int32
                        ValueList interface_name; //type: list of  string




                }; // Srlg::Nodes::Node::SrlgValues::SrlgValue


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::SrlgValues::SrlgValue> > srlg_value;


            }; // Srlg::Nodes::Node::SrlgValues


            class InterfaceSrlgNames : public Entity
            {
                public:
                    InterfaceSrlgNames();
                    ~InterfaceSrlgNames();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class InterfaceSrlgName : public Entity
                {
                    public:
                        InterfaceSrlgName();
                        ~InterfaceSrlgName();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value srlg_name; //type: string
                        Value srlg_name_xr; //type: string
                        Value srlg_value; //type: uint32


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
                            ValueList interface_name; //type: list of  string




                    }; // Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces


                        std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName::Interfaces> interfaces;


                }; // Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceSrlgNames::InterfaceSrlgName> > interface_srlg_name;


            }; // Srlg::Nodes::Node::InterfaceSrlgNames


                std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::Groups> groups;
                std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InheritNodes> inherit_nodes;
                std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceDetails> interface_details;
                std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::InterfaceSrlgNames> interface_srlg_names;
                std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::SrlgMaps> srlg_maps;
                std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node::SrlgValues> srlg_values;


        }; // Srlg::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes::Node> > node;


    }; // Srlg::Nodes


    class InterfaceSrlgNames : public Entity
    {
        public:
            InterfaceSrlgNames();
            ~InterfaceSrlgNames();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceSrlgName : public Entity
        {
            public:
                InterfaceSrlgName();
                ~InterfaceSrlgName();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value srlg_name; //type: string
                Value srlg_name_xr; //type: string
                Value srlg_value; //type: uint32


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
                    ValueList interface_name; //type: list of  string




            }; // Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces


                std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::InterfaceSrlgNames::InterfaceSrlgName::Interfaces> interfaces;


        }; // Srlg::InterfaceSrlgNames::InterfaceSrlgName


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::InterfaceSrlgNames::InterfaceSrlgName> > interface_srlg_name;


    }; // Srlg::InterfaceSrlgNames


        std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::InterfaceSrlgNames> interface_srlg_names;
        std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::Nodes> nodes;
        std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::Srlg::SrlgMaps> srlg_maps;


}; // Srlg

class SelectiveVrfDownload : public Entity
{
    public:
        SelectiveVrfDownload();
        ~SelectiveVrfDownload();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


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
            Value is_svd_enabled; //type: boolean
            Value is_svd_enabled_cfg; //type: boolean




    }; // SelectiveVrfDownload::State


        std::unique_ptr<Cisco_IOS_XR_infra_rsi_oper::SelectiveVrfDownload::State> state;


}; // SelectiveVrfDownload


class PriorityEnum : public Enum
{
    public:
        static const Enum::Value critical;
        static const Enum::Value high;
        static const Enum::Value medium;
        static const Enum::Value low;
        static const Enum::Value very_low;

};

class SourceEnum : public Enum
{
    public:
        static const Enum::Value configured;
        static const Enum::Value from_group;
        static const Enum::Value inherited;
        static const Enum::Value from_optical;
        static const Enum::Value configured_and_notified;
        static const Enum::Value from_group_and_notified;
        static const Enum::Value inherited_and_notified;
        static const Enum::Value from_optical_and_notified;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_RSI_OPER_ */

