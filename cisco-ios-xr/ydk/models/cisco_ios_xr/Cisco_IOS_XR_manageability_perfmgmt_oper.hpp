#ifndef _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_OPER_
#define _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_manageability_perfmgmt_oper {

class PerfMgmt : public Entity
{
    public:
        PerfMgmt();
        ~PerfMgmt();

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

        class Periodic; //type: PerfMgmt::Periodic
        class Monitor; //type: PerfMgmt::Monitor

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor> monitor;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic> periodic;
        
}; // PerfMgmt


class PerfMgmt::Periodic : public Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospf; //type: PerfMgmt::Periodic::Ospf
        class Mpls; //type: PerfMgmt::Periodic::Mpls
        class Nodes; //type: PerfMgmt::Periodic::Nodes
        class Bgp; //type: PerfMgmt::Periodic::Bgp
        class Interface; //type: PerfMgmt::Periodic::Interface

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface> interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes> nodes;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf> ospf;
        
}; // PerfMgmt::Periodic


class PerfMgmt::Periodic::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfv2ProtocolInstances; //type: PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances
        class Ospfv3ProtocolInstances; //type: PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances> ospfv2_protocol_instances;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances> ospfv3_protocol_instances;
        
}; // PerfMgmt::Periodic::Ospf


class PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances : public Entity
{
    public:
        Ospfv2ProtocolInstances();
        ~Ospfv2ProtocolInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfv2ProtocolInstance; //type: PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance> > ospfv2_protocol_instance;
        
}; // PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances


class PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance : public Entity
{
    public:
        Ospfv2ProtocolInstance();
        ~Ospfv2ProtocolInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: string
        class Samples; //type: PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples> samples;
        
}; // PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance


class PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample> > sample;
        
}; // PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples


class PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf input_packets; //type: uint32
        YLeaf output_packets; //type: uint32
        YLeaf input_hello_packets; //type: uint32
        YLeaf output_hello_packets; //type: uint32
        YLeaf input_db_ds; //type: uint32
        YLeaf input_db_ds_lsa; //type: uint32
        YLeaf output_db_ds; //type: uint32
        YLeaf output_db_ds_lsa; //type: uint32
        YLeaf input_ls_requests; //type: uint32
        YLeaf input_ls_requests_lsa; //type: uint32
        YLeaf output_ls_requests; //type: uint32
        YLeaf output_ls_requests_lsa; //type: uint32
        YLeaf input_lsa_updates; //type: uint32
        YLeaf input_lsa_updates_lsa; //type: uint32
        YLeaf output_lsa_updates; //type: uint32
        YLeaf output_lsa_updates_lsa; //type: uint32
        YLeaf input_lsa_acks; //type: uint32
        YLeaf input_lsa_acks_lsa; //type: uint32
        YLeaf output_lsa_acks; //type: uint32
        YLeaf output_lsa_acks_lsa; //type: uint32
        YLeaf checksum_errors; //type: uint32

}; // PerfMgmt::Periodic::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample


class PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances : public Entity
{
    public:
        Ospfv3ProtocolInstances();
        ~Ospfv3ProtocolInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfv3ProtocolInstance; //type: PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance> > ospfv3_protocol_instance;
        
}; // PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances


class PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance : public Entity
{
    public:
        Ospfv3ProtocolInstance();
        ~Ospfv3ProtocolInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: string
        class Samples; //type: PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples> samples;
        
}; // PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance


class PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample> > sample;
        
}; // PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples


class PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf input_packets; //type: uint32
        YLeaf output_packets; //type: uint32
        YLeaf input_hello_packets; //type: uint32
        YLeaf output_hello_packets; //type: uint32
        YLeaf input_db_ds; //type: uint32
        YLeaf input_db_ds_lsa; //type: uint32
        YLeaf output_db_ds; //type: uint32
        YLeaf output_db_ds_lsa; //type: uint32
        YLeaf input_ls_requests; //type: uint32
        YLeaf input_ls_requests_lsa; //type: uint32
        YLeaf output_ls_requests; //type: uint32
        YLeaf output_ls_requests_lsa; //type: uint32
        YLeaf input_lsa_updates; //type: uint32
        YLeaf input_lsa_updates_lsa; //type: uint32
        YLeaf output_lsa_updates; //type: uint32
        YLeaf output_lsa_updates_lsa; //type: uint32
        YLeaf input_lsa_acks; //type: uint32
        YLeaf input_lsa_acks_lsa; //type: uint32
        YLeaf output_lsa_acks; //type: uint32
        YLeaf output_lsa_acks_lsa; //type: uint32

}; // PerfMgmt::Periodic::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample


