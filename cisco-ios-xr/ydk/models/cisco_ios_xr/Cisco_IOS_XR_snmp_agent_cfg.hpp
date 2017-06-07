#ifndef _CISCO_IOS_XR_SNMP_AGENT_CFG_
#define _CISCO_IOS_XR_SNMP_AGENT_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_snmp_agent_cfg {

class Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

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

        YLeaf inform_retries; //type: uint32
        YLeaf trap_port; //type: uint32
        YLeaf oid_poll_stats; //type: empty
        YLeaf trap_source; //type: string
        YLeaf vrf_authentication_trap_disable; //type: empty
        YLeaf inform_timeout; //type: uint32
        YLeaf trap_source_ipv6; //type: string
        YLeaf packet_size; //type: uint32
        YLeaf throttle_time; //type: uint32
        YLeaf trap_source_ipv4; //type: string
        YLeaf inform_pending; //type: uint32
        class EncryptedCommunityMaps; //type: Snmp::EncryptedCommunityMaps
        class Views; //type: Snmp::Views
        class Logging; //type: Snmp::Logging
        class Administration; //type: Snmp::Administration
        class Agent; //type: Snmp::Agent
        class Trap; //type: Snmp::Trap
        class Ipv6; //type: Snmp::Ipv6
        class Ipv4; //type: Snmp::Ipv4
        class System; //type: Snmp::System
        class Target; //type: Snmp::Target
        class Notification; //type: Snmp::Notification
        class Correlator; //type: Snmp::Correlator
        class BulkStats; //type: Snmp::BulkStats
        class DefaultCommunityMaps; //type: Snmp::DefaultCommunityMaps
        class OverloadControl; //type: Snmp::OverloadControl
        class Timeouts; //type: Snmp::Timeouts
        class Users; //type: Snmp::Users
        class Vrfs; //type: Snmp::Vrfs
        class Groups; //type: Snmp::Groups
        class TrapHosts; //type: Snmp::TrapHosts
        class Contexts; //type: Snmp::Contexts
        class ContextMappings; //type: Snmp::ContextMappings

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration> administration;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Agent> agent;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats> bulk_stats;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::ContextMappings> context_mappings;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Contexts> contexts;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator> correlator;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::DefaultCommunityMaps> default_community_maps;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::EncryptedCommunityMaps> encrypted_community_maps;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification> notification;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::OverloadControl> overload_control; // presence node
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::System> system;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target> target;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Timeouts> timeouts;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Trap> trap;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts> trap_hosts;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Users> users;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Views> views;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs> vrfs;
        
}; // Snmp


class Snmp::EncryptedCommunityMaps : public Entity
{
    public:
        EncryptedCommunityMaps();
        ~EncryptedCommunityMaps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EncryptedCommunityMap; //type: Snmp::EncryptedCommunityMaps::EncryptedCommunityMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::EncryptedCommunityMaps::EncryptedCommunityMap> > encrypted_community_map;
        
}; // Snmp::EncryptedCommunityMaps


class Snmp::EncryptedCommunityMaps::EncryptedCommunityMap : public Entity
{
    public:
        EncryptedCommunityMap();
        ~EncryptedCommunityMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_name; //type: string
        YLeaf context; //type: string
        YLeaf security; //type: string
        YLeaf target_list; //type: string

}; // Snmp::EncryptedCommunityMaps::EncryptedCommunityMap


class Snmp::Views : public Entity
{
    public:
        Views();
        ~Views();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class View; //type: Snmp::Views::View

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Views::View> > view;
        
}; // Snmp::Views


class Snmp::Views::View : public Entity
{
    public:
        View();
        ~View();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf view_name; //type: string
        YLeaf family; //type: string
        YLeaf view_inclusion; //type: SnmpMibViewInclusionEnum

}; // Snmp::Views::View


class Snmp::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Threshold; //type: Snmp::Logging::Threshold

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Logging::Threshold> threshold;
        
}; // Snmp::Logging


class Snmp::Logging::Threshold : public Entity
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

        YLeaf oid_processing; //type: uint32
        YLeaf pdu_processing; //type: uint32

}; // Snmp::Logging::Threshold


class Snmp::Administration : public Entity
{
    public:
        Administration();
        ~Administration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DefaultCommunities; //type: Snmp::Administration::DefaultCommunities
        class EncryptedCommunities; //type: Snmp::Administration::EncryptedCommunities

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration::DefaultCommunities> default_communities;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration::EncryptedCommunities> encrypted_communities;
        
}; // Snmp::Administration


class Snmp::Administration::DefaultCommunities : public Entity
{
    public:
        DefaultCommunities();
        ~DefaultCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DefaultCommunity; //type: Snmp::Administration::DefaultCommunities::DefaultCommunity

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration::DefaultCommunities::DefaultCommunity> > default_community;
        
}; // Snmp::Administration::DefaultCommunities


class Snmp::Administration::DefaultCommunities::DefaultCommunity : public Entity
{
    public:
        DefaultCommunity();
        ~DefaultCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_name; //type: string
        YLeaf priviledge; //type: SnmpAccessLevelEnum
        YLeaf view_name; //type: string
        YLeaf v4acl_type; //type: SnmpaclEnum
        YLeaf v4_access_list; //type: string
        YLeaf v6acl_type; //type: SnmpaclEnum
        YLeaf v6_access_list; //type: string
        YLeaf owner; //type: SnmpOwnerAccessEnum

}; // Snmp::Administration::DefaultCommunities::DefaultCommunity


class Snmp::Administration::EncryptedCommunities : public Entity
{
    public:
        EncryptedCommunities();
        ~EncryptedCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EncryptedCommunity; //type: Snmp::Administration::EncryptedCommunities::EncryptedCommunity

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Administration::EncryptedCommunities::EncryptedCommunity> > encrypted_community;
        
}; // Snmp::Administration::EncryptedCommunities


class Snmp::Administration::EncryptedCommunities::EncryptedCommunity : public Entity
{
    public:
        EncryptedCommunity();
        ~EncryptedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_name; //type: string
        YLeaf priviledge; //type: SnmpAccessLevelEnum
        YLeaf view_name; //type: string
        YLeaf v4acl_type; //type: SnmpaclEnum
        YLeaf v4_access_list; //type: string
        YLeaf v6acl_type; //type: SnmpaclEnum
        YLeaf v6_access_list; //type: string
        YLeaf owner; //type: SnmpOwnerAccessEnum

}; // Snmp::Administration::EncryptedCommunities::EncryptedCommunity


class Snmp::Agent : public Entity
{
    public:
        Agent();
        ~Agent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EngineId; //type: Snmp::Agent::EngineId

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Agent::EngineId> engine_id;
        
}; // Snmp::Agent


class Snmp::Agent::EngineId : public Entity
{
    public:
        EngineId();
        ~EngineId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: string
        class Remotes; //type: Snmp::Agent::EngineId::Remotes

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Agent::EngineId::Remotes> remotes;
        
}; // Snmp::Agent::EngineId


