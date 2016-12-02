#ifndef _CISCO_IOS_XR_ASR9K_LPTS_OPER_
#define _CISCO_IOS_XR_ASR9K_LPTS_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_lpts_oper {

class PlatformLptspIfib : public Entity
{
    public:
        PlatformLptspIfib();
        ~PlatformLptspIfib();

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


                class PoliceInfo : public Entity
                {
                    public:
                        PoliceInfo();
                        ~PoliceInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value avgrate; //type: uint32
                        Value burst; //type: uint32
                        Value static_avgrate; //type: uint32
                        Value avgrate_type; //type: string
                        Value flow_type; //type: string
                        Value accepted_stats; //type: uint64
                        Value dropped_stats; //type: uint64
                        Value policer; //type: uint32
                        Value iptos_value; //type: uint8
                        Value change_type; //type: uint8
                        Value acl_config; //type: uint8
                        Value acl_str; //type: string
                        Value np; //type: uint8




                }; // PlatformLptspIfib::Nodes::Node::Police::PoliceInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes::Node::Police::PoliceInfo> > police_info;


            }; // PlatformLptspIfib::Nodes::Node::Police


            class Stats : public Entity
            {
                public:
                    Stats();
                    ~Stats();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value accepted; //type: uint64
                    Value dropped; //type: uint64
                    Value clear_ts; //type: uint64
                    Value no_stats_mem_err; //type: uint64




            }; // PlatformLptspIfib::Nodes::Node::Stats


                std::unique_ptr<Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes::Node::Police> police;
                std::unique_ptr<Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes::Node::Stats> stats;


        }; // PlatformLptspIfib::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes::Node> > node;


    }; // PlatformLptspIfib::Nodes


        std::unique_ptr<Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes> nodes;


}; // PlatformLptspIfib



}
}

#endif /* _CISCO_IOS_XR_ASR9K_LPTS_OPER_ */

