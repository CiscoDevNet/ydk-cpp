#ifndef _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_0_
#define _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_manageability_perfmgmt_cfg {

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

        class Resources; //type: PerfMgmt::Resources
        class Statistics; //type: PerfMgmt::Statistics
        class Enable; //type: PerfMgmt::Enable
        class RegExpGroups; //type: PerfMgmt::RegExpGroups
        class Threshold; //type: PerfMgmt::Threshold

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable> enable;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups> reg_exp_groups;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources> resources;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold> threshold;
        
}; // PerfMgmt


class PerfMgmt::Resources : public Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TftpResources; //type: PerfMgmt::Resources::TftpResources
        class DumpLocal; //type: PerfMgmt::Resources::DumpLocal
        class MemoryResources; //type: PerfMgmt::Resources::MemoryResources

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources::DumpLocal> dump_local;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources::MemoryResources> memory_resources;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Resources::TftpResources> tftp_resources; // presence node
        
}; // PerfMgmt::Resources


class PerfMgmt::Resources::TftpResources : public Entity
{
    public:
        TftpResources();
        ~TftpResources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_address; //type: string
        YLeaf directory; //type: string
        YLeaf vrf_name; //type: string

}; // PerfMgmt::Resources::TftpResources


class PerfMgmt::Resources::DumpLocal : public Entity
{
    public:
        DumpLocal();
        ~DumpLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // PerfMgmt::Resources::DumpLocal


class PerfMgmt::Resources::MemoryResources : public Entity
{
    public:
        MemoryResources();
        ~MemoryResources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_limit; //type: int32
        YLeaf min_reserved; //type: int32

}; // PerfMgmt::Resources::MemoryResources


class PerfMgmt::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::BasicCounterInterface> basic_counter_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::CpuNode> cpu_node;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::DataRateInterface> data_rate_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::GenericCounterInterface> generic_counter_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::LdpMpls> ldp_mpls;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::MemoryNode> memory_node;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::ProcessNode> process_node;
        
}; // PerfMgmt::Statistics


class PerfMgmt::Statistics::GenericCounterInterface : public Entity
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

        class Templates; //type: PerfMgmt::Statistics::GenericCounterInterface::Templates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::GenericCounterInterface::Templates> templates;
        
}; // PerfMgmt::Statistics::GenericCounterInterface


class PerfMgmt::Statistics::GenericCounterInterface::Templates : public Entity
{
    public:
        Templates();
        ~Templates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::GenericCounterInterface::Templates


class PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf reg_exp_group; //type: string
        YLeaf history_persistent; //type: empty
        YLeaf vrf_group; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_


class PerfMgmt::Statistics::ProcessNode : public Entity
{
    public:
        ProcessNode();
        ~ProcessNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Templates; //type: PerfMgmt::Statistics::ProcessNode::Templates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::ProcessNode::Templates> templates;
        
}; // PerfMgmt::Statistics::ProcessNode


class PerfMgmt::Statistics::ProcessNode::Templates : public Entity
{
    public:
        Templates();
        ~Templates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: PerfMgmt::Statistics::ProcessNode::Templates::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::ProcessNode::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::ProcessNode::Templates


class PerfMgmt::Statistics::ProcessNode::Templates::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf reg_exp_group; //type: string
        YLeaf history_persistent; //type: empty
        YLeaf vrf_group; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::ProcessNode::Templates::Template_


class PerfMgmt::Statistics::BasicCounterInterface : public Entity
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

