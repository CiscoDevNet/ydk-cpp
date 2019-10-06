#ifndef _CISCO_IOS_XR_FIA_INTERNAL_TCAM_OPER_
#define _CISCO_IOS_XR_FIA_INTERNAL_TCAM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fia_internal_tcam_oper {

class Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Dpa; //type: Controller::Dpa

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa> dpa;
        
}; // Controller


class Controller::Dpa : public ydk::Entity
{
    public:
        Dpa();
        ~Dpa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Nodes; //type: Controller::Dpa::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes> nodes;
        
}; // Controller::Dpa


class Controller::Dpa::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Node; //type: Controller::Dpa::Nodes::Node

        ydk::YList node;
        
}; // Controller::Dpa::Nodes


class Controller::Dpa::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf node_name; //type: string
        class ExternalTcamResources; //type: Controller::Dpa::Nodes::Node::ExternalTcamResources
        class InternalTcamResources; //type: Controller::Dpa::Nodes::Node::InternalTcamResources

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes::Node::ExternalTcamResources> external_tcam_resources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_fia_internal_tcam_oper::Controller::Dpa::Nodes::Node::InternalTcamResources> internal_tcam_resources;
        
}; // Controller::Dpa::Nodes::Node


class Controller::Dpa::Nodes::Node::ExternalTcamResources : public ydk::Entity
{
    public:
        ExternalTcamResources();
        ~ExternalTcamResources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NpuTcam; //type: Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam

        ydk::YList npu_tcam;
        
}; // Controller::Dpa::Nodes::Node::ExternalTcamResources


class Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam : public ydk::Entity
{
    public:
        NpuTcam();
        ~NpuTcam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf npu_id; //type: uint32
        class TcamBank; //type: Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank

        ydk::YList tcam_bank;
        
}; // Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam


class Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank : public ydk::Entity
{
    public:
        TcamBank();
        ~TcamBank();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bank_id; //type: string
        ydk::YLeaf bank_key_size; //type: string
        ydk::YLeaf bank_free_entries; //type: uint32
        ydk::YLeaf bank_inuse_entries; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf nof_dbs; //type: uint32
        class BankDb; //type: Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb

        ydk::YList bank_db;
        
}; // Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank


class Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb : public ydk::Entity
{
    public:
        BankDb();
        ~BankDb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf db_id; //type: uint32
        ydk::YLeaf db_inuse_entries; //type: uint32
        ydk::YLeaf db_prefix; //type: string

}; // Controller::Dpa::Nodes::Node::ExternalTcamResources::NpuTcam::TcamBank::BankDb


class Controller::Dpa::Nodes::Node::InternalTcamResources : public ydk::Entity
{
    public:
        InternalTcamResources();
        ~InternalTcamResources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NpuTcam; //type: Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam

        ydk::YList npu_tcam;
        
}; // Controller::Dpa::Nodes::Node::InternalTcamResources


class Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam : public ydk::Entity
{
    public:
        NpuTcam();
        ~NpuTcam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf npu_id; //type: uint32
        class TcamBank; //type: Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank

        ydk::YList tcam_bank;
        
}; // Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam


class Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank : public ydk::Entity
{
    public:
        TcamBank();
        ~TcamBank();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bank_id; //type: string
        ydk::YLeaf bank_key_size; //type: string
        ydk::YLeaf bank_free_entries; //type: uint32
        ydk::YLeaf bank_inuse_entries; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf nof_dbs; //type: uint32
        class BankDb; //type: Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb

        ydk::YList bank_db;
        
}; // Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank


class Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb : public ydk::Entity
{
    public:
        BankDb();
        ~BankDb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf db_id; //type: uint32
        ydk::YLeaf db_inuse_entries; //type: uint32
        ydk::YLeaf db_prefix; //type: string

}; // Controller::Dpa::Nodes::Node::InternalTcamResources::NpuTcam::TcamBank::BankDb


}
}

#endif /* _CISCO_IOS_XR_FIA_INTERNAL_TCAM_OPER_ */

