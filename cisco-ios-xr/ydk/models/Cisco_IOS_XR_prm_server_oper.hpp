#ifndef _CISCO_IOS_XR_PRM_SERVER_OPER_
#define _CISCO_IOS_XR_PRM_SERVER_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_prm_server_oper {

class HardwareModule : public Entity
{
    public:
        HardwareModule();
        ~HardwareModule();

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


            class Np : public Entity
            {
                public:
                    Np();
                    ~Np();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Cpu : public Entity
                {
                    public:
                        Cpu();
                        ~Cpu();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Indexes : public Entity
                    {
                        public:
                            Indexes();
                            ~Indexes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Index_ : public Entity
                        {
                            public:
                                Index_();
                                ~Index_();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value index_; //type: int32
                                Value cos_q_name; //type: string
                                Value cos_q; //type: uint8
                                Value rx_channel; //type: uint32
                                Value flow_rate; //type: uint32
                                Value burst; //type: uint32
                                Value accepted; //type: uint32
                                Value dropped; //type: uint32




                        }; // HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_


                            std::vector<std::unique_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::Cpu::Indexes::Index_> > index_;


                    }; // HardwareModule::Nodes::Node::Np::Cpu::Indexes


                        std::unique_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::Cpu::Indexes> indexes;


                }; // HardwareModule::Nodes::Node::Np::Cpu


                class PlatformDrop : public Entity
                {
                    public:
                        PlatformDrop();
                        ~PlatformDrop();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Indxes : public Entity
                    {
                        public:
                            Indxes();
                            ~Indxes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Indx : public Entity
                        {
                            public:
                                Indx();
                                ~Indx();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value index_; //type: int32
                                Value total_captured; //type: uint32
                                Value captured_pak; //type: string
                                Value pkt_index; //type: uint8
                                Value ifhandle; //type: uint32
                                Value buffer_len; //type: uint32
                                Value reason_hi; //type: uint32
                                Value reason; //type: uint32
                                Value years; //type: uint64
                                Value hours; //type: uint64
                                Value days; //type: uint64
                                Value mins; //type: uint64
                                Value secs; //type: uint64




                        }; // HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx


                            std::vector<std::unique_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes::Indx> > indx;


                    }; // HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes


                    class Idxes : public Entity
                    {
                        public:
                            Idxes();
                            ~Idxes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Idx : public Entity
                        {
                            public:
                                Idx();
                                ~Idx();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value index_; //type: int32
                                Value drop_reason; //type: string
                                Value counters; //type: uint32




                        }; // HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx


                            std::vector<std::unique_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes::Idx> > idx;


                    }; // HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes


                        std::unique_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::PlatformDrop::Idxes> idxes;
                        std::unique_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::PlatformDrop::Indxes> indxes;


                }; // HardwareModule::Nodes::Node::Np::PlatformDrop


                    std::unique_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::Cpu> cpu;
                    std::unique_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np::PlatformDrop> platform_drop;


            }; // HardwareModule::Nodes::Node::Np


                std::unique_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node::Np> np;


        }; // HardwareModule::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes::Node> > node;


    }; // HardwareModule::Nodes


        std::unique_ptr<Cisco_IOS_XR_prm_server_oper::HardwareModule::Nodes> nodes;


}; // HardwareModule

class Prm : public Entity
{
    public:
        Prm();
        ~Prm();

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


            class Server : public Entity
            {
                public:
                    Server();
                    ~Server();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Resource : public Entity
                {
                    public:
                        Resource();
                        ~Resource();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Indexes : public Entity
                    {
                        public:
                            Indexes();
                            ~Indexes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Index_ : public Entity
                        {
                            public:
                                Index_();
                                ~Index_();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value index_; //type: int32
                                Value resource_name; //type: string
                                Value resource_type; //type: uint32
                                Value total_num; //type: uint32
                                Value free_num; //type: uint32
                                Value first_available_index; //type: uint32
                                Value start_index; //type: uint32
                                Value availability_status; //type: boolean
                                Value flags; //type: uint8
                                Value inconsistent; //type: boolean




                        }; // Prm::Nodes::Node::Server::Resource::Indexes::Index_


                            std::vector<std::unique_ptr<Cisco_IOS_XR_prm_server_oper::Prm::Nodes::Node::Server::Resource::Indexes::Index_> > index_;


                    }; // Prm::Nodes::Node::Server::Resource::Indexes


                        std::unique_ptr<Cisco_IOS_XR_prm_server_oper::Prm::Nodes::Node::Server::Resource::Indexes> indexes;


                }; // Prm::Nodes::Node::Server::Resource


                    std::unique_ptr<Cisco_IOS_XR_prm_server_oper::Prm::Nodes::Node::Server::Resource> resource;


            }; // Prm::Nodes::Node::Server


                std::unique_ptr<Cisco_IOS_XR_prm_server_oper::Prm::Nodes::Node::Server> server;


        }; // Prm::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_prm_server_oper::Prm::Nodes::Node> > node;


    }; // Prm::Nodes


        std::unique_ptr<Cisco_IOS_XR_prm_server_oper::Prm::Nodes> nodes;


}; // Prm



}
}

#endif /* _CISCO_IOS_XR_PRM_SERVER_OPER_ */

