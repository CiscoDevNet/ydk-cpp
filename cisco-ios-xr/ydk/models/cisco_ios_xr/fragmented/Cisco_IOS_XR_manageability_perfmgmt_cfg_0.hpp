#ifndef _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_0_
#define _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_manageability_perfmgmt_cfg {

class PerfMgmt : public ydk::Entity
{
    public:
        PerfMgmt();
        ~PerfMgmt();

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

        class Resources; //type: PerfMgmt::Resources
        class Statistics; //type: PerfMgmt::Statistics
        class Enable; //type: PerfMgmt::Enable
        class RegExpGroups; //type: PerfMgmt::RegExpGroups
        class Threshold; //type: PerfMgmt::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable> enable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups> reg_exp_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources> resources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold> threshold;
        
}; // PerfMgmt


class PerfMgmt::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

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

        class Threshold; //type: PerfMgmt::Enable::Threshold
        class Statistics; //type: PerfMgmt::Enable::Statistics
        class MonitorEnable; //type: PerfMgmt::Enable::MonitorEnable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable> monitor_enable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold> threshold;
        
}; // PerfMgmt::Enable


class PerfMgmt::Enable::MonitorEnable : public ydk::Entity
{
    public:
        MonitorEnable();
        ~MonitorEnable();

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

        class LdpMpls; //type: PerfMgmt::Enable::MonitorEnable::LdpMpls
        class Ospfv3Protocol; //type: PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol
        class GenericCounters; //type: PerfMgmt::Enable::MonitorEnable::GenericCounters
        class Process; //type: PerfMgmt::Enable::MonitorEnable::Process
        class BasicCounters; //type: PerfMgmt::Enable::MonitorEnable::BasicCounters
        class Memory; //type: PerfMgmt::Enable::MonitorEnable::Memory
        class Ospfv2Protocol; //type: PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol
        class Cpu; //type: PerfMgmt::Enable::MonitorEnable::Cpu
        class Bgp; //type: PerfMgmt::Enable::MonitorEnable::Bgp
        class DataRates; //type: PerfMgmt::Enable::MonitorEnable::DataRates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::BasicCounters> basic_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Cpu> cpu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::DataRates> data_rates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::GenericCounters> generic_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::LdpMpls> ldp_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Memory> memory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process> process;
        
}; // PerfMgmt::Enable::MonitorEnable


class PerfMgmt::Enable::MonitorEnable::BasicCounters : public ydk::Entity
{
    public:
        BasicCounters();
        ~BasicCounters();

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

        class Interfaces; //type: PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces> interfaces;
        
}; // PerfMgmt::Enable::MonitorEnable::BasicCounters


class PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface> > interface;
        
}; // PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces


class PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface


class PerfMgmt::Enable::MonitorEnable::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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

        class Neighbors; //type: PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors> neighbors;
        
}; // PerfMgmt::Enable::MonitorEnable::Bgp


class PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

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

        class Neighbor; //type: PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor> > neighbor;
        
}; // PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors


class PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor


class PerfMgmt::Enable::MonitorEnable::Cpu : public ydk::Entity
{
    public:
        Cpu();
        ~Cpu();

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

        class Nodes; //type: PerfMgmt::Enable::MonitorEnable::Cpu::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Cpu::Nodes> nodes;
        
}; // PerfMgmt::Enable::MonitorEnable::Cpu


class PerfMgmt::Enable::MonitorEnable::Cpu::Nodes : public ydk::Entity
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

        class Node; //type: PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::MonitorEnable::Cpu::Nodes


class PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node


class PerfMgmt::Enable::MonitorEnable::DataRates : public ydk::Entity
{
    public:
        DataRates();
        ~DataRates();

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

        class Interfaces; //type: PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces> interfaces;
        
}; // PerfMgmt::Enable::MonitorEnable::DataRates


class PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface> > interface;
        
}; // PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces


class PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface


class PerfMgmt::Enable::MonitorEnable::GenericCounters : public ydk::Entity
{
    public:
        GenericCounters();
        ~GenericCounters();

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

        class Interfaces; //type: PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces> interfaces;
        
}; // PerfMgmt::Enable::MonitorEnable::GenericCounters


class PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface> > interface;
        
}; // PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces


class PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface


class PerfMgmt::Enable::MonitorEnable::LdpMpls : public ydk::Entity
{
    public:
        LdpMpls();
        ~LdpMpls();

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

        class Sessions; //type: PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions> sessions;
        
}; // PerfMgmt::Enable::MonitorEnable::LdpMpls


class PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

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

        class Session; //type: PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session> > session;
        
}; // PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions


class PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf session; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session


class PerfMgmt::Enable::MonitorEnable::Memory : public ydk::Entity
{
    public:
        Memory();
        ~Memory();

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

