#ifndef _CISCO_IOS_XR_CONFIG_MDA_CFG_
#define _CISCO_IOS_XR_CONFIG_MDA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_config_mda_cfg {

class ActiveNodes : public Entity
{
    public:
        ActiveNodes();
        ~ActiveNodes();

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

        class ActiveNode; //type: ActiveNodes::ActiveNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode> > active_node;
        
}; // ActiveNodes


class ActiveNodes::ActiveNode : public Entity
{
    public:
        ActiveNode();
        ~ActiveNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Ltrace; //type: ActiveNodes::ActiveNode::Ltrace
        class LptsLocal; //type: ActiveNodes::ActiveNode::LptsLocal
        class SsrpGroup; //type: ActiveNodes::ActiveNode::SsrpGroup
        class CiscoIosXrWatchdCfg_WatchdogNodeThreshold; //type: ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold
        class CiscoIosXrWdCfg_WatchdogNodeThreshold; //type: ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold> cisco_ios_xr_watchd_cfg_watchdog_node_threshold;
        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold> cisco_ios_xr_wd_cfg_watchdog_node_threshold;
        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal> lpts_local;
        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::Ltrace> ltrace;
        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::SsrpGroup> ssrp_group;
        
}; // ActiveNodes::ActiveNode


class ActiveNodes::ActiveNode::Ltrace : public Entity
{
    public:
        Ltrace();
        ~Ltrace();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AllocationParams; //type: ActiveNodes::ActiveNode::Ltrace::AllocationParams

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::Ltrace::AllocationParams> allocation_params;
        
}; // ActiveNodes::ActiveNode::Ltrace


class ActiveNodes::ActiveNode::Ltrace::AllocationParams : public Entity
{
    public:
        AllocationParams();
        ~AllocationParams();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mode; //type: InfraLtraceModeEnum
        YLeaf scale_factor; //type: InfraLtraceScaleEnum

}; // ActiveNodes::ActiveNode::Ltrace::AllocationParams


