#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_3_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo : public Entity
{
    public:
        IdleWatchTimeInfo();
        ~IdleWatchTimeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig : public Entity
{
    public:
        AfDependentConfig();
        ~AfDependentConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf has_orf_capability; //type: uint32
        YLeaf is_default_originate_not_disabled; //type: boolean
        YLeaf default_originate_route_policy; //type: string
        YLeaf max_prefixes; //type: uint32
        YLeaf max_prefix_warn_threshold; //type: uint32
        YLeaf is_max_prefix_warn_only; //type: boolean
        YLeaf max_prefix_restart_time; //type: uint32
        YLeaf is_max_prefix_discard_extra_paths; //type: boolean
        YLeaf is_next_hop_self_disabled; //type: boolean
        YLeaf is_next_hop_unchanged; //type: boolean
        YLeaf permanent_network; //type: boolean
        YLeaf route_policy_in; //type: string
        YLeaf route_policy_out; //type: string
        YLeaf prefix_orf_filter; //type: string
        YLeaf remove_private_as_out; //type: boolean
        YLeaf entire_aspath_out; //type: boolean
        YLeaf remove_private_asin; //type: boolean
        YLeaf entire_aspath_in; //type: boolean
        YLeaf client_route_reflector; //type: boolean
        YLeaf accept_route_legacy_pe_rt; //type: boolean
        YLeaf is_af_enabled; //type: boolean
        YLeaf send_community_attribute; //type: boolean
        YLeaf send_graceful_shut_community_attributes; //type: boolean
        YLeaf send_extended_community_attribute; //type: boolean
        YLeaf soft_reconfig_not_disabled; //type: boolean
        YLeaf alway_use_soft_reconfig; //type: boolean
        YLeaf site_of_origin; //type: string
        YLeaf default_weight; //type: uint32
        YLeaf default_allowas; //type: uint32
        YLeaf af_long_lived_graceful_restart_stale_time_send; //type: uint32
        YLeaf af_long_lived_graceful_restart_stale_time_accept; //type: uint32
        YLeaf af_long_lived_graceful_restart_capable; //type: uint32
        YLeaf is_as_override_disabled; //type: boolean
        YLeaf is_aigp_enabled; //type: boolean
        YLeaf is_aigp_cost_community_enabled; //type: boolean
        YLeaf is_aigp_cost_community_id; //type: uint32
        YLeaf is_aigp_cost_community_transitive; //type: uint32
        YLeaf aigp_cost_community_poi; //type: uint32
        YLeaf is_aigp_med_enabled; //type: boolean
        YLeaf accept_own; //type: boolean
        YLeaf multipath; //type: boolean
        YLeaf is_fspec_valid_enabled; //type: boolean
        YLeaf is_next_hop_unchanged_mpath; //type: boolean
        YLeaf is_send_mcast_attr_enabled; //type: boolean
        YLeaf advertise_v4; //type: uint8
        YLeaf advertise_v6; //type: uint8
        YLeaf advertise_l2vpnevpn; //type: uint8
        YLeaf advertise_disable; //type: uint8
        YLeaf advertise_def_vrf_imp_disable_v4; //type: uint8
        YLeaf advertise_def_vrf_imp_disable_v6; //type: uint8
        YLeaf advertise_vrf_re_imp_disable_v4; //type: uint8
        YLeaf advertise_vrf_re_imp_disable_v6; //type: uint8
        YLeaf encapsulation_type; //type: uint32
        YLeaf import; //type: boolean
        YLeaf import_stitching; //type: boolean
        YLeaf import_reoriginate; //type: boolean
        YLeaf import_reoriginate_stitching; //type: boolean
        YLeaf advertise_local_labeled_route; //type: uint32

        class OrrRootAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress
        class OrfCapabilityInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo
        class DefaultOriginateInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo
        class MaxPrefixesInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo
        class OrrInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo
        class NextHopSelfInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo
        class NextHopUnchangedInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo
        class RoutePolicyInInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo
        class RoutePolicyOutInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo
        class PrefixFilterInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo
        class RemovePrivateAsInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo
        class RemovePrivateAsInInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo
        class RouteReflectorInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo
        class LegacyPeRtInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo
        class AfEnabledInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo
        class SendCommunityInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo
        class SendGracefulShutdownCommunityInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo
        class SendExtendedCommunityInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo
        class SoftReconfigInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo
        class SoOInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo
        class WeightInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo
        class AllowasInInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo
        class AfLongLivedGracefulStartStaleTimeInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfLongLivedGracefulStartStaleTimeInfo
        class AfLongLivedGracefulStartCapableInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfLongLivedGracefulStartCapableInfo
        class AsOverrideInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AsOverrideInfo
        class AigpInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AigpInfo
        class AigpCostCommunityInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AigpCostCommunityInfo
        class AigpMed; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AigpMed
        class AcceptOwnInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AcceptOwnInfo
        class MultipathInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MultipathInfo
        class FspecValidInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::FspecValidInfo
        class NextHopUnchangedMpathInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedMpathInfo
        class PermanentNetworkInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PermanentNetworkInfo
        class SendMcastAttrInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendMcastAttrInfo
        class AdvertiseV4AfiInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseV4AfiInfo
        class AdvertiseV6AfiInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseV6AfiInfo
        class AdvertiseL2VpnevpnAfiInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseL2VpnevpnAfiInfo
        class AdvertiseDisInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDisInfo
        class AdvertiseDefVrfImpDisableAfiV4Info; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV4Info
        class AdvertiseDefVrfImpDisableAfiV6Info; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info
        class AdvertiseVrfReImpDisableAfiV4Info; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info
        class AdvertiseVrfReImpDisableAfiV6Info; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info
        class AfEncapsulationTypeInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo
        class ImportAfiInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo
        class AdvertiseLocalLabeledRouteInfo; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AcceptOwnInfo> accept_own_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV4Info> advertise_def_vrf_imp_disable_afi_v4_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info> advertise_def_vrf_imp_disable_afi_v6_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDisInfo> advertise_dis_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseL2VpnevpnAfiInfo> advertise_l2vpnevpn_afi_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo> advertise_local_labeled_route_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseV4AfiInfo> advertise_v4_afi_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseV6AfiInfo> advertise_v6_afi_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info> advertise_vrf_re_imp_disable_afi_v4_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info> advertise_vrf_re_imp_disable_afi_v6_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo> af_enabled_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo> af_encapsulation_type_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfLongLivedGracefulStartCapableInfo> af_long_lived_graceful_start_capable_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfLongLivedGracefulStartStaleTimeInfo> af_long_lived_graceful_start_stale_time_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AigpCostCommunityInfo> aigp_cost_community_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AigpInfo> aigp_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AigpMed> aigp_med;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo> allowas_in_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AsOverrideInfo> as_override_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo> default_originate_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::FspecValidInfo> fspec_valid_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo> import_afi_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo> legacy_pe_rt_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo> max_prefixes_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MultipathInfo> multipath_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo> next_hop_self_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo> next_hop_unchanged_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedMpathInfo> next_hop_unchanged_mpath_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo> orf_capability_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo> orr_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress> orr_root_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PermanentNetworkInfo> permanent_network_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo> prefix_filter_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo> remove_private_as_in_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo> remove_private_as_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo> route_policy_in_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo> route_policy_out_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo> route_reflector_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo> send_community_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo> send_extended_community_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo> send_graceful_shutdown_community_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendMcastAttrInfo> send_mcast_attr_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo> so_o_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo> soft_reconfig_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo> weight_info;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress : public Entity
{
    public:
        OrrRootAddress();
        ~OrrRootAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrRootAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo : public Entity
{
    public:
        OrfCapabilityInfo();
        ~OrfCapabilityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrfCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo : public Entity
{
    public:
        DefaultOriginateInfo();
        ~DefaultOriginateInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::DefaultOriginateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo : public Entity
{
    public:
        MaxPrefixesInfo();
        ~MaxPrefixesInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo : public Entity
{
    public:
        OrrInfo();
        ~OrrInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo : public Entity
{
    public:
        NextHopSelfInfo();
        ~NextHopSelfInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo : public Entity
{
    public:
        NextHopUnchangedInfo();
        ~NextHopUnchangedInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo : public Entity
{
    public:
        RoutePolicyInInfo();
        ~RoutePolicyInInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo : public Entity
{
    public:
        RoutePolicyOutInfo();
        ~RoutePolicyOutInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo : public Entity
{
    public:
        PrefixFilterInfo();
        ~PrefixFilterInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo : public Entity
{
    public:
        RemovePrivateAsInfo();
        ~RemovePrivateAsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo : public Entity
{
    public:
        RemovePrivateAsInInfo();
        ~RemovePrivateAsInInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo : public Entity
{
    public:
        RouteReflectorInfo();
        ~RouteReflectorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo : public Entity
{
    public:
        LegacyPeRtInfo();
        ~LegacyPeRtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo : public Entity
{
    public:
        AfEnabledInfo();
        ~AfEnabledInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo : public Entity
{
    public:
        SendCommunityInfo();
        ~SendCommunityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo : public Entity
{
    public:
        SendGracefulShutdownCommunityInfo();
        ~SendGracefulShutdownCommunityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo : public Entity
{
    public:
        SendExtendedCommunityInfo();
        ~SendExtendedCommunityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_3_ */