        class Nodes; //type: PerfMgmt::Enable::MonitorEnable::Memory::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Memory::Nodes> nodes;
        
}; // PerfMgmt::Enable::MonitorEnable::Memory


class PerfMgmt::Enable::MonitorEnable::Memory::Nodes : public ydk::Entity
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

        class Node; //type: PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::MonitorEnable::Memory::Nodes


class PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node


class PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol : public ydk::Entity
{
    public:
        Ospfv2Protocol();
        ~Ospfv2Protocol();

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

        class OspfInstances; //type: PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances> ospf_instances;
        
}; // PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol


class PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances : public ydk::Entity
{
    public:
        OspfInstances();
        ~OspfInstances();

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

        class OspfInstance; //type: PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance> > ospf_instance;
        
}; // PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances


class PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance : public ydk::Entity
{
    public:
        OspfInstance();
        ~OspfInstance();

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

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance


class PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol : public ydk::Entity
{
    public:
        Ospfv3Protocol();
        ~Ospfv3Protocol();

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

        class OspfInstances; //type: PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances> ospf_instances;
        
}; // PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol


class PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances : public ydk::Entity
{
    public:
        OspfInstances();
        ~OspfInstances();

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

        class OspfInstance; //type: PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance> > ospf_instance;
        
}; // PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances


class PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance : public ydk::Entity
{
    public:
        OspfInstance();
        ~OspfInstance();

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

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance


class PerfMgmt::Enable::MonitorEnable::Process : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ProcessNodes; //type: PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes> process_nodes;
        
}; // PerfMgmt::Enable::MonitorEnable::Process


class PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes : public ydk::Entity
{
    public:
        ProcessNodes();
        ~ProcessNodes();

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

        class ProcessNode; //type: PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode> > process_node;
        
}; // PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes


class PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode : public ydk::Entity
{
    public:
        ProcessNode();
        ~ProcessNode();

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

        ydk::YLeaf node_id; //type: string
        class Pids; //type: PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids> pids;
        
}; // PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode


class PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids : public ydk::Entity
{
    public:
        Pids();
        ~Pids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pid; //type: PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid> > pid;
        
}; // PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids


class PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid : public ydk::Entity
{
    public:
        Pid();
        ~Pid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid


class PerfMgmt::Enable::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        class GenericCounterInterface; //type: PerfMgmt::Enable::Statistics::GenericCounterInterface
        class Bgp; //type: PerfMgmt::Enable::Statistics::Bgp
        class Ospfv2Protocol; //type: PerfMgmt::Enable::Statistics::Ospfv2Protocol
        class Ospfv3Protocol; //type: PerfMgmt::Enable::Statistics::Ospfv3Protocol
        class CpuNode; //type: PerfMgmt::Enable::Statistics::CpuNode
        class BasicCounterInterface; //type: PerfMgmt::Enable::Statistics::BasicCounterInterface
        class ProcessNode; //type: PerfMgmt::Enable::Statistics::ProcessNode
        class DataRateInterface; //type: PerfMgmt::Enable::Statistics::DataRateInterface
        class MemoryNode; //type: PerfMgmt::Enable::Statistics::MemoryNode
        class LdpMpls; //type: PerfMgmt::Enable::Statistics::LdpMpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::BasicCounterInterface> basic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode> cpu_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::DataRateInterface> data_rate_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::GenericCounterInterface> generic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::LdpMpls> ldp_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode> memory_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode> process_node;
        
}; // PerfMgmt::Enable::Statistics


class PerfMgmt::Enable::Statistics::BasicCounterInterface : public ydk::Entity
{
    public:
        BasicCounterInterface();
        ~BasicCounterInterface();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::BasicCounterInterface


class PerfMgmt::Enable::Statistics::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::Bgp


class PerfMgmt::Enable::Statistics::CpuNode : public ydk::Entity
{
    public:
        CpuNode();
        ~CpuNode();

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

        class NodeAll; //type: PerfMgmt::Enable::Statistics::CpuNode::NodeAll
        class Nodes; //type: PerfMgmt::Enable::Statistics::CpuNode::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode::NodeAll> node_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode::Nodes> nodes;
        
}; // PerfMgmt::Enable::Statistics::CpuNode


class PerfMgmt::Enable::Statistics::CpuNode::NodeAll : public ydk::Entity
{
    public:
        NodeAll();
        ~NodeAll();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::CpuNode::NodeAll


class PerfMgmt::Enable::Statistics::CpuNode::Nodes : public ydk::Entity
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