class PerfMgmt::Periodic::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LdpNeighbors; //type: PerfMgmt::Periodic::Mpls::LdpNeighbors

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Mpls::LdpNeighbors> ldp_neighbors;
        
}; // PerfMgmt::Periodic::Mpls


class PerfMgmt::Periodic::Mpls::LdpNeighbors : public Entity
{
    public:
        LdpNeighbors();
        ~LdpNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LdpNeighbor; //type: PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor> > ldp_neighbor;
        
}; // PerfMgmt::Periodic::Mpls::LdpNeighbors


class PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor : public Entity
{
    public:
        LdpNeighbor();
        ~LdpNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nbr; //type: string
        class Samples; //type: PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples> samples;
        
}; // PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor


class PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample> > sample;
        
}; // PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples


class PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf total_msgs_sent; //type: uint16
        YLeaf total_msgs_rcvd; //type: uint16
        YLeaf init_msgs_sent; //type: uint16
        YLeaf init_msgs_rcvd; //type: uint16
        YLeaf address_msgs_sent; //type: uint16
        YLeaf address_msgs_rcvd; //type: uint16
        YLeaf address_withdraw_msgs_sent; //type: uint16
        YLeaf address_withdraw_msgs_rcvd; //type: uint16
        YLeaf label_mapping_msgs_sent; //type: uint16
        YLeaf label_mapping_msgs_rcvd; //type: uint16
        YLeaf label_withdraw_msgs_sent; //type: uint16
        YLeaf label_withdraw_msgs_rcvd; //type: uint16
        YLeaf label_release_msgs_sent; //type: uint16
        YLeaf label_release_msgs_rcvd; //type: uint16
        YLeaf notification_msgs_sent; //type: uint16
        YLeaf notification_msgs_rcvd; //type: uint16
        YLeaf keepalive_msgs_sent; //type: uint16
        YLeaf keepalive_msgs_rcvd; //type: uint16

}; // PerfMgmt::Periodic::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample


class PerfMgmt::Periodic::Nodes : public Entity
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

        class Node; //type: PerfMgmt::Periodic::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node> > node;
        
}; // PerfMgmt::Periodic::Nodes


class PerfMgmt::Periodic::Nodes::Node : public Entity
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

        YLeaf node_id; //type: string
        class SampleXr; //type: PerfMgmt::Periodic::Nodes::Node::SampleXr
        class Processes; //type: PerfMgmt::Periodic::Nodes::Node::Processes
        class Samples; //type: PerfMgmt::Periodic::Nodes::Node::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::Processes> processes;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::SampleXr> sample_xr;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::Samples> samples;
        
}; // PerfMgmt::Periodic::Nodes::Node


class PerfMgmt::Periodic::Nodes::Node::SampleXr : public Entity
{
    public:
        SampleXr();
        ~SampleXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample> > sample;
        
}; // PerfMgmt::Periodic::Nodes::Node::SampleXr


class PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf no_processes; //type: uint32
        YLeaf average_cpu_used; //type: uint32

}; // PerfMgmt::Periodic::Nodes::Node::SampleXr::Sample


class PerfMgmt::Periodic::Nodes::Node::Processes : public Entity
{
    public:
        Processes();
        ~Processes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Process; //type: PerfMgmt::Periodic::Nodes::Node::Processes::Process

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::Processes::Process> > process;
        
}; // PerfMgmt::Periodic::Nodes::Node::Processes


class PerfMgmt::Periodic::Nodes::Node::Processes::Process : public Entity
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

        YLeaf process_id; //type: int32
        class Samples; //type: PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples> samples;
        
}; // PerfMgmt::Periodic::Nodes::Node::Processes::Process


class PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample> > sample;
        
}; // PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples


class PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf peak_memory; //type: uint32
        YLeaf average_cpu_used; //type: uint32
        YLeaf no_threads; //type: uint32

}; // PerfMgmt::Periodic::Nodes::Node::Processes::Process::Samples::Sample


class PerfMgmt::Periodic::Nodes::Node::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Periodic::Nodes::Node::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Nodes::Node::Samples::Sample> > sample;
        
}; // PerfMgmt::Periodic::Nodes::Node::Samples


class PerfMgmt::Periodic::Nodes::Node::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf curr_memory; //type: uint32
        YLeaf peak_memory; //type: uint32

}; // PerfMgmt::Periodic::Nodes::Node::Samples::Sample


class PerfMgmt::Periodic::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpNeighbors; //type: PerfMgmt::Periodic::Bgp::BgpNeighbors

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Bgp::BgpNeighbors> bgp_neighbors;
        
}; // PerfMgmt::Periodic::Bgp


class PerfMgmt::Periodic::Bgp::BgpNeighbors : public Entity
{
    public:
        BgpNeighbors();
        ~BgpNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpNeighbor; //type: PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor> > bgp_neighbor;
        
}; // PerfMgmt::Periodic::Bgp::BgpNeighbors


class PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor : public Entity
{
    public:
        BgpNeighbor();
        ~BgpNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        class Samples; //type: PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples> samples;
        
}; // PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor


class PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample> > sample;
        
}; // PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples


class PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf input_messages; //type: uint32
        YLeaf output_messages; //type: uint32
        YLeaf input_update_messages; //type: uint32
        YLeaf output_update_messages; //type: uint32
        YLeaf conn_established; //type: uint32
        YLeaf conn_dropped; //type: uint32
        YLeaf errors_received; //type: uint32
        YLeaf errors_sent; //type: uint32

}; // PerfMgmt::Periodic::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample


class PerfMgmt::Periodic::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GenericCounterInterfaces; //type: PerfMgmt::Periodic::Interface::GenericCounterInterfaces
        class BasicCounterInterfaces; //type: PerfMgmt::Periodic::Interface::BasicCounterInterfaces
        class DataRateInterfaces; //type: PerfMgmt::Periodic::Interface::DataRateInterfaces

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::BasicCounterInterfaces> basic_counter_interfaces;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::DataRateInterfaces> data_rate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::GenericCounterInterfaces> generic_counter_interfaces;
        
}; // PerfMgmt::Periodic::Interface


class PerfMgmt::Periodic::Interface::GenericCounterInterfaces : public Entity
{
    public:
        GenericCounterInterfaces();
        ~GenericCounterInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GenericCounterInterface; //type: PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface> > generic_counter_interface;
        
}; // PerfMgmt::Periodic::Interface::GenericCounterInterfaces


class PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface : public Entity
{
    public:
        GenericCounterInterface();
        ~GenericCounterInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class Samples; //type: PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples> samples;
        
}; // PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface


class PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample> > sample;
        
}; // PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples


class PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf in_packets; //type: uint64
        YLeaf in_octets; //type: uint64
        YLeaf out_packets; //type: uint64
        YLeaf out_octets; //type: uint64
        YLeaf in_ucast_pkts; //type: uint64
        YLeaf in_multicast_pkts; //type: uint64
        YLeaf in_broadcast_pkts; //type: uint64
        YLeaf out_ucast_pkts; //type: uint64
        YLeaf out_multicast_pkts; //type: uint64
        YLeaf out_broadcast_pkts; //type: uint64
        YLeaf output_total_drops; //type: uint32
        YLeaf input_total_drops; //type: uint32
        YLeaf input_queue_drops; //type: uint32
        YLeaf input_unknown_proto; //type: uint32
        YLeaf output_total_errors; //type: uint32
        YLeaf output_underrun; //type: uint32
        YLeaf input_total_errors; //type: uint32
        YLeaf input_crc; //type: uint32
        YLeaf input_overrun; //type: uint32
        YLeaf input_frame; //type: uint32

}; // PerfMgmt::Periodic::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample


