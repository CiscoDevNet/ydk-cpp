#ifndef _CISCO_IOS_XR_SNMP_AGENT_CFG_1_
#define _CISCO_IOS_XR_SNMP_AGENT_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_snmp_agent_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_snmp_agent_cfg {


class Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity : public ydk::Entity
{
    public:
        InformUserCommunity();
        ~InformUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf version; //type: string
        ydk::YLeaf security_level; //type: SnmpSecurityModel
        ydk::YLeaf basic_trap_types; //type: uint32
        ydk::YLeaf advanced_trap_types1; //type: uint32
        ydk::YLeaf advanced_trap_types2; //type: uint32

}; // Snmp::TrapHosts::TrapHost::InformHost::InformUserCommunities::InformUserCommunity


class Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities : public ydk::Entity
{
    public:
        InformEncryptedUserCommunities();
        ~InformEncryptedUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InformEncryptedUserCommunity; //type: Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity

        ydk::YList inform_encrypted_user_community;
        
}; // Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities


class Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity : public ydk::Entity
{
    public:
        InformEncryptedUserCommunity();
        ~InformEncryptedUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf version; //type: string
        ydk::YLeaf security_level; //type: SnmpSecurityModel
        ydk::YLeaf basic_trap_types; //type: uint32
        ydk::YLeaf advanced_trap_types1; //type: uint32
        ydk::YLeaf advanced_trap_types2; //type: uint32

}; // Snmp::TrapHosts::TrapHost::InformHost::InformEncryptedUserCommunities::InformEncryptedUserCommunity


class Snmp::TrapHosts::TrapHost::DefaultUserCommunities : public ydk::Entity
{
    public:
        DefaultUserCommunities();
        ~DefaultUserCommunities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DefaultUserCommunity; //type: Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity

        ydk::YList default_user_community;
        
}; // Snmp::TrapHosts::TrapHost::DefaultUserCommunities


class Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity : public ydk::Entity
{
    public:
        DefaultUserCommunity();
        ~DefaultUserCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_name; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf version; //type: string
        ydk::YLeaf security_level; //type: SnmpSecurityModel
        ydk::YLeaf basic_trap_types; //type: uint32
        ydk::YLeaf advanced_trap_types1; //type: uint32
        ydk::YLeaf advanced_trap_types2; //type: uint32

}; // Snmp::TrapHosts::TrapHost::DefaultUserCommunities::DefaultUserCommunity


class Snmp::Contexts : public ydk::Entity
{
    public:
        Contexts();
        ~Contexts();

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

        class Context; //type: Snmp::Contexts::Context

        ydk::YList context;
        
}; // Snmp::Contexts


class Snmp::Contexts::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

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

        ydk::YLeaf context_name; //type: string

}; // Snmp::Contexts::Context


class Snmp::ContextMappings : public ydk::Entity
{
    public:
        ContextMappings();
        ~ContextMappings();

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

        class ContextMapping; //type: Snmp::ContextMappings::ContextMapping

        ydk::YList context_mapping;
        
}; // Snmp::ContextMappings


class Snmp::ContextMappings::ContextMapping : public ydk::Entity
{
    public:
        ContextMapping();
        ~ContextMapping();

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

        ydk::YLeaf context_mapping_name; //type: string
        ydk::YLeaf context; //type: SnmpContext
        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf topology_name; //type: string

}; // Snmp::ContextMappings::ContextMapping

class Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

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

        ydk::YLeaf sensor_mib_cache; //type: empty
        class NotificationLogMib; //type: Mib::NotificationLogMib
        class MplsTeMib; //type: Mib::MplsTeMib
        class MplsP2mpMib; //type: Mib::MplsP2mpMib
        class MplsTeExtStdMib; //type: Mib::MplsTeExtStdMib
        class MplsTeExtMib; //type: Mib::MplsTeExtMib
        class MplsFrrMib; //type: Mib::MplsFrrMib
        class CbQosmib; //type: Mib::CbQosmib
        class EntityMib; //type: Mib::EntityMib
        class InterfaceMib; //type: Mib::InterfaceMib
        class Subscriber; //type: Mib::Subscriber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::NotificationLogMib> notification_log_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsTeMib> mpls_te_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsP2mpMib> mpls_p2mp_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsTeExtStdMib> mpls_te_ext_std_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsTeExtMib> mpls_te_ext_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::MplsFrrMib> mpls_frr_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::CbQosmib> cb_qosmib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::EntityMib> entity_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib> interface_mib;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber> subscriber;
        
}; // Mib