        class Node; //type: PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::Statistics::CpuNode::Nodes


class PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node


class PerfMgmt::Enable::Statistics::DataRateInterface : public ydk::Entity
{
    public:
        DataRateInterface();
        ~DataRateInterface();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::DataRateInterface


class PerfMgmt::Enable::Statistics::GenericCounterInterface : public ydk::Entity
{
    public:
        GenericCounterInterface();
        ~GenericCounterInterface();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::GenericCounterInterface


class PerfMgmt::Enable::Statistics::LdpMpls : public ydk::Entity
{
    public:
        LdpMpls();
        ~LdpMpls();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::LdpMpls


class PerfMgmt::Enable::Statistics::MemoryNode : public ydk::Entity
{
    public:
        MemoryNode();
        ~MemoryNode();

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

        class NodeAll; //type: PerfMgmt::Enable::Statistics::MemoryNode::NodeAll
        class Nodes; //type: PerfMgmt::Enable::Statistics::MemoryNode::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode::NodeAll> node_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode::Nodes> nodes;
        
}; // PerfMgmt::Enable::Statistics::MemoryNode


class PerfMgmt::Enable::Statistics::MemoryNode::NodeAll : public ydk::Entity
{
    public:
        NodeAll();
        ~NodeAll();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::MemoryNode::NodeAll


class PerfMgmt::Enable::Statistics::MemoryNode::Nodes : public ydk::Entity
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

        class Node; //type: PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::Statistics::MemoryNode::Nodes


class PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node


class PerfMgmt::Enable::Statistics::Ospfv2Protocol : public ydk::Entity
{
    public:
        Ospfv2Protocol();
        ~Ospfv2Protocol();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::Ospfv2Protocol


class PerfMgmt::Enable::Statistics::Ospfv3Protocol : public ydk::Entity
{
    public:
        Ospfv3Protocol();
        ~Ospfv3Protocol();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::Ospfv3Protocol


class PerfMgmt::Enable::Statistics::ProcessNode : public ydk::Entity
{
    public:
        ProcessNode();
        ~ProcessNode();

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

        class NodeAll; //type: PerfMgmt::Enable::Statistics::ProcessNode::NodeAll
        class Nodes; //type: PerfMgmt::Enable::Statistics::ProcessNode::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode::NodeAll> node_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode::Nodes> nodes;
        
}; // PerfMgmt::Enable::Statistics::ProcessNode


class PerfMgmt::Enable::Statistics::ProcessNode::NodeAll : public ydk::Entity
{
    public:
        NodeAll();
        ~NodeAll();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::ProcessNode::NodeAll


class PerfMgmt::Enable::Statistics::ProcessNode::Nodes : public ydk::Entity
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

        class Node; //type: PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::Statistics::ProcessNode::Nodes


class PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node


class PerfMgmt::Enable::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

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

        class Ospfv3Protocol; //type: PerfMgmt::Enable::Threshold::Ospfv3Protocol
        class Bgp; //type: PerfMgmt::Enable::Threshold::Bgp
        class DataRateInterface; //type: PerfMgmt::Enable::Threshold::DataRateInterface
        class Ospfv2Protocol; //type: PerfMgmt::Enable::Threshold::Ospfv2Protocol
        class MemoryNode; //type: PerfMgmt::Enable::Threshold::MemoryNode
        class GenericCounterInterface; //type: PerfMgmt::Enable::Threshold::GenericCounterInterface
        class CpuNode; //type: PerfMgmt::Enable::Threshold::CpuNode
        class LdpMpls; //type: PerfMgmt::Enable::Threshold::LdpMpls
        class ProcessNode; //type: PerfMgmt::Enable::Threshold::ProcessNode
        class BasicCounterInterface; //type: PerfMgmt::Enable::Threshold::BasicCounterInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::BasicCounterInterface> basic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode> cpu_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::DataRateInterface> data_rate_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::GenericCounterInterface> generic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::LdpMpls> ldp_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode> memory_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode> process_node;
        
}; // PerfMgmt::Enable::Threshold


class PerfMgmt::Enable::Threshold::BasicCounterInterface : public ydk::Entity
{
    public:
        BasicCounterInterface();
        ~BasicCounterInterface();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::BasicCounterInterface


class PerfMgmt::Enable::Threshold::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::Bgp


class PerfMgmt::Enable::Threshold::CpuNode : public ydk::Entity
{
    public:
        CpuNode();
        ~CpuNode();

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

        class Nodes; //type: PerfMgmt::Enable::Threshold::CpuNode::Nodes
        class NodeAll; //type: PerfMgmt::Enable::Threshold::CpuNode::NodeAll

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode::NodeAll> node_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode::Nodes> nodes;
        
}; // PerfMgmt::Enable::Threshold::CpuNode


class PerfMgmt::Enable::Threshold::CpuNode::NodeAll : public ydk::Entity
{
    public:
        NodeAll();
        ~NodeAll();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::CpuNode::NodeAll


class PerfMgmt::Enable::Threshold::CpuNode::Nodes : public ydk::Entity
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

