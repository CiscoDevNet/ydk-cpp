#ifndef _CISCO_IOS_XR_PBR_VSERVICE_EA_OPER_
#define _CISCO_IOS_XR_PBR_VSERVICE_EA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_pbr_vservice_ea_oper {

class ServiceFunctionChaining : public Entity
{
    public:
        ServiceFunctionChaining();
        ~ServiceFunctionChaining();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Nodes; //type: ServiceFunctionChaining::Nodes

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes> nodes;
        
}; // ServiceFunctionChaining


class ServiceFunctionChaining::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: ServiceFunctionChaining::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node> > node;
        
}; // ServiceFunctionChaining::Nodes


class ServiceFunctionChaining::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Process; //type: ServiceFunctionChaining::Nodes::Node::Process

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process> process;
        
}; // ServiceFunctionChaining::Nodes::Node


class ServiceFunctionChaining::Nodes::Node::Process : public Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServiceFunctionPath; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath
        class ServiceFunction; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction
        class ServiceFunctionForwarder; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction> service_function;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder> service_function_forwarder;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath> service_function_path;
        
}; // ServiceFunctionChaining::Nodes::Node::Process


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath : public Entity
{
    public:
        ServiceFunctionPath();
        ~ServiceFunctionPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PathIds; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds> path_ids;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds : public Entity
{
    public:
        PathIds();
        ~PathIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PathId; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId

        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId> > path_id;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId : public Entity
{
    public:
        PathId();
        ~PathId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        class ServiceIndexes; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes
        class Stats; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes> service_indexes;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats> stats;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes : public Entity
{
    public:
        ServiceIndexes();
        ~ServiceIndexes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServiceIndex; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex

        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex> > service_index;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex : public Entity
{
    public:
        ServiceIndex();
        ~ServiceIndex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data
        class SiArr; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data> data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr> > si_arr;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: VsNshStatsEnum
        class Sfp; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term
        class Sf; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf
        class Sff; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff
        class SffLocal; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf> sf;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff> sff;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal> sff_local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp> sfp;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp : public Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf : public Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff : public Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal : public Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf malformed_err_pkts; //type: uint64
        YLeaf lookup_err_pkts; //type: uint64
        YLeaf malformed_err_bytes; //type: uint64
        YLeaf lookup_err_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr : public Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf si; //type: uint8
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data> data;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: VsNshStatsEnum
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Detail; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail
        class Summarized; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail> detail;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized> summarized;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data
        class SiArr; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data> data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr> > si_arr;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: VsNshStatsEnum
        class Sfp; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term
        class Sf; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf
        class Sff; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff
        class SffLocal; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf> sf;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff> sff;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal> sff_local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp> sfp;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp : public Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf : public Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff : public Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal : public Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf malformed_err_pkts; //type: uint64
        YLeaf lookup_err_pkts; //type: uint64
        YLeaf malformed_err_bytes; //type: uint64
        YLeaf lookup_err_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr : public Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf si; //type: uint8
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data> data;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: VsNshStatsEnum
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized : public Entity
{
    public:
        Summarized();
        ~Summarized();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data
        class SiArr; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data> data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr> > si_arr;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: VsNshStatsEnum
        class Sfp; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term
        class Sf; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf
        class Sff; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff
        class SffLocal; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf> sf;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff> sff;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal> sff_local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp> sfp;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp : public Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf : public Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff : public Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal : public Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf malformed_err_pkts; //type: uint64
        YLeaf lookup_err_pkts; //type: uint64
        YLeaf malformed_err_bytes; //type: uint64
        YLeaf lookup_err_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr : public Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf si; //type: uint8
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data> data;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: VsNshStatsEnum
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction : public Entity
{
    public:
        ServiceFunction();
        ~ServiceFunction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SfNames; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames> sf_names;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames : public Entity
{
    public:
        SfNames();
        ~SfNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SfName; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName

        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName> > sf_name;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName : public Entity
{
    public:
        SfName();
        ~SfName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data
        class SiArr; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data> data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr> > si_arr;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: VsNshStatsEnum
        class Sfp; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term
        class Sf; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf
        class Sff; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff
        class SffLocal; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf> sf;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff> sff;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal> sff_local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp> sfp;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp : public Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf : public Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff : public Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal : public Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf malformed_err_pkts; //type: uint64
        YLeaf lookup_err_pkts; //type: uint64
        YLeaf malformed_err_bytes; //type: uint64
        YLeaf lookup_err_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr : public Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf si; //type: uint8
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data> data;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: VsNshStatsEnum
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder : public Entity
{
    public:
        ServiceFunctionForwarder();
        ~ServiceFunctionForwarder();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Local; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local
        class SffNames; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local> local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames> sff_names;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Error; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error> error;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error : public Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data
        class SiArr; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data> data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr> > si_arr;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: VsNshStatsEnum
        class Sfp; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term
        class Sf; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf
        class Sff; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff
        class SffLocal; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf> sf;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff> sff;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal> sff_local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp> sfp;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp : public Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf : public Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff : public Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal : public Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf malformed_err_pkts; //type: uint64
        YLeaf lookup_err_pkts; //type: uint64
        YLeaf malformed_err_bytes; //type: uint64
        YLeaf lookup_err_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr : public Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf si; //type: uint8
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data> data;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: VsNshStatsEnum
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames : public Entity
{
    public:
        SffNames();
        ~SffNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SffName; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName

        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName> > sff_name;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName : public Entity
{
    public:
        SffName();
        ~SffName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data
        class SiArr; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data> data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr> > si_arr;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: VsNshStatsEnum
        class Sfp; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term
        class Sf; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf
        class Sff; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff
        class SffLocal; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf> sf;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff> sff;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal> sff_local;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp> sfp;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp : public Entity
{
    public:
        Sfp();
        ~Sfp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf : public Entity
{
    public:
        Sf();
        ~Sf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff : public Entity
{
    public:
        Sff();
        ~Sff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal : public Entity
{
    public:
        SffLocal();
        ~SffLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf malformed_err_pkts; //type: uint64
        YLeaf lookup_err_pkts; //type: uint64
        YLeaf malformed_err_bytes; //type: uint64
        YLeaf lookup_err_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr : public Entity
{
    public:
        SiArr();
        ~SiArr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf si; //type: uint8
        class Data; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data> data;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: VsNshStatsEnum
        class SpiSi; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi
        class Term; //type: ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term

        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi> spi_si;
        std::shared_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term> term;
        
}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi : public Entity
{
    public:
        SpiSi();
        ~SpiSi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processed_pkts; //type: uint64
        YLeaf processed_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi


class ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term : public Entity
{
    public:
        Term();
        ~Term();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf terminated_pkts; //type: uint64
        YLeaf terminated_bytes; //type: uint64

}; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term

class VsNshStatsEnum : public Enum
{
    public:
        static const Enum::YLeaf vs_nsh_stats_spi_si;
        static const Enum::YLeaf vs_nsh_stats_ter_min_ate;
        static const Enum::YLeaf vs_nsh_stats_sf;
        static const Enum::YLeaf vs_nsh_stats_sff;
        static const Enum::YLeaf vs_nsh_stats_sff_local;
        static const Enum::YLeaf vs_nsh_stats_sfp;
        static const Enum::YLeaf vs_nsh_stats_sfp_detail;
        static const Enum::YLeaf vs_nsh_stats_max;

};


}
}

#endif /* _CISCO_IOS_XR_PBR_VSERVICE_EA_OPER_ */