        class Templates; //type: PerfMgmt::Statistics::BasicCounterInterface::Templates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::BasicCounterInterface::Templates> templates;
        
}; // PerfMgmt::Statistics::BasicCounterInterface


class PerfMgmt::Statistics::BasicCounterInterface::Templates : public Entity
{
    public:
        Templates();
        ~Templates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::BasicCounterInterface::Templates


class PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf reg_exp_group; //type: string
        YLeaf history_persistent; //type: empty
        YLeaf vrf_group; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_


class PerfMgmt::Statistics::Ospfv3Protocol : public Entity
{
    public:
        Ospfv3Protocol();
        ~Ospfv3Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Templates; //type: PerfMgmt::Statistics::Ospfv3Protocol::Templates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv3Protocol::Templates> templates;
        
}; // PerfMgmt::Statistics::Ospfv3Protocol


class PerfMgmt::Statistics::Ospfv3Protocol::Templates : public Entity
{
    public:
        Templates();
        ~Templates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::Ospfv3Protocol::Templates


class PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf reg_exp_group; //type: string
        YLeaf history_persistent; //type: empty
        YLeaf vrf_group; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_


class PerfMgmt::Statistics::CpuNode : public Entity
{
    public:
        CpuNode();
        ~CpuNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Templates; //type: PerfMgmt::Statistics::CpuNode::Templates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::CpuNode::Templates> templates;
        
}; // PerfMgmt::Statistics::CpuNode


class PerfMgmt::Statistics::CpuNode::Templates : public Entity
{
    public:
        Templates();
        ~Templates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: PerfMgmt::Statistics::CpuNode::Templates::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::CpuNode::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::CpuNode::Templates


class PerfMgmt::Statistics::CpuNode::Templates::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf reg_exp_group; //type: string
        YLeaf history_persistent; //type: empty
        YLeaf vrf_group; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::CpuNode::Templates::Template_


class PerfMgmt::Statistics::DataRateInterface : public Entity
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

        class Templates; //type: PerfMgmt::Statistics::DataRateInterface::Templates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::DataRateInterface::Templates> templates;
        
}; // PerfMgmt::Statistics::DataRateInterface


class PerfMgmt::Statistics::DataRateInterface::Templates : public Entity
{
    public:
        Templates();
        ~Templates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: PerfMgmt::Statistics::DataRateInterface::Templates::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::DataRateInterface::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::DataRateInterface::Templates


class PerfMgmt::Statistics::DataRateInterface::Templates::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf reg_exp_group; //type: string
        YLeaf history_persistent; //type: empty
        YLeaf vrf_group; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::DataRateInterface::Templates::Template_


class PerfMgmt::Statistics::MemoryNode : public Entity
{
    public:
        MemoryNode();
        ~MemoryNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Templates; //type: PerfMgmt::Statistics::MemoryNode::Templates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::MemoryNode::Templates> templates;
        
}; // PerfMgmt::Statistics::MemoryNode


class PerfMgmt::Statistics::MemoryNode::Templates : public Entity
{
    public:
        Templates();
        ~Templates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: PerfMgmt::Statistics::MemoryNode::Templates::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::MemoryNode::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::MemoryNode::Templates


class PerfMgmt::Statistics::MemoryNode::Templates::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf reg_exp_group; //type: string
        YLeaf history_persistent; //type: empty
        YLeaf vrf_group; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::MemoryNode::Templates::Template_


class PerfMgmt::Statistics::LdpMpls : public Entity
{
    public:
        LdpMpls();
        ~LdpMpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Templates; //type: PerfMgmt::Statistics::LdpMpls::Templates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::LdpMpls::Templates> templates;
        
}; // PerfMgmt::Statistics::LdpMpls


class PerfMgmt::Statistics::LdpMpls::Templates : public Entity
{
    public:
        Templates();
        ~Templates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: PerfMgmt::Statistics::LdpMpls::Templates::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::LdpMpls::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::LdpMpls::Templates


class PerfMgmt::Statistics::LdpMpls::Templates::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf reg_exp_group; //type: string
        YLeaf history_persistent; //type: empty
        YLeaf vrf_group; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::LdpMpls::Templates::Template_


class PerfMgmt::Statistics::Bgp : public Entity
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