class PerfMgmt::Periodic::Interface::BasicCounterInterfaces : public Entity
{
    public:
        BasicCounterInterfaces();
        ~BasicCounterInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BasicCounterInterface; //type: PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface> > basic_counter_interface;
        
}; // PerfMgmt::Periodic::Interface::BasicCounterInterfaces


class PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface : public Entity
{
    public:
        BasicCounterInterface();
        ~BasicCounterInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class Samples; //type: PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples> samples;
        
}; // PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface


class PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample> > sample;
        
}; // PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples


class PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf in_packets; //type: uint64
        YLeaf in_octets; //type: uint64
        YLeaf out_packets; //type: uint64
        YLeaf out_octets; //type: uint64
        YLeaf input_total_drops; //type: uint64
        YLeaf input_queue_drops; //type: uint64
        YLeaf input_total_errors; //type: uint64
        YLeaf output_total_drops; //type: uint64
        YLeaf output_queue_drops; //type: uint64
        YLeaf output_total_errors; //type: uint64

}; // PerfMgmt::Periodic::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample


class PerfMgmt::Periodic::Interface::DataRateInterfaces : public Entity
{
    public:
        DataRateInterfaces();
        ~DataRateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DataRateInterface; //type: PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface> > data_rate_interface;
        
}; // PerfMgmt::Periodic::Interface::DataRateInterfaces


class PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface : public Entity
{
    public:
        DataRateInterface();
        ~DataRateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class Samples; //type: PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples> samples;
        
}; // PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface


class PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample> > sample;
        
}; // PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples


class PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf input_data_rate; //type: uint32
        YLeaf input_packet_rate; //type: uint32
        YLeaf output_data_rate; //type: uint32
        YLeaf output_packet_rate; //type: uint32
        YLeaf input_peak_rate; //type: uint32
        YLeaf input_peak_pkts; //type: uint32
        YLeaf output_peak_rate; //type: uint32
        YLeaf output_peak_pkts; //type: uint32
        YLeaf bandwidth; //type: uint32

}; // PerfMgmt::Periodic::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample


class PerfMgmt::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospf; //type: PerfMgmt::Monitor::Ospf
        class Mpls; //type: PerfMgmt::Monitor::Mpls
        class Nodes; //type: PerfMgmt::Monitor::Nodes
        class Bgp; //type: PerfMgmt::Monitor::Bgp
        class Interface; //type: PerfMgmt::Monitor::Interface

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface> interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes> nodes;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf> ospf;
        
}; // PerfMgmt::Monitor


class PerfMgmt::Monitor::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfv2ProtocolInstances; //type: PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances
        class Ospfv3ProtocolInstances; //type: PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances> ospfv2_protocol_instances;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances> ospfv3_protocol_instances;
        
}; // PerfMgmt::Monitor::Ospf


class PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances : public Entity
{
    public:
        Ospfv2ProtocolInstances();
        ~Ospfv2ProtocolInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfv2ProtocolInstance; //type: PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance> > ospfv2_protocol_instance;
        
}; // PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances


class PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance : public Entity
{
    public:
        Ospfv2ProtocolInstance();
        ~Ospfv2ProtocolInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: string
        class Samples; //type: PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples> samples;
        
}; // PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance


class PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample> > sample;
        
}; // PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples


class PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf input_packets; //type: uint32
        YLeaf output_packets; //type: uint32
        YLeaf input_hello_packets; //type: uint32
        YLeaf output_hello_packets; //type: uint32
        YLeaf input_db_ds; //type: uint32
        YLeaf input_db_ds_lsa; //type: uint32
        YLeaf output_db_ds; //type: uint32
        YLeaf output_db_ds_lsa; //type: uint32
        YLeaf input_ls_requests; //type: uint32
        YLeaf input_ls_requests_lsa; //type: uint32
        YLeaf output_ls_requests; //type: uint32
        YLeaf output_ls_requests_lsa; //type: uint32
        YLeaf input_lsa_updates; //type: uint32
        YLeaf input_lsa_updates_lsa; //type: uint32
        YLeaf output_lsa_updates; //type: uint32
        YLeaf output_lsa_updates_lsa; //type: uint32
        YLeaf input_lsa_acks; //type: uint32
        YLeaf input_lsa_acks_lsa; //type: uint32
        YLeaf output_lsa_acks; //type: uint32
        YLeaf output_lsa_acks_lsa; //type: uint32
        YLeaf checksum_errors; //type: uint32

}; // PerfMgmt::Monitor::Ospf::Ospfv2ProtocolInstances::Ospfv2ProtocolInstance::Samples::Sample


class PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances : public Entity
{
    public:
        Ospfv3ProtocolInstances();
        ~Ospfv3ProtocolInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ospfv3ProtocolInstance; //type: PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance> > ospfv3_protocol_instance;
        
}; // PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances


class PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance : public Entity
{
    public:
        Ospfv3ProtocolInstance();
        ~Ospfv3ProtocolInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: string
        class Samples; //type: PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples> samples;
        
}; // PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance


class PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample> > sample;
        
}; // PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples


class PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf input_packets; //type: uint32
        YLeaf output_packets; //type: uint32
        YLeaf input_hello_packets; //type: uint32
        YLeaf output_hello_packets; //type: uint32
        YLeaf input_db_ds; //type: uint32
        YLeaf input_db_ds_lsa; //type: uint32
        YLeaf output_db_ds; //type: uint32
        YLeaf output_db_ds_lsa; //type: uint32
        YLeaf input_ls_requests; //type: uint32
        YLeaf input_ls_requests_lsa; //type: uint32
        YLeaf output_ls_requests; //type: uint32
        YLeaf output_ls_requests_lsa; //type: uint32
        YLeaf input_lsa_updates; //type: uint32
        YLeaf input_lsa_updates_lsa; //type: uint32
        YLeaf output_lsa_updates; //type: uint32
        YLeaf output_lsa_updates_lsa; //type: uint32
        YLeaf input_lsa_acks; //type: uint32
        YLeaf input_lsa_acks_lsa; //type: uint32
        YLeaf output_lsa_acks; //type: uint32
        YLeaf output_lsa_acks_lsa; //type: uint32

}; // PerfMgmt::Monitor::Ospf::Ospfv3ProtocolInstances::Ospfv3ProtocolInstance::Samples::Sample


class PerfMgmt::Monitor::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LdpNeighbors; //type: PerfMgmt::Monitor::Mpls::LdpNeighbors

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Mpls::LdpNeighbors> ldp_neighbors;
        
}; // PerfMgmt::Monitor::Mpls


class PerfMgmt::Monitor::Mpls::LdpNeighbors : public Entity
{
    public:
        LdpNeighbors();
        ~LdpNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LdpNeighbor; //type: PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor> > ldp_neighbor;
        
}; // PerfMgmt::Monitor::Mpls::LdpNeighbors


class PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor : public Entity
{
    public:
        LdpNeighbor();
        ~LdpNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nbr; //type: string
        class Samples; //type: PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples> samples;
        
}; // PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor


class PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample> > sample;
        
}; // PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples


class PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf total_msgs_sent; //type: uint16
        YLeaf total_msgs_rcvd; //type: uint16
        YLeaf init_msgs_sent; //type: uint16
        YLeaf init_msgs_rcvd; //type: uint16
        YLeaf address_msgs_sent; //type: uint16
        YLeaf address_msgs_rcvd; //type: uint16
        YLeaf address_withdraw_msgs_sent; //type: uint16
        YLeaf address_withdraw_msgs_rcvd; //type: uint16
        YLeaf label_mapping_msgs_sent; //type: uint16
        YLeaf label_mapping_msgs_rcvd; //type: uint16
        YLeaf label_withdraw_msgs_sent; //type: uint16
        YLeaf label_withdraw_msgs_rcvd; //type: uint16
        YLeaf label_release_msgs_sent; //type: uint16
        YLeaf label_release_msgs_rcvd; //type: uint16
        YLeaf notification_msgs_sent; //type: uint16
        YLeaf notification_msgs_rcvd; //type: uint16
        YLeaf keepalive_msgs_sent; //type: uint16
        YLeaf keepalive_msgs_rcvd; //type: uint16

}; // PerfMgmt::Monitor::Mpls::LdpNeighbors::LdpNeighbor::Samples::Sample