class ActiveNodes::ActiveNode::LptsLocal : public Entity
{
    public:
        LptsLocal();
        ~LptsLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpolicerLocalTables; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables
        class IpolicerLocal; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal> ipolicer_local; // presence node
        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables> ipolicer_local_tables;
        
}; // ActiveNodes::ActiveNode::LptsLocal


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables : public Entity
{
    public:
        IpolicerLocalTables();
        ~IpolicerLocalTables();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpolicerLocalTable; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable> > ipolicer_local_table;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable : public Entity
{
    public:
        IpolicerLocalTable();
        ~IpolicerLocalTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id1; //type: string
        class Nps; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps> nps;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps : public Entity
{
    public:
        Nps();
        ~Nps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Np; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np

        std::vector<std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np> > np;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np : public Entity
{
    public:
        Np();
        ~Np();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id1; //type: int32
        YLeaf rate; //type: int32

}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal : public Entity
{
    public:
        IpolicerLocal();
        ~IpolicerLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class Flows; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows> flows;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows : public Entity
{
    public:
        Flows();
        ~Flows();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flow; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow

        std::vector<std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow> > flow;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_type; //type: LptsFlowEnum
        YLeaf rate; //type: int32
        class Precedences; //type: ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences> precedences;
        
}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow


class ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences : public Entity
{
    public:
        Precedences();
        ~Precedences();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList precedence; //type: list of  one of uint32, enumeration

}; // ActiveNodes::ActiveNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences


class ActiveNodes::ActiveNode::SsrpGroup : public Entity
{
    public:
        SsrpGroup();
        ~SsrpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Groups; //type: ActiveNodes::ActiveNode::SsrpGroup::Groups

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::SsrpGroup::Groups> groups;
        
}; // ActiveNodes::ActiveNode::SsrpGroup


class ActiveNodes::ActiveNode::SsrpGroup::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Group; //type: ActiveNodes::ActiveNode::SsrpGroup::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::SsrpGroup::Groups::Group> > group;
        
}; // ActiveNodes::ActiveNode::SsrpGroup::Groups


class ActiveNodes::ActiveNode::SsrpGroup::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_id; //type: uint32
        YLeaf profile; //type: string

}; // ActiveNodes::ActiveNode::SsrpGroup::Groups::Group


class ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold : public Entity
{
    public:
        CiscoIosXrWatchdCfg_WatchdogNodeThreshold();
        ~CiscoIosXrWatchdCfg_WatchdogNodeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MemoryThreshold; //type: ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold> memory_threshold;
        
}; // ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold


class ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold : public Entity
{
    public:
        MemoryThreshold();
        ~MemoryThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minor; //type: uint32
        YLeaf severe; //type: uint32
        YLeaf critical; //type: uint32

}; // ActiveNodes::ActiveNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold


class ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold : public Entity
{
    public:
        CiscoIosXrWdCfg_WatchdogNodeThreshold();
        ~CiscoIosXrWdCfg_WatchdogNodeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MemoryThreshold; //type: ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold> memory_threshold;
        
}; // ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold


class ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold : public Entity
{
    public:
        MemoryThreshold();
        ~MemoryThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minor; //type: uint32
        YLeaf severe; //type: uint32
        YLeaf critical; //type: uint32

}; // ActiveNodes::ActiveNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold

class PreconfiguredNodes : public Entity
{
    public:
        PreconfiguredNodes();
        ~PreconfiguredNodes();

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

        class PreconfiguredNode; //type: PreconfiguredNodes::PreconfiguredNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode> > preconfigured_node;
        
}; // PreconfiguredNodes


class PreconfiguredNodes::PreconfiguredNode : public Entity
{
    public:
        PreconfiguredNode();
        ~PreconfiguredNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Ltrace; //type: PreconfiguredNodes::PreconfiguredNode::Ltrace
        class LptsLocal; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal
        class CiscoIosXrWatchdCfg_WatchdogNodeThreshold; //type: PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold
        class CiscoIosXrWdCfg_WatchdogNodeThreshold; //type: PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold> cisco_ios_xr_watchd_cfg_watchdog_node_threshold;
        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold> cisco_ios_xr_wd_cfg_watchdog_node_threshold;
        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal> lpts_local;
        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::Ltrace> ltrace;
        
}; // PreconfiguredNodes::PreconfiguredNode


class PreconfiguredNodes::PreconfiguredNode::Ltrace : public Entity
{
    public:
        Ltrace();
        ~Ltrace();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AllocationParams; //type: PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams> allocation_params;
        
}; // PreconfiguredNodes::PreconfiguredNode::Ltrace


class PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams : public Entity
{
    public:
        AllocationParams();
        ~AllocationParams();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mode; //type: InfraLtraceModeEnum
        YLeaf scale_factor; //type: InfraLtraceScaleEnum

}; // PreconfiguredNodes::PreconfiguredNode::Ltrace::AllocationParams


class PreconfiguredNodes::PreconfiguredNode::LptsLocal : public Entity
{
    public:
        LptsLocal();
        ~LptsLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpolicerLocalTables; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables
        class IpolicerLocal; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal> ipolicer_local; // presence node
        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables> ipolicer_local_tables;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables : public Entity
{
    public:
        IpolicerLocalTables();
        ~IpolicerLocalTables();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpolicerLocalTable; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable> > ipolicer_local_table;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable : public Entity
{
    public:
        IpolicerLocalTable();
        ~IpolicerLocalTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id1; //type: string
        class Nps; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps> nps;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps : public Entity
{
    public:
        Nps();
        ~Nps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Np; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np

        std::vector<std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np> > np;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np : public Entity
{
    public:
        Np();
        ~Np();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id1; //type: int32
        YLeaf rate; //type: int32

}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocalTables::IpolicerLocalTable::Nps::Np


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal : public Entity
{
    public:
        IpolicerLocal();
        ~IpolicerLocal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class Flows; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows> flows;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows : public Entity
{
    public:
        Flows();
        ~Flows();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flow; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow

        std::vector<std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow> > flow;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow_type; //type: LptsFlowEnum
        YLeaf rate; //type: int32
        class Precedences; //type: PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences> precedences;
        
}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow


class PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences : public Entity
{
    public:
        Precedences();
        ~Precedences();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList precedence; //type: list of  one of uint32, enumeration

}; // PreconfiguredNodes::PreconfiguredNode::LptsLocal::IpolicerLocal::Flows::Flow::Precedences


class PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold : public Entity
{
    public:
        CiscoIosXrWatchdCfg_WatchdogNodeThreshold();
        ~CiscoIosXrWatchdCfg_WatchdogNodeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MemoryThreshold; //type: PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold> memory_threshold;
        
}; // PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold


class PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold : public Entity
{
    public:
        MemoryThreshold();
        ~MemoryThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minor; //type: uint32
        YLeaf severe; //type: uint32
        YLeaf critical; //type: uint32

}; // PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWatchdCfg_WatchdogNodeThreshold::MemoryThreshold


class PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold : public Entity
{
    public:
        CiscoIosXrWdCfg_WatchdogNodeThreshold();
        ~CiscoIosXrWdCfg_WatchdogNodeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MemoryThreshold; //type: PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold

        std::shared_ptr<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold> memory_threshold;
        
}; // PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold


class PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold : public Entity
{
    public:
        MemoryThreshold();
        ~MemoryThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minor; //type: uint32
        YLeaf severe; //type: uint32
        YLeaf critical; //type: uint32

}; // PreconfiguredNodes::PreconfiguredNode::CiscoIosXrWdCfg_WatchdogNodeThreshold::MemoryThreshold


}
}

#endif /* _CISCO_IOS_XR_CONFIG_MDA_CFG_ */