        class Templates; //type: PerfMgmt::Statistics::Bgp::Templates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Bgp::Templates> templates;
        
}; // PerfMgmt::Statistics::Bgp


class PerfMgmt::Statistics::Bgp::Templates : public Entity
{
    public:
        Templates();
        ~Templates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: PerfMgmt::Statistics::Bgp::Templates::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Bgp::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::Bgp::Templates


class PerfMgmt::Statistics::Bgp::Templates::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf reg_exp_group; //type: string
        YLeaf history_persistent; //type: empty
        YLeaf vrf_group; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::Bgp::Templates::Template_


class PerfMgmt::Statistics::Ospfv2Protocol : public Entity
{
    public:
        Ospfv2Protocol();
        ~Ospfv2Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Templates; //type: PerfMgmt::Statistics::Ospfv2Protocol::Templates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv2Protocol::Templates> templates;
        
}; // PerfMgmt::Statistics::Ospfv2Protocol


class PerfMgmt::Statistics::Ospfv2Protocol::Templates : public Entity
{
    public:
        Templates();
        ~Templates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Template_; //type: PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_> > template_;
        
}; // PerfMgmt::Statistics::Ospfv2Protocol::Templates


class PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf reg_exp_group; //type: string
        YLeaf history_persistent; //type: empty
        YLeaf vrf_group; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf sample_size; //type: uint32

}; // PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_


class PerfMgmt::Enable : public Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Threshold; //type: PerfMgmt::Enable::Threshold
        class Statistics; //type: PerfMgmt::Enable::Statistics
        class MonitorEnable; //type: PerfMgmt::Enable::MonitorEnable

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable> monitor_enable;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold> threshold;
        
}; // PerfMgmt::Enable


class PerfMgmt::Enable::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::BasicCounterInterface> basic_counter_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode> cpu_node;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::DataRateInterface> data_rate_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::GenericCounterInterface> generic_counter_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::LdpMpls> ldp_mpls;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode> memory_node;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode> process_node;
        
}; // PerfMgmt::Enable::Threshold


class PerfMgmt::Enable::Threshold::Ospfv3Protocol : public Entity
{
    public:
        Ospfv3Protocol();
        ~Ospfv3Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::Ospfv3Protocol


class PerfMgmt::Enable::Threshold::Bgp : public Entity
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

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::Bgp


class PerfMgmt::Enable::Threshold::DataRateInterface : public Entity
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

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::DataRateInterface


class PerfMgmt::Enable::Threshold::Ospfv2Protocol : public Entity
{
    public:
        Ospfv2Protocol();
        ~Ospfv2Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::Ospfv2Protocol


class PerfMgmt::Enable::Threshold::MemoryNode : public Entity
{
    public:
        MemoryNode();
        ~MemoryNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nodes; //type: PerfMgmt::Enable::Threshold::MemoryNode::Nodes
        class NodeAll; //type: PerfMgmt::Enable::Threshold::MemoryNode::NodeAll

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode::NodeAll> node_all;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode::Nodes> nodes;
        
}; // PerfMgmt::Enable::Threshold::MemoryNode


class PerfMgmt::Enable::Threshold::MemoryNode::Nodes : public Entity
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

        class Node; //type: PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::Threshold::MemoryNode::Nodes


class PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node : public Entity
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
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node


class PerfMgmt::Enable::Threshold::MemoryNode::NodeAll : public Entity
{
    public:
        NodeAll();
        ~NodeAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::MemoryNode::NodeAll


class PerfMgmt::Enable::Threshold::GenericCounterInterface : public Entity
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

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::GenericCounterInterface


class PerfMgmt::Enable::Threshold::CpuNode : public Entity
{
    public:
        CpuNode();
        ~CpuNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nodes; //type: PerfMgmt::Enable::Threshold::CpuNode::Nodes
        class NodeAll; //type: PerfMgmt::Enable::Threshold::CpuNode::NodeAll

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode::NodeAll> node_all;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode::Nodes> nodes;
        
}; // PerfMgmt::Enable::Threshold::CpuNode


class PerfMgmt::Enable::Threshold::CpuNode::Nodes : public Entity
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

        class Node; //type: PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::Threshold::CpuNode::Nodes


class PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node : public Entity
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
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node


class PerfMgmt::Enable::Threshold::CpuNode::NodeAll : public Entity
{
    public:
        NodeAll();
        ~NodeAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::CpuNode::NodeAll


class PerfMgmt::Enable::Threshold::LdpMpls : public Entity
{
    public:
        LdpMpls();
        ~LdpMpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::LdpMpls


class PerfMgmt::Enable::Threshold::ProcessNode : public Entity
{
    public:
        ProcessNode();
        ~ProcessNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nodes; //type: PerfMgmt::Enable::Threshold::ProcessNode::Nodes
        class NodeAll; //type: PerfMgmt::Enable::Threshold::ProcessNode::NodeAll

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode::NodeAll> node_all;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode::Nodes> nodes;
        
}; // PerfMgmt::Enable::Threshold::ProcessNode


class PerfMgmt::Enable::Threshold::ProcessNode::Nodes : public Entity
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