class Snmp::Agent::EngineId::Remotes : public Entity
{
    public:
        Remotes();
        ~Remotes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Remote; //type: Snmp::Agent::EngineId::Remotes::Remote

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Agent::EngineId::Remotes::Remote> > remote;
        
}; // Snmp::Agent::EngineId::Remotes


class Snmp::Agent::EngineId::Remotes::Remote : public Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf remote_address; //type: string
        YLeaf remote_engine_id; //type: string
        YLeaf port; //type: uint16

}; // Snmp::Agent::EngineId::Remotes::Remote


class Snmp::Trap : public Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32
        YLeaf throttle_time; //type: uint32
        YLeaf queue_length; //type: uint32

}; // Snmp::Trap


class Snmp::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tos; //type: Snmp::Ipv6::Tos

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Ipv6::Tos> tos;
        
}; // Snmp::Ipv6


class Snmp::Ipv6::Tos : public Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: SnmpTosEnum
        YLeaf precedence; //type: one of uint32, enumeration
        YLeaf dscp; //type: one of uint32, enumeration

}; // Snmp::Ipv6::Tos


class Snmp::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tos; //type: Snmp::Ipv4::Tos

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Ipv4::Tos> tos;
        
}; // Snmp::Ipv4


class Snmp::Ipv4::Tos : public Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: SnmpTosEnum
        YLeaf precedence; //type: one of uint32, enumeration
        YLeaf dscp; //type: one of uint32, enumeration

}; // Snmp::Ipv4::Tos


class Snmp::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf chassis_id; //type: string
        YLeaf location; //type: string
        YLeaf contact; //type: string

}; // Snmp::System


class Snmp::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Targets; //type: Snmp::Target::Targets

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets> targets;
        
}; // Snmp::Target


class Snmp::Target::Targets : public Entity
{
    public:
        Targets();
        ~Targets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Target_; //type: Snmp::Target::Targets::Target_

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_> > target;
        
}; // Snmp::Target::Targets


class Snmp::Target::Targets::Target_ : public Entity
{
    public:
        Target_();
        ~Target_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf target_list_name; //type: string
        class VrfNames; //type: Snmp::Target::Targets::Target_::VrfNames
        class TargetAddresses; //type: Snmp::Target::Targets::Target_::TargetAddresses

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_::TargetAddresses> target_addresses;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_::VrfNames> vrf_names;
        
}; // Snmp::Target::Targets::Target_


class Snmp::Target::Targets::Target_::VrfNames : public Entity
{
    public:
        VrfNames();
        ~VrfNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VrfName; //type: Snmp::Target::Targets::Target_::VrfNames::VrfName

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_::VrfNames::VrfName> > vrf_name;
        
}; // Snmp::Target::Targets::Target_::VrfNames


class Snmp::Target::Targets::Target_::VrfNames::VrfName : public Entity
{
    public:
        VrfName();
        ~VrfName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Snmp::Target::Targets::Target_::VrfNames::VrfName


class Snmp::Target::Targets::Target_::TargetAddresses : public Entity
{
    public:
        TargetAddresses();
        ~TargetAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TargetAddress; //type: Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress> > target_address;
        
}; // Snmp::Target::Targets::Target_::TargetAddresses


class Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress : public Entity
{
    public:
        TargetAddress();
        ~TargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string

}; // Snmp::Target::Targets::Target_::TargetAddresses::TargetAddress


class Snmp::Notification : public Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snmp_; //type: Snmp::Notification::Snmp_
        class Vpls; //type: Snmp::Notification::Vpls
        class L2Vpn; //type: Snmp::Notification::L2Vpn
        class Isis; //type: Snmp::Notification::Isis
        class ConfigMan; //type: Snmp::Notification::ConfigMan
        class Cfm; //type: Snmp::Notification::Cfm
        class Oam; //type: Snmp::Notification::Oam
        class Flash; //type: Snmp::Notification::Flash
        class EntityRedundancy; //type: Snmp::Notification::EntityRedundancy
        class ConfigCopy; //type: Snmp::Notification::ConfigCopy
        class SelectiveVrfDownload; //type: Snmp::Notification::SelectiveVrfDownload
        class System; //type: Snmp::Notification::System
        class Bfd; //type: Snmp::Notification::Bfd
        class Ntp; //type: Snmp::Notification::Ntp
        class Rsvp; //type: Snmp::Notification::Rsvp
        class Bgp; //type: Snmp::Notification::Bgp
        class Hsrp; //type: Snmp::Notification::Hsrp
        class Ospf; //type: Snmp::Notification::Ospf
        class Vrrp; //type: Snmp::Notification::Vrrp
        class Ospfv3; //type: Snmp::Notification::Ospfv3
        class MplsLdp; //type: Snmp::Notification::MplsLdp
        class MplsTeP2Mp; //type: Snmp::Notification::MplsTeP2Mp
        class MplsTe; //type: Snmp::Notification::MplsTe
        class MplsFrr; //type: Snmp::Notification::MplsFrr
        class MplsL3Vpn; //type: Snmp::Notification::MplsL3Vpn
        class Otn; //type: Snmp::Notification::Otn
        class Sensor; //type: Snmp::Notification::Sensor
        class Entity_; //type: Snmp::Notification::Entity_
        class EntityState; //type: Snmp::Notification::EntityState
        class FruControl; //type: Snmp::Notification::FruControl
        class Rf; //type: Snmp::Notification::Rf
        class Syslog; //type: Snmp::Notification::Syslog

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Cfm> cfm;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::ConfigCopy> config_copy;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::ConfigMan> config_man;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Entity_> entity_;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::EntityRedundancy> entity_redundancy;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::EntityState> entity_state;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Flash> flash;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::FruControl> fru_control;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Hsrp> hsrp;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::L2Vpn> l2vpn;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsFrr> mpls_frr;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsL3Vpn> mpls_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsLdp> mpls_ldp;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsTe> mpls_te;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsTeP2Mp> mpls_te_p2mp;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ntp> ntp;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Oam> oam;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Otn> otn;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Rf> rf;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Rsvp> rsvp;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::SelectiveVrfDownload> selective_vrf_download;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Sensor> sensor;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Snmp_> snmp;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Syslog> syslog;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::System> system;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Vpls> vpls;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Vrrp> vrrp;
        
}; // Snmp::Notification


class Snmp::Notification::Snmp_ : public Entity
{
    public:
        Snmp_();
        ~Snmp_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authentication; //type: empty
        YLeaf cold_start; //type: empty
        YLeaf warm_start; //type: empty
        YLeaf enable; //type: empty
        YLeaf link_down; //type: empty
        YLeaf link_up; //type: empty

}; // Snmp::Notification::Snmp_


class Snmp::Notification::Vpls : public Entity
{
    public:
        Vpls();
        ~Vpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf full_clear; //type: empty
        YLeaf status; //type: empty
        YLeaf enable; //type: empty
        YLeaf full_raise; //type: empty

}; // Snmp::Notification::Vpls