        class Node; //type: PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::Threshold::CpuNode::Nodes


class PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node


class PerfMgmt::Enable::Threshold::DataRateInterface : public ydk::Entity
{
    public:
        DataRateInterface();
        ~DataRateInterface();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::DataRateInterface


class PerfMgmt::Enable::Threshold::GenericCounterInterface : public ydk::Entity
{
    public:
        GenericCounterInterface();
        ~GenericCounterInterface();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::GenericCounterInterface


class PerfMgmt::Enable::Threshold::LdpMpls : public ydk::Entity
{
    public:
        LdpMpls();
        ~LdpMpls();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::LdpMpls


class PerfMgmt::Enable::Threshold::MemoryNode : public ydk::Entity
{
    public:
        MemoryNode();
        ~MemoryNode();

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

        class Nodes; //type: PerfMgmt::Enable::Threshold::MemoryNode::Nodes
        class NodeAll; //type: PerfMgmt::Enable::Threshold::MemoryNode::NodeAll

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode::NodeAll> node_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode::Nodes> nodes;
        
}; // PerfMgmt::Enable::Threshold::MemoryNode


class PerfMgmt::Enable::Threshold::MemoryNode::NodeAll : public ydk::Entity
{
    public:
        NodeAll();
        ~NodeAll();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::MemoryNode::NodeAll


class PerfMgmt::Enable::Threshold::MemoryNode::Nodes : public ydk::Entity
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

        class Node; //type: PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::Threshold::MemoryNode::Nodes


class PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node


class PerfMgmt::Enable::Threshold::Ospfv2Protocol : public ydk::Entity
{
    public:
        Ospfv2Protocol();
        ~Ospfv2Protocol();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::Ospfv2Protocol


class PerfMgmt::Enable::Threshold::Ospfv3Protocol : public ydk::Entity
{
    public:
        Ospfv3Protocol();
        ~Ospfv3Protocol();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::Ospfv3Protocol


class PerfMgmt::Enable::Threshold::ProcessNode : public ydk::Entity
{
    public:
        ProcessNode();
        ~ProcessNode();

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

        class Nodes; //type: PerfMgmt::Enable::Threshold::ProcessNode::Nodes
        class NodeAll; //type: PerfMgmt::Enable::Threshold::ProcessNode::NodeAll

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode::NodeAll> node_all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode::Nodes> nodes;
        
}; // PerfMgmt::Enable::Threshold::ProcessNode


class PerfMgmt::Enable::Threshold::ProcessNode::NodeAll : public ydk::Entity
{
    public:
        NodeAll();
        ~NodeAll();

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

        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::ProcessNode::NodeAll


class PerfMgmt::Enable::Threshold::ProcessNode::Nodes : public ydk::Entity
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

        class Node; //type: PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::Threshold::ProcessNode::Nodes


class PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node : public ydk::Entity
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

        ydk::YLeaf node_id; //type: string
        ydk::YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node


class PerfMgmt::RegExpGroups : public ydk::Entity
{
    public:
        RegExpGroups();
        ~RegExpGroups();

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

        class RegExpGroup; //type: PerfMgmt::RegExpGroups::RegExpGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups::RegExpGroup> > reg_exp_group;
        
}; // PerfMgmt::RegExpGroups


class PerfMgmt::RegExpGroups::RegExpGroup : public ydk::Entity
{
    public:
        RegExpGroup();
        ~RegExpGroup();

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

        ydk::YLeaf reg_exp_group_name; //type: string
        class RegExps; //type: PerfMgmt::RegExpGroups::RegExpGroup::RegExps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups::RegExpGroup::RegExps> reg_exps;
        
}; // PerfMgmt::RegExpGroups::RegExpGroup


class PerfMgmt::RegExpGroups::RegExpGroup::RegExps : public ydk::Entity
{
    public:
        RegExps();
        ~RegExps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegExp; //type: PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp> > reg_exp;
        
}; // PerfMgmt::RegExpGroups::RegExpGroup::RegExps


class PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp : public ydk::Entity
{
    public:
        RegExp();
        ~RegExp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reg_exp_index; //type: uint32
        ydk::YLeaf reg_exp_string; //type: string

}; // PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp


class PerfMgmt::Resources : public ydk::Entity
{
    public:
        Resources();
        ~Resources();

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

