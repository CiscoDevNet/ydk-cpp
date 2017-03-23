#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_11_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_11_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_10.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_5.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_8.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info : public Entity
{
    public:
        AdvertiseVrfReImpDisableAfiV6Info();
        ~AdvertiseVrfReImpDisableAfiV6Info();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain : public Entity
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



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid : public Entity
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

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo : public Entity
{
    public:
        AfEncapsulationTypeInfo();
        ~AfEncapsulationTypeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain : public Entity
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



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid : public Entity
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

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo : public Entity
{
    public:
        ImportAfiInfo();
        ~ImportAfiInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain : public Entity
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



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid : public Entity
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

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo : public Entity
{
    public:
        AdvertiseLocalLabeledRouteInfo();
        ~AdvertiseLocalLabeledRouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain : public Entity
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



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid : public Entity
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

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers : public Entity
{
    public:
        ConfigurationUsers();
        ~ConfigurationUsers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConfigurationUser; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser> > configuration_user;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser : public Entity
{
    public:
        ConfigurationUser();
        ~ConfigurationUser();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entity_type; //type: BgpEntityEnum
        YLeaf neighbor_address; //type: string
        YLeaf entity_name; //type: string
        YLeaf group_name; //type: string
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf address_family_identifier; //type: uint8

        class NeighborAddressXr; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr
        class AfIndependentRelatives; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives
        class AfDependentRelative; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative> > af_dependent_relative;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives> af_independent_relatives;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr> neighbor_address_xr;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnvplsAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives : public Entity
{
    public:
        AfIndependentRelatives();
        ~AfIndependentRelatives();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid : public Entity
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

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative : public Entity
{
    public:
        AfDependentRelative();
        ~AfDependentRelative();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid : public Entity
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

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances : public Entity
{
    public:
        ConfigurationInheritances();
        ~ConfigurationInheritances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ConfigurationInheritance; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance> > configuration_inheritance;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance : public Entity
{
    public:
        ConfigurationInheritance();
        ~ConfigurationInheritance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entity_type; //type: BgpEntityEnum
        YLeaf neighbor_address; //type: string
        YLeaf entity_name; //type: string
        YLeaf group_name; //type: string
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf address_family_identifier; //type: uint8

        class NeighborAddressXr; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr
        class AfIndependentRelatives; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives
        class AfDependentRelative; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative> > af_dependent_relative;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives> af_independent_relatives;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr> neighbor_address_xr;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnvplsAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives : public Entity
{
    public:
        AfIndependentRelatives();
        ~AfIndependentRelatives();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid : public Entity
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

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative : public Entity
{
    public:
        AfDependentRelative();
        ~AfDependentRelative();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid : public Entity
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

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances : public Entity
{
    public:
        Instances();
        ~Instances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Instance; //type: Bgp::Instances::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance> > instance;


}; // Bgp::Instances


class Bgp::Instances::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_name; //type: string

        class InstanceActive; //type: Bgp::Instances::Instance::InstanceActive
        class InstanceStandby; //type: Bgp::Instances::Instance::InstanceStandby

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive> instance_active;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby> instance_standby;


}; // Bgp::Instances::Instance


class Bgp::Instances::Instance::InstanceActive : public Entity
{
    public:
        InstanceActive();
        ~InstanceActive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LabelEntries; //type: Bgp::Instances::Instance::InstanceActive::LabelEntries
        class LabelSummary; //type: Bgp::Instances::Instance::InstanceActive::LabelSummary
        class LabelRpfEntries; //type: Bgp::Instances::Instance::InstanceActive::LabelRpfEntries
        class UpdateGenerationProcess; //type: Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess
        class RpkiRefreshAfs; //type: Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs
        class Vrfs; //type: Bgp::Instances::Instance::InstanceActive::Vrfs
        class DefaultVrf; //type: Bgp::Instances::Instance::InstanceActive::DefaultVrf
        class UpdateInboundFilterProcess; //type: Bgp::Instances::Instance::InstanceActive::UpdateInboundFilterProcess
        class Attributes; //type: Bgp::Instances::Instance::InstanceActive::Attributes
        class RtEntries; //type: Bgp::Instances::Instance::InstanceActive::RtEntries
        class AttributeFilterGroups; //type: Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups
        class RpkiServerList; //type: Bgp::Instances::Instance::InstanceActive::RpkiServerList
        class RpkiRoutes; //type: Bgp::Instances::Instance::InstanceActive::RpkiRoutes
        class UpdateInboundErrorProcess; //type: Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess
        class RpkiSummary; //type: Bgp::Instances::Instance::InstanceActive::RpkiSummary

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups> attribute_filter_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::DefaultVrf> default_vrf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::LabelEntries> label_entries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::LabelRpfEntries> label_rpf_entries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::LabelSummary> label_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs> rpki_refresh_afs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::RpkiRoutes> rpki_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::RpkiServerList> rpki_server_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::RpkiSummary> rpki_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::RtEntries> rt_entries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess> update_generation_process;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess> update_inbound_error_process;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::UpdateInboundFilterProcess> update_inbound_filter_process;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs> vrfs;


}; // Bgp::Instances::Instance::InstanceActive


class Bgp::Instances::Instance::InstanceActive::LabelEntries : public Entity
{
    public:
        LabelEntries();
        ~LabelEntries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LabelEntry; //type: Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry> > label_entry;


}; // Bgp::Instances::Instance::InstanceActive::LabelEntries


class Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry : public Entity
{
    public:
        LabelEntry();
        ~LabelEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: int32

        class Entry; //type: Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry> entry;


}; // Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry


class Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry : public Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf rds; //type: string
        YLeaf vrf; //type: string
        YLeaf ip; //type: string
        YLeaf ip6; //type: string
        YLeaf rpc_set_id; //type: uint32
        YLeaf masklen; //type: uint16
        YLeaf ts_sec; //type: uint32
        YLeaf ts_ssec; //type: uint32
        YLeaf info; //type: uint16
        YLeaf refcount; //type: uint32
        YLeaf inactive; //type: boolean



}; // Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry


class Bgp::Instances::Instance::InstanceActive::LabelSummary : public Entity
{
    public:
        LabelSummary();
        ~LabelSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Stats; //type: Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats> stats;


}; // Bgp::Instances::Instance::InstanceActive::LabelSummary


class Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nbgp_label_alloc_type_gbl_ipv4; //type: uint32
        YLeaf nbgp_label_alloc_type_gbl_ipv6; //type: uint32
        YLeaf nbgp_label_alloc_type_vrf_ipv4; //type: uint32
        YLeaf nbgp_label_alloc_type_vrf_ipv6; //type: uint32
        YLeaf nbgp_label_alloc_type_ce_ipv4; //type: uint32
        YLeaf nbgp_label_alloc_type_ce_ipv6; //type: uint32
        YLeaf nbgp_label_alloc_type_tbl_ipv4; //type: uint32
        YLeaf nbgp_label_alloc_type_tbl_ipv6; //type: uint32
        YLeaf nbgp_label_alloc_type_vpn_ipv4; //type: uint32
        YLeaf nbgp_label_alloc_type_vpn_ipv6; //type: uint32
        YLeaf nbgp_label_alloc_type_asbr_nh; //type: uint32
        YLeaf nbgp_labels; //type: uint32
        YLeaf bgp_label_rpf_lists; //type: uint32
        YLeaf bgp_label_rpf_nodes; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats


class Bgp::Instances::Instance::InstanceActive::LabelRpfEntries : public Entity
{
    public:
        LabelRpfEntries();
        ~LabelRpfEntries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LabelRpfEntry; //type: Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry> > label_rpf_entry;


}; // Bgp::Instances::Instance::InstanceActive::LabelRpfEntries


class Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry : public Entity
{
    public:
        LabelRpfEntry();
        ~LabelRpfEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: int32

        class Rpf; //type: Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf> rpf;


}; // Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry


class Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf : public Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf flags; //type: uint32
        YLeaf install; //type: BgpLabelRpfInstallEnum

        class Rpf_; //type: Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_> > rpf;


}; // Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf


class Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_ : public Entity
{
    public:
        Rpf_();
        ~Rpf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip; //type: string
        YLeaf ip6; //type: string
        YLeaf count; //type: uint32
        YLeaf flags; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_


class Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess : public Entity
{
    public:
        UpdateGenerationProcess();
        ~UpdateGenerationProcess();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_out_logging; //type: boolean
        YLeaf current_update_limit_process; //type: uint32
        YLeaf configured_update_limit_process; //type: uint32
        YLeaf update_out_queue_messages; //type: uint32
        YLeaf update_out_queue_size; //type: uint32
        YLeaf update_throttled; //type: boolean

        class UpdateStatistics; //type: Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics
        class UpdateAddressFamily; //type: Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily> > update_address_family;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics> update_statistics;


}; // Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess


class Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics : public Entity
{
    public:
        UpdateStatistics();
        ~UpdateStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_out_queue_messages_high; //type: uint32
        YLeaf update_out_queue_messages_cumulative; //type: uint32
        YLeaf update_out_queue_messages_discarded; //type: uint32
        YLeaf update_out_queue_messages_cleared; //type: uint32
        YLeaf update_out_queue_size_high; //type: uint32
        YLeaf update_out_queue_size_cumulative; //type: uint64
        YLeaf update_out_queue_size_discarded; //type: uint64
        YLeaf update_out_queue_size_cleared; //type: uint64
        YLeaf last_update_discard_age; //type: uint32
        YLeaf last_update_cleard_age; //type: uint32
        YLeaf update_throttle_count; //type: uint32
        YLeaf last_update_throttle_age; //type: uint32
        YLeaf update_recovery_count; //type: uint32
        YLeaf last_update_recovery_age; //type: uint32
        YLeaf update_memory_allocation_fail_count; //type: uint32
        YLeaf last_update_memory_allocation_fail_age; //type: uint32

        class LastUpdateDiscardTimestamp; //type: Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp
        class LastUpdateClearedTimestamp; //type: Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp
        class LastUpdateThrottleTimestamp; //type: Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp
        class LastUpdateRecoveryTimestamp; //type: Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp
        class LastUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp> last_update_cleared_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp> last_update_discard_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp> last_update_memory_allocation_fail_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp> last_update_recovery_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp> last_update_throttle_timestamp;


}; // Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics


class Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp : public Entity
{
    public:
        LastUpdateDiscardTimestamp();
        ~LastUpdateDiscardTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp


class Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp : public Entity
{
    public:
        LastUpdateClearedTimestamp();
        ~LastUpdateClearedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp


class Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp : public Entity
{
    public:
        LastUpdateThrottleTimestamp();
        ~LastUpdateThrottleTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp


class Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp : public Entity
{
    public:
        LastUpdateRecoveryTimestamp();
        ~LastUpdateRecoveryTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp


class Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp : public Entity
{
    public:
        LastUpdateMemoryAllocationFailTimestamp();
        ~LastUpdateMemoryAllocationFailTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily : public Entity
{
    public:
        UpdateAddressFamily();
        ~UpdateAddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_group_af_name; //type: BgpAfiEnum
        YLeaf current_update_limit_af; //type: uint32
        YLeaf update_out_queue_messages; //type: uint32
        YLeaf update_out_queue_size; //type: uint32
        YLeaf update_throttled; //type: boolean
        YLeaf update_update_group_count; //type: uint32
        YLeaf update_sub_group_count; //type: uint32
        YLeaf sub_group_throttled_count; //type: uint32
        YLeaf refresh_sub_group_count; //type: uint32
        YLeaf refresh_sub_group_throttled_count; //type: uint32
        YLeaf filter_group_count; //type: uint32
        YLeaf neighbor_count; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily


class Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs : public Entity
{
    public:
        RpkiRefreshAfs();
        ~RpkiRefreshAfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpkiRefreshAf; //type: Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf> > rpki_refresh_af;


}; // Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs


class Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf : public Entity
{
    public:
        RpkiRefreshAf();
        ~RpkiRefreshAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpRpkiEdmAfEnum

        class RefreshEntry; //type: Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry> > refresh_entry;


}; // Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf


class Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry : public Entity
{
    public:
        RefreshEntry();
        ~RefreshEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpRpkiAfEnum
        YLeaf neighbor; //type: string
        YLeaf policy; //type: string
        YLeaf paths; //type: uint32
        YLeaf drop; //type: boolean



}; // Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry


class Bgp::Instances::Instance::InstanceActive::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf> > vrf;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class UpdateInboundErrorVrf; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf
        class Afs; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs
        class Information; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Information
        class UpdateInboundFilterVrf; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf
        class Postits; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Postits
        class GlobalProcessInfo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::GlobalProcessInfo
        class UpdateInboundErrorNeighbors; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors
        class UpdateInboundFilterNeighbors; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors
        class Bmp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp
        class ProcessInfo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo
        class Sessions; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions
        class Neighbors; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors
        class NextHopVrf; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::NextHopVrf
        class NeighborRanges; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::NeighborRanges
        class MessageLogs; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::MessageLogs

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs> afs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp> bmp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::GlobalProcessInfo> global_process_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::MessageLogs> message_logs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::NeighborRanges> neighbor_ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::NextHopVrf> next_hop_vrf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Postits> postits;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo> process_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors> update_inbound_error_neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf> update_inbound_error_vrf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors> update_inbound_filter_neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf> update_inbound_filter_vrf;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf : public Entity
{
    public:
        UpdateInboundErrorVrf();
        ~UpdateInboundErrorVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_vrf_name; //type: string
        YLeaf update_malformed_message_count; //type: uint32
        YLeaf update_malformed_neighbor_count; //type: uint32
        YLeaf last_update_malformed_age; //type: uint32

        class LastUpdateMalformedTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp> last_update_malformed_timestamp;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp : public Entity
{
    public:
        LastUpdateMalformedTimestamp();
        ~LastUpdateMalformedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Af; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af> > af;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: BgpAddressFamilyEnum

        class NetworkLookupAllRds; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds
        class Policies; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies
        class Convergence; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Convergence
        class AfProcessInfo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AfProcessInfo
        class PathUsedTable; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PathUsedTable
        class RpcSets; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RpcSets
        class GlobalAfProcessInfo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::GlobalAfProcessInfo
        class NetworkPrefixes; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkPrefixes
        class AdvertisedPathXr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPathXr
        class SourcedNetworks; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::SourcedNetworks
        class UpdateGroups; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGroups
        class UpdateGenerationSubGroups; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups
        class NextHopAddressFamilies; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies
        class RtSetCounters; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters
        class BmpPaths; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths
        class UpdateGenerationUpdateGroups; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups
        class UpdateGenerationFilterGroups; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups
        class Networks; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks
        class PathTable; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PathTable
        class Epes; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Epes
        class AdvertisedPathCounts; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPathCounts
        class PathLabeledTable; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PathLabeledTable
        class AdvertisedPaths; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths
        class NeighborAfTable; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable
        class NetworkAllRds; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds
        class UpdateGenerationNeighbors; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors
        class UpdateGenerationAddressFamily; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily
        class Dampenings; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Dampenings
        class PrefixFilters; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PrefixFilters
        class Attributes; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Attributes

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPathCounts> advertised_path_counts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPathXr> advertised_path_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths> advertised_paths;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AfProcessInfo> af_process_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths> bmp_paths;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Convergence> convergence;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Dampenings> dampenings;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Epes> epes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::GlobalAfProcessInfo> global_af_process_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable> neighbor_af_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds> network_all_rds;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds> network_lookup_all_rds;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkPrefixes> network_prefixes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks> networks;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies> next_hop_address_families;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PathLabeledTable> path_labeled_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PathTable> path_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PathUsedTable> path_used_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies> policies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PrefixFilters> prefix_filters;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RpcSets> rpc_sets;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters> rt_set_counters;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::SourcedNetworks> sourced_networks;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily> update_generation_address_family;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups> update_generation_filter_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors> update_generation_neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups> update_generation_sub_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups> update_generation_update_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGroups> update_groups;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds : public Entity
{
    public:
        NetworkLookupAllRds();
        ~NetworkLookupAllRds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NetworkLookupAllRd; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd> > network_lookup_all_rd;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd : public Entity
{
    public:
        NetworkLookupAllRd();
        ~NetworkLookupAllRd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf network_prefix; //type: string

        class NetworkLookupRds; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds> network_lookup_rds;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds : public Entity
{
    public:
        NetworkLookupRds();
        ~NetworkLookupRds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NetworkLookupRd; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd> > network_lookup_rd;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd : public Entity
{
    public:
        NetworkLookupRd();
        ~NetworkLookupRd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: string
        YLeaf af_name; //type: BgpAfiEnum
        YLeaf process_instance_id; //type: uint8
        YLeaf has_inconsistent_paths; //type: boolean
        YLeaf is_net_aggregation_suppressed; //type: boolean
        YLeaf is_net_ldp_signaled; //type: boolean
        YLeaf table_version; //type: uint32
        YLeaf table_brib_version; //type: uint32
        YLeaf advertisedto_pe; //type: boolean
        YLeaf has_local_label; //type: boolean
        YLeaf net_local_label; //type: uint32
        YLeaf net_local_label_rewrite; //type: boolean
        YLeaf net_local_label_srgb; //type: boolean
        YLeaf has_lbl_retained; //type: boolean
        YLeaf route_distinguisher; //type: string
        YLeaf vrf_name; //type: string
        YLeaf net_flags; //type: uint32
        YLeaf net_extended_flags; //type: uint32
        YLeaf net_multipath; //type: boolean
        YLeaf net_eibgp_multipath; //type: boolean
        YLeaf net_backup_available; //type: boolean
        YLeaf net_backup_label_rewrite_available; //type: boolean
        YLeaf rib_failed; //type: boolean
        YLeaf gateway_array; //type: uint32
        YLeaf resilient_nexthop_set; //type: uint32
        YLeaf is_permanent_network; //type: boolean
        YLeaf num_of_path; //type: uint32
        YLeaf version; //type: uint32
        YLeaf bit; //type: uint16
        YLeaf flags; //type: uint8

        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix
        class VersionTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp
        class VersionAge; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield
        class LocalProcessInstancePath; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath
        class ActiveProcessInstancePath; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath
        class LocalPathElement; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement
        class ActivePathElement; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement> > active_path_element;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath> > active_process_instance_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield> > add_path_orr_bitfield;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield> > best_path_orr_bitfield;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix> bgp_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement> > local_path_element;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo> > local_peers_advertised_to;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath> > local_process_instance_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo> > pe_peers_advertised_to;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge> version_age;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp> version_timestamp;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix : public Entity
{
    public:
        BgpPrefix();
        ~BgpPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: uint16

        class Prefix; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix> prefix;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp : public Entity
{
    public:
        VersionTimestamp();
        ~VersionTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge : public Entity
{
    public:
        VersionAge();
        ~VersionAge();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo : public Entity
{
    public:
        LocalPeersAdvertisedTo();
        ~LocalPeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo : public Entity
{
    public:
        PePeersAdvertisedTo();
        ~PePeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield : public Entity
{
    public:
        BestPathOrrBitfield();
        ~BestPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield : public Entity
{
    public:
        AddPathOrrBitfield();
        ~AddPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath : public Entity
{
    public:
        LocalProcessInstancePath();
        ~LocalProcessInstancePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf no_path; //type: boolean
        YLeaf af_name; //type: BgpAfiEnum
        YLeaf process_instance_id; //type: uint8
        YLeaf label_oor; //type: boolean
        YLeaf label_o_or_version; //type: uint32
        YLeaf label_fail; //type: boolean
        YLeaf route_distinguisher; //type: string
        YLeaf source_route_distinguisher; //type: string
        YLeaf prefix_version; //type: uint32
        YLeaf vrf_name; //type: string
        YLeaf source_vrf_name; //type: string
        YLeaf srcaf_name; //type: BgpAfiEnum

        class NeighborAddressXr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr
        class PathInformation; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation
        class AttributesAfterPolicyIn; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::AttributesAfterPolicyIn

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::AttributesAfterPolicyIn> attributes_after_policy_in;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr> neighbor_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation> path_information;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation : public Entity
{
    public:
        PathInformation();
        ~PathInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_type; //type: BgpRoute1Enum
        YLeaf is_path_valid; //type: boolean
        YLeaf is_path_damped; //type: boolean
        YLeaf is_path_history_held; //type: boolean
        YLeaf is_internal_path; //type: boolean
        YLeaf is_best_path; //type: boolean
        YLeaf is_as_best; //type: boolean
        YLeaf is_spkr_as_best; //type: boolean
        YLeaf is_partial_best; //type: boolean
        YLeaf is_aggregation_suppressed; //type: boolean
        YLeaf is_import_dampened; //type: boolean
        YLeaf is_import_suspect; //type: boolean
        YLeaf is_path_not_advertised; //type: boolean
        YLeaf is_path_not_advertised_to_ebg_ps; //type: boolean
        YLeaf is_path_advertised_local_as_only; //type: boolean
        YLeaf is_path_from_route_reflector; //type: boolean
        YLeaf is_path_received_only; //type: boolean
        YLeaf is_received_path_not_modified; //type: boolean
        YLeaf is_path_locally_sourced; //type: boolean
        YLeaf is_path_local_aggregate; //type: boolean
        YLeaf is_path_from_network_command; //type: boolean
        YLeaf is_path_from_redistribute_command; //type: boolean
        YLeaf is_path_imported; //type: boolean
        YLeaf is_path_reoriginated; //type: boolean
        YLeaf is_path_reoriginated_stitching; //type: boolean
        YLeaf is_path_vpn_only; //type: boolean
        YLeaf is_path_from_confederation_peer; //type: boolean
        YLeaf is_path_synced_with_igp; //type: boolean
        YLeaf is_path_multipath; //type: boolean
        YLeaf is_path_imp_candidate; //type: boolean
        YLeaf is_path_stale; //type: boolean
        YLeaf is_path_long_lived_stale; //type: boolean
        YLeaf is_path_backup; //type: boolean
        YLeaf is_path_backup_protect_multipath; //type: boolean
        YLeaf is_path_best_external; //type: boolean
        YLeaf is_path_additional_path; //type: boolean
        YLeaf is_path_nexthop_discarded; //type: boolean
        YLeaf has_rcvd_label; //type: boolean
        YLeaf rcvd_label; //type: uint32
        YLeaf has_local_net_label; //type: boolean
        YLeaf local_label; //type: uint32
        YLeaf igp_metric; //type: uint32
        YLeaf path_weight; //type: uint16
        YLeaf neighbor_router_id; //type: string
        YLeaf has_mdt_group_addr; //type: boolean
        YLeaf l2vpn_size; //type: uint32
        YLeaf has_esi; //type: boolean
        YLeaf has_gw_addr; //type: boolean
        YLeaf has_second_label; //type: boolean
        YLeaf second_label; //type: uint32
        YLeaf path_flap_count; //type: uint32
        YLeaf seconds_since_first_flap; //type: uint32
        YLeaf time_to_unsuppress; //type: uint32
        YLeaf dampen_penalty; //type: uint32
        YLeaf halflife_time; //type: uint32
        YLeaf suppress_penalty; //type: uint32
        YLeaf reuse_value; //type: uint32
        YLeaf maximum_suppress_time; //type: uint32
        YLeaf best_path_comp_stage; //type: BgpBpStageEnum
        YLeaf best_path_id_comp_winner; //type: uint32
        YLeaf path_flags; //type: uint64
        YLeaf path_import_flags; //type: uint32
        YLeaf best_path_id; //type: uint32
        YLeaf local_path_id; //type: uint32
        YLeaf rcvd_path_id; //type: uint32
        YLeaf path_table_version; //type: uint32
        YLeaf advertisedto_pe; //type: boolean
        YLeaf rib_failed; //type: boolean
        YLeaf sn_rpki_origin_as_validity; //type: uint8
        YLeaf show_rpki_origin_as_validity; //type: boolean
        YLeaf ibgp_signaled_validity; //type: boolean
        YLeaf rpki_origin_as_validation_disabled; //type: boolean
        YLeaf accept_own_path; //type: boolean
        YLeaf accept_own_self_originated_p_ath; //type: boolean
        YLeaf aigp_metric; //type: uint64
        YLeaf mvpn_sfs_path; //type: boolean
        YLeaf fspec_invalid_path; //type: boolean
        YLeaf has_mvpn_nbr_addr; //type: boolean
        YLeaf has_mvpn_nexthop_addr; //type: boolean
        YLeaf has_mvpn_pmsi; //type: boolean
        YLeaf mvpn_pmsi_type; //type: uint16
        YLeaf mvpn_pmsi_flags; //type: uint8
        YLeaf mvpn_pmsi_label; //type: uint32
        YLeaf has_mvpn_extcomm; //type: boolean
        YLeaf mvpn_path_flags; //type: uint16
        YLeaf local_nh; //type: boolean
        YLeaf rt_set_limit_enabled; //type: boolean
        YLeaf path_rt_set_id; //type: uint32
        YLeaf path_rt_set_route_count; //type: uint32
        YLeaf is_path_af_install_eligible; //type: boolean
        YLeaf is_permanent_path; //type: boolean
        YLeaf graceful_shutdown; //type: boolean
        YLeaf labeled_unicast_safi_path; //type: boolean

        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::BgpPrefix
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::NeighborAddress
        class NextHop; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::NextHop
        class NhteTunnel; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::NhteTunnel
        class MdtGroupAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr
        class L2VpnEvpnEsi; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi
        class GwAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::GwAddr
        class BestPathCompWinner; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner
        class MvpnNbrAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr
        class MvpnNexthopAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr
        class L2VpnCircuitStatusValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::L2VpnCircuitStatusValue
        class MvpnPmsiValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::MvpnPmsiValue
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::ExtendedCommunity
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::AddPathOrrBitfield

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::AddPathOrrBitfield> > add_path_orr_bitfield;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner> best_path_comp_winner;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::BestPathOrrBitfield> > best_path_orr_bitfield;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::BgpPrefix> bgp_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::ExtendedCommunity> > extended_community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::GwAddr> gw_addr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::L2VpnCircuitStatusValue> > l2vpn_circuit_status_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi> l2vpn_evpn_esi;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::LocalPeersAdvertisedTo> > local_peers_advertised_to;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr> mdt_group_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr> mvpn_nbr_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr> mvpn_nexthop_addr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::MvpnPmsiValue> > mvpn_pmsi_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::NeighborAddress> neighbor_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::NhteTunnel> nhte_tunnel;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo> > pe_peers_advertised_to;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath::PathInformation


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_11_ */