class Snmp::Notification::L2Vpn : public Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cisco; //type: empty
        YLeaf enable; //type: empty
        YLeaf vc_down; //type: empty
        YLeaf vc_up; //type: empty

}; // Snmp::Notification::L2Vpn


class Snmp::Notification::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf database_overflow; //type: IsisMibDatabaseOverFlowBooleanEnum
        YLeaf manual_address_drops; //type: IsisMibManualAddressDropsBooleanEnum
        YLeaf corrupted_lsp_detected; //type: IsisMibCorruptedLspDetectedBooleanEnum
        YLeaf attempt_to_exceed_max_sequence; //type: IsisMibAttemptToExceedMaxSequenceBooleanEnum
        YLeaf id_length_mismatch; //type: IsisMibIdLengthMismatchBooleanEnum
        YLeaf max_area_address_mismatch; //type: IsisMibMaxAreaAddressMismatchBooleanEnum
        YLeaf own_lsp_purge; //type: IsisMibOwnLspPurgeBooleanEnum
        YLeaf sequence_number_skip; //type: IsisMibSequenceNumberSkipBooleanEnum
        YLeaf authentication_type_failure; //type: IsisMibAuthenticationTypeFailureBooleanEnum
        YLeaf authentication_failure; //type: IsisMibAuthenticationFailureBooleanEnum
        YLeaf version_skew; //type: IsisMibVersionSkewBooleanEnum
        YLeaf area_mismatch; //type: IsisMibAreaMismatchBooleanEnum
        YLeaf rejected_adjacency; //type: IsisMibRejectedAdjacencyBooleanEnum
        YLeaf lsp_too_large_to_propagate; //type: IsisMibLspTooLargeToPropagateBooleanEnum
        YLeaf originated_lsp_buffer_size_mismatch; //type: IsisMibOriginatedLspBufferSizeMismatchBooleanEnum
        YLeaf protocols_supported_mismatch; //type: IsisMibProtocolsSupportedMismatchBooleanEnum
        YLeaf adjacency_change; //type: IsisMibAdjacencyChangeBooleanEnum
        YLeaf lsp_error_detected; //type: IsisMibLspErrorDetectedBooleanEnum
        YLeaf all; //type: IsisMibAllBooleanEnum

}; // Snmp::Notification::Isis


class Snmp::Notification::ConfigMan : public Entity
{
    public:
        ConfigMan();
        ~ConfigMan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::ConfigMan


class Snmp::Notification::Cfm : public Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::Cfm


class Snmp::Notification::Oam : public Entity
{
    public:
        Oam();
        ~Oam();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::Oam


class Snmp::Notification::Flash : public Entity
{
    public:
        Flash();
        ~Flash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf insertion; //type: empty
        YLeaf removal; //type: empty

}; // Snmp::Notification::Flash


class Snmp::Notification::EntityRedundancy : public Entity
{
    public:
        EntityRedundancy();
        ~EntityRedundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchover; //type: empty
        YLeaf enable; //type: empty
        YLeaf status; //type: empty

}; // Snmp::Notification::EntityRedundancy


class Snmp::Notification::ConfigCopy : public Entity
{
    public:
        ConfigCopy();
        ~ConfigCopy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf completion; //type: empty

}; // Snmp::Notification::ConfigCopy


class Snmp::Notification::SelectiveVrfDownload : public Entity
{
    public:
        SelectiveVrfDownload();
        ~SelectiveVrfDownload();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role_change; //type: empty

}; // Snmp::Notification::SelectiveVrfDownload


class Snmp::Notification::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::System


class Snmp::Notification::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::Bfd


class Snmp::Notification::Ntp : public Entity
{
    public:
        Ntp();
        ~Ntp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::Ntp


class Snmp::Notification::Rsvp : public Entity
{
    public:
        Rsvp();
        ~Rsvp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lost_flow; //type: empty
        YLeaf new_flow; //type: empty
        YLeaf enable; //type: empty

}; // Snmp::Notification::Rsvp


class Snmp::Notification::Bgp : public Entity
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

        class Bgp4Mib; //type: Snmp::Notification::Bgp::Bgp4Mib
        class CiscoBgp4Mib; //type: Snmp::Notification::Bgp::CiscoBgp4Mib

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bgp::Bgp4Mib> bgp4mib;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Bgp::CiscoBgp4Mib> cisco_bgp4mib;
        
}; // Snmp::Notification::Bgp


class Snmp::Notification::Bgp::Bgp4Mib : public Entity
{
    public:
        Bgp4Mib();
        ~Bgp4Mib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf up_down; //type: empty

}; // Snmp::Notification::Bgp::Bgp4Mib


class Snmp::Notification::Bgp::CiscoBgp4Mib : public Entity
{
    public:
        CiscoBgp4Mib();
        ~CiscoBgp4Mib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf up_down; //type: empty

}; // Snmp::Notification::Bgp::CiscoBgp4Mib


class Snmp::Notification::Hsrp : public Entity
{
    public:
        Hsrp();
        ~Hsrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::Hsrp


class Snmp::Notification::Ospf : public Entity
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

        class Lsa; //type: Snmp::Notification::Ospf::Lsa
        class StateChange; //type: Snmp::Notification::Ospf::StateChange
        class Retransmit; //type: Snmp::Notification::Ospf::Retransmit
        class Error; //type: Snmp::Notification::Ospf::Error

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf::Error> error;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf::Lsa> lsa;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf::Retransmit> retransmit;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospf::StateChange> state_change;
        
}; // Snmp::Notification::Ospf


class Snmp::Notification::Ospf::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_age_lsa; //type: empty
        YLeaf originate_lsa; //type: empty

}; // Snmp::Notification::Ospf::Lsa


class Snmp::Notification::Ospf::StateChange : public Entity
{
    public:
        StateChange();
        ~StateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: empty
        YLeaf virtual_interface; //type: empty
        YLeaf virtual_neighbor; //type: empty
        YLeaf neighbor; //type: empty

}; // Snmp::Notification::Ospf::StateChange


class Snmp::Notification::Ospf::Retransmit : public Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf virtual_packet; //type: empty
        YLeaf packet; //type: empty

}; // Snmp::Notification::Ospf::Retransmit


class Snmp::Notification::Ospf::Error : public Entity
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

        YLeaf config_error; //type: empty
        YLeaf authentication_failure; //type: empty
        YLeaf virtual_config_error; //type: empty
        YLeaf virtual_authentication_failure; //type: empty
        YLeaf bad_packet; //type: empty
        YLeaf virtual_bad_packet; //type: empty

}; // Snmp::Notification::Ospf::Error


class Snmp::Notification::Vrrp : public Entity
{
    public:
        Vrrp();
        ~Vrrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::Vrrp


class Snmp::Notification::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Error; //type: Snmp::Notification::Ospfv3::Error
        class StateChange; //type: Snmp::Notification::Ospfv3::StateChange

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospfv3::Error> error;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::Ospfv3::StateChange> state_change;
        
}; // Snmp::Notification::Ospfv3


