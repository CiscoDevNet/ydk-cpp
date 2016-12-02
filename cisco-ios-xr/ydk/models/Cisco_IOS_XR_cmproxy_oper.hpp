#ifndef _CISCO_IOS_XR_CMPROXY_OPER_
#define _CISCO_IOS_XR_CMPROXY_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_cmproxy_oper {

class SdrInventoryVm : public Entity
{
    public:
        SdrInventoryVm();
        ~SdrInventoryVm();

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
                Value name; //type: string


            class NodeEntries : public Entity
            {
                public:
                    NodeEntries();
                    ~NodeEntries();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class NodeEntry : public Entity
                {
                    public:
                        NodeEntry();
                        ~NodeEntry();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string
                        Value valid; //type: uint32
                        Value card_type; //type: uint32
                        Value card_type_string; //type: string
                        Value nodeid; //type: int32
                        Value node_name; //type: string
                        Value partner_id; //type: int32
                        Value partner_name; //type: string
                        Value red_state; //type: uint32
                        Value red_state_string; //type: string
                        Value node_sw_state; //type: uint32
                        Value node_sw_state_string; //type: string
                        Value prev_sw_state; //type: uint32
                        Value prev_sw_state_string; //type: string
                        Value node_ip; //type: uint32
                        Value node_ipv4_string; //type: string




                }; // SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry


                    std::vector<std::unique_ptr<Cisco_IOS_XR_cmproxy_oper::SdrInventoryVm::Nodes::Node::NodeEntries::NodeEntry> > node_entry;


            }; // SdrInventoryVm::Nodes::Node::NodeEntries


                std::unique_ptr<Cisco_IOS_XR_cmproxy_oper::SdrInventoryVm::Nodes::Node::NodeEntries> node_entries;


        }; // SdrInventoryVm::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_cmproxy_oper::SdrInventoryVm::Nodes::Node> > node;


    }; // SdrInventoryVm::Nodes


        std::unique_ptr<Cisco_IOS_XR_cmproxy_oper::SdrInventoryVm::Nodes> nodes;


}; // SdrInventoryVm



}
}

#endif /* _CISCO_IOS_XR_CMPROXY_OPER_ */