        class Node; //type: PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::Threshold::ProcessNode::Nodes


class PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node : public Entity
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
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node


class PerfMgmt::Enable::Threshold::ProcessNode::NodeAll : public Entity
{
    public:
        NodeAll();
        ~NodeAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::ProcessNode::NodeAll


class PerfMgmt::Enable::Threshold::BasicCounterInterface : public Entity
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

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Threshold::BasicCounterInterface


class PerfMgmt::Enable::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::BasicCounterInterface> basic_counter_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode> cpu_node;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::DataRateInterface> data_rate_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::GenericCounterInterface> generic_counter_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::LdpMpls> ldp_mpls;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode> memory_node;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode> process_node;
        
}; // PerfMgmt::Enable::Statistics


class PerfMgmt::Enable::Statistics::GenericCounterInterface : public Entity
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

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::GenericCounterInterface


class PerfMgmt::Enable::Statistics::Bgp : public Entity
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

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::Bgp


class PerfMgmt::Enable::Statistics::Ospfv2Protocol : public Entity
{
    public:
        Ospfv2Protocol();
        ~Ospfv2Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::Ospfv2Protocol


class PerfMgmt::Enable::Statistics::Ospfv3Protocol : public Entity
{
    public:
        Ospfv3Protocol();
        ~Ospfv3Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::Ospfv3Protocol


class PerfMgmt::Enable::Statistics::CpuNode : public Entity
{
    public:
        CpuNode();
        ~CpuNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeAll; //type: PerfMgmt::Enable::Statistics::CpuNode::NodeAll
        class Nodes; //type: PerfMgmt::Enable::Statistics::CpuNode::Nodes

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode::NodeAll> node_all;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode::Nodes> nodes;
        
}; // PerfMgmt::Enable::Statistics::CpuNode


class PerfMgmt::Enable::Statistics::CpuNode::NodeAll : public Entity
{
    public:
        NodeAll();
        ~NodeAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::CpuNode::NodeAll


class PerfMgmt::Enable::Statistics::CpuNode::Nodes : public Entity
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

        class Node; //type: PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::Statistics::CpuNode::Nodes


class PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node : public Entity
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
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node


class PerfMgmt::Enable::Statistics::BasicCounterInterface : public Entity
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

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::BasicCounterInterface


class PerfMgmt::Enable::Statistics::ProcessNode : public Entity
{
    public:
        ProcessNode();
        ~ProcessNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeAll; //type: PerfMgmt::Enable::Statistics::ProcessNode::NodeAll
        class Nodes; //type: PerfMgmt::Enable::Statistics::ProcessNode::Nodes

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode::NodeAll> node_all;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode::Nodes> nodes;
        
}; // PerfMgmt::Enable::Statistics::ProcessNode


class PerfMgmt::Enable::Statistics::ProcessNode::NodeAll : public Entity
{
    public:
        NodeAll();
        ~NodeAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::ProcessNode::NodeAll


class PerfMgmt::Enable::Statistics::ProcessNode::Nodes : public Entity
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

        class Node; //type: PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::Statistics::ProcessNode::Nodes


class PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node : public Entity
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
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node


class PerfMgmt::Enable::Statistics::DataRateInterface : public Entity
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

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::DataRateInterface


class PerfMgmt::Enable::Statistics::MemoryNode : public Entity
{
    public:
        MemoryNode();
        ~MemoryNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeAll; //type: PerfMgmt::Enable::Statistics::MemoryNode::NodeAll
        class Nodes; //type: PerfMgmt::Enable::Statistics::MemoryNode::Nodes

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode::NodeAll> node_all;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode::Nodes> nodes;
        
}; // PerfMgmt::Enable::Statistics::MemoryNode


class PerfMgmt::Enable::Statistics::MemoryNode::NodeAll : public Entity
{
    public:
        NodeAll();
        ~NodeAll();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::MemoryNode::NodeAll


class PerfMgmt::Enable::Statistics::MemoryNode::Nodes : public Entity
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