class Snmp::Notification::Ospfv3::Error : public Entity
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

        YLeaf config_error; //type: empty
        YLeaf bad_packet; //type: empty
        YLeaf virtual_bad_packet; //type: empty
        YLeaf virtual_config_error; //type: empty

}; // Snmp::Notification::Ospfv3::Error


class Snmp::Notification::Ospfv3::StateChange : public Entity
{
    public:
        StateChange();
        ~StateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restart_virtual_helper; //type: empty
        YLeaf nssa_translator; //type: empty
        YLeaf interface; //type: empty
        YLeaf restart; //type: empty
        YLeaf neighbor; //type: empty
        YLeaf virtual_interface; //type: empty
        YLeaf restart_helper; //type: empty
        YLeaf virtual_neighbor; //type: empty

}; // Snmp::Notification::Ospfv3::StateChange


class Snmp::Notification::MplsLdp : public Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_up; //type: empty
        YLeaf init_session_threshold_exceeded; //type: empty
        YLeaf session_down; //type: empty

}; // Snmp::Notification::MplsLdp


class Snmp::Notification::MplsTeP2Mp : public Entity
{
    public:
        MplsTeP2Mp();
        ~MplsTeP2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf up; //type: empty
        YLeaf down; //type: empty

}; // Snmp::Notification::MplsTeP2Mp


class Snmp::Notification::MplsTe : public Entity
{
    public:
        MplsTe();
        ~MplsTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cisco; //type: empty
        YLeaf up; //type: empty
        YLeaf reoptimize; //type: empty
        YLeaf reroute; //type: empty
        YLeaf down; //type: empty
        class CiscoExtension; //type: Snmp::Notification::MplsTe::CiscoExtension

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Notification::MplsTe::CiscoExtension> cisco_extension;
        
}; // Snmp::Notification::MplsTe


class Snmp::Notification::MplsTe::CiscoExtension : public Entity
{
    public:
        CiscoExtension();
        ~CiscoExtension();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf preempt; //type: empty
        YLeaf insufficient_bandwidth; //type: empty
        YLeaf re_route_pending_clear; //type: empty
        YLeaf bringup_fail; //type: empty
        YLeaf re_route_pending; //type: empty

}; // Snmp::Notification::MplsTe::CiscoExtension


class Snmp::Notification::MplsFrr : public Entity
{
    public:
        MplsFrr();
        ~MplsFrr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unprotected; //type: empty
        YLeaf enable; //type: empty
        YLeaf protected_; //type: empty

}; // Snmp::Notification::MplsFrr


class Snmp::Notification::MplsL3Vpn : public Entity
{
    public:
        MplsL3Vpn();
        ~MplsL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_threshold_reissue_notification_time; //type: int32
        YLeaf max_threshold_exceeded; //type: empty
        YLeaf max_threshold_cleared; //type: empty
        YLeaf mid_threshold_exceeded; //type: empty
        YLeaf enable; //type: empty
        YLeaf vrf_down; //type: empty
        YLeaf vrf_up; //type: empty

}; // Snmp::Notification::MplsL3Vpn