class PerfMgmt::Monitor::Nodes : public Entity
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

        class Node; //type: PerfMgmt::Monitor::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node> > node;
        
}; // PerfMgmt::Monitor::Nodes


class PerfMgmt::Monitor::Nodes::Node : public Entity
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

        YLeaf node_id; //type: string
        class SampleXr; //type: PerfMgmt::Monitor::Nodes::Node::SampleXr
        class Processes; //type: PerfMgmt::Monitor::Nodes::Node::Processes
        class Samples; //type: PerfMgmt::Monitor::Nodes::Node::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::Processes> processes;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::SampleXr> sample_xr;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::Samples> samples;
        
}; // PerfMgmt::Monitor::Nodes::Node


class PerfMgmt::Monitor::Nodes::Node::SampleXr : public Entity
{
    public:
        SampleXr();
        ~SampleXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample> > sample;
        
}; // PerfMgmt::Monitor::Nodes::Node::SampleXr


class PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf no_processes; //type: uint32
        YLeaf average_cpu_used; //type: uint32

}; // PerfMgmt::Monitor::Nodes::Node::SampleXr::Sample


class PerfMgmt::Monitor::Nodes::Node::Processes : public Entity
{
    public:
        Processes();
        ~Processes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Process; //type: PerfMgmt::Monitor::Nodes::Node::Processes::Process

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::Processes::Process> > process;
        
}; // PerfMgmt::Monitor::Nodes::Node::Processes


class PerfMgmt::Monitor::Nodes::Node::Processes::Process : public Entity
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

        YLeaf process_id; //type: int32
        class Samples; //type: PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples> samples;
        
}; // PerfMgmt::Monitor::Nodes::Node::Processes::Process


class PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample> > sample;
        
}; // PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples


class PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf peak_memory; //type: uint32
        YLeaf average_cpu_used; //type: uint32
        YLeaf no_threads; //type: uint32

}; // PerfMgmt::Monitor::Nodes::Node::Processes::Process::Samples::Sample


class PerfMgmt::Monitor::Nodes::Node::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Monitor::Nodes::Node::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Nodes::Node::Samples::Sample> > sample;
        
}; // PerfMgmt::Monitor::Nodes::Node::Samples


class PerfMgmt::Monitor::Nodes::Node::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf curr_memory; //type: uint32
        YLeaf peak_memory; //type: uint32

}; // PerfMgmt::Monitor::Nodes::Node::Samples::Sample


class PerfMgmt::Monitor::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpNeighbors; //type: PerfMgmt::Monitor::Bgp::BgpNeighbors

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Bgp::BgpNeighbors> bgp_neighbors;
        
}; // PerfMgmt::Monitor::Bgp


class PerfMgmt::Monitor::Bgp::BgpNeighbors : public Entity
{
    public:
        BgpNeighbors();
        ~BgpNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpNeighbor; //type: PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor> > bgp_neighbor;
        
}; // PerfMgmt::Monitor::Bgp::BgpNeighbors


class PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor : public Entity
{
    public:
        BgpNeighbor();
        ~BgpNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        class Samples; //type: PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples> samples;
        
}; // PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor


class PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample> > sample;
        
}; // PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples


class PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf input_messages; //type: uint32
        YLeaf output_messages; //type: uint32
        YLeaf input_update_messages; //type: uint32
        YLeaf output_update_messages; //type: uint32
        YLeaf conn_established; //type: uint32
        YLeaf conn_dropped; //type: uint32
        YLeaf errors_received; //type: uint32
        YLeaf errors_sent; //type: uint32

}; // PerfMgmt::Monitor::Bgp::BgpNeighbors::BgpNeighbor::Samples::Sample


class PerfMgmt::Monitor::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GenericCounterInterfaces; //type: PerfMgmt::Monitor::Interface::GenericCounterInterfaces
        class BasicCounterInterfaces; //type: PerfMgmt::Monitor::Interface::BasicCounterInterfaces
        class DataRateInterfaces; //type: PerfMgmt::Monitor::Interface::DataRateInterfaces

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::BasicCounterInterfaces> basic_counter_interfaces;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::DataRateInterfaces> data_rate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::GenericCounterInterfaces> generic_counter_interfaces;
        
}; // PerfMgmt::Monitor::Interface