        class Node; //type: PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::Statistics::MemoryNode::Nodes


class PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node : public Entity
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
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node


class PerfMgmt::Enable::Statistics::LdpMpls : public Entity
{
    public:
        LdpMpls();
        ~LdpMpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::Statistics::LdpMpls


class PerfMgmt::Enable::MonitorEnable : public Entity
{
    public:
        MonitorEnable();
        ~MonitorEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::BasicCounters> basic_counters;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Cpu> cpu;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::DataRates> data_rates;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::GenericCounters> generic_counters;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::LdpMpls> ldp_mpls;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Memory> memory;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process> process;
        
}; // PerfMgmt::Enable::MonitorEnable


class PerfMgmt::Enable::MonitorEnable::LdpMpls : public Entity
{
    public:
        LdpMpls();
        ~LdpMpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sessions; //type: PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions> sessions;
        
}; // PerfMgmt::Enable::MonitorEnable::LdpMpls


class PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Session; //type: PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session> > session;
        
}; // PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions


class PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session; //type: string
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session


class PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol : public Entity
{
    public:
        Ospfv3Protocol();
        ~Ospfv3Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OspfInstances; //type: PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances> ospf_instances;
        
}; // PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol


class PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances : public Entity
{
    public:
        OspfInstances();
        ~OspfInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OspfInstance; //type: PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance> > ospf_instance;
        
}; // PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances


class PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance : public Entity
{
    public:
        OspfInstance();
        ~OspfInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: string
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance


class PerfMgmt::Enable::MonitorEnable::GenericCounters : public Entity
{
    public:
        GenericCounters();
        ~GenericCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interfaces; //type: PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces> interfaces;
        
}; // PerfMgmt::Enable::MonitorEnable::GenericCounters


class PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface> > interface;
        
}; // PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces


class PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface : public Entity
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

        YLeaf interface_name; //type: string
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface


class PerfMgmt::Enable::MonitorEnable::Process : public Entity
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

        class ProcessNodes; //type: PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes> process_nodes;
        
}; // PerfMgmt::Enable::MonitorEnable::Process


class PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes : public Entity
{
    public:
        ProcessNodes();
        ~ProcessNodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProcessNode; //type: PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode> > process_node;
        
}; // PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes


class PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode : public Entity
{
    public:
        ProcessNode();
        ~ProcessNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: string
        class Pids; //type: PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids> pids;
        
}; // PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode


class PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids : public Entity
{
    public:
        Pids();
        ~Pids();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pid; //type: PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid> > pid;
        
}; // PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids


class PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid : public Entity
{
    public:
        Pid();
        ~Pid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pid; //type: uint32
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid


class PerfMgmt::Enable::MonitorEnable::BasicCounters : public Entity
{
    public:
        BasicCounters();
        ~BasicCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interfaces; //type: PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces> interfaces;
        
}; // PerfMgmt::Enable::MonitorEnable::BasicCounters


class PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface> > interface;
        
}; // PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces


class PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface : public Entity
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

        YLeaf interface_name; //type: string
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface


class PerfMgmt::Enable::MonitorEnable::Memory : public Entity
{
    public:
        Memory();
        ~Memory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nodes; //type: PerfMgmt::Enable::MonitorEnable::Memory::Nodes

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Memory::Nodes> nodes;
        
}; // PerfMgmt::Enable::MonitorEnable::Memory


class PerfMgmt::Enable::MonitorEnable::Memory::Nodes : public Entity
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

        class Node; //type: PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::MonitorEnable::Memory::Nodes


class PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node : public Entity
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
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node


class PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol : public Entity
{
    public:
        Ospfv2Protocol();
        ~Ospfv2Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OspfInstances; //type: PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances> ospf_instances;
        
}; // PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol


class PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances : public Entity
{
    public:
        OspfInstances();
        ~OspfInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OspfInstance; //type: PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance> > ospf_instance;
        
}; // PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances


class PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance : public Entity
{
    public:
        OspfInstance();
        ~OspfInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: string
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance


class PerfMgmt::Enable::MonitorEnable::Cpu : public Entity
{
    public:
        Cpu();
        ~Cpu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nodes; //type: PerfMgmt::Enable::MonitorEnable::Cpu::Nodes

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Cpu::Nodes> nodes;
        
}; // PerfMgmt::Enable::MonitorEnable::Cpu


class PerfMgmt::Enable::MonitorEnable::Cpu::Nodes : public Entity
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

        class Node; //type: PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node> > node;
        
}; // PerfMgmt::Enable::MonitorEnable::Cpu::Nodes


class PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node : public Entity
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
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node


class PerfMgmt::Enable::MonitorEnable::Bgp : public Entity
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