class Snmp::Notification::Otn : public Entity
{
    public:
        Otn();
        ~Otn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::Otn


class Snmp::Notification::Sensor : public Entity
{
    public:
        Sensor();
        ~Sensor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::Sensor


class Snmp::Notification::Entity_ : public Entity
{
    public:
        Entity_();
        ~Entity_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::Entity_


class Snmp::Notification::EntityState : public Entity
{
    public:
        EntityState();
        ~EntityState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchover; //type: empty
        YLeaf oper_status; //type: empty

}; // Snmp::Notification::EntityState


class Snmp::Notification::FruControl : public Entity
{
    public:
        FruControl();
        ~FruControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::FruControl


class Snmp::Notification::Rf : public Entity
{
    public:
        Rf();
        ~Rf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::Rf


class Snmp::Notification::Syslog : public Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Snmp::Notification::Syslog


class Snmp::Correlator : public Entity
{
    public:
        Correlator();
        ~Correlator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf buffer_size; //type: uint32
        class Rules; //type: Snmp::Correlator::Rules
        class RuleSets; //type: Snmp::Correlator::RuleSets

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets> rule_sets;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules> rules;
        
}; // Snmp::Correlator


class Snmp::Correlator::Rules : public Entity
{
    public:
        Rules();
        ~Rules();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rule; //type: Snmp::Correlator::Rules::Rule

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule> > rule;
        
}; // Snmp::Correlator::Rules


class Snmp::Correlator::Rules::Rule : public Entity
{
    public:
        Rule();
        ~Rule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class NonStateful; //type: Snmp::Correlator::Rules::Rule::NonStateful
        class AppliedTo; //type: Snmp::Correlator::Rules::Rule::AppliedTo

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::AppliedTo> applied_to;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful> non_stateful; // presence node
        
}; // Snmp::Correlator::Rules::Rule


class Snmp::Correlator::Rules::Rule::NonStateful : public Entity
{
    public:
        NonStateful();
        ~NonStateful();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32
        class RootCauses; //type: Snmp::Correlator::Rules::Rule::NonStateful::RootCauses
        class NonRootCauses; //type: Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses> non_root_causes;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses> root_causes;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful


class Snmp::Correlator::Rules::Rule::NonStateful::RootCauses : public Entity
{
    public:
        RootCauses();
        ~RootCauses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RootCause; //type: Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause> > root_cause;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses


class Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause : public Entity
{
    public:
        RootCause();
        ~RootCause();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf oid; //type: string
        YLeaf created; //type: empty
        class VarBinds; //type: Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds> var_binds;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause


class Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds : public Entity
{
    public:
        VarBinds();
        ~VarBinds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VarBind; //type: Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind> > var_bind;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds


class Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind : public Entity
{
    public:
        VarBind();
        ~VarBind();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf oid; //type: string
        class Match; //type: Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match> match;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind


class Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: string
        YLeaf index_; //type: string

}; // Snmp::Correlator::Rules::Rule::NonStateful::RootCauses::RootCause::VarBinds::VarBind::Match


class Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses : public Entity
{
    public:
        NonRootCauses();
        ~NonRootCauses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NonRootCause; //type: Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause> > non_root_cause;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses


class Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause : public Entity
{
    public:
        NonRootCause();
        ~NonRootCause();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf oid; //type: string
        YLeaf created; //type: empty
        class VarBinds; //type: Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds> var_binds;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause


class Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds : public Entity
{
    public:
        VarBinds();
        ~VarBinds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VarBind; //type: Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind> > var_bind;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds


class Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind : public Entity
{
    public:
        VarBind();
        ~VarBind();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf oid; //type: string
        class Match; //type: Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match> match;
        
}; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind


class Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: string
        YLeaf index_; //type: string

}; // Snmp::Correlator::Rules::Rule::NonStateful::NonRootCauses::NonRootCause::VarBinds::VarBind::Match


class Snmp::Correlator::Rules::Rule::AppliedTo : public Entity
{
    public:
        AppliedTo();
        ~AppliedTo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        class Hosts; //type: Snmp::Correlator::Rules::Rule::AppliedTo::Hosts

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::AppliedTo::Hosts> hosts;
        
}; // Snmp::Correlator::Rules::Rule::AppliedTo


class Snmp::Correlator::Rules::Rule::AppliedTo::Hosts : public Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host> > host;
        
}; // Snmp::Correlator::Rules::Rule::AppliedTo::Hosts


class Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        YLeaf port; //type: uint16

}; // Snmp::Correlator::Rules::Rule::AppliedTo::Hosts::Host


class Snmp::Correlator::RuleSets : public Entity
{
    public:
        RuleSets();
        ~RuleSets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RuleSet; //type: Snmp::Correlator::RuleSets::RuleSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet> > rule_set;
        
}; // Snmp::Correlator::RuleSets


class Snmp::Correlator::RuleSets::RuleSet : public Entity
{
    public:
        RuleSet();
        ~RuleSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Rulenames; //type: Snmp::Correlator::RuleSets::RuleSet::Rulenames
        class AppliedTo; //type: Snmp::Correlator::RuleSets::RuleSet::AppliedTo

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::AppliedTo> applied_to;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::Rulenames> rulenames;
        
}; // Snmp::Correlator::RuleSets::RuleSet


class Snmp::Correlator::RuleSets::RuleSet::Rulenames : public Entity
{
    public:
        Rulenames();
        ~Rulenames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rulename; //type: Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename> > rulename;
        
}; // Snmp::Correlator::RuleSets::RuleSet::Rulenames


class Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename : public Entity
{
    public:
        Rulename();
        ~Rulename();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rulename; //type: string

}; // Snmp::Correlator::RuleSets::RuleSet::Rulenames::Rulename


class Snmp::Correlator::RuleSets::RuleSet::AppliedTo : public Entity
{
    public:
        AppliedTo();
        ~AppliedTo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        class Hosts; //type: Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts> hosts;
        
}; // Snmp::Correlator::RuleSets::RuleSet::AppliedTo


class Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts : public Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host> > host;
        
}; // Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts


class Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        YLeaf port; //type: uint16

}; // Snmp::Correlator::RuleSets::RuleSet::AppliedTo::Hosts::Host


class Snmp::BulkStats : public Entity
{
    public:
        BulkStats();
        ~BulkStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf memory; //type: uint32
        class Schemas; //type: Snmp::BulkStats::Schemas
        class Objects; //type: Snmp::BulkStats::Objects
        class Transfers; //type: Snmp::BulkStats::Transfers

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Objects> objects;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Schemas> schemas;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers> transfers;
        
}; // Snmp::BulkStats


class Snmp::BulkStats::Schemas : public Entity
{
    public:
        Schemas();
        ~Schemas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Schema; //type: Snmp::BulkStats::Schemas::Schema

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Schemas::Schema> > schema;
        
}; // Snmp::BulkStats::Schemas


class Snmp::BulkStats::Schemas::Schema : public Entity
{
    public:
        Schema();
        ~Schema();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf schema_name; //type: string
        YLeaf type; //type: empty
        YLeaf schema_object_list; //type: string
        YLeaf poll_interval; //type: uint32
        class Instance; //type: Snmp::BulkStats::Schemas::Schema::Instance

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Schemas::Schema::Instance> instance; // presence node
        
}; // Snmp::BulkStats::Schemas::Schema


class Snmp::BulkStats::Schemas::Schema::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: SnmpBulkstatSchemaEnum
        YLeaf instance; //type: string
        YLeaf start; //type: string
        YLeaf end; //type: string
        YLeaf max; //type: int32
        YLeaf sub_interface; //type: boolean

}; // Snmp::BulkStats::Schemas::Schema::Instance


class Snmp::BulkStats::Objects : public Entity
{
    public:
        Objects();
        ~Objects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Object; //type: Snmp::BulkStats::Objects::Object

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Objects::Object> > object;
        
}; // Snmp::BulkStats::Objects


class Snmp::BulkStats::Objects::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf object_list_name; //type: string
        YLeaf type; //type: empty
        class Objects_; //type: Snmp::BulkStats::Objects::Object::Objects_

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Objects::Object::Objects_> objects;
        
}; // Snmp::BulkStats::Objects::Object


class Snmp::BulkStats::Objects::Object::Objects_ : public Entity
{
    public:
        Objects_();
        ~Objects_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Object_; //type: Snmp::BulkStats::Objects::Object::Objects_::Object_

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Objects::Object::Objects_::Object_> > object;
        
}; // Snmp::BulkStats::Objects::Object::Objects_


class Snmp::BulkStats::Objects::Object::Objects_::Object_ : public Entity
{
    public:
        Object_();
        ~Object_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf oid; //type: string

}; // Snmp::BulkStats::Objects::Object::Objects_::Object_


class Snmp::BulkStats::Transfers : public Entity
{
    public:
        Transfers();
        ~Transfers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Transfer; //type: Snmp::BulkStats::Transfers::Transfer

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers::Transfer> > transfer;
        
}; // Snmp::BulkStats::Transfers


class Snmp::BulkStats::Transfers::Transfer : public Entity
{
    public:
        Transfer();
        ~Transfer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transfer_name; //type: string
        YLeaf secondary; //type: string
        YLeaf type; //type: empty
        YLeaf buffer_size; //type: uint32
        YLeaf retain; //type: uint32
        YLeaf format; //type: SnmpBulkstatFileFormatEnum
        YLeaf retry; //type: uint32
        YLeaf enable; //type: empty
        YLeaf primary; //type: string
        YLeaf interval; //type: int32
        class TransferSchemas; //type: Snmp::BulkStats::Transfers::Transfer::TransferSchemas

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers::Transfer::TransferSchemas> transfer_schemas;
        
}; // Snmp::BulkStats::Transfers::Transfer


class Snmp::BulkStats::Transfers::Transfer::TransferSchemas : public Entity
{
    public:
        TransferSchemas();
        ~TransferSchemas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TransferSchema; //type: Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema> > transfer_schema;
        
}; // Snmp::BulkStats::Transfers::Transfer::TransferSchemas


class Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema : public Entity
{
    public:
        TransferSchema();
        ~TransferSchema();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf schema_name; //type: string

}; // Snmp::BulkStats::Transfers::Transfer::TransferSchemas::TransferSchema


class Snmp::DefaultCommunityMaps : public Entity
{
    public:
        DefaultCommunityMaps();
        ~DefaultCommunityMaps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DefaultCommunityMap; //type: Snmp::DefaultCommunityMaps::DefaultCommunityMap

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::DefaultCommunityMaps::DefaultCommunityMap> > default_community_map;
        
}; // Snmp::DefaultCommunityMaps


class Snmp::DefaultCommunityMaps::DefaultCommunityMap : public Entity
{
    public:
        DefaultCommunityMap();
        ~DefaultCommunityMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_name; //type: string
        YLeaf context; //type: string
        YLeaf security; //type: string
        YLeaf target_list; //type: string

}; // Snmp::DefaultCommunityMaps::DefaultCommunityMap


class Snmp::OverloadControl : public Entity
{
    public:
        OverloadControl();
        ~OverloadControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf drop_time; //type: uint32
        YLeaf throttle_rate; //type: uint32

}; // Snmp::OverloadControl


class Snmp::Timeouts : public Entity
{
    public:
        Timeouts();
        ~Timeouts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf duplicates; //type: uint32
        YLeaf in_qdrop; //type: uint32
        YLeaf subagent; //type: uint32
        YLeaf pdu_stats; //type: uint32

}; // Snmp::Timeouts


class Snmp::Users : public Entity
{
    public:
        Users();
        ~Users();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class User; //type: Snmp::Users::User

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Users::User> > user;
        
}; // Snmp::Users


class Snmp::Users::User : public Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf user_name; //type: string
        YLeaf group_name; //type: string
        YLeaf version; //type: UserSnmpVersionEnum
        YLeaf authentication_password_configured; //type: empty
        YLeaf algorithm; //type: SnmpHashAlgorithmEnum
        YLeaf authentication_password; //type: string
        YLeaf privacy_password_configured; //type: empty
        YLeaf priv_algorithm; //type: SnmpPrivAlgorithmEnum
        YLeaf privacy_password; //type: string
        YLeaf v4acl_type; //type: SnmpaclEnum
        YLeaf v4_access_list; //type: string
        YLeaf v6acl_type; //type: SnmpaclEnum
        YLeaf v6_access_list; //type: string
        YLeaf owner; //type: SnmpOwnerAccessEnum
        YLeaf remote_address; //type: string
        YLeaf port; //type: uint16

}; // Snmp::Users::User


class Snmp::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Snmp::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf> > vrf;
        
}; // Snmp::Vrfs


class Snmp::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class TrapHosts; //type: Snmp::Vrfs::Vrf::TrapHosts
        class Contexts; //type: Snmp::Vrfs::Vrf::Contexts
        class ContextMappings; //type: Snmp::Vrfs::Vrf::ContextMappings

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::ContextMappings> context_mappings;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::Contexts> contexts;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts> trap_hosts;
        
}; // Snmp::Vrfs::Vrf


class Snmp::Vrfs::Vrf::TrapHosts : public Entity
{
    public:
        TrapHosts();
        ~TrapHosts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TrapHost; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost> > trap_host;
        
}; // Snmp::Vrfs::Vrf::TrapHosts


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost : public Entity
{
    public:
        TrapHost();
        ~TrapHost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        class EncryptedUserCommunities; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities
        class InformHost; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost
        class DefaultUserCommunities; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities> default_user_communities;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities> encrypted_user_communities;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost> inform_host;
        
}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities : public Entity
{
    public:
        EncryptedUserCommunities();
        ~EncryptedUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EncryptedUserCommunity; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity> > encrypted_user_community;
        
}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity : public Entity
{
    public:
        EncryptedUserCommunity();
        ~EncryptedUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_name; //type: string
        YLeaf port; //type: uint16
        YLeaf version; //type: string
        YLeaf security_level; //type: SnmpSecurityModelEnum
        YLeaf basic_trap_types; //type: int32
        YLeaf advanced_trap_types1; //type: int32
        YLeaf advanced_trap_types2; //type: int32

}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost : public Entity
{
    public:
        InformHost();
        ~InformHost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InformUserCommunities; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities
        class InformEncryptedUserCommunities; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities> inform_encrypted_user_communities;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities> inform_user_communities;
        
}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities : public Entity
{
    public:
        InformUserCommunities();
        ~InformUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InformUserCommunity; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity> > inform_user_community;
        
}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity : public Entity
{
    public:
        InformUserCommunity();
        ~InformUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_name; //type: string
        YLeaf port; //type: uint16
        YLeaf version; //type: string
        YLeaf security_level; //type: SnmpSecurityModelEnum
        YLeaf basic_trap_types; //type: int32
        YLeaf advanced_trap_types1; //type: int32
        YLeaf advanced_trap_types2; //type: int32

}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities : public Entity
{
    public:
        InformEncryptedUserCommunities();
        ~InformEncryptedUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InformEncryptedUserCommunity; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity> > inform_encrypted_user_community;
        
}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity : public Entity
{
    public:
        InformEncryptedUserCommunity();
        ~InformEncryptedUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_name; //type: string
        YLeaf port; //type: uint16
        YLeaf version; //type: string
        YLeaf security_level; //type: SnmpSecurityModelEnum
        YLeaf basic_trap_types; //type: int32
        YLeaf advanced_trap_types1; //type: int32
        YLeaf advanced_trap_types2; //type: int32

}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities : public Entity
{
    public:
        DefaultUserCommunities();
        ~DefaultUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DefaultUserCommunity; //type: Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity> > default_user_community;
        
}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities


class Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity : public Entity
{
    public:
        DefaultUserCommunity();
        ~DefaultUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_name; //type: string
        YLeaf port; //type: uint16
        YLeaf version; //type: string
        YLeaf security_level; //type: SnmpSecurityModelEnum
        YLeaf basic_trap_types; //type: int32
        YLeaf advanced_trap_types1; //type: int32
        YLeaf advanced_trap_types2; //type: int32

}; // Snmp::Vrfs::Vrf::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity


class Snmp::Vrfs::Vrf::Contexts : public Entity
{
    public:
        Contexts();
        ~Contexts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context; //type: Snmp::Vrfs::Vrf::Contexts::Context

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::Contexts::Context> > context;
        
}; // Snmp::Vrfs::Vrf::Contexts


class Snmp::Vrfs::Vrf::Contexts::Context : public Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf context_name; //type: string

}; // Snmp::Vrfs::Vrf::Contexts::Context


class Snmp::Vrfs::Vrf::ContextMappings : public Entity
{
    public:
        ContextMappings();
        ~ContextMappings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ContextMapping; //type: Snmp::Vrfs::Vrf::ContextMappings::ContextMapping

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Vrfs::Vrf::ContextMappings::ContextMapping> > context_mapping;
        
}; // Snmp::Vrfs::Vrf::ContextMappings


class Snmp::Vrfs::Vrf::ContextMappings::ContextMapping : public Entity
{
    public:
        ContextMapping();
        ~ContextMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf context_mapping_name; //type: string
        YLeaf context; //type: SnmpContextEnum
        YLeaf instance_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf topology_name; //type: string

}; // Snmp::Vrfs::Vrf::ContextMappings::ContextMapping


class Snmp::Groups : public Entity
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

