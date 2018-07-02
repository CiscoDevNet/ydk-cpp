#ifndef _CISCO_IOS_XR_PBR_VSERVICE_EA_OPER_
#define _CISCO_IOS_XR_PBR_VSERVICE_EA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pbr_vservice_ea_oper {

class ServiceFunctionChaining : public ydk::Entity
{
    public:
        ServiceFunctionChaining();
        ~ServiceFunctionChaining();

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

        class Nodes; //type: ServiceFunctionChaining::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes> nodes;
        
}; // ServiceFunctionChaining


class ServiceFunctionChaining::Nodes : public ydk::Entity
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

        class Node; //type: ServiceFunctionChaining::Nodes::Node

        ydk::YList node;
        
}; // ServiceFunctionChaining::Nodes


class ServiceFunctionChaining::Nodes::Node : public ydk::Entity
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
        class Process; //type: ServiceFunctionChaining::Nodes::Node::Process

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process> process;
        
}; // ServiceFunctionChaining::Nodes::Node


class ServiceFunctionChaining::Nodes::Node::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServiceFunctionPath; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath
        class ServiceFunction; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction
        class ServiceFunctionForwarder; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath> service_function_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction> service_function;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder> service_function_forwarder;
        
}; // ServiceFunctionChaining::Nodes::Node::Process


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath : public ydk::Entity
{
    public:
        ServiceFunctionPath();
        ~ServiceFunctionPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathIds; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds> path_ids;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds : public ydk::Entity
{
    public:
        PathIds();
        ~PathIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathId; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId

        ydk::YList path_id;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId : public ydk::Entity
{
    public:
        PathId();
        ~PathId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        class ServiceIndexes; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes
        class Stats; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes> service_indexes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats> stats;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes : public ydk::Entity
{
    public:
        ServiceIndexes();
        ~ServiceIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServiceIndex; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex

        ydk::YList service_index;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex : public ydk::Entity
{
    public:
        ServiceIndex();
        ~ServiceIndex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data
        class SiArr; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data> data;
        ydk::YList si_arr;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class Sfp; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term
        class Sf; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf
        class Sff; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff
        class SffLocal; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term> term;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf> sf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff> sff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal> sff_local;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf : public ydk::Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff : public ydk::Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal : public ydk::Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf malformed_err_pkts; //type: uint64
        ydk::YLeaf lookup_err_pkts; //type: uint64
        ydk::YLeaf malformed_err_bytes; //type: uint64
        ydk::YLeaf lookup_err_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr : public ydk::Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si; //type: uint8
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data> data;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Detail; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail
        class Summarized; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized> summarized;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data
        class SiArr; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data> data;
        ydk::YList si_arr;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class Sfp; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term
        class Sf; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf
        class Sff; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff
        class SffLocal; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term> term;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf> sf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff> sff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal> sff_local;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf : public ydk::Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff : public ydk::Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal : public ydk::Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf malformed_err_pkts; //type: uint64
        ydk::YLeaf lookup_err_pkts; //type: uint64
        ydk::YLeaf malformed_err_bytes; //type: uint64
        ydk::YLeaf lookup_err_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr : public ydk::Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si; //type: uint8
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data> data;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized : public ydk::Entity
{
    public:
        Summarized();
        ~Summarized();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data
        class SiArr; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data> data;
        ydk::YList si_arr;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class Sfp; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term
        class Sf; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf
        class Sff; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff
        class SffLocal; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term> term;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf> sf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff> sff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal> sff_local;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf : public ydk::Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff : public ydk::Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal : public ydk::Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf malformed_err_pkts; //type: uint64
        ydk::YLeaf lookup_err_pkts; //type: uint64
        ydk::YLeaf malformed_err_bytes; //type: uint64
        ydk::YLeaf lookup_err_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr : public ydk::Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si; //type: uint8
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data> data;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction : public ydk::Entity
{
    public:
        ServiceFunction();
        ~ServiceFunction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SfNames; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames> sf_names;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames : public ydk::Entity
{
    public:
        SfNames();
        ~SfNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SfName; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName

        ydk::YList sf_name;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName : public ydk::Entity
{
    public:
        SfName();
        ~SfName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data
        class SiArr; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data> data;
        ydk::YList si_arr;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class Sfp; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term
        class Sf; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf
        class Sff; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff
        class SffLocal; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term> term;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf> sf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff> sff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal> sff_local;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf : public ydk::Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff : public ydk::Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal : public ydk::Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf malformed_err_pkts; //type: uint64
        ydk::YLeaf lookup_err_pkts; //type: uint64
        ydk::YLeaf malformed_err_bytes; //type: uint64
        ydk::YLeaf lookup_err_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr : public ydk::Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si; //type: uint8
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data> data;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder : public ydk::Entity
{
    public:
        ServiceFunctionForwarder();
        ~ServiceFunctionForwarder();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Local; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local
        class SffNames; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames> sff_names;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error> error;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data
        class SiArr; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data> data;
        ydk::YList si_arr;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class Sfp; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term
        class Sf; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf
        class Sff; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff
        class SffLocal; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term> term;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf> sf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff> sff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal> sff_local;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf : public ydk::Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff : public ydk::Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal : public ydk::Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf malformed_err_pkts; //type: uint64
        ydk::YLeaf lookup_err_pkts; //type: uint64
        ydk::YLeaf malformed_err_bytes; //type: uint64
        ydk::YLeaf lookup_err_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr : public ydk::Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si; //type: uint8
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data> data;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames : public ydk::Entity
{
    public:
        SffNames();
        ~SffNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SffName; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName

        ydk::YList sff_name;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName : public ydk::Entity
{
    public:
        SffName();
        ~SffName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data
        class SiArr; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data> data;
        ydk::YList si_arr;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class Sfp; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term
        class Sf; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf
        class Sff; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff
        class SffLocal; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp> sfp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term> term;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf> sf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff> sff;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal> sff_local;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp : public ydk::Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf : public ydk::Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff : public ydk::Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal : public ydk::Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf malformed_err_pkts; //type: uint64
        ydk::YLeaf lookup_err_pkts; //type: uint64
        ydk::YLeaf malformed_err_bytes; //type: uint64
        ydk::YLeaf lookup_err_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr : public ydk::Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf si; //type: uint8
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data> data;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: VsNshStats
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi : public ydk::Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf processed_pkts; //type: uint64
        ydk::YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term : public ydk::Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf terminated_pkts; //type: uint64
        ydk::YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term

class VsNshStats : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vs_nsh_stats_spi_si;
        static const ydk::Enum::YLeaf vs_nsh_stats_ter_min_ate;
        static const ydk::Enum::YLeaf vs_nsh_stats_sf;
        static const ydk::Enum::YLeaf vs_nsh_stats_sff;
        static const ydk::Enum::YLeaf vs_nsh_stats_sff_local;
        static const ydk::Enum::YLeaf vs_nsh_stats_sfp;
        static const ydk::Enum::YLeaf vs_nsh_stats_sfp_detail;
        static const ydk::Enum::YLeaf vs_nsh_stats_max;

};


}
}

#endif /* _CISCO_IOS_XR_PBR_VSERVICE_EA_OPER_ */