        class Neighbors; //type: PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors> neighbors;
        
}; // PerfMgmt::Enable::MonitorEnable::Bgp


class PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor> > neighbor;
        
}; // PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors


class PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_address; //type: string
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor


class PerfMgmt::Enable::MonitorEnable::DataRates : public Entity
{
    public:
        DataRates();
        ~DataRates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interfaces; //type: PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces> interfaces;
        
}; // PerfMgmt::Enable::MonitorEnable::DataRates


class PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface> > interface;
        
}; // PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces


class PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface : public Entity
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

        YLeaf interface_name; //type: string
        YLeaf template_name; //type: string

}; // PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface


class PerfMgmt::RegExpGroups : public Entity
{
    public:
        RegExpGroups();
        ~RegExpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RegExpGroup; //type: PerfMgmt::RegExpGroups::RegExpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups::RegExpGroup> > reg_exp_group;
        
}; // PerfMgmt::RegExpGroups


class PerfMgmt::RegExpGroups::RegExpGroup : public Entity
{
    public:
        RegExpGroup();
        ~RegExpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reg_exp_group_name; //type: string
        class RegExps; //type: PerfMgmt::RegExpGroups::RegExpGroup::RegExps

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups::RegExpGroup::RegExps> reg_exps;
        
}; // PerfMgmt::RegExpGroups::RegExpGroup


class PerfMgmt::RegExpGroups::RegExpGroup::RegExps : public Entity
{
    public:
        RegExps();
        ~RegExps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RegExp; //type: PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp> > reg_exp;
        
}; // PerfMgmt::RegExpGroups::RegExpGroup::RegExps


class PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp : public Entity
{
    public:
        RegExp();
        ~RegExp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reg_exp_index; //type: uint32
        YLeaf reg_exp_string; //type: string

}; // PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp


class PerfMgmt::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::BasicCounterInterface> basic_counter_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::CpuNode> cpu_node;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::DataRateInterface> data_rate_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface> generic_counter_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls> ldp_mpls;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::MemoryNode> memory_node;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv2Protocol> ospfv2_protocol;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::Ospfv3Protocol> ospfv3_protocol;
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::ProcessNode> process_node;
        
}; // PerfMgmt::Threshold


class PerfMgmt::Threshold::GenericCounterInterface : public Entity
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

