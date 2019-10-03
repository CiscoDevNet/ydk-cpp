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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources> resources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable> enable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups> reg_exp_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold> threshold;
        
}; // PerfMgmt


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources::TftpResources> tftp_resources; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources::DumpLocal> dump_local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources::MemoryResources> memory_resources;
        
}; // PerfMgmt::Resources


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

        ydk::YLeaf max_limit; //type: uint32
        ydk::YLeaf min_reserved; //type: uint32

}; // PerfMgmt::Resources::MemoryResources


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::GenericCounterInterface> generic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::ProcessNode> process_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::BasicCounterInterface> basic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::CpuNode> cpu_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::DataRateInterface> data_rate_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::MemoryNode> memory_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::LdpMpls> ldp_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv2Protocol> ospfv2_protocol;
        
}; // PerfMgmt::Statistics


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

        class Template; //type: PerfMgmt::Statistics::GenericCounterInterface::Templates::Template

        ydk::YList template_;
        
}; // PerfMgmt::Statistics::GenericCounterInterface::Templates


class PerfMgmt::Statistics::GenericCounterInterface::Templates::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // PerfMgmt::Statistics::GenericCounterInterface::Templates::Template


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

        class Template; //type: PerfMgmt::Statistics::ProcessNode::Templates::Template

        ydk::YList template_;
        
}; // PerfMgmt::Statistics::ProcessNode::Templates


class PerfMgmt::Statistics::ProcessNode::Templates::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // PerfMgmt::Statistics::ProcessNode::Templates::Template


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

        class Template; //type: PerfMgmt::Statistics::BasicCounterInterface::Templates::Template

        ydk::YList template_;
        
}; // PerfMgmt::Statistics::BasicCounterInterface::Templates


class PerfMgmt::Statistics::BasicCounterInterface::Templates::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // PerfMgmt::Statistics::BasicCounterInterface::Templates::Template


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

        class Template; //type: PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template

        ydk::YList template_;
        
}; // PerfMgmt::Statistics::Ospfv3Protocol::Templates


class PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template


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

        class Template; //type: PerfMgmt::Statistics::CpuNode::Templates::Template

        ydk::YList template_;
        
}; // PerfMgmt::Statistics::CpuNode::Templates


class PerfMgmt::Statistics::CpuNode::Templates::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // PerfMgmt::Statistics::CpuNode::Templates::Template


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

        class Template; //type: PerfMgmt::Statistics::DataRateInterface::Templates::Template

        ydk::YList template_;
        
}; // PerfMgmt::Statistics::DataRateInterface::Templates


class PerfMgmt::Statistics::DataRateInterface::Templates::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // PerfMgmt::Statistics::DataRateInterface::Templates::Template


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

        class Template; //type: PerfMgmt::Statistics::MemoryNode::Templates::Template

        ydk::YList template_;
        
}; // PerfMgmt::Statistics::MemoryNode::Templates


class PerfMgmt::Statistics::MemoryNode::Templates::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // PerfMgmt::Statistics::MemoryNode::Templates::Template


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

        class Template; //type: PerfMgmt::Statistics::LdpMpls::Templates::Template

        ydk::YList template_;
        
}; // PerfMgmt::Statistics::LdpMpls::Templates


class PerfMgmt::Statistics::LdpMpls::Templates::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // PerfMgmt::Statistics::LdpMpls::Templates::Template


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

        class Template; //type: PerfMgmt::Statistics::Bgp::Templates::Template

        ydk::YList template_;
        
}; // PerfMgmt::Statistics::Bgp::Templates


class PerfMgmt::Statistics::Bgp::Templates::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // PerfMgmt::Statistics::Bgp::Templates::Template


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

        class Template; //type: PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template

        ydk::YList template_;
        
}; // PerfMgmt::Statistics::Ospfv2Protocol::Templates


class PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

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

}; // PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold> threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable> monitor_enable;
        
}; // PerfMgmt::Enable


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::DataRateInterface> data_rate_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode> memory_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::GenericCounterInterface> generic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode> cpu_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::LdpMpls> ldp_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode> process_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::BasicCounterInterface> basic_counter_interface;
        
}; // PerfMgmt::Enable::Threshold


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode::NodeAll> node_all;
        
}; // PerfMgmt::Enable::Threshold::MemoryNode


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

        ydk::YList node;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode::NodeAll> node_all;
        
}; // PerfMgmt::Enable::Threshold::CpuNode


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

        ydk::YList node;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode::Nodes> nodes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode::NodeAll> node_all;
        
}; // PerfMgmt::Enable::Threshold::ProcessNode


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

        ydk::YList node;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::GenericCounterInterface> generic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode> cpu_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::BasicCounterInterface> basic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode> process_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::DataRateInterface> data_rate_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode> memory_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::LdpMpls> ldp_mpls;
        
}; // PerfMgmt::Enable::Statistics


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

        ydk::YList node;
        
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

        ydk::YList node;
        
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

        ydk::YList node;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::LdpMpls> ldp_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::GenericCounters> generic_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process> process;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::BasicCounters> basic_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Memory> memory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Cpu> cpu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::DataRates> data_rates;
        
}; // PerfMgmt::Enable::MonitorEnable


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

        ydk::YList session;
        
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

        ydk::YList ospf_instance;
        
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

        ydk::YList interface;
        
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

        ydk::YList process_node;
        
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

        ydk::YList pid;
        
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

        ydk::YList interface;
        
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

        ydk::YList node;
        
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

        ydk::YList ospf_instance;
        
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

        ydk::YList node;
        
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

        ydk::YList neighbor;
        
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

        ydk::YList interface;
        
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

        ydk::YList reg_exp_group;
        
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

        ydk::YList reg_exp;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface> generic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls> ldp_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface> basic_counter_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode> cpu_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface> data_rate_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode> process_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode> memory_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol> ospfv3_protocol;
        
}; // PerfMgmt::Threshold