        class TftpResources; //type: PerfMgmt::Resources::TftpResources
        class DumpLocal; //type: PerfMgmt::Resources::DumpLocal
        class MemoryResources; //type: PerfMgmt::Resources::MemoryResources

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources::DumpLocal> dump_local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources::MemoryResources> memory_resources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources::TftpResources> tftp_resources; // presence node
        
}; // PerfMgmt::Resources


class PerfMgmt::Resources::DumpLocal : public ydk::Entity
{
    public:
        DumpLocal();
        ~DumpLocal();

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

        ydk::YLeaf enable; //type: empty

}; // PerfMgmt::Resources::DumpLocal


class PerfMgmt::Resources::MemoryResources : public ydk::Entity
{
    public:
        MemoryResources();
        ~MemoryResources();

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

        ydk::YLeaf max_limit; //type: int32
        ydk::YLeaf min_reserved; //type: int32

}; // PerfMgmt::Resources::MemoryResources


class PerfMgmt::Resources::TftpResources : public ydk::Entity
{
    public:
        TftpResources();
        ~TftpResources();

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

        ydk::YLeaf server_address; //type: string
        ydk::YLeaf directory; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // PerfMgmt::Resources::TftpResources


class PerfMgmt::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        class GenericCounterInterface; //type: PerfMgmt::Statistics::GenericCounterInterface
        class ProcessNode; //type: PerfMgmt::Statistics::ProcessNode
        class BasicCounterInterface; //type: PerfMgmt::Statistics::BasicCounterInterface
        class Ospfv3Protocol; //type: PerfMgmt::Statistics::Ospfv3Protocol
        class CpuNode; //type: PerfMgmt::Statistics::CpuNode
        class DataRateInterface; //type: PerfMgmt::Statistics::DataRateInterface
        class MemoryNode; //type: PerfMgmt::Statistics::MemoryNode
        class LdpMpls; //type: PerfMgmt::Statistics::LdpMpls
        class Bgp; //type: PerfMgmt::Statistics::Bgp
        class Ospfv2Protocol; //type: PerfMgmt::Statistics::Ospfv2Protocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::BasicCounterInterface> basic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::CpuNode> cpu_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::DataRateInterface> data_rate_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::GenericCounterInterface> generic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::LdpMpls> ldp_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::MemoryNode> memory_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::ProcessNode> process_node;
        
}; // PerfMgmt::Statistics


class PerfMgmt::Statistics::BasicCounterInterface : public ydk::Entity
{
    public:
        BasicCounterInterface();
        ~BasicCounterInterface();

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

        class Templates; //type: PerfMgmt::Statistics::BasicCounterInterface::Templates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::BasicCounterInterface::Templates> templates;
        
}; // PerfMgmt::Statistics::BasicCounterInterface


class PerfMgmt::Statistics::BasicCounterInterface::Templates : public ydk::Entity
{
    public:
        Templates();
        ~Templates();

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

        class Template_; //type: PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::BasicCounterInterface::Templates


class PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf history_persistent; //type: empty
        ydk::YLeaf vrf_group; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_


class PerfMgmt::Statistics::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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

        class Templates; //type: PerfMgmt::Statistics::Bgp::Templates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Bgp::Templates> templates;
        
}; // PerfMgmt::Statistics::Bgp


class PerfMgmt::Statistics::Bgp::Templates : public ydk::Entity
{
    public:
        Templates();
        ~Templates();

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

        class Template_; //type: PerfMgmt::Statistics::Bgp::Templates::Template_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Bgp::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::Bgp::Templates


class PerfMgmt::Statistics::Bgp::Templates::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf history_persistent; //type: empty
        ydk::YLeaf vrf_group; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::Bgp::Templates::Template_


class PerfMgmt::Statistics::CpuNode : public ydk::Entity
{
    public:
        CpuNode();
        ~CpuNode();

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

        class Templates; //type: PerfMgmt::Statistics::CpuNode::Templates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::CpuNode::Templates> templates;
        
}; // PerfMgmt::Statistics::CpuNode


class PerfMgmt::Statistics::CpuNode::Templates : public ydk::Entity
{
    public:
        Templates();
        ~Templates();

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

        class Template_; //type: PerfMgmt::Statistics::CpuNode::Templates::Template_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::CpuNode::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::CpuNode::Templates


class PerfMgmt::Statistics::CpuNode::Templates::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf history_persistent; //type: empty
        ydk::YLeaf vrf_group; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::CpuNode::Templates::Template_


class PerfMgmt::Statistics::DataRateInterface : public ydk::Entity
{
    public:
        DataRateInterface();
        ~DataRateInterface();

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

        class Templates; //type: PerfMgmt::Statistics::DataRateInterface::Templates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::DataRateInterface::Templates> templates;
        
}; // PerfMgmt::Statistics::DataRateInterface


class PerfMgmt::Statistics::DataRateInterface::Templates : public ydk::Entity
{
    public:
        Templates();
        ~Templates();

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