        class Group; //type: Snmp::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Groups::Group> > group;
        
}; // Snmp::Groups


class Snmp::Groups::Group : public Entity
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

        YLeaf name; //type: string
        YLeaf snmp_version; //type: GroupSnmpVersionEnum
        YLeaf security_model; //type: SnmpSecurityModelEnum
        YLeaf notify_view; //type: string
        YLeaf read_view; //type: string
        YLeaf write_view; //type: string
        YLeaf v4acl_type; //type: SnmpaclEnum
        YLeaf v4_access_list; //type: string
        YLeaf v6acl_type; //type: SnmpaclEnum
        YLeaf v6_access_list; //type: string
        YLeaf context_name; //type: string

}; // Snmp::Groups::Group


class Snmp::TrapHosts : public Entity
{
    public:
        TrapHosts();
        ~TrapHosts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TrapHost; //type: Snmp::TrapHosts::TrapHost

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost> > trap_host;
        
}; // Snmp::TrapHosts


class Snmp::TrapHosts::TrapHost : public Entity
{
    public:
        TrapHost();
        ~TrapHost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        class EncryptedUserCommunities; //type: Snmp::TrapHosts::TrapHost::EncryptedUserCommunities
        class InformHost; //type: Snmp::TrapHosts::TrapHost::InformHost
        class DefaultUserCommunities; //type: Snmp::TrapHosts::TrapHost::DefaultUserCommunities

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::DefaultUserCommunities> default_user_communities;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::EncryptedUserCommunities> encrypted_user_communities;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost> inform_host;
        
}; // Snmp::TrapHosts::TrapHost