class PerfMgmt::Threshold::GenericCounterInterface : public ydk::Entity
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

        class GenericCounterInterfaceTemplates; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates> generic_counter_interface_templates;
        
}; // PerfMgmt::Threshold::GenericCounterInterface


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates : public ydk::Entity
{
    public:
        GenericCounterInterfaceTemplates();
        ~GenericCounterInterfaceTemplates();

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

        class GenericCounterInterfaceTemplate; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate

        ydk::YList generic_counter_interface_template;
        
}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate : public ydk::Entity
{
    public:
        GenericCounterInterfaceTemplate();
        ~GenericCounterInterfaceTemplate();

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
        class InOctets; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets
        class InUcastPkts; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts
        class OutUcastPkts; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts
        class OutBroadcastPkts; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts
        class OutMulticastPkts; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts
        class InputOverrun; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun
        class OutOctets; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets
        class OutputUnderrun; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun
        class InputTotalErrors; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors
        class OutputTotalDrops; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops
        class InputCrc; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc
        class InBroadcastPkts; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts
        class InMulticastPkts; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts
        class OutPackets; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets
        class OutputTotalErrors; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors
        class InPackets; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets
        class InputUnknownProto; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto
        class InputQueueDrops; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops
        class InputTotalDrops; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops
        class InputFrame; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets> in_octets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts> in_ucast_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts> out_ucast_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts> out_broadcast_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts> out_multicast_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun> input_overrun; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets> out_octets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun> output_underrun; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors> input_total_errors; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops> output_total_drops; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc> input_crc; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts> in_broadcast_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts> in_multicast_pkts; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets> out_packets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors> output_total_errors; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets> in_packets; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto> input_unknown_proto; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops> input_queue_drops; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops> input_total_drops; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame> input_frame; // presence node
        
}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets : public ydk::Entity
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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts : public ydk::Entity
{
    public:
        InUcastPkts();
        ~InUcastPkts();

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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts : public ydk::Entity
{
    public:
        OutUcastPkts();
        ~OutUcastPkts();

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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts : public ydk::Entity
{
    public:
        OutBroadcastPkts();
        ~OutBroadcastPkts();

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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts : public ydk::Entity
{
    public:
        OutMulticastPkts();
        ~OutMulticastPkts();

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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun : public ydk::Entity
{
    public:
        InputOverrun();
        ~InputOverrun();

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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets : public ydk::Entity
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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun : public ydk::Entity
{
    public:
        OutputUnderrun();
        ~OutputUnderrun();

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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors : public ydk::Entity
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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops : public ydk::Entity
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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc : public ydk::Entity
{
    public:
        InputCrc();
        ~InputCrc();

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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts : public ydk::Entity
{
    public:
        InBroadcastPkts();
        ~InBroadcastPkts();

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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts : public ydk::Entity
{
    public:
        InMulticastPkts();
        ~InMulticastPkts();

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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets : public ydk::Entity
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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors : public ydk::Entity
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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets : public ydk::Entity
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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto : public ydk::Entity
{
    public:
        InputUnknownProto();
        ~InputUnknownProto();

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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops : public ydk::Entity
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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops : public ydk::Entity
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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame : public ydk::Entity
{
    public:
        InputFrame();
        ~InputFrame();

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

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame


class PerfMgmt::Threshold::LdpMpls : public ydk::Entity
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

        class LdpMplsTemplates; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates> ldp_mpls_templates;
        
}; // PerfMgmt::Threshold::LdpMpls


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates : public ydk::Entity
{
    public:
        LdpMplsTemplates();
        ~LdpMplsTemplates();

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

        class LdpMplsTemplate; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate

        ydk::YList ldp_mpls_template;
        
}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate : public ydk::Entity
{
    public:
        LdpMplsTemplate();
        ~LdpMplsTemplate();

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
        class AddressWithdrawMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd
        class LabelWithdrawMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd
        class AddressWithdrawMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent
        class LabelWithdrawMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent
        class NotificationMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd
        class TotalMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd
        class NotificationMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent
        class TotalMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent
        class LabelReleaseMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd
        class InitMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd
        class LabelReleaseMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent
        class InitMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent
        class LabelMappingMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd
        class KeepaliveMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd
        class LabelMappingMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent
        class KeepaliveMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent
        class AddressMsgsRcvd; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd
        class AddressMsgsSent; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd> address_withdraw_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd> label_withdraw_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent> address_withdraw_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent> label_withdraw_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd> notification_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd> total_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent> notification_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent> total_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd> label_release_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd> init_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent> label_release_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent> init_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd> label_mapping_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd> keepalive_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent> label_mapping_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent> keepalive_msgs_sent; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd> address_msgs_rcvd; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent> address_msgs_sent; // presence node
        
}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd : public ydk::Entity
{
    public:
        AddressWithdrawMsgsRcvd();
        ~AddressWithdrawMsgsRcvd();

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

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd : public ydk::Entity
{
    public:
        LabelWithdrawMsgsRcvd();
        ~LabelWithdrawMsgsRcvd();

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

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent : public ydk::Entity
{
    public:
        AddressWithdrawMsgsSent();
        ~AddressWithdrawMsgsSent();

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

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent : public ydk::Entity
{
    public:
        LabelWithdrawMsgsSent();
        ~LabelWithdrawMsgsSent();

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

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd : public ydk::Entity
{
    public:
        NotificationMsgsRcvd();
        ~NotificationMsgsRcvd();

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

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd : public ydk::Entity
{
    public:
        TotalMsgsRcvd();
        ~TotalMsgsRcvd();

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

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent : public ydk::Entity
{
    public:
        NotificationMsgsSent();
        ~NotificationMsgsSent();

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

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent : public ydk::Entity
{
    public:
        TotalMsgsSent();
        ~TotalMsgsSent();

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

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd : public ydk::Entity
{
    public:
        LabelReleaseMsgsRcvd();
        ~LabelReleaseMsgsRcvd();

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

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd

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

        static int get_enum_value(const std::string & name) {
            if (name == "eq") return 1;
            if (name == "ne") return 2;
            if (name == "lt") return 3;
            if (name == "le") return 4;
            if (name == "gt") return 5;
            if (name == "ge") return 6;
            if (name == "rg") return 7;
            return -1;
        }
};

class PmThresholdRearm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf window;
        static const ydk::Enum::YLeaf toggle;

        static int get_enum_value(const std::string & name) {
            if (name == "always") return 0;
            if (name == "window") return 1;
            if (name == "toggle") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_0_ */