class Mib::NotificationLogMib : public ydk::Entity
{
    public:
        NotificationLogMib();
        ~NotificationLogMib();

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

        ydk::YLeaf global_age_out; //type: uint32
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf global_size; //type: uint32
        ydk::YLeaf default_size; //type: uint32

}; // Mib::NotificationLogMib


class Mib::MplsTeMib : public ydk::Entity
{
    public:
        MplsTeMib();
        ~MplsTeMib();

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

        ydk::YLeaf cache_garbage_collect_timer; //type: uint32
        ydk::YLeaf cache_timer; //type: uint32

}; // Mib::MplsTeMib


class Mib::MplsP2mpMib : public ydk::Entity
{
    public:
        MplsP2mpMib();
        ~MplsP2mpMib();

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

        ydk::YLeaf cache_timer; //type: uint32

}; // Mib::MplsP2mpMib


class Mib::MplsTeExtStdMib : public ydk::Entity
{
    public:
        MplsTeExtStdMib();
        ~MplsTeExtStdMib();

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

        ydk::YLeaf cache_timer; //type: uint32

}; // Mib::MplsTeExtStdMib


class Mib::MplsTeExtMib : public ydk::Entity
{
    public:
        MplsTeExtMib();
        ~MplsTeExtMib();

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

        ydk::YLeaf cache_timer; //type: uint32

}; // Mib::MplsTeExtMib


class Mib::MplsFrrMib : public ydk::Entity
{
    public:
        MplsFrrMib();
        ~MplsFrrMib();

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

        ydk::YLeaf cache_timer; //type: uint32

}; // Mib::MplsFrrMib


class Mib::CbQosmib : public ydk::Entity
{
    public:
        CbQosmib();
        ~CbQosmib();

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

        ydk::YLeaf member_interface_stats; //type: empty
        ydk::YLeaf persist; //type: empty
        class Cache; //type: Mib::CbQosmib::Cache

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::CbQosmib::Cache> cache;
        
}; // Mib::CbQosmib


class Mib::CbQosmib::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

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
        ydk::YLeaf refresh_time; //type: uint32
        ydk::YLeaf service_policy_count; //type: uint32

}; // Mib::CbQosmib::Cache


class Mib::EntityMib : public ydk::Entity
{
    public:
        EntityMib();
        ~EntityMib();

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

        ydk::YLeaf entity_index_persistence; //type: empty

}; // Mib::EntityMib


class Mib::InterfaceMib : public ydk::Entity
{
    public:
        InterfaceMib();
        ~InterfaceMib();

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

        ydk::YLeaf internal_cache; //type: uint32
        ydk::YLeaf interface_alias_long; //type: empty
        ydk::YLeaf ip_subscriber; //type: empty
        ydk::YLeaf interface_index_persistence; //type: empty
        ydk::YLeaf statistics_cache; //type: empty
        class Interfaces; //type: Mib::InterfaceMib::Interfaces
        class Notification; //type: Mib::InterfaceMib::Notification
        class Subsets; //type: Mib::InterfaceMib::Subsets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Notification> notification;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets> subsets;
        
}; // Mib::InterfaceMib


class Mib::InterfaceMib::Interfaces : public ydk::Entity
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

        class Interface; //type: Mib::InterfaceMib::Interfaces::Interface

        ydk::YList interface;
        
}; // Mib::InterfaceMib::Interfaces


class Mib::InterfaceMib::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf link_up_down; //type: boolean
        ydk::YLeaf index_persistence; //type: boolean

}; // Mib::InterfaceMib::Interfaces::Interface


class Mib::InterfaceMib::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

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

        ydk::YLeaf link_ietf; //type: empty

}; // Mib::InterfaceMib::Notification


