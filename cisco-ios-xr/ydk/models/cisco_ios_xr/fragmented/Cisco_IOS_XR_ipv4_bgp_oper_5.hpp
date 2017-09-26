#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_5_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_2.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_4.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo : public ydk::Entity
{
    public:
        PrefixValidationSignalIbgpInfo();
        ~PrefixValidationSignalIbgpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo : public ydk::Entity
{
    public:
        PrefixValidationUseValiditInfo();
        ~PrefixValidationUseValiditInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo : public ydk::Entity
{
    public:
        ReceiveBufferInfo();
        ~ReceiveBufferInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo : public ydk::Entity
{
    public:
        RemoteAsInfo();
        ~RemoteAsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo : public ydk::Entity
{
    public:
        SendBufferInfo();
        ~SendBufferInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SendBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo : public ydk::Entity
{
    public:
        SessionOpenModeInfo();
        ~SessionOpenModeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo : public ydk::Entity
{
    public:
        ShutdownInfo();
        ~ShutdownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo : public ydk::Entity
{
    public:
        SpeakerIdInfo();
        ~SpeakerIdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SpeakerIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo : public ydk::Entity
{
    public:
        Suppress4BbyteAsInfo();
        ~Suppress4BbyteAsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo : public ydk::Entity
{
    public:
        TcpmssInfo();
        ~TcpmssInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TcpmssInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo : public ydk::Entity
{
    public:
        TimersInfo();
        ~TimersInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TimersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo : public ydk::Entity
{
    public:
        TosInfo();
        ~TosInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo : public ydk::Entity
{
    public:
        TtlSecurityInfo();
        ~TtlSecurityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo : public ydk::Entity
{
    public:
        UpdateErrorHandlingNoResetInfo();
        ~UpdateErrorHandlingNoResetInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo : public ydk::Entity
{
    public:
        UpdateSourceInfo();
        ~UpdateSourceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_item_configured; //type: boolean
        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain> inheritance_chain;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain : public ydk::Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateSourceInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr : public ydk::Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::NeighborAddressXr::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs : public ydk::Entity
{
    public:
        ConfigVrfs();
        ~ConfigVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfigVrf; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf> > config_vrf;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf : public ydk::Entity
{
    public:
        ConfigVrf();
        ~ConfigVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class EntityConfigurations; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations
        class ConfigurationUsers; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers
        class ConfigurationInheritances; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances> configuration_inheritances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers> configuration_users;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations> entity_configurations;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances : public ydk::Entity
{
    public:
        ConfigurationInheritances();
        ~ConfigurationInheritances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfigurationInheritance; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance> > configuration_inheritance;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance : public ydk::Entity
{
    public:
        ConfigurationInheritance();
        ~ConfigurationInheritance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entity_type; //type: BgpEntity
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf entity_name; //type: string
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf address_family_identifier; //type: uint8
        class NeighborAddressXr; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr
        class AfIndependentRelatives; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives
        class AfDependentRelative; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative> > af_dependent_relative;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives> af_independent_relatives;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr> neighbor_address_xr;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative : public ydk::Entity
{
    public:
        AfDependentRelative();
        ~AfDependentRelative();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives : public ydk::Entity
{
    public:
        AfIndependentRelatives();
        ~AfIndependentRelatives();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid> > bgp_config_entid;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid : public ydk::Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family_identifier; //type: uint8
        ydk::YLeaf configuration_type; //type: BgpEntities
        ydk::YLeaf group_name; //type: string
        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress> neighbor_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr : public ydk::Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4_mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnVplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6_sr_policy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress> l2vpn_vpls_address;
        
}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress : public ydk::Entity
{
    public:
        L2VpnVplsAddress();
        ~L2VpnVplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_5_ */

