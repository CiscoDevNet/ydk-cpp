#ifndef _CISCO_IOS_XR_FIA_INTERNAL_TCAM_OPER_
#define _CISCO_IOS_XR_FIA_INTERNAL_TCAM_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fia_internal_tcam_oper {

class Controller : public Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Dpa : public Entity
    {
        public:
            Dpa();
            ~Dpa();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


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


                class InternalTcamResources : public Entity
                {
                    public:
                        InternalTcamResources();
                        ~InternalTcamResources();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class NpuTcam : public Entity
                    {
                        public:
                            NpuTcam();
                            ~NpuTcam();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value npu_id; //type: uint32


                        class TcamBank : public Entity
                        {
                            public:
                                TcamBank();
                                ~TcamBank();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bank_id; //type: string
                                Value bank_key_size; //type: string
                                Value bank_free_entries; //type: uint32
                                Value bank_inuse_entries; //type: uint32
                                Value owner; //type: string
                                Value nof_dbs; //type: uint32


                            class BankDb : public Entity
                            {
                                public:
                                    BankDb();
                                    ~BankDb();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value db_id; //type: uint32
                                    Value db_inuse_entries; //type: uint32
                                    Value db_prefix; //type: string




                            }; // Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb


                                std::vector<std::unique_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb> > bank_db;


                        }; // Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank


                            std::vector<std::unique_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank> > tcam_bank;


                    }; // Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam


                        std::vector<std::unique_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam> > npu_tcam;


                }; // Controller::Dpa::Nodes::Node::InternalTcamResources


                    std::unique_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes::Node::InternalTcamResources> internal_tcam_resources;


            }; // Controller::Dpa::Nodes::Node


                std::vector<std::unique_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes::Node> > node;


        }; // Controller::Dpa::Nodes


            std::unique_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes> nodes;


    }; // Controller::Dpa


        std::unique_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa> dpa;


}; // Controller



}
}

#endif /* _CISCO_IOS_XR_FIA_INTERNAL_TCAM_OPER_ */

