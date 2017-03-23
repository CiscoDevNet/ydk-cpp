#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_13_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_13_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_12.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnPmsiValue : public Entity
{
    public:
        MvpnPmsiValue();
        ~MvpnPmsiValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::MvpnPmsiValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::ExtendedCommunity : public Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo : public Entity
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

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo : public Entity
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

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield : public Entity
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

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield : public Entity
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

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn : public Entity
{
    public:
        AttributesAfterPolicyIn();
        ~AttributesAfterPolicyIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_as_path2_byte; //type: boolean
        YLeaf is_application_gateway_present; //type: boolean
        YLeaf is_attr_set_present; //type: boolean
        YLeaf set_aigp_inbound_igp; //type: boolean
        YLeaf set_aigp_inbound_metric; //type: boolean
        YLeaf is_rnh_present; //type: boolean
        YLeaf is_ribrnh_present; //type: boolean
        YLeaf attribute_key_number; //type: uint32
        YLeaf attribute_reuse_id_config; //type: boolean
        YLeaf attribute_reuse_id_max_id; //type: uint32
        YLeaf attribute_reuse_id_node; //type: uint32
        YLeaf attribute_reuse_id_current; //type: uint32
        YLeaf attribute_reuse_id_keys; //type: uint32
        YLeaf attribute_reuse_id_recover_sec; //type: uint32
        YLeaf vpn_distinguisher; //type: uint32
        YLeaf rnh_type; //type: uint16
        YLeaf rnh_len; //type: uint8
        YLeaf rnh_addr_len; //type: uint32
        YLeaf ribrnh_table; //type: uint32
        YLeaf ribrnh_mac; //type: string
        YLeaf ribrnhip_table; //type: uint32
        YLeaf ribrnh_vni; //type: uint32
        YLeaf ribrnh_encap; //type: uint8

        class CommonAttributes; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes
        class AttrSet; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet
        class RnhAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr
        class RibrnhIp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet> attr_set;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes> common_attributes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp> ribrnh_ip;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr> rnh_addr;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes : public Entity
{
    public:
        CommonAttributes();
        ~CommonAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_metric_present; //type: boolean
        YLeaf is_local_pref_present; //type: boolean
        YLeaf is_atomic_aggregate_present; //type: boolean
        YLeaf is_aggregator_present; //type: boolean
        YLeaf is_origin_present; //type: boolean
        YLeaf is_as_path_present; //type: boolean
        YLeaf is_community_present; //type: boolean
        YLeaf is_extended_community_present; //type: boolean
        YLeaf is_ssa_present; //type: boolean
        YLeaf is_connector_present; //type: boolean
        YLeaf is_pmsi_present; //type: boolean
        YLeaf is_pppmp_present; //type: boolean
        YLeaf is_aigp_present; //type: boolean
        YLeaf is_pe_distinguisher_label_present; //type: boolean
        YLeaf is_ls_attribute_present; //type: boolean
        YLeaf is_label_index_present; //type: boolean
        YLeaf is_tunnel_encap_present; //type: boolean
        YLeaf neighbor_as; //type: uint32
        YLeaf aggregator_as; //type: uint32
        YLeaf aggregator_address; //type: string
        YLeaf metric; //type: uint32
        YLeaf local_preference; //type: uint32
        YLeaf origin; //type: uint16
        YLeaf as_path; //type: string
        YLeaf extended_community_flags; //type: uint8
        YLeaf originator; //type: string
        YLeaf l2tpv3_session_id; //type: uint32
        YLeaf connector_type; //type: uint16
        YLeaf aigp_metric_value; //type: uint64
        YLeaf pmsi_type; //type: uint16
        YLeaf pmsi_flags; //type: uint8
        YLeaf pmsi_label; //type: uint32
        YLeaf ppm_pvalue; //type: uint32
        YLeaf tunnel_encap_type; //type: uint16
        YLeaf sr_policy_preference; //type: uint32
        YLeaf sr_tunnel_state; //type: uint32
        YLeaf sr_tunnel_request_state; //type: BgpSrpolicyTunReqStateEnum

        class SrPolicyBindingSid; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid
        class SrPolicyAllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid
        class Community; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel
        class SrPolicyExplicitPath; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster> > cluster;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community> > community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue> > pmsi_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid> sr_policy_allocated_binding_sid;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid> sr_policy_binding_sid;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath> > sr_policy_explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute> > unknown_attribute;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid : public Entity
{
    public:
        SrPolicyBindingSid();
        ~SrPolicyBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpBindingSidEnum
        YLeaf label; //type: uint32
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid : public Entity
{
    public:
        SrPolicyAllocatedBindingSid();
        ~SrPolicyAllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpBindingSidEnum
        YLeaf label; //type: uint32
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Community


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity : public Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute : public Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster : public Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::Cluster


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie : public Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue : public Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue : public Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr : public Entity
{
    public:
        LsAttr();
        ~LsAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LsAttr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr : public Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel : public Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pe_address; //type: string
        YLeaf label; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath : public Entity
{
    public:
        SrPolicyExplicitPath();
        ~SrPolicyExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf weight; //type: uint8

        class Sid; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid> > sid;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid : public Entity
{
    public:
        Sid();
        ~Sid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf label; //type: uint32
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet : public Entity
{
    public:
        AttrSet();
        ~AttrSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_metric_present; //type: boolean
        YLeaf is_local_pref_present; //type: boolean
        YLeaf is_atomic_aggregate_present; //type: boolean
        YLeaf is_aggregator_present; //type: boolean
        YLeaf is_origin_present; //type: boolean
        YLeaf is_as_path_present; //type: boolean
        YLeaf is_community_present; //type: boolean
        YLeaf is_extended_community_present; //type: boolean
        YLeaf is_ssa_present; //type: boolean
        YLeaf is_connector_present; //type: boolean
        YLeaf is_pmsi_present; //type: boolean
        YLeaf is_pppmp_present; //type: boolean
        YLeaf is_aigp_present; //type: boolean
        YLeaf is_pe_distinguisher_label_present; //type: boolean
        YLeaf is_ls_attribute_present; //type: boolean
        YLeaf is_label_index_present; //type: boolean
        YLeaf is_tunnel_encap_present; //type: boolean
        YLeaf neighbor_as; //type: uint32
        YLeaf aggregator_as; //type: uint32
        YLeaf aggregator_address; //type: string
        YLeaf metric; //type: uint32
        YLeaf local_preference; //type: uint32
        YLeaf origin; //type: uint16
        YLeaf as_path; //type: string
        YLeaf extended_community_flags; //type: uint8
        YLeaf originator; //type: string
        YLeaf l2tpv3_session_id; //type: uint32
        YLeaf connector_type; //type: uint16
        YLeaf aigp_metric_value; //type: uint64
        YLeaf pmsi_type; //type: uint16
        YLeaf pmsi_flags; //type: uint8
        YLeaf pmsi_label; //type: uint32
        YLeaf ppm_pvalue; //type: uint32
        YLeaf tunnel_encap_type; //type: uint16
        YLeaf sr_policy_preference; //type: uint32
        YLeaf sr_tunnel_state; //type: uint32
        YLeaf sr_tunnel_request_state; //type: BgpSrpolicyTunReqStateEnum

        class SrPolicyBindingSid; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid
        class SrPolicyAllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid
        class Community; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity
        class UnknownAttribute; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute
        class Cluster; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster
        class L2Tpv3Cookie; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie
        class ConnectorValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue
        class PmsiValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue
        class LsAttr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr
        class LabelIndexAttr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr
        class PeDistinguisherLabel; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel
        class SrPolicyExplicitPath; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster> > cluster;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community> > community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue> > pmsi_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid> sr_policy_allocated_binding_sid;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid> sr_policy_binding_sid;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath> > sr_policy_explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute> > unknown_attribute;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid : public Entity
{
    public:
        SrPolicyBindingSid();
        ~SrPolicyBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpBindingSidEnum
        YLeaf label; //type: uint32
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid : public Entity
{
    public:
        SrPolicyAllocatedBindingSid();
        ~SrPolicyAllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpBindingSidEnum
        YLeaf label; //type: uint32
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Community


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity : public Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute : public Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster : public Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::Cluster


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie : public Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue : public Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::ConnectorValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue : public Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PmsiValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr : public Entity
{
    public:
        LsAttr();
        ~LsAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LsAttr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr : public Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel : public Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pe_address; //type: string
        YLeaf label; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath : public Entity
{
    public:
        SrPolicyExplicitPath();
        ~SrPolicyExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf weight; //type: uint8

        class Sid; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid> > sid;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid : public Entity
{
    public:
        Sid();
        ~Sid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf label; //type: uint32
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr : public Entity
{
    public:
        RnhAddr();
        ~RnhAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf len; //type: BgpRnhAddrLenEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf mac_address; //type: string



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RnhAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp : public Entity
{
    public:
        RibrnhIp();
        ~RibrnhIp();

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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement : public Entity
{
    public:
        LocalPathElement();
        ~LocalPathElement();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pelem_path_id; //type: uint32
        YLeaf pelem_version; //type: uint32
        YLeaf pelem_flags; //type: uint32
        YLeaf pelem_gw_metric; //type: uint32
        YLeaf pelem_path_flags; //type: uint64
        YLeaf pelem_path_peer_path_id; //type: uint32
        YLeaf pelem_table_attr_version; //type: uint32
        YLeaf pelem_path_table_attr_version; //type: uint32
        YLeaf pelem_no_bestpath_table_attr_version; //type: uint32
        YLeaf pelem_no_addpath_table_attr_version; //type: uint32
        YLeaf is_perm_path_pelem; //type: boolean

        class PelemPathNexthop; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop
        class NhteTunnel; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::NhteTunnel
        class PelemPathNeighborAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::NhteTunnel> nhte_tunnel;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr> pelem_path_neighbor_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop> pelem_path_nexthop;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop : public Entity
{
    public:
        PelemPathNexthop();
        ~PelemPathNexthop();

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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNexthop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::NhteTunnel : public Entity
{
    public:
        NhteTunnel();
        ~NhteTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_type; //type: BgpteTunnelEnum
        YLeaf tunnel_name; //type: string
        YLeaf has_te_tunnel; //type: boolean
        YLeaf is_tunnel_up; //type: boolean
        YLeaf is_tunnel_info_stale; //type: boolean
        YLeaf is_tunnel_registered; //type: boolean
        YLeaf tunnel_v6_required; //type: boolean
        YLeaf tunnel_v6_enabled; //type: boolean
        YLeaf binding_label; //type: uint32
        YLeaf tunnel_if_handle; //type: uint32
        YLeaf last_tunnel_update; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::NhteTunnel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr : public Entity
{
    public:
        PelemPathNeighborAddr();
        ~PelemPathNeighborAddr();

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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement : public Entity
{
    public:
        ActivePathElement();
        ~ActivePathElement();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pelem_path_id; //type: uint32
        YLeaf pelem_version; //type: uint32
        YLeaf pelem_flags; //type: uint32
        YLeaf pelem_gw_metric; //type: uint32
        YLeaf pelem_path_flags; //type: uint64
        YLeaf pelem_path_peer_path_id; //type: uint32
        YLeaf pelem_table_attr_version; //type: uint32
        YLeaf pelem_path_table_attr_version; //type: uint32
        YLeaf pelem_no_bestpath_table_attr_version; //type: uint32
        YLeaf pelem_no_addpath_table_attr_version; //type: uint32
        YLeaf is_perm_path_pelem; //type: boolean

        class PelemPathNexthop; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop
        class NhteTunnel; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::NhteTunnel
        class PelemPathNeighborAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::NhteTunnel> nhte_tunnel;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr> pelem_path_neighbor_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop> pelem_path_nexthop;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop : public Entity
{
    public:
        PelemPathNexthop();
        ~PelemPathNexthop();

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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::NhteTunnel : public Entity
{
    public:
        NhteTunnel();
        ~NhteTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_type; //type: BgpteTunnelEnum
        YLeaf tunnel_name; //type: string
        YLeaf has_te_tunnel; //type: boolean
        YLeaf is_tunnel_up; //type: boolean
        YLeaf is_tunnel_info_stale; //type: boolean
        YLeaf is_tunnel_registered; //type: boolean
        YLeaf tunnel_v6_required; //type: boolean
        YLeaf tunnel_v6_enabled; //type: boolean
        YLeaf binding_label; //type: uint32
        YLeaf tunnel_if_handle; //type: uint32
        YLeaf last_tunnel_update; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::NhteTunnel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr : public Entity
{
    public:
        PelemPathNeighborAddr();
        ~PelemPathNeighborAddr();

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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies : public Entity
{
    public:
        Policies();
        ~Policies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Policy; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy> > policy;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: string
        YLeaf network; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf neighbor_address; //type: string
        YLeaf no_path; //type: boolean
        YLeaf af_name; //type: BgpAfiEnum
        YLeaf route_distinguisher; //type: string
        YLeaf source_route_distinguisher; //type: string
        YLeaf vrf_name; //type: string

        class NeighborAddressXr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr
        class PathInfoAfterPolicyIn; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn
        class PathInfoAfterPolicyOut; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyOut
        class AttributesAfterPolicyIn; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn
        class AttributesAfterPolicyOut; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn> attributes_after_policy_in;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut> attributes_after_policy_out;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr> neighbor_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn> path_info_after_policy_in;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyOut> path_info_after_policy_out;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn : public Entity
{
    public:
        PathInfoAfterPolicyIn();
        ~PathInfoAfterPolicyIn();

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

        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress
        class NextHop; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop
        class NhteTunnel; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhteTunnel
        class MdtGroupAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr
        class L2VpnEvpnEsi; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2VpnEvpnEsi
        class GwAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr
        class BestPathCompWinner; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner
        class MvpnNbrAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr
        class MvpnNexthopAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr
        class L2VpnCircuitStatusValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2VpnCircuitStatusValue
        class MvpnPmsiValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield> > add_path_orr_bitfield;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner> best_path_comp_winner;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield> > best_path_orr_bitfield;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix> bgp_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity> > extended_community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr> gw_addr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2VpnCircuitStatusValue> > l2vpn_circuit_status_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2VpnEvpnEsi> l2vpn_evpn_esi;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo> > local_peers_advertised_to;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr> mdt_group_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr> mvpn_nbr_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr> mvpn_nexthop_addr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue> > mvpn_pmsi_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress> neighbor_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhteTunnel> nhte_tunnel;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo> > pe_peers_advertised_to;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix : public Entity
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

        class Prefix; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix> prefix;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhteTunnel : public Entity
{
    public:
        NhteTunnel();
        ~NhteTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_type; //type: BgpteTunnelEnum
        YLeaf tunnel_name; //type: string
        YLeaf has_te_tunnel; //type: boolean
        YLeaf is_tunnel_up; //type: boolean
        YLeaf is_tunnel_info_stale; //type: boolean
        YLeaf is_tunnel_registered; //type: boolean
        YLeaf tunnel_v6_required; //type: boolean
        YLeaf tunnel_v6_enabled; //type: boolean
        YLeaf binding_label; //type: uint32
        YLeaf tunnel_if_handle; //type: uint32
        YLeaf last_tunnel_update; //type: uint32



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhteTunnel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr : public Entity
{
    public:
        MdtGroupAddr();
        ~MdtGroupAddr();

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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2VpnEvpnEsi : public Entity
{
    public:
        L2VpnEvpnEsi();
        ~L2VpnEvpnEsi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf esi; //type: string



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2VpnEvpnEsi


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr : public Entity
{
    public:
        GwAddr();
        ~GwAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf len; //type: BgpGwAddrLenEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner : public Entity
{
    public:
        BestPathCompWinner();
        ~BestPathCompWinner();

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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr : public Entity
{
    public:
        MvpnNbrAddr();
        ~MvpnNbrAddr();

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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr : public Entity
{
    public:
        MvpnNexthopAddr();
        ~MvpnNexthopAddr();

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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2VpnCircuitStatusValue : public Entity
{
    public:
        L2VpnCircuitStatusValue();
        ~L2VpnCircuitStatusValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2VpnCircuitStatusValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue : public Entity
{
    public:
        MvpnPmsiValue();
        ~MvpnPmsiValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity : public Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo : public Entity
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

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo : public Entity
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

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress : public Entity
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

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
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



}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield : public Entity
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

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_13_ */