        class Template_; //type: PerfMgmt::Statistics::DataRateInterface::Templates::Template_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::DataRateInterface::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::DataRateInterface::Templates


class PerfMgmt::Statistics::DataRateInterface::Templates::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf history_persistent; //type: empty
        ydk::YLeaf vrf_group; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::DataRateInterface::Templates::Template_


class PerfMgmt::Statistics::GenericCounterInterface : public ydk::Entity
{
    public:
        GenericCounterInterface();
        ~GenericCounterInterface();

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

        class Templates; //type: PerfMgmt::Statistics::GenericCounterInterface::Templates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::GenericCounterInterface::Templates> templates;
        
}; // PerfMgmt::Statistics::GenericCounterInterface


class PerfMgmt::Statistics::GenericCounterInterface::Templates : public ydk::Entity
{
    public:
        Templates();
        ~Templates();

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

        class Template_; //type: PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::GenericCounterInterface::Templates


class PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf history_persistent; //type: empty
        ydk::YLeaf vrf_group; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_


class PerfMgmt::Statistics::LdpMpls : public ydk::Entity
{
    public:
        LdpMpls();
        ~LdpMpls();

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

        class Templates; //type: PerfMgmt::Statistics::LdpMpls::Templates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::LdpMpls::Templates> templates;
        
}; // PerfMgmt::Statistics::LdpMpls


class PerfMgmt::Statistics::LdpMpls::Templates : public ydk::Entity
{
    public:
        Templates();
        ~Templates();

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

        class Template_; //type: PerfMgmt::Statistics::LdpMpls::Templates::Template_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::LdpMpls::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::LdpMpls::Templates


class PerfMgmt::Statistics::LdpMpls::Templates::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf history_persistent; //type: empty
        ydk::YLeaf vrf_group; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::LdpMpls::Templates::Template_


class PerfMgmt::Statistics::MemoryNode : public ydk::Entity
{
    public:
        MemoryNode();
        ~MemoryNode();

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

        class Templates; //type: PerfMgmt::Statistics::MemoryNode::Templates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::MemoryNode::Templates> templates;
        
}; // PerfMgmt::Statistics::MemoryNode


class PerfMgmt::Statistics::MemoryNode::Templates : public ydk::Entity
{
    public:
        Templates();
        ~Templates();

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

        class Template_; //type: PerfMgmt::Statistics::MemoryNode::Templates::Template_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::MemoryNode::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::MemoryNode::Templates


class PerfMgmt::Statistics::MemoryNode::Templates::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf history_persistent; //type: empty
        ydk::YLeaf vrf_group; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::MemoryNode::Templates::Template_


class PerfMgmt::Statistics::Ospfv2Protocol : public ydk::Entity
{
    public:
        Ospfv2Protocol();
        ~Ospfv2Protocol();

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

        class Templates; //type: PerfMgmt::Statistics::Ospfv2Protocol::Templates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv2Protocol::Templates> templates;
        
}; // PerfMgmt::Statistics::Ospfv2Protocol


class PerfMgmt::Statistics::Ospfv2Protocol::Templates : public ydk::Entity
{
    public:
        Templates();
        ~Templates();

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

        class Template_; //type: PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::Ospfv2Protocol::Templates


class PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf history_persistent; //type: empty
        ydk::YLeaf vrf_group; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_


class PerfMgmt::Statistics::Ospfv3Protocol : public ydk::Entity
{
    public:
        Ospfv3Protocol();
        ~Ospfv3Protocol();

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

        class Templates; //type: PerfMgmt::Statistics::Ospfv3Protocol::Templates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv3Protocol::Templates> templates;
        
}; // PerfMgmt::Statistics::Ospfv3Protocol


class PerfMgmt::Statistics::Ospfv3Protocol::Templates : public ydk::Entity
{
    public:
        Templates();
        ~Templates();

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

        class Template_; //type: PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::Ospfv3Protocol::Templates


class PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf history_persistent; //type: empty
        ydk::YLeaf vrf_group; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_


class PerfMgmt::Statistics::ProcessNode : public ydk::Entity
{
    public:
        ProcessNode();
        ~ProcessNode();

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

        class Templates; //type: PerfMgmt::Statistics::ProcessNode::Templates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::ProcessNode::Templates> templates;
        
}; // PerfMgmt::Statistics::ProcessNode


class PerfMgmt::Statistics::ProcessNode::Templates : public ydk::Entity
{
    public:
        Templates();
        ~Templates();

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

        class Template_; //type: PerfMgmt::Statistics::ProcessNode::Templates::Template_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::ProcessNode::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::ProcessNode::Templates


class PerfMgmt::Statistics::ProcessNode::Templates::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf history_persistent; //type: empty
        ydk::YLeaf vrf_group; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::ProcessNode::Templates::Template_


class PerfMgmt::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

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