class Snmp::TrapHosts::TrapHost::EncryptedUserCommunities : public Entity
{
    public:
        EncryptedUserCommunities();
        ~EncryptedUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EncryptedUserCommunity; //type: Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity> > encrypted_user_community;
        
}; // Snmp::TrapHosts::TrapHost::EncryptedUserCommunities


class Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity : public Entity
{
    public:
        EncryptedUserCommunity();
        ~EncryptedUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_name; //type: string
        YLeaf port; //type: uint16
        YLeaf version; //type: string
        YLeaf security_level; //type: SnmpSecurityModelEnum
        YLeaf basic_trap_types; //type: int32
        YLeaf advanced_trap_types1; //type: int32
        YLeaf advanced_trap_types2; //type: int32

}; // Snmp::TrapHosts::TrapHost::EncryptedUserCommunities::EncryptedUserCommunity


class Snmp::TrapHosts::TrapHost::InformHost : public Entity
{
    public:
        InformHost();
        ~InformHost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InformUserCommunities; //type: Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities
        class InformEncryptedUserCommunities; //type: Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities> inform_encrypted_user_communities;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities> inform_user_communities;
        
}; // Snmp::TrapHosts::TrapHost::InformHost


class Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities : public Entity
{
    public:
        InformUserCommunities();
        ~InformUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InformUserCommunity; //type: Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity> > inform_user_community;
        
}; // Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities


class Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity : public Entity
{
    public:
        InformUserCommunity();
        ~InformUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_name; //type: string
        YLeaf port; //type: uint16
        YLeaf version; //type: string
        YLeaf security_level; //type: SnmpSecurityModelEnum
        YLeaf basic_trap_types; //type: int32
        YLeaf advanced_trap_types1; //type: int32
        YLeaf advanced_trap_types2; //type: int32

}; // Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity


class Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities : public Entity
{
    public:
        InformEncryptedUserCommunities();
        ~InformEncryptedUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InformEncryptedUserCommunity; //type: Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity> > inform_encrypted_user_community;
        
}; // Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities


class Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity : public Entity
{
    public:
        InformEncryptedUserCommunity();
        ~InformEncryptedUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_name; //type: string
        YLeaf port; //type: uint16
        YLeaf version; //type: string
        YLeaf security_level; //type: SnmpSecurityModelEnum
        YLeaf basic_trap_types; //type: int32
        YLeaf advanced_trap_types1; //type: int32
        YLeaf advanced_trap_types2; //type: int32

}; // Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity


class Snmp::TrapHosts::TrapHost::DefaultUserCommunities : public Entity
{
    public:
        DefaultUserCommunities();
        ~DefaultUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DefaultUserCommunity; //type: Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity> > default_user_community;
        
}; // Snmp::TrapHosts::TrapHost::DefaultUserCommunities


class Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity : public Entity
{
    public:
        DefaultUserCommunity();
        ~DefaultUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_name; //type: string
        YLeaf port; //type: uint16
        YLeaf version; //type: string
        YLeaf security_level; //type: SnmpSecurityModelEnum
        YLeaf basic_trap_types; //type: int32
        YLeaf advanced_trap_types1; //type: int32
        YLeaf advanced_trap_types2; //type: int32

}; // Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity


class Snmp::Contexts : public Entity
{
    public:
        Contexts();
        ~Contexts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context; //type: Snmp::Contexts::Context

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::Contexts::Context> > context;
        
}; // Snmp::Contexts


class Snmp::Contexts::Context : public Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf context_name; //type: string

}; // Snmp::Contexts::Context


class Snmp::ContextMappings : public Entity
{
    public:
        ContextMappings();
        ~ContextMappings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ContextMapping; //type: Snmp::ContextMappings::ContextMapping

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Snmp::ContextMappings::ContextMapping> > context_mapping;
        
}; // Snmp::ContextMappings


class Snmp::ContextMappings::ContextMapping : public Entity
{
    public:
        ContextMapping();
        ~ContextMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf context_mapping_name; //type: string
        YLeaf context; //type: SnmpContextEnum
        YLeaf instance_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf topology_name; //type: string

}; // Snmp::ContextMappings::ContextMapping

class Mib : public Entity
{
    public:
        Mib();
        ~Mib();

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

        YLeaf sensor_mib_cache; //type: empty
        class MplsTeMib; //type: Mib::MplsTeMib
        class MplsP2MpMib; //type: Mib::MplsP2MpMib
        class MplsTeExtStdMib; //type: Mib::MplsTeExtStdMib
        class MplsTeExtMib; //type: Mib::MplsTeExtMib
        class MplsFrrMib; //type: Mib::MplsFrrMib
        class CbQosmib; //type: Mib::CbQosmib
        class EntityMib; //type: Mib::EntityMib
        class InterfaceMib; //type: Mib::InterfaceMib

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::CbQosmib> cb_qosmib;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::EntityMib> entity_mib;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib> interface_mib;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsFrrMib> mpls_frr_mib;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsP2MpMib> mpls_p2mp_mib;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsTeExtMib> mpls_te_ext_mib;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsTeExtStdMib> mpls_te_ext_std_mib;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsTeMib> mpls_te_mib;
        
}; // Mib


class Mib::MplsTeMib : public Entity
{
    public:
        MplsTeMib();
        ~MplsTeMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_garbage_collect_timer; //type: uint32
        YLeaf cache_timer; //type: uint32

}; // Mib::MplsTeMib