class PerfMgmt::Monitor::Interface::GenericCounterInterfaces : public Entity
{
    public:
        GenericCounterInterfaces();
        ~GenericCounterInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GenericCounterInterface; //type: PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface> > generic_counter_interface;
        
}; // PerfMgmt::Monitor::Interface::GenericCounterInterfaces


class PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface : public Entity
{
    public:
        GenericCounterInterface();
        ~GenericCounterInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class Samples; //type: PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples> samples;
        
}; // PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface


class PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample> > sample;
        
}; // PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples


class PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf in_packets; //type: uint64
        YLeaf in_octets; //type: uint64
        YLeaf out_packets; //type: uint64
        YLeaf out_octets; //type: uint64
        YLeaf in_ucast_pkts; //type: uint64
        YLeaf in_multicast_pkts; //type: uint64
        YLeaf in_broadcast_pkts; //type: uint64
        YLeaf out_ucast_pkts; //type: uint64
        YLeaf out_multicast_pkts; //type: uint64
        YLeaf out_broadcast_pkts; //type: uint64
        YLeaf output_total_drops; //type: uint32
        YLeaf input_total_drops; //type: uint32
        YLeaf input_queue_drops; //type: uint32
        YLeaf input_unknown_proto; //type: uint32
        YLeaf output_total_errors; //type: uint32
        YLeaf output_underrun; //type: uint32
        YLeaf input_total_errors; //type: uint32
        YLeaf input_crc; //type: uint32
        YLeaf input_overrun; //type: uint32
        YLeaf input_frame; //type: uint32

}; // PerfMgmt::Monitor::Interface::GenericCounterInterfaces::GenericCounterInterface::Samples::Sample


class PerfMgmt::Monitor::Interface::BasicCounterInterfaces : public Entity
{
    public:
        BasicCounterInterfaces();
        ~BasicCounterInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BasicCounterInterface; //type: PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface> > basic_counter_interface;
        
}; // PerfMgmt::Monitor::Interface::BasicCounterInterfaces


class PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface : public Entity
{
    public:
        BasicCounterInterface();
        ~BasicCounterInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class Samples; //type: PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples> samples;
        
}; // PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface


class PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample> > sample;
        
}; // PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples


class PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf in_packets; //type: uint64
        YLeaf in_octets; //type: uint64
        YLeaf out_packets; //type: uint64
        YLeaf out_octets; //type: uint64
        YLeaf input_total_drops; //type: uint64
        YLeaf input_queue_drops; //type: uint64
        YLeaf input_total_errors; //type: uint64
        YLeaf output_total_drops; //type: uint64
        YLeaf output_queue_drops; //type: uint64
        YLeaf output_total_errors; //type: uint64

}; // PerfMgmt::Monitor::Interface::BasicCounterInterfaces::BasicCounterInterface::Samples::Sample


class PerfMgmt::Monitor::Interface::DataRateInterfaces : public Entity
{
    public:
        DataRateInterfaces();
        ~DataRateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DataRateInterface; //type: PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface> > data_rate_interface;
        
}; // PerfMgmt::Monitor::Interface::DataRateInterfaces


class PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface : public Entity
{
    public:
        DataRateInterface();
        ~DataRateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class Samples; //type: PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples> samples;
        
}; // PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface


class PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples : public Entity
{
    public:
        Samples();
        ~Samples();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sample; //type: PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample> > sample;
        
}; // PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples


class PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample : public Entity
{
    public:
        Sample();
        ~Sample();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sample_id; //type: int32
        YLeaf time_stamp; //type: uint64
        YLeaf input_data_rate; //type: uint32
        YLeaf input_packet_rate; //type: uint32
        YLeaf output_data_rate; //type: uint32
        YLeaf output_packet_rate; //type: uint32
        YLeaf input_peak_rate; //type: uint32
        YLeaf input_peak_pkts; //type: uint32
        YLeaf output_peak_rate; //type: uint32
        YLeaf output_peak_pkts; //type: uint32
        YLeaf bandwidth; //type: uint32

}; // PerfMgmt::Monitor::Interface::DataRateInterfaces::DataRateInterface::Samples::Sample


}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_OPER_ */

