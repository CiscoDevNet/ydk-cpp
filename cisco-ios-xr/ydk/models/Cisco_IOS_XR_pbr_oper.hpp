#ifndef _CISCO_IOS_XR_PBR_OPER_
#define _CISCO_IOS_XR_PBR_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pbr_oper {

class Pbr : public Entity
{
    public:
        Pbr();
        ~Pbr();

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

            class PolicyMap : public Entity
            {
                public:
                    PolicyMap();
                    ~PolicyMap();

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


                            YLeaf interface_name; //type: string

                        class Direction : public Entity
                        {
                            public:
                                Direction();
                                ~Direction();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



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


                                    YLeaf node_name; //type: string
                                    YLeaf policy_name; //type: string
                                    YLeaf state; //type: PolicyStateEnum
                                    YLeaf state_description; //type: string

                                class ClassStat : public Entity
                                {
                                    public:
                                        ClassStat();
                                        ~ClassStat();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf counter_validity_bitmask; //type: uint64
                                        YLeaf class_name; //type: string
                                        YLeaf class_id; //type: uint32

                                    class GeneralStats : public Entity
                                    {
                                        public:
                                            GeneralStats();
                                            ~GeneralStats();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf transmit_packets; //type: uint64
                                            YLeaf transmit_bytes; //type: uint64
                                            YLeaf total_drop_packets; //type: uint64
                                            YLeaf total_drop_bytes; //type: uint64
                                            YLeaf total_drop_rate; //type: uint32
                                            YLeaf match_data_rate; //type: uint32
                                            YLeaf total_transmit_rate; //type: uint32
                                            YLeaf pre_policy_matched_packets; //type: uint64
                                            YLeaf pre_policy_matched_bytes; //type: uint64



                                    }; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats


                                    class HttprStats : public Entity
                                    {
                                        public:
                                            HttprStats();
                                            ~HttprStats();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf rqst_rcvd_packets; //type: uint64
                                            YLeaf rqst_rcvd_bytes; //type: uint64
                                            YLeaf drop_packets; //type: uint64
                                            YLeaf drop_bytes; //type: uint64
                                            YLeaf resp_sent_packets; //type: uint64
                                            YLeaf resp_sent_bytes; //type: uint64



                                    }; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats


                                        std::unique_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::GeneralStats> general_stats;
                                        std::unique_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat::HttprStats> httpr_stats;


                                }; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input::ClassStat> > class_stat;


                            }; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input


                                std::unique_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction::Input> input;


                        }; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction


                            std::unique_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface::Direction> direction;


                    }; // Pbr::Nodes::Node::PolicyMap::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces::Interface> > interface;


                }; // Pbr::Nodes::Node::PolicyMap::Interfaces


                    std::unique_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap::Interfaces> interfaces;


            }; // Pbr::Nodes::Node::PolicyMap


                std::unique_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node::PolicyMap> policy_map;


        }; // Pbr::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes::Node> > node;


    }; // Pbr::Nodes


        std::unique_ptr<Cisco_IOS_XR_pbr_oper::Pbr::Nodes> nodes;


}; // Pbr


class PolicyStateEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf suspended;

};


}
}

#endif /* _CISCO_IOS_XR_PBR_OPER_ */