        class GenericCounterInterfaceTemplates; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates> generic_counter_interface_templates;
        
}; // PerfMgmt::Threshold::GenericCounterInterface


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates : public Entity
{
    public:
        GenericCounterInterfaceTemplates();
        ~GenericCounterInterfaceTemplates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GenericCounterInterfaceTemplate; //type: PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate> > generic_counter_interface_template;
        
}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate : public Entity
{
    public:
        GenericCounterInterfaceTemplate();
        ~GenericCounterInterfaceTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf sample_interval; //type: uint32
        YLeaf reg_exp_group; //type: string
        YLeaf vrf_group; //type: string
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

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts> in_broadcast_pkts; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts> in_multicast_pkts; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets> in_octets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets> in_packets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts> in_ucast_pkts; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc> input_crc; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame> input_frame; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun> input_overrun; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops> input_queue_drops; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops> input_total_drops; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors> input_total_errors; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto> input_unknown_proto; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts> out_broadcast_pkts; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts> out_multicast_pkts; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets> out_octets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets> out_packets; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts> out_ucast_pkts; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops> output_total_drops; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors> output_total_errors; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun> output_underrun; // presence node
        
}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets : public Entity
{
    public:
        InOctets();
        ~InOctets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts : public Entity
{
    public:
        InUcastPkts();
        ~InUcastPkts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts : public Entity
{
    public:
        OutUcastPkts();
        ~OutUcastPkts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts : public Entity
{
    public:
        OutBroadcastPkts();
        ~OutBroadcastPkts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts : public Entity
{
    public:
        OutMulticastPkts();
        ~OutMulticastPkts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun : public Entity
{
    public:
        InputOverrun();
        ~InputOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets : public Entity
{
    public:
        OutOctets();
        ~OutOctets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun : public Entity
{
    public:
        OutputUnderrun();
        ~OutputUnderrun();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors : public Entity
{
    public:
        InputTotalErrors();
        ~InputTotalErrors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops : public Entity
{
    public:
        OutputTotalDrops();
        ~OutputTotalDrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc : public Entity
{
    public:
        InputCrc();
        ~InputCrc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts : public Entity
{
    public:
        InBroadcastPkts();
        ~InBroadcastPkts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts : public Entity
{
    public:
        InMulticastPkts();
        ~InMulticastPkts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets : public Entity
{
    public:
        OutPackets();
        ~OutPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors : public Entity
{
    public:
        OutputTotalErrors();
        ~OutputTotalErrors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets : public Entity
{
    public:
        InPackets();
        ~InPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto : public Entity
{
    public:
        InputUnknownProto();
        ~InputUnknownProto();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops : public Entity
{
    public:
        InputQueueDrops();
        ~InputQueueDrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops : public Entity
{
    public:
        InputTotalDrops();
        ~InputTotalDrops();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops


class PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame : public Entity
{
    public:
        InputFrame();
        ~InputFrame();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame


class PerfMgmt::Threshold::LdpMpls : public Entity
{
    public:
        LdpMpls();
        ~LdpMpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LdpMplsTemplates; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates> ldp_mpls_templates;
        
}; // PerfMgmt::Threshold::LdpMpls


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates : public Entity
{
    public:
        LdpMplsTemplates();
        ~LdpMplsTemplates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LdpMplsTemplate; //type: PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate> > ldp_mpls_template;
        
}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate : public Entity
{
    public:
        LdpMplsTemplate();
        ~LdpMplsTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf template_name; //type: string
        YLeaf sample_interval; //type: uint32
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

        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd> address_msgs_rcvd; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent> address_msgs_sent; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd> address_withdraw_msgs_rcvd; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent> address_withdraw_msgs_sent; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd> init_msgs_rcvd; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent> init_msgs_sent; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd> keepalive_msgs_rcvd; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent> keepalive_msgs_sent; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd> label_mapping_msgs_rcvd; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent> label_mapping_msgs_sent; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd> label_release_msgs_rcvd; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent> label_release_msgs_sent; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd> label_withdraw_msgs_rcvd; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent> label_withdraw_msgs_sent; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd> notification_msgs_rcvd; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent> notification_msgs_sent; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd> total_msgs_rcvd; // presence node
        std::shared_ptr<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent> total_msgs_sent; // presence node
        
}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd : public Entity
{
    public:
        AddressWithdrawMsgsRcvd();
        ~AddressWithdrawMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd : public Entity
{
    public:
        LabelWithdrawMsgsRcvd();
        ~LabelWithdrawMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent : public Entity
{
    public:
        AddressWithdrawMsgsSent();
        ~AddressWithdrawMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent : public Entity
{
    public:
        LabelWithdrawMsgsSent();
        ~LabelWithdrawMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd : public Entity
{
    public:
        NotificationMsgsRcvd();
        ~NotificationMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd : public Entity
{
    public:
        TotalMsgsRcvd();
        ~TotalMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: uint32
        YLeaf end_range_value; //type: uint32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent : public Entity
{
    public:
        NotificationMsgsSent();
        ~NotificationMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent : public Entity
{
    public:
        TotalMsgsSent();
        ~TotalMsgsSent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent


class PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd : public Entity
{
    public:
        LabelReleaseMsgsRcvd();
        ~LabelReleaseMsgsRcvd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: PmThresholdOpEnum
        YLeaf value_; //type: int32
        YLeaf end_range_value; //type: int32
        YLeaf percent; //type: boolean
        YLeaf rearm_type; //type: PmThresholdRearmEnum
        YLeaf rearm_window; //type: uint32

}; // PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd

class PmThresholdOpEnum : public Enum
{
    public:
        static const Enum::YLeaf eq;
        static const Enum::YLeaf ne;
        static const Enum::YLeaf lt;
        static const Enum::YLeaf le;
        static const Enum::YLeaf gt;
        static const Enum::YLeaf ge;
        static const Enum::YLeaf rg;

};

class PmThresholdRearmEnum : public Enum
{
    public:
        static const Enum::YLeaf always;
        static const Enum::YLeaf window;
        static const Enum::YLeaf toggle;

};


}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_PERFMGMT_CFG_0_ */