        class GenericCounterInterface; //type: PerfMgmt::Threshold::GenericCounterInterface
        class LdpMpls; //type: PerfMgmt::Threshold::LdpMpls
        class BasicCounterInterface; //type: PerfMgmt::Threshold::BasicCounterInterface
        class Bgp; //type: PerfMgmt::Threshold::Bgp
        class Ospfv2Protocol; //type: PerfMgmt::Threshold::Ospfv2Protocol
        class CpuNode; //type: PerfMgmt::Threshold::CpuNode
        class DataRateInterface; //type: PerfMgmt::Threshold::DataRateInterface
        class ProcessNode; //type: PerfMgmt::Threshold::ProcessNode
        class MemoryNode; //type: PerfMgmt::Threshold::MemoryNode
        class Ospfv3Protocol; //type: PerfMgmt::Threshold::Ospfv3Protocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface> basic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode> cpu_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface> data_rate_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface> generic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls> ldp_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode> memory_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode> process_node;
        
}; // PerfMgmt::Threshold


class PerfMgmt::Threshold::BasicCounterInterface : public ydk::Entity
{
    public:
        BasicCounterInterface();
        ~BasicCounterInterface();

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

        class BasicCounterInterfaceTemplates; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates> basic_counter_interface_templates;
        
}; // PerfMgmt::Threshold::BasicCounterInterface


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates : public ydk::Entity
{
    public:
        BasicCounterInterfaceTemplates();
        ~BasicCounterInterfaceTemplates();

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

        class BasicCounterInterfaceTemplate; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate> > basic_counter_interface_template;
        
}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate : public ydk::Entity
{
    public:
        BasicCounterInterfaceTemplate();
        ~BasicCounterInterfaceTemplate();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf vrf_group; //type: string
        class InOctets; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets
        class OutOctets; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets
        class OutputQueueDrops; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops
        class InputTotalErrors; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors
        class OutputTotalDrops; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops
        class OutPackets; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets
        class OutputTotalErrors; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors
        class InPackets; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets
        class InputQueueDrops; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops
        class InputTotalDrops; //type: PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets> in_octets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets> in_packets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops> input_queue_drops; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops> input_total_drops; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors> input_total_errors; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets> out_octets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets> out_packets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops> output_queue_drops; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops> output_total_drops; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors> output_total_errors; // presence node
        
}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets : public ydk::Entity
{
    public:
        InOctets();
        ~InOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InOctets


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets : public ydk::Entity
{
    public:
        InPackets();
        ~InPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InPackets


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops : public ydk::Entity
{
    public:
        InputQueueDrops();
        ~InputQueueDrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputQueueDrops


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops : public ydk::Entity
{
    public:
        InputTotalDrops();
        ~InputTotalDrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalDrops


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors : public ydk::Entity
{
    public:
        InputTotalErrors();
        ~InputTotalErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::InputTotalErrors


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets : public ydk::Entity
{
    public:
        OutOctets();
        ~OutOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutOctets


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets : public ydk::Entity
{
    public:
        OutPackets();
        ~OutPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutPackets


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops : public ydk::Entity
{
    public:
        OutputQueueDrops();
        ~OutputQueueDrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputQueueDrops


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops : public ydk::Entity
{
    public:
        OutputTotalDrops();
        ~OutputTotalDrops();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalDrops


class PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors : public ydk::Entity
{
    public:
        OutputTotalErrors();
        ~OutputTotalErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::BasicCounterInterface::BasicCounterInterfaceTemplates::BasicCounterInterfaceTemplate::OutputTotalErrors


class PerfMgmt::Threshold::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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

        class BgpTemplates; //type: PerfMgmt::Threshold::Bgp::BgpTemplates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates> bgp_templates;
        
}; // PerfMgmt::Threshold::Bgp


class PerfMgmt::Threshold::Bgp::BgpTemplates : public ydk::Entity
{
    public:
        BgpTemplates();
        ~BgpTemplates();

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

        class BgpTemplate; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate> > bgp_template;
        
}; // PerfMgmt::Threshold::Bgp::BgpTemplates


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate : public ydk::Entity
{
    public:
        BgpTemplate();
        ~BgpTemplate();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        class OutputUpdateMessages; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages
        class ErrorsReceived; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived
        class ConnEstablished; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished
        class OutputMessages; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages
        class ConnDropped; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped
        class InputUpdateMessages; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages
        class ErrorsSent; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent
        class InputMessages; //type: PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped> conn_dropped; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished> conn_established; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived> errors_received; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent> errors_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages> input_messages; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages> input_update_messages; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages> output_messages; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages> output_update_messages; // presence node
        
}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped : public ydk::Entity
{
    public:
        ConnDropped();
        ~ConnDropped();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnDropped


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished : public ydk::Entity
{
    public:
        ConnEstablished();
        ~ConnEstablished();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ConnEstablished


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived : public ydk::Entity
{
    public:
        ErrorsReceived();
        ~ErrorsReceived();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsReceived


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent : public ydk::Entity
{
    public:
        ErrorsSent();
        ~ErrorsSent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::ErrorsSent


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages : public ydk::Entity
{
    public:
        InputMessages();
        ~InputMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputMessages


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages : public ydk::Entity
{
    public:
        InputUpdateMessages();
        ~InputUpdateMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::InputUpdateMessages


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages : public ydk::Entity
{
    public:
        OutputMessages();
        ~OutputMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputMessages


class PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages : public ydk::Entity
{
    public:
        OutputUpdateMessages();
        ~OutputUpdateMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::Bgp::BgpTemplates::BgpTemplate::OutputUpdateMessages


class PerfMgmt::Threshold::CpuNode : public ydk::Entity
{
    public:
        CpuNode();
        ~CpuNode();

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

        class CpuNodeTemplates; //type: PerfMgmt::Threshold::CpuNode::CpuNodeTemplates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode::CpuNodeTemplates> cpu_node_templates;
        
}; // PerfMgmt::Threshold::CpuNode


class PerfMgmt::Threshold::CpuNode::CpuNodeTemplates : public ydk::Entity
{
    public:
        CpuNodeTemplates();
        ~CpuNodeTemplates();

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

        class CpuNodeTemplate; //type: PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate> > cpu_node_template;
        
}; // PerfMgmt::Threshold::CpuNode::CpuNodeTemplates


class PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate : public ydk::Entity
{
    public:
        CpuNodeTemplate();
        ~CpuNodeTemplate();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        class AverageCpuUsed; //type: PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed
        class NoProcesses; //type: PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed> average_cpu_used; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses> no_processes; // presence node
        
}; // PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate


class PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed : public ydk::Entity
{
    public:
        AverageCpuUsed();
        ~AverageCpuUsed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::AverageCpuUsed


class PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses : public ydk::Entity
{
    public:
        NoProcesses();
        ~NoProcesses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: int32
        ydk::YLeaf end_range_value; //type: int32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::CpuNode::CpuNodeTemplates::CpuNodeTemplate::NoProcesses


class PerfMgmt::Threshold::DataRateInterface : public ydk::Entity
{
    public:
        DataRateInterface();
        ~DataRateInterface();

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

        class DataRateInterfaceTemplates; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates> data_rate_interface_templates;
        
}; // PerfMgmt::Threshold::DataRateInterface


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates : public ydk::Entity
{
    public:
        DataRateInterfaceTemplates();
        ~DataRateInterfaceTemplates();

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

        class DataRateInterfaceTemplate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate> > data_rate_interface_template;
        
}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate : public ydk::Entity
{
    public:
        DataRateInterfaceTemplate();
        ~DataRateInterfaceTemplate();

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

        ydk::YLeaf template_name; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf reg_exp_group; //type: string
        ydk::YLeaf vrf_group; //type: string
        class InputDataRate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate
        class Bandwidth; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth
        class OutputPacketRate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate
        class InputPeakPkts; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts
        class OutputPeakRate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate
        class OutputDataRate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate
        class InputPacketRate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate
        class OutputPeakPkts; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts
        class InputPeakRate; //type: PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth> bandwidth; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate> input_data_rate; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate> input_packet_rate; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakPkts> input_peak_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPeakRate> input_peak_rate; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputDataRate> output_data_rate; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPacketRate> output_packet_rate; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakPkts> output_peak_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::OutputPeakRate> output_peak_rate; // presence node
        
}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::Bandwidth


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate : public ydk::Entity
{
    public:
        InputDataRate();
        ~InputDataRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputDataRate


class PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate : public ydk::Entity
{
    public:
        InputPacketRate();
        ~InputPacketRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operator_; //type: PmThresholdOp
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf end_range_value; //type: uint32
        ydk::YLeaf percent; //type: boolean
        ydk::YLeaf rearm_type; //type: PmThresholdRearm
        ydk::YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::DataRateInterface::DataRateInterfaceTemplates::DataRateInterfaceTemplate::InputPacketRate

class PmThresholdOp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf ne;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf le;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf ge;
        static const ydk::Enum::YLeaf rg;

};

class PmThresholdRearm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf window;
        static const ydk::Enum::YLeaf toggle;

};


}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_0_ */