class Mib::MplsP2MpMib : public Entity
{
    public:
        MplsP2MpMib();
        ~MplsP2MpMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_timer; //type: uint32

}; // Mib::MplsP2MpMib


class Mib::MplsTeExtStdMib : public Entity
{
    public:
        MplsTeExtStdMib();
        ~MplsTeExtStdMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_timer; //type: uint32

}; // Mib::MplsTeExtStdMib


class Mib::MplsTeExtMib : public Entity
{
    public:
        MplsTeExtMib();
        ~MplsTeExtMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_timer; //type: uint32

}; // Mib::MplsTeExtMib


class Mib::MplsFrrMib : public Entity
{
    public:
        MplsFrrMib();
        ~MplsFrrMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_timer; //type: uint32

}; // Mib::MplsFrrMib


class Mib::CbQosmib : public Entity
{
    public:
        CbQosmib();
        ~CbQosmib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface_stats; //type: empty
        YLeaf persist; //type: empty
        class Cache; //type: Mib::CbQosmib::Cache

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::CbQosmib::Cache> cache;
        
}; // Mib::CbQosmib


class Mib::CbQosmib::Cache : public Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf refresh_time; //type: uint32
        YLeaf service_policy_count; //type: uint32

}; // Mib::CbQosmib::Cache


class Mib::EntityMib : public Entity
{
    public:
        EntityMib();
        ~EntityMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entity_index_persistence; //type: empty

}; // Mib::EntityMib


class Mib::InterfaceMib : public Entity
{
    public:
        InterfaceMib();
        ~InterfaceMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf internal_cache; //type: uint32
        YLeaf interface_alias_long; //type: empty
        YLeaf ip_subscriber; //type: empty
        YLeaf interface_index_persistence; //type: empty
        YLeaf statistics_cache; //type: empty
        class Interfaces; //type: Mib::InterfaceMib::Interfaces
        class Notification; //type: Mib::InterfaceMib::Notification
        class Subsets; //type: Mib::InterfaceMib::Subsets

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Notification> notification;
        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets> subsets;
        
}; // Mib::InterfaceMib


class Mib::InterfaceMib::Interfaces : public Entity
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

        class Interface; //type: Mib::InterfaceMib::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Interfaces::Interface> > interface;
        
}; // Mib::InterfaceMib::Interfaces


class Mib::InterfaceMib::Interfaces::Interface : public Entity
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
        YLeaf link_up_down; //type: boolean
        YLeaf index_persistence; //type: boolean

}; // Mib::InterfaceMib::Interfaces::Interface


class Mib::InterfaceMib::Notification : public Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_ietf; //type: empty

}; // Mib::InterfaceMib::Notification


class Mib::InterfaceMib::Subsets : public Entity
{
    public:
        Subsets();
        ~Subsets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Subset; //type: Mib::InterfaceMib::Subsets::Subset

        std::vector<std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets::Subset> > subset;
        
}; // Mib::InterfaceMib::Subsets


class Mib::InterfaceMib::Subsets::Subset : public Entity
{
    public:
        Subset();
        ~Subset();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf subset_id; //type: uint32
        class LinkUpDown; //type: Mib::InterfaceMib::Subsets::Subset::LinkUpDown

        std::shared_ptr<Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets::Subset::LinkUpDown> link_up_down;
        
}; // Mib::InterfaceMib::Subsets::Subset


class Mib::InterfaceMib::Subsets::Subset::LinkUpDown : public Entity
{
    public:
        LinkUpDown();
        ~LinkUpDown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf regular_expression; //type: string

}; // Mib::InterfaceMib::Subsets::Subset::LinkUpDown

class SnmpHashAlgorithmEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf md5;
        static const Enum::YLeaf sha;

};

class SnmpAccessLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf read_only;
        static const Enum::YLeaf read_write;

};

class SnmpBulkstatSchemaEnum : public Enum
{
    public:
        static const Enum::YLeaf exact_interface;
        static const Enum::YLeaf exact_oid;
        static const Enum::YLeaf wild_interface;
        static const Enum::YLeaf wild_oid;
        static const Enum::YLeaf range_oid;
        static const Enum::YLeaf repeat_oid;

};

class GroupSnmpVersionEnum : public Enum
{
    public:
        static const Enum::YLeaf v1;
        static const Enum::YLeaf v2c;
        static const Enum::YLeaf v3;

};

class SnmpOwnerAccessEnum : public Enum
{
    public:
        static const Enum::YLeaf sdr_owner;
        static const Enum::YLeaf system_owner;

};

class SnmpBulkstatFileFormatEnum : public Enum
{
    public:
        static const Enum::YLeaf schema_ascii;
        static const Enum::YLeaf bulk_ascii;
        static const Enum::YLeaf bulk_binary;

};

class SnmpSecurityModelEnum : public Enum
{
    public:
        static const Enum::YLeaf no_authentication;
        static const Enum::YLeaf authentication;
        static const Enum::YLeaf privacy;

};

class SnmpTosEnum : public Enum
{
    public:
        static const Enum::YLeaf precedence;
        static const Enum::YLeaf dscp;

};

class SnmpaclEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class SnmpDscpValueEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf af11;
        static const Enum::YLeaf af12;
        static const Enum::YLeaf af13;
        static const Enum::YLeaf af21;
        static const Enum::YLeaf af22;
        static const Enum::YLeaf af23;
        static const Enum::YLeaf af31;
        static const Enum::YLeaf af32;
        static const Enum::YLeaf af33;
        static const Enum::YLeaf af41;
        static const Enum::YLeaf af42;
        static const Enum::YLeaf af43;
        static const Enum::YLeaf ef;
        static const Enum::YLeaf cs1;
        static const Enum::YLeaf cs2;
        static const Enum::YLeaf cs3;
        static const Enum::YLeaf cs4;
        static const Enum::YLeaf cs5;
        static const Enum::YLeaf cs6;
        static const Enum::YLeaf cs7;

};

class UserSnmpVersionEnum : public Enum
{
    public:
        static const Enum::YLeaf v1;
        static const Enum::YLeaf v2c;
        static const Enum::YLeaf v3;

};

class SnmpPrecedenceValue1Enum : public Enum
{
    public:
        static const Enum::YLeaf routine;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf flash;
        static const Enum::YLeaf flash_override;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf internet;
        static const Enum::YLeaf network;

};

class SnmpPrivAlgorithmEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf des;
        static const Enum::YLeaf Y_3des;
        static const Enum::YLeaf aes128;
        static const Enum::YLeaf aes192;
        static const Enum::YLeaf aes256;

};

class SnmpMibViewInclusionEnum : public Enum
{
    public:
        static const Enum::YLeaf included;
        static const Enum::YLeaf excluded;

};

class SnmpContextEnum : public Enum
{
    public:
        static const Enum::YLeaf vrf;
        static const Enum::YLeaf bridge;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf ospfv3;

};


}
}

#endif /* _CISCO_IOS_XR_SNMP_AGENT_CFG_ */

