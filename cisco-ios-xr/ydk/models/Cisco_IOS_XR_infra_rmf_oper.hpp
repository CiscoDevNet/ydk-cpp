#ifndef _CISCO_IOS_XR_INFRA_RMF_OPER_
#define _CISCO_IOS_XR_INFRA_RMF_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_rmf_oper {

class Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

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
                Value log; //type: string
                Value active_reboot_reason; //type: string
                Value standby_reboot_reason; //type: string
                Value err_log; //type: string


            class Redundancy_ : public Entity
            {
                public:
                    Redundancy_();
                    ~Redundancy_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value active; //type: string
                    Value standby; //type: string
                    Value ha_state; //type: string
                    Value nsr_state; //type: string


                class Groupinfo : public Entity
                {
                    public:
                        Groupinfo();
                        ~Groupinfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value active; //type: string
                        Value standby; //type: string
                        Value ha_state; //type: string
                        Value nsr_state; //type: string




                }; // Redundancy::Nodes::Node::Redundancy_::Groupinfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Nodes::Node::Redundancy_::Groupinfo> > groupinfo;


            }; // Redundancy::Nodes::Node::Redundancy_


                std::unique_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Nodes::Node::Redundancy_> redundancy;


        }; // Redundancy::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Nodes::Node> > node;


    }; // Redundancy::Nodes


    class Summary : public Entity
    {
        public:
            Summary();
            ~Summary();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value err_log; //type: string


        class RedPair : public Entity
        {
            public:
                RedPair();
                ~RedPair();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value active; //type: string
                Value standby; //type: string
                Value ha_state; //type: string
                Value nsr_state; //type: string


            class Groupinfo : public Entity
            {
                public:
                    Groupinfo();
                    ~Groupinfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value active; //type: string
                    Value standby; //type: string
                    Value ha_state; //type: string
                    Value nsr_state; //type: string




            }; // Redundancy::Summary::RedPair::Groupinfo


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Summary::RedPair::Groupinfo> > groupinfo;


        }; // Redundancy::Summary::RedPair


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Summary::RedPair> > red_pair;


    }; // Redundancy::Summary


        std::unique_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Nodes> nodes;
        std::unique_ptr<Cisco_IOS_XR_infra_rmf_oper::Redundancy::Summary> summary;


}; // Redundancy



}
}

#endif /* _CISCO_IOS_XR_INFRA_RMF_OPER_ */

