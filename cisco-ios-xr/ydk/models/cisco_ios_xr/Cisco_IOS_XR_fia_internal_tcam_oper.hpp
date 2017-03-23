#ifndef _CISCO_IOS_XR_FIA_INTERNAL_TCAM_OPER_
#define _CISCO_IOS_XR_FIA_INTERNAL_TCAM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Dpa; //type: Controller::Dpa

        std::shared_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa> dpa;


}; // Controller


class Controller::Dpa : public Entity
{
    public:
        Dpa();
        ~Dpa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nodes; //type: Controller::Dpa::Nodes

        std::shared_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes> nodes;


}; // Controller::Dpa


class Controller::Dpa::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: Controller::Dpa::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes::Node> > node;


}; // Controller::Dpa::Nodes


class Controller::Dpa::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class InternalTcamResources; //type: Controller::Dpa::Nodes::Node::InternalTcamResources

        std::shared_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes::Node::InternalTcamResources> internal_tcam_resources;


}; // Controller::Dpa::Nodes::Node


class Controller::Dpa::Nodes::Node::InternalTcamResources : public Entity
{
    public:
        InternalTcamResources();
        ~InternalTcamResources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NpuTcam; //type: Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam

        std::vector<std::shared_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam> > npu_tcam;


}; // Controller::Dpa::Nodes::Node::InternalTcamResources


class Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam : public Entity
{
    public:
        NpuTcam();
        ~NpuTcam();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf npu_id; //type: uint32

        class TcamBank; //type: Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank

        std::vector<std::shared_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank> > tcam_bank;


}; // Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam


class Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank : public Entity
{
    public:
        TcamBank();
        ~TcamBank();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bank_id; //type: string
        YLeaf bank_key_size; //type: string
        YLeaf bank_free_entries; //type: uint32
        YLeaf bank_inuse_entries; //type: uint32
        YLeaf owner; //type: string
        YLeaf nof_dbs; //type: uint32

        class BankDb; //type: Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb

        std::vector<std::shared_ptr<Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb> > bank_db;


}; // Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank


class Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb : public Entity
{
    public:
        BankDb();
        ~BankDb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf db_id; //type: uint32
        YLeaf db_inuse_entries; //type: uint32
        YLeaf db_prefix; //type: string



}; // Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb


}
}

#endif /* _CISCO_IOS_XR_FIA_INTERNAL_TCAM_OPER_ */