class Mib::InterfaceMib::Subsets : public ydk::Entity
{
    public:
        Subsets();
        ~Subsets();

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

        class Subset; //type: Mib::InterfaceMib::Subsets::Subset

        ydk::YList subset;
        
}; // Mib::InterfaceMib::Subsets


class Mib::InterfaceMib::Subsets::Subset : public ydk::Entity
{
    public:
        Subset();
        ~Subset();

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

        ydk::YLeaf subset_id; //type: uint32
        class LinkUpDown; //type: Mib::InterfaceMib::Subsets::Subset::LinkUpDown

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::InterfaceMib::Subsets::Subset::LinkUpDown> link_up_down;
        
}; // Mib::InterfaceMib::Subsets::Subset


class Mib::InterfaceMib::Subsets::Subset::LinkUpDown : public ydk::Entity
{
    public:
        LinkUpDown();
        ~LinkUpDown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf regular_expression; //type: string

}; // Mib::InterfaceMib::Subsets::Subset::LinkUpDown


class Mib::Subscriber : public ydk::Entity
{
    public:
        Subscriber();
        ~Subscriber();

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

        class Threshold; //type: Mib::Subscriber::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold> threshold;
        
}; // Mib::Subscriber


class Mib::Subscriber::Threshold : public ydk::Entity
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

        class Delta; //type: Mib::Subscriber::Threshold::Delta
        class AccessInterfaceSub; //type: Mib::Subscriber::Threshold::AccessInterfaceSub
        class Falling; //type: Mib::Subscriber::Threshold::Falling
        class Rising; //type: Mib::Subscriber::Threshold::Rising

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta> delta;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::AccessInterfaceSub> access_interface_sub;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Falling> falling;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Rising> rising;
        
}; // Mib::Subscriber::Threshold


class Mib::Subscriber::Threshold::Delta : public ydk::Entity
{
    public:
        Delta();
        ~Delta();

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

        class Evaluation; //type: Mib::Subscriber::Threshold::Delta::Evaluation
        class Percent; //type: Mib::Subscriber::Threshold::Delta::Percent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Evaluation> evaluation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Percent> percent;
        
}; // Mib::Subscriber::Threshold::Delta


class Mib::Subscriber::Threshold::Delta::Evaluation : public ydk::Entity
{
    public:
        Evaluation();
        ~Evaluation();

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

        class AccessInterfaces; //type: Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces
        class Nodes; //type: Mib::Subscriber::Threshold::Delta::Evaluation::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces> access_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Evaluation::Nodes> nodes;
        
}; // Mib::Subscriber::Threshold::Delta::Evaluation


class Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces : public ydk::Entity
{
    public:
        AccessInterfaces();
        ~AccessInterfaces();

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

        class AccessInterface; //type: Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface

        ydk::YList access_interface;
        
}; // Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces


class Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Delta::Evaluation::AccessInterfaces::AccessInterface


class Mib::Subscriber::Threshold::Delta::Evaluation::Nodes : public ydk::Entity
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

        class Node; //type: Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node

        ydk::YList node;
        
}; // Mib::Subscriber::Threshold::Delta::Evaluation::Nodes


class Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node : public ydk::Entity
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
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Delta::Evaluation::Nodes::Node


class Mib::Subscriber::Threshold::Delta::Percent : public ydk::Entity
{
    public:
        Percent();
        ~Percent();

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

        class AccessInterfaces; //type: Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces
        class Nodes; //type: Mib::Subscriber::Threshold::Delta::Percent::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces> access_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Delta::Percent::Nodes> nodes;
        
}; // Mib::Subscriber::Threshold::Delta::Percent


class Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces : public ydk::Entity
{
    public:
        AccessInterfaces();
        ~AccessInterfaces();

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

        class AccessInterface; //type: Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface

        ydk::YList access_interface;
        
}; // Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces


class Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Delta::Percent::AccessInterfaces::AccessInterface


class Mib::Subscriber::Threshold::Delta::Percent::Nodes : public ydk::Entity
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

        class Node; //type: Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node

        ydk::YList node;
        
}; // Mib::Subscriber::Threshold::Delta::Percent::Nodes


class Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node : public ydk::Entity
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
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Delta::Percent::Nodes::Node


class Mib::Subscriber::Threshold::AccessInterfaceSub : public ydk::Entity
{
    public:
        AccessInterfaceSub();
        ~AccessInterfaceSub();

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

        class Subsets; //type: Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets> subsets;
        
}; // Mib::Subscriber::Threshold::AccessInterfaceSub


class Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets : public ydk::Entity
{
    public:
        Subsets();
        ~Subsets();

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

        class Subset; //type: Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset

        ydk::YList subset;
        
}; // Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets


class Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset : public ydk::Entity
{
    public:
        Subset();
        ~Subset();

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

        ydk::YLeaf subset_id; //type: uint32
        class RegularExpression; //type: Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression> regular_expression;
        
}; // Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset


class Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression : public ydk::Entity
{
    public:
        RegularExpression();
        ~RegularExpression();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Notification; //type: Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification> notification;
        
}; // Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression


class Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification : public ydk::Entity
{
    public:
        Notification();
        ~Notification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RisingFalling; //type: Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling> rising_falling;
        
}; // Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification


class Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling : public ydk::Entity
{
    public:
        RisingFalling();
        ~RisingFalling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: string

}; // Mib::Subscriber::Threshold::AccessInterfaceSub::Subsets::Subset::RegularExpression::Notification::RisingFalling


class Mib::Subscriber::Threshold::Falling : public ydk::Entity
{
    public:
        Falling();
        ~Falling();

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

        class AccessInterfaces; //type: Mib::Subscriber::Threshold::Falling::AccessInterfaces
        class Nodes; //type: Mib::Subscriber::Threshold::Falling::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Falling::AccessInterfaces> access_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Falling::Nodes> nodes;
        
}; // Mib::Subscriber::Threshold::Falling


class Mib::Subscriber::Threshold::Falling::AccessInterfaces : public ydk::Entity
{
    public:
        AccessInterfaces();
        ~AccessInterfaces();

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

        class AccessInterface; //type: Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface

        ydk::YList access_interface;
        
}; // Mib::Subscriber::Threshold::Falling::AccessInterfaces


class Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Falling::AccessInterfaces::AccessInterface


class Mib::Subscriber::Threshold::Falling::Nodes : public ydk::Entity
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

        class Node; //type: Mib::Subscriber::Threshold::Falling::Nodes::Node

        ydk::YList node;
        
}; // Mib::Subscriber::Threshold::Falling::Nodes


class Mib::Subscriber::Threshold::Falling::Nodes::Node : public ydk::Entity
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
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Falling::Nodes::Node


class Mib::Subscriber::Threshold::Rising : public ydk::Entity
{
    public:
        Rising();
        ~Rising();

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

        class AccessInterfaces; //type: Mib::Subscriber::Threshold::Rising::AccessInterfaces
        class Nodes; //type: Mib::Subscriber::Threshold::Rising::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Rising::AccessInterfaces> access_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_snmp_agent_cfg::Mib::Subscriber::Threshold::Rising::Nodes> nodes;
        
}; // Mib::Subscriber::Threshold::Rising


class Mib::Subscriber::Threshold::Rising::AccessInterfaces : public ydk::Entity
{
    public:
        AccessInterfaces();
        ~AccessInterfaces();

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

        class AccessInterface; //type: Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface

        ydk::YList access_interface;
        
}; // Mib::Subscriber::Threshold::Rising::AccessInterfaces


class Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface : public ydk::Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

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
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Rising::AccessInterfaces::AccessInterface


class Mib::Subscriber::Threshold::Rising::Nodes : public ydk::Entity
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

        class Node; //type: Mib::Subscriber::Threshold::Rising::Nodes::Node

        ydk::YList node;
        
}; // Mib::Subscriber::Threshold::Rising::Nodes


class Mib::Subscriber::Threshold::Rising::Nodes::Node : public ydk::Entity
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
        ydk::YLeaf session_count; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Mib::Subscriber::Threshold::Rising::Nodes::Node


}
}

#endif /* _CISCO_IOS_XR_SNMP_AGENT_CFG_1_ */

