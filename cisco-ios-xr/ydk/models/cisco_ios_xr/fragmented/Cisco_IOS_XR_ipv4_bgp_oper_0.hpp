#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_0_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

class Bgp : public Entity
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
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class ConfigInstances; //type: Bgp::ConfigInstances
        class Instances; //type: Bgp::Instances
        class BpmInstancesTable; //type: Bgp::BpmInstancesTable

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::BpmInstancesTable> bpm_instances_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances> config_instances;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances> instances;
        
}; // Bgp


class Bgp::ConfigInstances : public Entity
{
    public:
        ConfigInstances();
        ~ConfigInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConfigInstance; //type: Bgp::ConfigInstances::ConfigInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance> > config_instance;
        
}; // Bgp::ConfigInstances


class Bgp::ConfigInstances::ConfigInstance : public Entity
{
    public:
        ConfigInstance();
        ~ConfigInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: string
        class ConfigInstanceDefaultVrf; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf
        class ConfigVrfs; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf> config_instance_default_vrf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs> config_vrfs;
        
}; // Bgp::ConfigInstances::ConfigInstance


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf : public Entity
{
    public:
        ConfigInstanceDefaultVrf();
        ~ConfigInstanceDefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EntityConfigurations; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations
        class ConfigurationUsers; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::ConfigurationUsers
        class ConfigurationInheritances; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::ConfigurationInheritances

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::ConfigurationInheritances> configuration_inheritances;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::ConfigurationUsers> configuration_users;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations> entity_configurations;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations : public Entity
{
    public:
        EntityConfigurations();
        ~EntityConfigurations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EntityConfiguration; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration> > entity_configuration;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration : public Entity
{
    public:
        EntityConfiguration();
        ~EntityConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entity_type; //type: BgpEntityEnum
        YLeaf neighbor_address; //type: string
        YLeaf entity_name; //type: string
        YLeaf group_name; //type: string
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf address_family_identifier; //type: uint8
        class NeighborAddressXr; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr
        class AfIndependentConfig; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig
        class AfDependentConfig; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig> > af_dependent_config;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig> af_independent_config;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr> neighbor_address_xr;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig : public Entity
{
    public:
        AfIndependentConfig();
        ~AfIndependentConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf remote_as_number_xx; //type: uint32
        YLeaf remote_as_number_yy; //type: uint32
        YLeaf configured_speaker_id; //type: uint32
        YLeaf tcp_mss; //type: uint32
        YLeaf min_advertisement_interval; //type: uint32
        YLeaf min_advertisement_interval_msecs; //type: uint32
        YLeaf description; //type: string
        YLeaf ebgp_hop_count; //type: uint32
        YLeaf bmp_servers; //type: uint32
        YLeaf is_ebgp_multihop_bgpmpls_forwarding_disabled; //type: boolean
        YLeaf keychain; //type: string
        YLeaf local_as_number_xx; //type: uint32
        YLeaf local_as_number_yy; //type: uint32
        YLeaf local_as_no_prepend; //type: boolean
        YLeaf password; //type: string
        YLeaf socket_buffer_receive_size; //type: uint32
        YLeaf bgp_buffer_receive_size; //type: uint32
        YLeaf socket_buffer_send_size; //type: uint32
        YLeaf bgp_buffer_send_size; //type: uint32
        YLeaf adminstrative_shutdown; //type: boolean
        YLeaf keepalive_interval; //type: uint32
        YLeaf hold_time_value; //type: uint32
        YLeaf min_acc_hold_time_value; //type: uint32
        YLeaf msg_log_in_buf_count; //type: uint32
        YLeaf msg_log_out_buf_count; //type: uint32
        YLeaf route_updates_source; //type: string
        YLeaf dmz_link_bandwidth; //type: uint32
        YLeaf ebgp_recv_dmz; //type: uint32
        YLeaf ebgp_send_dmz_mode; //type: BgpEbgpSendDmzEnableModeEnum
        YLeaf ttl_security; //type: uint32
        YLeaf suppress4_byte_as; //type: uint32
        YLeaf capability_negotiation_suppressed; //type: uint32
        YLeaf session_open_mode; //type: BgpTcpModeEnum
        YLeaf bfd; //type: uint32
        YLeaf bfd_mininterval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf tos_type_info; //type: uint8
        YLeaf tos_value_info; //type: uint8
        YLeaf nsr_disabled; //type: uint32
        YLeaf graceful_restart_disabled; //type: uint32
        YLeaf nbr_restart_time; //type: uint32
        YLeaf nbr_stale_path_time; //type: uint32
        YLeaf nbr_enforce_first_as_status; //type: boolean
        YLeaf nbr_cluster_id_type_info; //type: uint8
        YLeaf nbr_cluster_id_info; //type: uint32
        YLeaf ignore_connected_check; //type: boolean
        YLeaf internal_vpn_client; //type: boolean
        YLeaf addpath_send_capability; //type: uint32
        YLeaf update_error_handling_no_reset; //type: uint32
        YLeaf addpath_receive_capability; //type: uint32
        YLeaf egress_peer_engineering; //type: uint32
        YLeaf prefix_validation_disable; //type: uint32
        YLeaf bestpath_use_origin_as_validity; //type: uint32
        YLeaf prefix_validation_allow_invalid; //type: uint32
        YLeaf prefix_validation_signal_ibgp; //type: uint32
        YLeaf neighbor_update_filter_exists; //type: boolean
        YLeaf neighbor_update_filter_message_buffer_count; //type: uint32
        YLeaf neighbor_update_filter_message_buffer_is_non_circular; //type: boolean
        YLeaf neighbor_update_filter_logging_disable; //type: boolean
        YLeaf neighbor_update_filter_attribute_filter_group_name; //type: string
        YLeaf graceful_shutdown_exists; //type: uint32
        YLeaf graceful_shutdown_loc_pref; //type: uint32
        YLeaf graceful_shutdown_as_prepends; //type: uint32
        YLeaf graceful_shutdown_activate; //type: uint32
        YLeaf neighbor_remote_as_list_group_name; //type: string
        YLeaf max_peers; //type: uint32
        YLeaf idle_watch_time; //type: uint32
        YLeaf local_as_replace_as; //type: boolean
        YLeaf local_as_dual_as; //type: boolean
        class LocalIpAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress
        class RemoteAsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo
        class SpeakerIdInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo
        class MinAdvertisementInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo
        class DescriptionInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo
        class EbgpHopCountInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo
        class TcpmssInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo
        class BmpServersInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo
        class KeychainInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo
        class LocalAsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo
        class PasswordInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo
        class ReceiveBufferInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo
        class SendBufferInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo
        class ShutdownInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo
        class TimersInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo
        class LocalAddressInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo
        class MsgLogInInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo
        class MsgLogOutInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo
        class UpdateSourceInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo
        class DmzLinkBandwidthInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo
        class EbgpRecvDmzInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo
        class EbgpSendDmzInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo
        class TtlSecurityInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo
        class Suppress4BbyteAsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo
        class SessionOpenModeInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo
        class BfdInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo
        class BfdMinintervalInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo
        class BfdMultiplierInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo
        class TosInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo
        class NsrDisabledInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo
        class GracefulRestartDisabledInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo
        class NbrRestartTimeInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo
        class NbrStalePathTimeInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo
        class NbrEnforceFirstAsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo
        class ClusterIdInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo
        class IgnoreConnectedInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo
        class InternalVpnClientInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo
        class AddpathSendCapabilityInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo
        class AddpathReceiveCapabilityInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo
        class EgressPeerEngineeringInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo
        class UpdateErrorHandlingNoResetInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo
        class PrefixValidationDisableInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo
        class PrefixValidationUseValiditInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo
        class PrefixValidationAllowInvalidInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo
        class PrefixValidationSignalIbgpInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo
        class NeighborUpdateFilterExistsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo
        class NeighborUpdateFilterMessageBufferCountInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo
        class NeighborUpdateFilterSyslogDisableInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo
        class NeighborUpdateFilterAttributeInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo
        class GracefulShutdownInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo
        class GracefulShutdownLocPrefInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo
        class GracefulShutdownAsPrependsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo
        class GracefulShutdownActivateInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo
        class CapabilityNegotiationSuppressedInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo
        class NeighborRemoteAsListInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo
        class MaxPeersInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo
        class IdleWatchTimeInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo> addpath_receive_capability_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo> addpath_send_capability_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo> bfd_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo> bfd_mininterval_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo> bfd_multiplier_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo> bmp_servers_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo> capability_negotiation_suppressed_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo> cluster_id_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo> description_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo> dmz_link_bandwidth_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo> ebgp_hop_count_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo> ebgp_recv_dmz_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo> ebgp_send_dmz_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo> egress_peer_engineering_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo> graceful_restart_disabled_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo> graceful_shutdown_activate_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo> graceful_shutdown_as_prepends_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo> graceful_shutdown_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo> graceful_shutdown_loc_pref_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo> idle_watch_time_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo> ignore_connected_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo> internal_vpn_client_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo> keychain_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo> local_address_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo> local_as_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress> local_ip_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo> max_peers_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo> min_advertisement_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo> msg_log_in_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo> msg_log_out_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo> nbr_enforce_first_as_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo> nbr_restart_time_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo> nbr_stale_path_time_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo> neighbor_remote_as_list_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo> neighbor_update_filter_attribute_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo> neighbor_update_filter_exists_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo> neighbor_update_filter_message_buffer_count_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo> neighbor_update_filter_syslog_disable_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo> nsr_disabled_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo> password_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo> prefix_validation_allow_invalid_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo> prefix_validation_disable_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo> prefix_validation_signal_ibgp_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo> prefix_validation_use_validit_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo> receive_buffer_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo> remote_as_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo> send_buffer_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo> session_open_mode_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo> shutdown_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo> speaker_id_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo> suppress4_bbyte_as_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo> tcpmss_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo> timers_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo> tos_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo> ttl_security_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo> update_error_handling_no_reset_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo> update_source_info;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress : public Entity
{
    public:
        LocalIpAddress();
        ~LocalIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalIpAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo : public Entity
{
    public:
        RemoteAsInfo();
        ~RemoteAsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo : public Entity
{
    public:
        SpeakerIdInfo();
        ~SpeakerIdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo : public Entity
{
    public:
        MinAdvertisementInfo();
        ~MinAdvertisementInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo : public Entity
{
    public:
        DescriptionInfo();
        ~DescriptionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo : public Entity
{
    public:
        EbgpHopCountInfo();
        ~EbgpHopCountInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo : public Entity
{
    public:
        TcpmssInfo();
        ~TcpmssInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo : public Entity
{
    public:
        BmpServersInfo();
        ~BmpServersInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo : public Entity
{
    public:
        KeychainInfo();
        ~KeychainInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo : public Entity
{
    public:
        LocalAsInfo();
        ~LocalAsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo : public Entity
{
    public:
        PasswordInfo();
        ~PasswordInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo : public Entity
{
    public:
        ReceiveBufferInfo();
        ~ReceiveBufferInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo : public Entity
{
    public:
        SendBufferInfo();
        ~SendBufferInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo : public Entity
{
    public:
        ShutdownInfo();
        ~ShutdownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo : public Entity
{
    public:
        TimersInfo();
        ~TimersInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo : public Entity
{
    public:
        LocalAddressInfo();
        ~LocalAddressInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::LocalAddressInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo : public Entity
{
    public:
        MsgLogInInfo();
        ~MsgLogInInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo : public Entity
{
    public:
        MsgLogOutInfo();
        ~MsgLogOutInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress

class BgpBfdStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_bfd_state_not_configured;
        static const Enum::YLeaf bgp_bfd_state_admin_down;
        static const Enum::YLeaf bgp_bfd_state_not_supported;
        static const Enum::YLeaf bgp_bfd_state_not_created;
        static const Enum::YLeaf bgp_bfd_state_created;
        static const Enum::YLeaf bgp_bfd_state_up;
        static const Enum::YLeaf bgp_bfd_state_down;
        static const Enum::YLeaf bgp_bfd_state_nbr_not_configured;
        static const Enum::YLeaf bgp_bfd_state_none;

};

class BgpEntitiesEnum : public Enum
{
    public:
        static const Enum::YLeaf af_group;
        static const Enum::YLeaf session_group;
        static const Enum::YLeaf neighbor_group;
        static const Enum::YLeaf neighbor;

};

class BgpSrpolicyTunReqStateEnum : public Enum
{
    public:
        static const Enum::YLeaf tunnel_state_request_pending;
        static const Enum::YLeaf tunnel_state_requested;
        static const Enum::YLeaf tunnel_state_notified_up;
        static const Enum::YLeaf tunnel_state_notified_down;
        static const Enum::YLeaf tunnel_state_marked_stale;
        static const Enum::YLeaf tunnel_state_marked_disable;

};

class BgpGwAddrLenEnum : public Enum
{
    public:
        static const Enum::YLeaf gwnone;
        static const Enum::YLeaf gwipv4;
        static const Enum::YLeaf gwipv6;

};

class BgpNhValidateEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_nh_validate_sync;
        static const Enum::YLeaf bgp_nh_validate_async;
        static const Enum::YLeaf bgp_nh_validate_none;

};

class BgpDsConnStateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf connect_init;
        static const Enum::YLeaf connect_fail;
        static const Enum::YLeaf connect_estb;
        static const Enum::YLeaf disconnect_init;
        static const Enum::YLeaf disconnect_fail;
        static const Enum::YLeaf disconnect_done;

};

class BgpRpkiStateEnum : public Enum
{
    public:
        static const Enum::YLeaf idle;
        static const Enum::YLeaf attempt_connect;
        static const Enum::YLeaf connected;

};

class BgpPeerResetReasonIndexEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_read_remote_closed;
        static const Enum::YLeaf bgp_read_failed;
        static const Enum::YLeaf bgp_write_failed;
        static const Enum::YLeaf bgp_sock_disconnected;
        static const Enum::YLeaf bgp_sock_select_failed;
        static const Enum::YLeaf bgp_peer_reset_reason_none;

};

class BgpScopedSyncStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_scope_sync_state_none;
        static const Enum::YLeaf bgp_scope_sync_state_not_nsr_ready;
        static const Enum::YLeaf bgp_scope_sync_state_timer_start;
        static const Enum::YLeaf bgp_scope_sync_state_add_list;
        static const Enum::YLeaf bgp_scope_sync_state_batch_acitve;

};

class BgpteTunnelEnum : public Enum
{
    public:
        static const Enum::YLeaf attrset;
        static const Enum::YLeaf srpolicy;

};

class BgpEbgpSendDmzEnableModeEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_ebgp_send_dmz_disable;
        static const Enum::YLeaf bgp_ebgp_send_dmz_dflt;
        static const Enum::YLeaf bgp_ebgp_send_dmz_cumulative;

};

class BgpRpkiPstateEnum : public Enum
{
    public:
        static const Enum::YLeaf not_started;
        static const Enum::YLeaf reset;
        static const Enum::YLeaf refresh;
        static const Enum::YLeaf reset_query_sent;
        static const Enum::YLeaf serial_query_sent;
        static const Enum::YLeaf data_start;
        static const Enum::YLeaf data_end;

};

class BgpRoute1Enum : public Enum
{
    public:
        static const Enum::YLeaf bgp_route_type_used;
        static const Enum::YLeaf bgp_route_type_rcvd_only;
        static const Enum::YLeaf bgp_route_type_safi_label_ed_ucast_used;
        static const Enum::YLeaf bgp_route_type_safi_label_ed_ucast_rcvd_only;
        static const Enum::YLeaf bgp_route_type_rib;
        static const Enum::YLeaf bgp_route_type_aggregate;
        static const Enum::YLeaf bgp_route_type_max;

};

class BgpOpenCheckErrEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf neighbor_down;
        static const Enum::YLeaf no_update_group_set;
        static const Enum::YLeaf no_af_config;
        static const Enum::YLeaf update_group_pending;
        static const Enum::YLeaf low_memory;
        static const Enum::YLeaf neighbor_shutdown;
        static const Enum::YLeaf ebgp_neighbor_remote;
        static const Enum::YLeaf update_source_interface_null;
        static const Enum::YLeaf no_ipv6_address;
        static const Enum::YLeaf first_hop_interface_null;
        static const Enum::YLeaf no_ipv6ll_address;
        static const Enum::YLeaf no_update_source_config;
        static const Enum::YLeaf no_router_id;
        static const Enum::YLeaf update_source_interface_get_failed;
        static const Enum::YLeaf update_source_interface_state_get_failed;
        static const Enum::YLeaf update_source_interface_down;
        static const Enum::YLeaf update_source_interface_ll_get_failed;
        static const Enum::YLeaf update_source_interface_address_get_failed;
        static const Enum::YLeaf source_address_af_invalid;
        static const Enum::YLeaf no_update_source_ll_peering;
        static const Enum::YLeaf local_address_get_failed;
        static const Enum::YLeaf no_best_local_address;
        static const Enum::YLeaf neighbor_address_equals_local_address;
        static const Enum::YLeaf neighbor_closing;
        static const Enum::YLeaf neighbor_pending_reset;
        static const Enum::YLeaf out_interface_set_failed;
        static const Enum::YLeaf local_address_mismatch;
        static const Enum::YLeaf neighbor_active_only;
        static const Enum::YLeaf socket_init_failed;
        static const Enum::YLeaf socket_operation_failed;
        static const Enum::YLeaf local_neighbor;
        static const Enum::YLeaf multi_hop_neighbor;

};

class BgpRpkiEdmAfEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class BgpBpStageEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_bp_comp_not_compared;
        static const Enum::YLeaf bgp_bp_comp_imulti_path;
        static const Enum::YLeaf bgp_bp_comp_emulti_path;
        static const Enum::YLeaf bgp_bp_comp_eimulti_path;
        static const Enum::YLeaf bgp_bp_invalid_path;
        static const Enum::YLeaf bgp_bp_comp_pre_cost_comm;
        static const Enum::YLeaf bgp_bp_comp_weight;
        static const Enum::YLeaf bgp_bp_comp_locpref;
        static const Enum::YLeaf bgp_bp_comp_rpki;
        static const Enum::YLeaf bgp_bp_comp_aigp;
        static const Enum::YLeaf bgp_bp_comp_local;
        static const Enum::YLeaf bgp_bp_comp_local_rib;
        static const Enum::YLeaf bgp_bp_comp_as_path_len;
        static const Enum::YLeaf bgp_bp_comp_origin;
        static const Enum::YLeaf bgp_bp_comp_med;
        static const Enum::YLeaf bgp_bp_comp_ebgp;
        static const Enum::YLeaf bgp_bp_comp_ao;
        static const Enum::YLeaf bgp_bp_comp_igp_metric;
        static const Enum::YLeaf bgp_bp_comp_igp_cost_comm;
        static const Enum::YLeaf bgp_bp_comp_rtr_id;
        static const Enum::YLeaf bgp_bp_comp_clstr_len;
        static const Enum::YLeaf bgp_bp_comp_nbr_addr;
        static const Enum::YLeaf bgp_bp_comp_suppressed;
        static const Enum::YLeaf bgp_bp_comp_mismatch;
        static const Enum::YLeaf bgp_bp_comp_persistence;

};

class BgpNhEventEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_nh_event_crit_not_f;
        static const Enum::YLeaf bgp_nh_event_non_crit_not_f;
        static const Enum::YLeaf bgp_nh_event_registration;

};

class BgpNhUpdateEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_nh_update_none;
        static const Enum::YLeaf bgp_nh_update_crit_not_f;
        static const Enum::YLeaf bgp_nh_update_crit_sync;
        static const Enum::YLeaf bgp_nh_update_crit_rib_conv;
        static const Enum::YLeaf bgp_nh_update_crit_table_down;
        static const Enum::YLeaf bgp_nh_update_non_crit_not_f;
        static const Enum::YLeaf bgp_nh_update_non_crit_sync;
        static const Enum::YLeaf bgp_nh_update_non_crit_rib_conv;
        static const Enum::YLeaf bgp_nh_update_non_crit_table_down;

};

class BgpRpkiPerrorEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf message_version;
        static const Enum::YLeaf message_type;
        static const Enum::YLeaf message_length;
        static const Enum::YLeaf nonce_mismatch;
        static const Enum::YLeaf bad_prefix;
        static const Enum::YLeaf fsm;
        static const Enum::YLeaf no_response;
        static const Enum::YLeaf error_report;

};

class BgpBfdEnableModeEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_bfd_enable_mode_disable;
        static const Enum::YLeaf bgp_bfd_enable_mode_def;
        static const Enum::YLeaf bgp_bfd_enable_mode_strict;

};

class BgpTeInfraTunnelEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_te_infra_default_tunnel_type;
        static const Enum::YLeaf bgp_te_infra_attr_set_tunnel_type;
        static const Enum::YLeaf bgp_te_infra_multi_path_exp_tunnel_type;

};

class BgpRnhAddrLenEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf v4;
        static const Enum::YLeaf mac;
        static const Enum::YLeaf v6;

};

class BgpTcpModeEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_tcp_mode_type_either;
        static const Enum::YLeaf bgp_tcp_mode_type_active_only;
        static const Enum::YLeaf bgp_tcp_mode_type_passive_only;

};

class BgpBmpStateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf connecting;
        static const Enum::YLeaf established;
        static const Enum::YLeaf closing;

};

class BgpIsmConnStateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf connect_done;

};

class BgpBagUpdFilterActionEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf withdraw;
        static const Enum::YLeaf attribute_discard;

};

class BgpBmpUpdModeEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_bmp_upd_n_either;
        static const Enum::YLeaf bgp_bmp_upd_route_mon;
        static const Enum::YLeaf bgp_bmp_upd_route_mirr;

};

class BgpRouteEnum : public Enum
{
    public:
        static const Enum::YLeaf used;
        static const Enum::YLeaf received_only;
        static const Enum::YLeaf safi_labeled_unicast_used;
        static const Enum::YLeaf safi_labeled_unicast_received_only;
        static const Enum::YLeaf rib;
        static const Enum::YLeaf aggregate;

};

class BgpConnStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_st_dont_care;
        static const Enum::YLeaf bgp_st_idle;
        static const Enum::YLeaf bgp_st_connect;
        static const Enum::YLeaf bgp_st_active;
        static const Enum::YLeaf bgp_st_open_sent;
        static const Enum::YLeaf bgp_st_open_confirm;
        static const Enum::YLeaf bgp_st_estab;
        static const Enum::YLeaf bgp_st_closing;
        static const Enum::YLeaf bgp_st_closing_sync;

};

class BgpEntityEnum : public Enum
{
    public:
        static const Enum::YLeaf af_group;
        static const Enum::YLeaf session_group;
        static const Enum::YLeaf neighbor_group;
        static const Enum::YLeaf neighbor;

};

class BgpRpkiCreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf no_close_reason;
        static const Enum::YLeaf read_error;
        static const Enum::YLeaf write_error;
        static const Enum::YLeaf proto_error;
        static const Enum::YLeaf config_shutdown;
        static const Enum::YLeaf config_removed;
        static const Enum::YLeaf config_changed;
        static const Enum::YLeaf nsr_disabled;
        static const Enum::YLeaf user_clear;
        static const Enum::YLeaf ssh_died;
        static const Enum::YLeaf tcp_died;

};

class BgpSyncNbrNsrStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_nbr_nsr_st_none;
        static const Enum::YLeaf bgp_nbr_nsr_st_oper_down;
        static const Enum::YLeaf bgp_nbr_nsr_st_tcp_init_sync;
        static const Enum::YLeaf bgp_nbr_nsr_st_tcp_phase_two;
        static const Enum::YLeaf bgp_nbr_nsr_st_bgp_init_sync;
        static const Enum::YLeaf bgp_nbr_nsr_st_nsr_ready;

};

class BgpAfiEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv4_multicast;
        static const Enum::YLeaf ipv4_labeled;
        static const Enum::YLeaf ipv4_tunnel;
        static const Enum::YLeaf vp_nv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf ipv6_multicast;
        static const Enum::YLeaf ipv6_labeled;
        static const Enum::YLeaf vp_nv6;
        static const Enum::YLeaf ipv4mdt;
        static const Enum::YLeaf l2vpn_vpls;
        static const Enum::YLeaf rt_constraint;
        static const Enum::YLeaf ipv4mvpn;
        static const Enum::YLeaf ipv6mvpn;
        static const Enum::YLeaf l2vpn_evpn;
        static const Enum::YLeaf ls_ls;
        static const Enum::YLeaf vp_nv4_multicast;
        static const Enum::YLeaf vp_nv6_multicast;
        static const Enum::YLeaf ipv4_flowspec;
        static const Enum::YLeaf ipv6_flowspec;
        static const Enum::YLeaf vp_nv4_flowspec;
        static const Enum::YLeaf vp_nv6_flowspec;
        static const Enum::YLeaf l2vpn_mspw;
        static const Enum::YLeaf ipv4sr_policy;
        static const Enum::YLeaf ipv6sr_policy;
        static const Enum::YLeaf no_address_family;
        static const Enum::YLeaf all_address_families;

};

class BgpBindingSidEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf label;
        static const Enum::YLeaf v6;

};

class BgpRpkiAfEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class BgpResetReasonIndexEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_none;
        static const Enum::YLeaf bgp_init;
        static const Enum::YLeaf bgp_no_memory;
        static const Enum::YLeaf not_received;
        static const Enum::YLeaf not_sent;
        static const Enum::YLeaf conn_collision;
        static const Enum::YLeaf peer_closed;
        static const Enum::YLeaf max_prefix_exceeded;
        static const Enum::YLeaf interface_flap;
        static const Enum::YLeaf neighbor_deleted;
        static const Enum::YLeaf admin_shutdown;
        static const Enum::YLeaf af_activated;
        static const Enum::YLeaf af_deactivated;
        static const Enum::YLeaf protocol_error;
        static const Enum::YLeaf listen_closed;
        static const Enum::YLeaf rib_failed;
        static const Enum::YLeaf user_clear;
        static const Enum::YLeaf user_clear_gr;
        static const Enum::YLeaf router_id_changed;
        static const Enum::YLeaf remote_as_changed;
        static const Enum::YLeaf orf_changed;
        static const Enum::YLeaf rr_client_changed;
        static const Enum::YLeaf legacy_pe_rt_changed;
        static const Enum::YLeaf softre_config_changed;
        static const Enum::YLeaf local_as_changed;
        static const Enum::YLeaf low_memory;
        static const Enum::YLeaf bfd_down;
        static const Enum::YLeaf allow_as_in_changed;
        static const Enum::YLeaf recv_dmz_cfg;
        static const Enum::YLeaf cap_4byteas_changed;
        static const Enum::YLeaf tcp_oper_down;
        static const Enum::YLeaf scoped_sync_retry;
        static const Enum::YLeaf cluster_id_changed;
        static const Enum::YLeaf rr_disable_changed;
        static const Enum::YLeaf aigp_changed;
        static const Enum::YLeaf signalling_changed;
        static const Enum::YLeaf open_check_s_failed;
        static const Enum::YLeaf ao_changed;
        static const Enum::YLeaf llgr_staletime_changed;
        static const Enum::YLeaf llgr_capable_changed;
        static const Enum::YLeaf nbr_local_addr_changed;
        static const Enum::YLeaf internal_vpn_client_changed;
        static const Enum::YLeaf cap_suppress_all_changed;

};

class BgpRtrStateEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_router_read_only;
        static const Enum::YLeaf bgp_router_do_best_path;
        static const Enum::YLeaf bgp_router_do_tunnel_update;
        static const Enum::YLeaf bgp_router_do_import;
        static const Enum::YLeaf bgp_router_do_label_alloc;
        static const Enum::YLeaf bgp_router_do_ribupd;
        static const Enum::YLeaf bgp_router_read_write;
        static const Enum::YLeaf bgp_router_mode_count;

};

class BgpLabelRpfInstallEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_label_rpf_install_rib;
        static const Enum::YLeaf bgp_label_rpf_install_lsd;

};

class BgpBagUpdErrActionEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp_bag_upd_err_action_none;
        static const Enum::YLeaf bgp_bag_upd_err_action_discard_msg;
        static const Enum::YLeaf bgp_bag_upd_err_action_reset;
        static const Enum::YLeaf bgp_bag_upd_err_action_wdr_or_reset;
        static const Enum::YLeaf bgp_bag_upd_err_action_wdr;
        static const Enum::YLeaf bgp_bag_upd_err_action_discard_attr;
        static const Enum::YLeaf bgp_bag_upd_err_action_local_repair;
        static const Enum::YLeaf bgp_bag_upd_err_action_max;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_0_ */

