#ifndef _CISCO_IOS_XR_IPV4_PIM_OPER_3_
#define _CISCO_IOS_XR_IPV4_PIM_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_pim_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_oper {


class Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress


class Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio : public ydk::Entity
{
    public:
        SourceAddressNetio();
        ~SourceAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio


class Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio : public ydk::Entity
{
    public:
        GroupAddressNetio();
        ~GroupAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio


class Pim::Active::DefaultContext::BidirDfStates : public ydk::Entity
{
    public:
        BidirDfStates();
        ~BidirDfStates();

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

        class BidirDfState; //type: Pim::Active::DefaultContext::BidirDfStates::BidirDfState

        ydk::YList bidir_df_state;
        
}; // Pim::Active::DefaultContext::BidirDfStates


class Pim::Active::DefaultContext::BidirDfStates::BidirDfState : public ydk::Entity
{
    public:
        BidirDfState();
        ~BidirDfState();

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

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf pim_interface_name; //type: string
        ydk::YLeaf election_state; //type: string
        ydk::YLeaf time_seconds; //type: uint64
        ydk::YLeaf time_nano_seconds; //type: uint64
        ydk::YLeaf our_metric; //type: uint32
        ydk::YLeaf our_metric_preference; //type: uint32
        class RpAddressXr; //type: Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr> rp_address_xr;
        
}; // Pim::Active::DefaultContext::BidirDfStates::BidirDfState


class Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr : public ydk::Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr


class Pim::Active::DefaultContext::Topologies : public ydk::Entity
{
    public:
        Topologies();
        ~Topologies();

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

        class Topology; //type: Pim::Active::DefaultContext::Topologies::Topology

        ydk::YList topology;
        
}; // Pim::Active::DefaultContext::Topologies


class Pim::Active::DefaultContext::Topologies::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf rpt; //type: uint32
        ydk::YLeaf limit_reached; //type: boolean
        ydk::YLeaf low_memory; //type: boolean
        ydk::YLeaf protocol; //type: PimShowProtocol
        ydk::YLeaf wildcard; //type: boolean
        ydk::YLeaf rpt_xr; //type: boolean
        ydk::YLeaf spt; //type: boolean
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiry; //type: uint64
        ydk::YLeaf alive; //type: int32
        ydk::YLeaf register_received_timer; //type: int32
        ydk::YLeaf remote_source; //type: boolean
        ydk::YLeaf crossed_threshold; //type: boolean
        ydk::YLeaf data_mdt_addr_assigned; //type: boolean
        ydk::YLeaf rpf_interface_name; //type: string
        ydk::YLeaf rpf_vrf_name; //type: string
        ydk::YLeaf rpf_safi; //type: uint8
        ydk::YLeaf rpf_table_name; //type: string
        ydk::YLeaf rpf_drop; //type: boolean
        ydk::YLeaf rpf_extranet; //type: boolean
        ydk::YLeaf is_via_lsm; //type: boolean
        ydk::YLeaf secondary_rpf_interface_name; //type: string
        ydk::YLeaf connected; //type: boolean
        ydk::YLeaf proxy; //type: boolean
        ydk::YLeaf rpf_proxy_enabled; //type: boolean
        ydk::YLeaf mofrr_enabled; //type: boolean
        ydk::YLeaf rib_mo_frr_enabled; //type: boolean
        ydk::YLeaf jp_timer; //type: int32
        ydk::YLeaf jp_status; //type: int32
        ydk::YLeaf suppress_registers; //type: int32
        ydk::YLeaf assume_alive; //type: boolean
        ydk::YLeaf probe_alive; //type: boolean
        ydk::YLeaf really_alive; //type: boolean
        ydk::YLeaf inherit_alive; //type: boolean
        ydk::YLeaf inherit_spt; //type: boolean
        ydk::YLeaf signal_sources; //type: boolean
        ydk::YLeaf dont_check_connected; //type: boolean
        ydk::YLeaf register_received; //type: boolean
        ydk::YLeaf last_hop; //type: boolean
        ydk::YLeaf sending_registers; //type: boolean
        ydk::YLeaf sending_null_registers; //type: boolean
        ydk::YLeaf sa_sent; //type: boolean
        ydk::YLeaf sa_received; //type: boolean
        ydk::YLeaf sa_joined; //type: boolean
        ydk::YLeaf anycast_rp_match; //type: boolean
        ydk::YLeaf anycast_rp_route_target; //type: string
        ydk::YLeaf bgp_join; //type: boolean
        ydk::YLeaf bgp_jp_time; //type: uint64
        ydk::YLeaf customer_routing_type; //type: int32
        ydk::YLeaf extranet_route; //type: boolean
        ydk::YLeaf mofrr_active; //type: boolean
        ydk::YLeaf mofrr_primary; //type: boolean
        ydk::YLeaf mofrr_backup; //type: boolean
        ydk::YLeaf vxlan; //type: boolean
        ydk::YLeaf kat_state; //type: boolean
        class GroupAddressXr; //type: Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr
        class SourceAddressXr; //type: Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr
        class RpAddress; //type: Pim::Active::DefaultContext::Topologies::Topology::RpAddress
        class RpfNeighbor; //type: Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor
        class SecondaryRpfNeighbor; //type: Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor
        class RpfRoot; //type: Pim::Active::DefaultContext::Topologies::Topology::RpfRoot
        class ProxyAddress; //type: Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress
        class OrigSrcAddress; //type: Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress
        class OutgoingInterface; //type: Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr> source_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor> secondary_rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::RpfRoot> rpf_root;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress> proxy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress> orig_src_address;
        ydk::YList outgoing_interface;
        
}; // Pim::Active::DefaultContext::Topologies::Topology


class Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr


class Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr : public ydk::Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr


class Pim::Active::DefaultContext::Topologies::Topology::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Topologies::Topology::RpAddress


class Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor : public ydk::Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor


class Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor : public ydk::Entity
{
    public:
        SecondaryRpfNeighbor();
        ~SecondaryRpfNeighbor();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor


class Pim::Active::DefaultContext::Topologies::Topology::RpfRoot : public ydk::Entity
{
    public:
        RpfRoot();
        ~RpfRoot();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Topologies::Topology::RpfRoot


class Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress : public ydk::Entity
{
    public:
        ProxyAddress();
        ~ProxyAddress();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress


class Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress : public ydk::Entity
{
    public:
        OrigSrcAddress();
        ~OrigSrcAddress();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress


class Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface : public ydk::Entity
{
    public:
        OutgoingInterface();
        ~OutgoingInterface();

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
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiry; //type: uint64
        ydk::YLeaf bgp_c_mcast_prune_delay_timer; //type: uint64
        ydk::YLeaf jp_timer; //type: int32
        ydk::YLeaf jp_state; //type: int32
        ydk::YLeaf assert_timer; //type: int32
        ydk::YLeaf local_members; //type: int32
        ydk::YLeaf internal_interest_info; //type: int32
        ydk::YLeaf forwarding_state; //type: int32
        ydk::YLeaf immediate_state; //type: int32
        ydk::YLeaf last_hop; //type: boolean
        ydk::YLeaf mldp_inband_mdt; //type: boolean
        ydk::YLeaf mldp_stale; //type: boolean
        ydk::YLeaf sa_prune; //type: boolean
        ydk::YLeaf admin_boundary; //type: boolean
        ydk::YLeaf igmp_membership; //type: boolean
        ydk::YLeaf mdt_safi_join; //type: boolean
        ydk::YLeaf mvpn_safi_join; //type: boolean
        ydk::YLeaf local_mdt_join; //type: boolean
        ydk::YLeaf data_mdt_join; //type: boolean
        ydk::YLeaf mvpnv6_safi_join; //type: boolean
        ydk::YLeaf bgp_c_mcast_join; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf extranet_interface; //type: boolean
        ydk::YLeaf internal_interest_information; //type: PimInternalInterestInfo
        ydk::YLeaf local_members_information; //type: PimShowLocalInterest
        ydk::YLeaf assert_state; //type: boolean
        class AssertWinner; //type: Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner> assert_winner;
        
}; // Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface


class Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner : public ydk::Entity
{
    public:
        AssertWinner();
        ~AssertWinner();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner


class Pim::Active::DefaultContext::BgpAfs : public ydk::Entity
{
    public:
        BgpAfs();
        ~BgpAfs();

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

        class BgpAf; //type: Pim::Active::DefaultContext::BgpAfs::BgpAf

        ydk::YList bgp_af;
        
}; // Pim::Active::DefaultContext::BgpAfs


class Pim::Active::DefaultContext::BgpAfs::BgpAf : public ydk::Entity
{
    public:
        BgpAf();
        ~BgpAf();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf extranet_path_count; //type: uint32
        ydk::YLeaf is_bgp_added; //type: boolean
        class Source; //type: Pim::Active::DefaultContext::BgpAfs::BgpAf::Source
        class Group; //type: Pim::Active::DefaultContext::BgpAfs::BgpAf::Group
        class NextHop; //type: Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BgpAfs::BgpAf::Source> source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BgpAfs::BgpAf::Group> group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop> next_hop;
        
}; // Pim::Active::DefaultContext::BgpAfs::BgpAf


class Pim::Active::DefaultContext::BgpAfs::BgpAf::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::BgpAfs::BgpAf::Source


class Pim::Active::DefaultContext::BgpAfs::BgpAf::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::BgpAfs::BgpAf::Group


class Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop


class Pim::Active::DefaultContext::AutoRp : public ydk::Entity
{
    public:
        AutoRp();
        ~AutoRp();

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


}; // Pim::Active::DefaultContext::AutoRp


class Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts : public ydk::Entity
{
    public:
        TopologyInterfaceFlagRouteCounts();
        ~TopologyInterfaceFlagRouteCounts();

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

        class TopologyInterfaceFlagRouteCount; //type: Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount

        ydk::YList topology_interface_flag_route_count;
        
}; // Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts


class Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount : public ydk::Entity
{
    public:
        TopologyInterfaceFlagRouteCount();
        ~TopologyInterfaceFlagRouteCount();

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

        ydk::YLeaf interface_flag; //type: PimTopologyInterfaceFlag
        ydk::YLeaf group_ranges; //type: uint32
        ydk::YLeaf active_group_ranges; //type: uint32
        ydk::YLeaf groute_count; //type: uint32
        ydk::YLeaf sg_route_count; //type: uint32
        ydk::YLeaf sgr_route_count; //type: uint32
        ydk::YLeaf is_node_low_memory; //type: boolean

}; // Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount


class Pim::Active::DefaultContext::GroupMapSources : public ydk::Entity
{
    public:
        GroupMapSources();
        ~GroupMapSources();

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

        class GroupMapSource; //type: Pim::Active::DefaultContext::GroupMapSources::GroupMapSource

        ydk::YList group_map_source;
        
}; // Pim::Active::DefaultContext::GroupMapSources


class Pim::Active::DefaultContext::GroupMapSources::GroupMapSource : public ydk::Entity
{
    public:
        GroupMapSource();
        ~GroupMapSource();

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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf client; //type: PimClient
        ydk::YLeaf protocol; //type: PimProtocol
        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf holdtime; //type: int32
        ydk::YLeaf expires; //type: uint64
        ydk::YLeaf uptime; //type: uint64
        class SourceOfInformation; //type: Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation
        class GroupMapInformation; //type: Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation> source_of_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation> group_map_information;
        
}; // Pim::Active::DefaultContext::GroupMapSources::GroupMapSource


class Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation : public ydk::Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation


class Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation : public ydk::Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

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

        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf client; //type: PimShowRangeClient
        ydk::YLeaf protocol; //type: PimShowProtocol
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf mrib_active; //type: boolean
        ydk::YLeaf is_override; //type: boolean
        ydk::YLeaf priority; //type: uint32
        class Prefix; //type: Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix
        class RpAddress; //type: Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress> rp_address;
        
}; // Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation


class Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix


class Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress


class Pim::Active::DefaultContext::TrafficCounters : public ydk::Entity
{
    public:
        TrafficCounters();
        ~TrafficCounters();

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

        ydk::YLeaf elapsed_time; //type: uint32
        ydk::YLeaf inputs; //type: uint32
        ydk::YLeaf outputs; //type: uint32
        ydk::YLeaf format_error; //type: uint32
        ydk::YLeaf pakman_error; //type: uint32
        ydk::YLeaf standby_packets_error; //type: uint32
        ydk::YLeaf checksum_error; //type: uint32
        ydk::YLeaf socket_error; //type: uint32
        ydk::YLeaf send_queue_full; //type: uint32
        ydk::YLeaf boundary_acl_rx_drop; //type: uint32
        ydk::YLeaf boundary_acl_tx_drop; //type: uint32
        ydk::YLeaf no_socket_connection; //type: uint32
        ydk::YLeaf no_source_address; //type: uint32
        ydk::YLeaf input_hello; //type: uint32
        ydk::YLeaf output_hello; //type: uint32
        ydk::YLeaf input_jp; //type: uint32
        ydk::YLeaf output_jp; //type: uint32
        ydk::YLeaf input_data_register; //type: uint32
        ydk::YLeaf input_null_register; //type: uint32
        ydk::YLeaf output_null_register; //type: uint32
        ydk::YLeaf input_register_stop; //type: uint32
        ydk::YLeaf output_register_stop; //type: uint32
        ydk::YLeaf input_assert; //type: uint32
        ydk::YLeaf input_assert_batched; //type: uint32
        ydk::YLeaf output_assert; //type: uint32
        ydk::YLeaf output_assert_batched; //type: uint32
        ydk::YLeaf input_df_election; //type: uint32
        ydk::YLeaf output_df_election; //type: uint32
        ydk::YLeaf input_bsr_message; //type: uint32
        ydk::YLeaf output_bsr_message; //type: uint32
        ydk::YLeaf input_candidate_rp_advertisement; //type: uint32
        ydk::YLeaf output_candidate_rp_advertisement; //type: uint32
        ydk::YLeaf input_ecmp_redirect; //type: uint32
        ydk::YLeaf output_ecmp_redirect; //type: uint32
        ydk::YLeaf output_loop_error; //type: uint32
        ydk::YLeaf mldp_mdt_invalid_lsm_identifier; //type: uint32
        ydk::YLeaf input_no_idb_error; //type: uint32
        ydk::YLeaf input_no_vrf_error; //type: uint32
        ydk::YLeaf input_no_pim_error; //type: uint32
        ydk::YLeaf input_pim_version_error; //type: uint32
        ydk::YLeaf output_join_group; //type: uint32
        ydk::YLeaf output_prune_group; //type: uint32
        ydk::YLeaf output_join_prune_bytes; //type: uint32
        ydk::YLeaf output_hello_bytes; //type: uint32
        ydk::YLeaf non_supported_packets; //type: uint32
        ydk::YLeaf invalid_registers; //type: uint32
        ydk::YLeaf invalid_join_prunes; //type: uint32
        ydk::YLeaf packet_packman_error; //type: uint32
        ydk::YLeaf packet_read_socket_error; //type: uint32
        ydk::YLeaf packet_queue_last_clear; //type: uint32
        ydk::YLeaf packets_standby; //type: uint32
        ydk::YLeaf no_mdt_socket_connection; //type: uint32
        ydk::YLeaf mdt_send_queue_full; //type: uint32
        ydk::YLeaf mdt_socket_error; //type: uint32
        ydk::YLeaf mdt_join_tlv_sent; //type: uint32
        ydk::YLeaf mdt_join_tlv_received; //type: uint32
        ydk::YLeaf mdt_join_bad_type; //type: uint32
        ydk::YLeaf mdt_drop_local_source_address; //type: uint32
        ydk::YLeaf mdt_drop_null_local_address; //type: uint32
        ydk::YLeaf mdt_drop_no_idb; //type: uint32
        ydk::YLeaf mdt_drop_no_vrf; //type: uint32
        ydk::YLeaf invalid_destination_packets; //type: uint32
        ydk::YLeaf mdt_joins_drop_multiple_encapsulation; //type: uint32
        ydk::YLeaf truncated_pim_packets; //type: uint32
        ydk::YLeaf invalid_source_encodings; //type: uint32
        ydk::YLeaf invalid_hello_options; //type: uint32
        class PacketQueue; //type: Pim::Active::DefaultContext::TrafficCounters::PacketQueue

        ydk::YList packet_queue;
        
}; // Pim::Active::DefaultContext::TrafficCounters


class Pim::Active::DefaultContext::TrafficCounters::PacketQueue : public ydk::Entity
{
    public:
        PacketQueue();
        ~PacketQueue();

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

        ydk::YLeaf packet_queue_priority; //type: uint32
        class PacketQueueState; //type: Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState
        class PacketQueueStats; //type: Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState> packet_queue_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats> packet_queue_stats;
        
}; // Pim::Active::DefaultContext::TrafficCounters::PacketQueue


class Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState : public ydk::Entity
{
    public:
        PacketQueueState();
        ~PacketQueueState();

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

        ydk::YLeaf max_queue_size; //type: uint32
        ydk::YLeaf queue_size_bytes; //type: uint32
        ydk::YLeaf queue_size_packets; //type: uint32

}; // Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState


class Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats : public ydk::Entity
{
    public:
        PacketQueueStats();
        ~PacketQueueStats();

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

        ydk::YLeaf enqueued_packets; //type: uint32
        ydk::YLeaf dequeued_packets; //type: uint32
        ydk::YLeaf high_water_mark_packets; //type: uint32
        ydk::YLeaf high_water_mark_bytes; //type: uint32
        ydk::YLeaf tail_drops; //type: uint32

}; // Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats


class Pim::Active::DefaultContext::GroupMapRpfs : public ydk::Entity
{
    public:
        GroupMapRpfs();
        ~GroupMapRpfs();

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

        class GroupMapRpf; //type: Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf

        ydk::YList group_map_rpf;
        
}; // Pim::Active::DefaultContext::GroupMapRpfs


class Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf : public ydk::Entity
{
    public:
        GroupMapRpf();
        ~GroupMapRpf();

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

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf client; //type: PimClient
        ydk::YLeaf protocol; //type: PimProtocol
        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf rp_priority; //type: uint32
        ydk::YLeaf are_we_rp; //type: boolean
        ydk::YLeaf rpf_interface_name; //type: string
        ydk::YLeaf rpf_vrf_name; //type: string
        class RpfNeighbor; //type: Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor
        class GroupMapInformation; //type: Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation> group_map_information;
        
}; // Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf


class Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor : public ydk::Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor


class Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation : public ydk::Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

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

        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf client; //type: PimShowRangeClient
        ydk::YLeaf protocol; //type: PimShowProtocol
        ydk::YLeaf group_count; //type: uint32
        ydk::YLeaf is_used; //type: boolean
        ydk::YLeaf mrib_active; //type: boolean
        ydk::YLeaf is_override; //type: boolean
        ydk::YLeaf priority; //type: uint32
        class Prefix; //type: Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix
        class RpAddress; //type: Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress> rp_address;
        
}; // Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation


class Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix


class Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress


class Pim::Active::DefaultContext::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf route_limit; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf route_low_water_mark; //type: uint32
        ydk::YLeaf is_route_limit_reached; //type: boolean
        ydk::YLeaf topology_interface_state_limit; //type: uint32
        ydk::YLeaf topology_interface_state_count; //type: uint32
        ydk::YLeaf rxi_low_water_mark; //type: uint32
        ydk::YLeaf rxi_limit_reached; //type: boolean
        ydk::YLeaf register_limit; //type: uint32
        ydk::YLeaf register_count; //type: uint32
        ydk::YLeaf register_limit_reached; //type: boolean
        ydk::YLeaf ranges_limit; //type: uint32
        ydk::YLeaf ranges_count; //type: uint32
        ydk::YLeaf ranges_threshold; //type: uint32
        ydk::YLeaf is_ranges_limit_reached; //type: boolean
        ydk::YLeaf bsr_ranges_limit; //type: uint32
        ydk::YLeaf bsr_ranges_count; //type: uint32
        ydk::YLeaf bsr_range_threshold; //type: uint32
        ydk::YLeaf is_bsr_ranges_threshold_reached; //type: boolean
        ydk::YLeaf bsr_candidate_rp_set_limit; //type: uint32
        ydk::YLeaf bsr_candidate_rp_set_count; //type: uint32
        ydk::YLeaf bsr_candidate_rp_set_threshold; //type: uint32
        ydk::YLeaf is_maximum_enforcement_disabled; //type: boolean
        ydk::YLeaf is_node_low_memory; //type: boolean
        ydk::YLeaf route_threshold; //type: uint32
        ydk::YLeaf global_auto_rp_ranges_limit; //type: uint32
        ydk::YLeaf is_global_auto_rp_ranges_limit_reached; //type: boolean
        ydk::YLeaf global_bsr_ranges_limit; //type: uint32
        ydk::YLeaf global_bsr_ranges_count; //type: uint32
        ydk::YLeaf global_bsr_ranges_threshold; //type: uint32
        ydk::YLeaf is_global_bsr_ranges_limit_reached; //type: boolean
        ydk::YLeaf global_bsr_candidate_rp_set_limit; //type: uint32
        ydk::YLeaf global_bsr_candidate_rp_set_count; //type: uint32
        ydk::YLeaf global_bsr_candidate_rp_set_threshold; //type: uint32
        ydk::YLeaf is_global_route_limit_reached; //type: boolean
        ydk::YLeaf topology_interface_state_threshold; //type: uint32
        ydk::YLeaf is_global_rxi_limit_reached; //type: boolean
        ydk::YLeaf register_threshold; //type: uint32
        ydk::YLeaf global_register_limit; //type: uint32
        ydk::YLeaf is_global_register_limit_reached; //type: boolean

}; // Pim::Active::DefaultContext::Summary


class Pim::Active::DefaultContext::Gre : public ydk::Entity
{
    public:
        Gre();
        ~Gre();

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

        class GreHashes; //type: Pim::Active::DefaultContext::Gre::GreHashes
        class GreNextHops; //type: Pim::Active::DefaultContext::Gre::GreNextHops

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreHashes> gre_hashes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops> gre_next_hops;
        
}; // Pim::Active::DefaultContext::Gre


class Pim::Active::DefaultContext::Gre::GreHashes : public ydk::Entity
{
    public:
        GreHashes();
        ~GreHashes();

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

        class GreHash; //type: Pim::Active::DefaultContext::Gre::GreHashes::GreHash

        ydk::YList gre_hash;
        
}; // Pim::Active::DefaultContext::Gre::GreHashes


class Pim::Active::DefaultContext::Gre::GreHashes::GreHash : public ydk::Entity
{
    public:
        GreHash();
        ~GreHash();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf next_hop_interface; //type: string

}; // Pim::Active::DefaultContext::Gre::GreHashes::GreHash


class Pim::Active::DefaultContext::Gre::GreNextHops : public ydk::Entity
{
    public:
        GreNextHops();
        ~GreNextHops();

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

        class GreNextHop; //type: Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop

        ydk::YList gre_next_hop;
        
}; // Pim::Active::DefaultContext::Gre::GreNextHops


class Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop : public ydk::Entity
{
    public:
        GreNextHop();
        ~GreNextHop();

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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_preference; //type: uint32
        ydk::YLeaf is_connected; //type: uint8
        class RegisteredAddress; //type: Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress
        class GrePath; //type: Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress> registered_address;
        ydk::YList gre_path;
        
}; // Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop


class Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress : public ydk::Entity
{
    public:
        RegisteredAddress();
        ~RegisteredAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress


class Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath : public ydk::Entity
{
    public:
        GrePath();
        ~GrePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gre_interface_name; //type: string
        ydk::YLeaf is_gre_interface_disabled; //type: boolean
        ydk::YLeaf is_via_lsm; //type: boolean
        ydk::YLeaf is_connector_attribute_present; //type: boolean
        ydk::YLeaf extranet_vrf_name; //type: string
        class GreNeighbor; //type: Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor
        class GreNextHop_; //type: Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor> gre_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_> gre_next_hop;
        
}; // Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath


class Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor : public ydk::Entity
{
    public:
        GreNeighbor();
        ~GreNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor


class Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_ : public ydk::Entity
{
    public:
        GreNextHop_();
        ~GreNextHop_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_


class Pim::Active::DefaultContext::BidirDfWinners : public ydk::Entity
{
    public:
        BidirDfWinners();
        ~BidirDfWinners();

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

        class BidirDfWinner; //type: Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner

        ydk::YList bidir_df_winner;
        
}; // Pim::Active::DefaultContext::BidirDfWinners


class Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner : public ydk::Entity
{
    public:
        BidirDfWinner();
        ~BidirDfWinner();

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

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf pim_interface_name; //type: string
        ydk::YLeaf are_we_df; //type: boolean
        ydk::YLeaf rp_lan; //type: boolean
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_preference; //type: uint32
        ydk::YLeaf uptime; //type: uint64
        class RpAddressXr; //type: Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr
        class DfWinner; //type: Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr> rp_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner> df_winner;
        
}; // Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner


class Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr : public ydk::Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr


class Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner : public ydk::Entity
{
    public:
        DfWinner();
        ~DfWinner();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner


class Pim::Active::DefaultContext::TableContexts : public ydk::Entity
{
    public:
        TableContexts();
        ~TableContexts();

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

        class TableContext; //type: Pim::Active::DefaultContext::TableContexts::TableContext

        ydk::YList table_context;
        
}; // Pim::Active::DefaultContext::TableContexts


class Pim::Active::DefaultContext::TableContexts::TableContext : public ydk::Entity
{
    public:
        TableContext();
        ~TableContext();

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

        ydk::YLeaf saf_name; //type: PimSafi
        ydk::YLeaf topology_name; //type: string
        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf safi; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf is_ital_registration_done; //type: boolean
        ydk::YLeaf is_rib_registration_done; //type: boolean
        ydk::YLeaf is_rib_convergence_received; //type: boolean
        ydk::YLeaf is_rib_convergence; //type: boolean
        ydk::YLeaf rpf_registrations; //type: uint32

}; // Pim::Active::DefaultContext::TableContexts::TableContext


class Pim::Active::DefaultContext::NeighborSummaries : public ydk::Entity
{
    public:
        NeighborSummaries();
        ~NeighborSummaries();

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

        class NeighborSummary; //type: Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary

        ydk::YList neighbor_summary;
        
}; // Pim::Active::DefaultContext::NeighborSummaries


class Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary : public ydk::Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

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
        ydk::YLeaf number_of_neighbors; //type: int32
        ydk::YLeaf number_of_external_neighbors; //type: int32

}; // Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary


class Pim::Active::DefaultContext::Context : public ydk::Entity
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

        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf murib_id; //type: uint32
        ydk::YLeaf rpf_id; //type: uint32
        ydk::YLeaf remote_table_id; //type: uint32
        ydk::YLeaf mdt_default_group; //type: string
        ydk::YLeaf mdt_source; //type: string
        ydk::YLeaf mdt_source_interface; //type: string
        ydk::YLeaf mdt_interface; //type: string
        ydk::YLeaf mdt_gre_rpf_identifier; //type: uint32
        ydk::YLeaf mdt_gre_remote_rpf_identifier; //type: uint32
        ydk::YLeaf is_unicast_rib_registration; //type: boolean
        ydk::YLeaf is_multicast_rib_registration; //type: boolean
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf is_active_ital; //type: boolean
        ydk::YLeaf is_mrib_register; //type: boolean
        ydk::YLeaf is_mdt_owner; //type: boolean
        ydk::YLeaf is_routing_enabled; //type: boolean
        ydk::YLeaf is_socket_add_required; //type: boolean
        ydk::YLeaf is_socket_added; //type: boolean
        ydk::YLeaf is_lpts_socket_add_required; //type: boolean
        ydk::YLeaf is_lpts_socket_added; //type: boolean
        ydk::YLeaf is_udp_socket_add_required; //type: boolean
        ydk::YLeaf is_udp_socket_added; //type: boolean
        ydk::YLeaf is_udp_socket_bind_required; //type: boolean
        ydk::YLeaf is_udp_socket_bind; //type: boolean
        ydk::YLeaf is_register_injection_socket_add_required; //type: boolean
        ydk::YLeaf is_register_injection_socket_added; //type: boolean
        ydk::YLeaf is_register_injection_lpts_socket_add_required; //type: boolean
        ydk::YLeaf is_register_injection_lpts_socket_added; //type: boolean
        ydk::YLeaf is_m_host_publish_pending; //type: boolean
        ydk::YLeaf mhost_interface; //type: string
        ydk::YLeaf mhost_default_interface_config; //type: string
        ydk::YLeaf mdt_mtu; //type: uint32
        ydk::YLeaf maximum_mdt_aggregation; //type: uint32
        ydk::YLeaf mdt_data_switchover_interval; //type: uint32
        ydk::YLeaf mdt_data_announce_interval; //type: uint32
        ydk::YLeaf non_default_vrf_count_on_socket; //type: uint32
        ydk::YLeaf neighbor_filter_name; //type: string
        ydk::YLeaf mdt_neighbor_filter_name; //type: string
        ydk::YLeaf allow_rp_configured; //type: boolean
        ydk::YLeaf allow_rp_group_list; //type: string
        ydk::YLeaf allow_rp_rp_list; //type: string
        ydk::YLeaf sg_expiry_timer_configured; //type: boolean
        ydk::YLeaf sg_expiry_time; //type: uint16
        ydk::YLeaf sg_expiry_timer_sg_list; //type: string
        ydk::YLeaf mldp_mdt_name; //type: string
        ydk::YLeaf mldp_mdt_interface; //type: string
        ydk::YLeaf mldp_mdt_mtu; //type: uint32
        ydk::YLeaf mldp_maximum_mdt_aggregation; //type: uint32
        ydk::YLeaf mldp_mdt_data_switchover_interval; //type: uint32
        ydk::YLeaf mldp_mdt_data_announce_interval; //type: uint32
        ydk::YLeaf mldp_mdt_rpf_identifier; //type: uint32
        ydk::YLeaf mldp_mdt_remote_rpf_identifier; //type: uint32
        ydk::YLeaf is_create_mldp_mdt_interface; //type: boolean
        ydk::YLeaf is_mldp_mdt_owner; //type: boolean
        ydk::YLeaf mldp_root_count; //type: uint32
        ydk::YLeaf mldp_head_lsm_identifier; //type: uint32
        ydk::YLeaf mldp_remote_head_lsm_identifier; //type: uint32
        ydk::YLeaf organization_unique_identifier; //type: uint32
        ydk::YLeaf vpn_index; //type: uint32
        ydk::YLeaf mldp_partitioned_mdt_configured; //type: boolean
        ydk::YLeaf mldp_remote_partitioned_mdt_configured; //type: boolean
        ydk::YLeaf mldp_partioned_mp2m_ptree; //type: boolean
        ydk::YLeaf mldp_partitioned_head_lsm_identifier; //type: uint32
        ydk::YLeaf mldp_head_local_label; //type: uint32
        ydk::YLeaf mldp_partitioned_mdt_identifier; //type: uint32
        ydk::YLeaf bgp_auto_discovery_configured; //type: boolean
        ydk::YLeaf suppress_pim_data_mdt_tlv; //type: boolean
        ydk::YLeaf inter_autonomous_system_enabled; //type: boolean
        ydk::YLeaf bgp_source_active_announce; //type: boolean
        ydk::YLeaf bgp_i_pmsi_added; //type: boolean
        ydk::YLeaf mldp_bsr_control_tree_added; //type: boolean
        ydk::YLeaf mldp_auto_rp_discovery_tree_added; //type: boolean
        ydk::YLeaf mldp_auto_rp_announce_tree_added; //type: boolean
        ydk::YLeaf bgp_auto_discovery_type; //type: uint32
        ydk::YLeaf mdt_partitioned_mdt_control_identifier; //type: uint32
        ydk::YLeaf mdt_partitioned_ir_control_identifier; //type: uint32
        ydk::YLeaf mldp_control_head_lsm_identifier; //type: uint32
        ydk::YLeaf umh; //type: boolean
        ydk::YLeaf suppress_shared_tree_join; //type: boolean
        ydk::YLeaf rsvp_te_mdt_name; //type: string
        ydk::YLeaf rsvp_te_mdt_interface; //type: string
        ydk::YLeaf rsvp_te_mdt_mtu; //type: uint32
        ydk::YLeaf rsvp_te_maximum_mdt_aggregation; //type: uint32
        ydk::YLeaf rsvp_te_mdt_data_switchover_interval; //type: uint32
        ydk::YLeaf rsvp_te_mdt_data_announce_interval; //type: uint32
        ydk::YLeaf rsvp_te_mdt_rpf_identifier; //type: uint32
        ydk::YLeaf is_create_rsvp_te_mdt_interface; //type: boolean
        ydk::YLeaf is_rsvp_te_mdt_owner; //type: boolean
        ydk::YLeaf rsvp_te_mdt_static_p2mp_count; //type: uint32
        ydk::YLeaf p2mpte_li_drop; //type: uint32
        ydk::YLeaf ir_mdt_name; //type: string
        ydk::YLeaf ir_mdt_interface; //type: string
        ydk::YLeaf ir_mdt_mtu; //type: uint32
        ydk::YLeaf ir_maximum_mdt_aggregation; //type: uint32
        ydk::YLeaf ir_mdt_data_switchover_interval; //type: uint32
        ydk::YLeaf ir_mdt_data_announce_interval; //type: uint32
        ydk::YLeaf ir_mdt_rpf_identifier; //type: uint32
        ydk::YLeaf ir_mdt_tail_label; //type: uint32
        ydk::YLeaf is_create_ir_mdt_interface; //type: boolean
        ydk::YLeaf is_ir_mdt_owner; //type: boolean
        ydk::YLeaf in_b_and_mdt_name; //type: string
        ydk::YLeaf in_b_and_mdt_interface; //type: string
        ydk::YLeaf in_b_and_mdt_mtu; //type: uint32
        ydk::YLeaf in_band_maximum_mdt_aggregation; //type: uint32
        ydk::YLeaf in_b_and_mdt_data_switchover_interval; //type: uint32
        ydk::YLeaf in_b_and_mdt_data_announce_interval; //type: uint32
        ydk::YLeaf in_b_and_mdt_rpf_identifier; //type: uint32
        ydk::YLeaf is_create_in_b_and_mdt_interface; //type: boolean
        ydk::YLeaf is_in_b_and_mdt_owner; //type: boolean
        ydk::YLeaf in_band_signaling_local_enabled; //type: boolean
        ydk::YLeaf in_band_signaling_remote_enabled; //type: boolean
        ydk::YLeaf valid_rd_present; //type: boolean
        ydk::YLeaf stale_rd_present; //type: boolean
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf gin_b_and_mdt_name; //type: string
        ydk::YLeaf gin_b_and_mdt_interface; //type: string
        ydk::YLeaf gin_b_and_mdt_mtu; //type: uint32
        ydk::YLeaf gin_band_maximum_mdt_aggregation; //type: uint32
        ydk::YLeaf gin_b_and_mdt_data_switchover_interval; //type: uint32
        ydk::YLeaf gin_b_and_mdt_data_announce_interval; //type: uint32
        ydk::YLeaf gin_b_and_mdt_rpf_identifier; //type: uint32
        ydk::YLeaf is_create_gin_b_and_mdt_interface; //type: boolean
        ydk::YLeaf is_gin_b_and_mdt_owner; //type: boolean
        ydk::YLeaf is_pim_nsf_rib_converged; //type: boolean
        ydk::YLeaf is_pim_nsf_rib_converge_received; //type: boolean
        ydk::YLeaf is_rib_multipath_enabled; //type: boolean
        ydk::YLeaf is_rib_multipath_interface_hash; //type: boolean
        ydk::YLeaf is_rib_multipath_source_hash; //type: boolean
        ydk::YLeaf is_rib_multipath_source_next_hop_hash; //type: boolean
        ydk::YLeaf rump_enabled; //type: boolean
        ydk::YLeaf is_create_mdt_interface; //type: boolean
        ydk::YLeaf is_auto_rp_listen_enabled; //type: boolean
        ydk::YLeaf is_all_interface_disable_operation; //type: boolean
        ydk::YLeaf is_default_granges; //type: boolean
        ydk::YLeaf is_auto_rp_listen_sock_add; //type: boolean
        ydk::YLeaf is_redistribution_reset; //type: boolean
        ydk::YLeaf redistribution_reset_count; //type: uint32
        ydk::YLeaf rpf_policy_name; //type: string
        ydk::YLeaf table_count; //type: uint32
        ydk::YLeaf active_table_count; //type: uint32
        ydk::YLeaf anycast_rp_policy_name; //type: string
        ydk::YLeaf anycast_rp_configured; //type: boolean
        ydk::YLeaf bgp_remote_on; //type: boolean
        ydk::YLeaf bgp_remote_interface_name; //type: string
        ydk::YLeaf bgp_remote_interface; //type: string
        ydk::YLeaf bgp_remote_address; //type: string
        ydk::YLeaf bgp_remote_state; //type: uint32
        ydk::YLeaf physical_interface_count; //type: uint64
        ydk::YLeaf virtual_interface_count; //type: uint64
        ydk::YLeaf virtual_mlc_interface_name; //type: string
        ydk::YLeaf mdt_immediate_switch; //type: boolean
        ydk::YLeafList mldp_root_address; //type: list of  uint32
        class RemoteDefaultGroup; //type: Pim::Active::DefaultContext::Context::RemoteDefaultGroup
        class RpfDefaultTable; //type: Pim::Active::DefaultContext::Context::RpfDefaultTable
        class ExportRouteTarget; //type: Pim::Active::DefaultContext::Context::ExportRouteTarget
        class ImportRouteTarget; //type: Pim::Active::DefaultContext::Context::ImportRouteTarget
        class AnycastRpRange; //type: Pim::Active::DefaultContext::Context::AnycastRpRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::RemoteDefaultGroup> remote_default_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::RpfDefaultTable> rpf_default_table;
        ydk::YList export_route_target;
        ydk::YList import_route_target;
        ydk::YList anycast_rp_range;
        
}; // Pim::Active::DefaultContext::Context


class Pim::Active::DefaultContext::Context::RemoteDefaultGroup : public ydk::Entity
{
    public:
        RemoteDefaultGroup();
        ~RemoteDefaultGroup();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Context::RemoteDefaultGroup


class Pim::Active::DefaultContext::Context::RpfDefaultTable : public ydk::Entity
{
    public:
        RpfDefaultTable();
        ~RpfDefaultTable();

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

        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf safi; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf is_ital_registration_done; //type: boolean
        ydk::YLeaf is_rib_registration_done; //type: boolean
        ydk::YLeaf is_rib_convergence_received; //type: boolean
        ydk::YLeaf is_rib_convergence; //type: boolean
        ydk::YLeaf rpf_registrations; //type: uint32

}; // Pim::Active::DefaultContext::Context::RpfDefaultTable


class Pim::Active::DefaultContext::Context::ExportRouteTarget : public ydk::Entity
{
    public:
        ExportRouteTarget();
        ~ExportRouteTarget();

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

        ydk::YLeaf route_target; //type: string
        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf anycast_rp; //type: boolean
        ydk::YLeaf anycast_rp_marked; //type: boolean
        ydk::YLeaf update_pending; //type: boolean
        ydk::YLeaf bgp_auto_discovery; //type: boolean
        ydk::YLeaf segment_border; //type: boolean

}; // Pim::Active::DefaultContext::Context::ExportRouteTarget


class Pim::Active::DefaultContext::Context::ImportRouteTarget : public ydk::Entity
{
    public:
        ImportRouteTarget();
        ~ImportRouteTarget();

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

        ydk::YLeaf route_target; //type: string
        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf anycast_rp; //type: boolean
        ydk::YLeaf anycast_rp_marked; //type: boolean
        ydk::YLeaf update_pending; //type: boolean
        ydk::YLeaf bgp_auto_discovery; //type: boolean
        ydk::YLeaf segment_border; //type: boolean

}; // Pim::Active::DefaultContext::Context::ImportRouteTarget


class Pim::Active::DefaultContext::Context::AnycastRpRange : public ydk::Entity
{
    public:
        AnycastRpRange();
        ~AnycastRpRange();

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

        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf ancast_rp_marked; //type: boolean
        class Prefix; //type: Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix> prefix;
        
}; // Pim::Active::DefaultContext::Context::AnycastRpRange


class Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix


class Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts : public ydk::Entity
{
    public:
        TopologyEntryFlagRouteCounts();
        ~TopologyEntryFlagRouteCounts();

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

        class TopologyEntryFlagRouteCount; //type: Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount

        ydk::YList topology_entry_flag_route_count;
        
}; // Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts


class Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount : public ydk::Entity
{
    public:
        TopologyEntryFlagRouteCount();
        ~TopologyEntryFlagRouteCount();

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

        ydk::YLeaf entry_flag; //type: PimTopologyEntryFlag
        ydk::YLeaf group_ranges; //type: uint32
        ydk::YLeaf active_group_ranges; //type: uint32
        ydk::YLeaf groute_count; //type: uint32
        ydk::YLeaf sg_route_count; //type: uint32
        ydk::YLeaf sgr_route_count; //type: uint32
        ydk::YLeaf is_node_low_memory; //type: boolean

}; // Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount


class Pim::Active::DefaultContext::RpfRedirect : public ydk::Entity
{
    public:
        RpfRedirect();
        ~RpfRedirect();

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

        class RedirectRouteDatabases; //type: Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases
        class BundleInterfaces; //type: Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases> redirect_route_databases;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces> bundle_interfaces;
        
}; // Pim::Active::DefaultContext::RpfRedirect


class Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases : public ydk::Entity
{
    public:
        RedirectRouteDatabases();
        ~RedirectRouteDatabases();

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

        class RedirectRouteDatabase; //type: Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase

        ydk::YList redirect_route_database;
        
}; // Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases


class Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase : public ydk::Entity
{
    public:
        RedirectRouteDatabase();
        ~RedirectRouteDatabase();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf uptime; //type: uint64
        class GroupAddressXr; //type: Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr
        class SourceAddressXr; //type: Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr
        class Interface; //type: Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr> source_address_xr;
        ydk::YList interface;
        
}; // Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase


class Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr


class Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr : public ydk::Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr


class Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface : public ydk::Entity
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
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiry; //type: uint64
        ydk::YLeaf is_rpf_interface; //type: boolean
        ydk::YLeaf is_outgoing_interface; //type: boolean
        ydk::YLeaf is_snoop_interface; //type: boolean
        class RpfAddress; //type: Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress> rpf_address;
        
}; // Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface


class Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress : public ydk::Entity
{
    public:
        RpfAddress();
        ~RpfAddress();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress


class Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces : public ydk::Entity
{
    public:
        BundleInterfaces();
        ~BundleInterfaces();

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

        class BundleInterface; //type: Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface

        ydk::YList bundle_interface;
        
}; // Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces


class Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface : public ydk::Entity
{
    public:
        BundleInterface();
        ~BundleInterface();

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

        ydk::YLeaf bundle_name; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf rpf_redirect_bundle_name; //type: string
        ydk::YLeaf rpf_redirect_interface_name; //type: string
        ydk::YLeaf available_bandwidth; //type: int32
        ydk::YLeaf allocated_bandwidth; //type: int32
        ydk::YLeaf total_bandwidth; //type: int32
        ydk::YLeaf topology_bandwidth_used; //type: int32
        ydk::YLeaf snooping_bandwidth_used; //type: int32
        ydk::YLeaf allocated_threshold_bandwidth; //type: int32
        ydk::YLeaf available_threshold_bandwidth; //type: int32

}; // Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface


class Pim::Active::DefaultContext::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

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

        class Tunnel; //type: Pim::Active::DefaultContext::Tunnels::Tunnel

        ydk::YList tunnel;
        
}; // Pim::Active::DefaultContext::Tunnels


class Pim::Active::DefaultContext::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

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

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        class SourceAddress; //type: Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress
        class RpAddress; //type: Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress
        class SourceAddressNetio; //type: Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio> source_address_netio;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio> group_address_netio;
        
}; // Pim::Active::DefaultContext::Tunnels::Tunnel


class Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress


class Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress


class Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio : public ydk::Entity
{
    public:
        SourceAddressNetio();
        ~SourceAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio


class Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio : public ydk::Entity
{
    public:
        GroupAddressNetio();
        ~GroupAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio


class Pim::Active::DefaultContext::MulticastStaticRoutes : public ydk::Entity
{
    public:
        MulticastStaticRoutes();
        ~MulticastStaticRoutes();

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

        class MulticastStaticRoute; //type: Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute

        ydk::YList multicast_static_route;
        
}; // Pim::Active::DefaultContext::MulticastStaticRoutes


class Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute : public ydk::Entity
{
    public:
        MulticastStaticRoute();
        ~MulticastStaticRoute();

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

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf is_via_lsm; //type: boolean
        class Prefix; //type: Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix
        class Nexthop; //type: Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop> nexthop;
        
}; // Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute


class Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix


class Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop : public ydk::Entity
{
    public:
        Nexthop();
        ~Nexthop();

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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop


class Pim::Active::DefaultContext::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Pim::Active::DefaultContext::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Pim::Active::DefaultContext::Neighbors


class Pim::Active::DefaultContext::Neighbors::Neighbor : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expires; //type: uint64
        ydk::YLeaf expiry_timer; //type: uint64
        ydk::YLeaf is_this_neighbor_us; //type: boolean
        ydk::YLeaf is_this_neighbor_dr; //type: boolean
        ydk::YLeaf is_dr_priority_capable; //type: boolean
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf is_bidirectional_capable; //type: boolean
        ydk::YLeaf is_proxy_capable; //type: boolean
        ydk::YLeaf is_batch_asserts_capable; //type: boolean
        ydk::YLeaf is_ecmp_redirect_capable; //type: boolean
        ydk::YLeaf is_bfd_state; //type: boolean
        ydk::YLeaf propagation_delay; //type: uint16
        ydk::YLeaf override_interval; //type: uint16
        class NeighborAddressXr; //type: Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr

        ydk::YList neighbor_address_xr;
        
}; // Pim::Active::DefaultContext::Neighbors::Neighbor


class Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr


class Pim::Active::Process : public ydk::Entity
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

        class Nsr; //type: Pim::Active::Process::Nsr
        class Summary; //type: Pim::Active::Process::Summary
        class Nsf; //type: Pim::Active::Process::Nsf
        class Issu; //type: Pim::Active::Process::Issu

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Process::Nsr> nsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Process::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Process::Nsf> nsf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Process::Issu> issu;
        
}; // Pim::Active::Process


class Pim::Active::Process::Nsr : public ydk::Entity
{
    public:
        Nsr();
        ~Nsr();

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

        ydk::YLeaf state; //type: uint8
        ydk::YLeaf partner_connected; //type: boolean
        ydk::YLeaf rmf_notification_done; //type: boolean
        ydk::YLeaf rmf_timer_valid; //type: boolean
        ydk::YLeaf rmf_timer_expiry; //type: uint64
        ydk::YLeaf last_connection_up; //type: uint64
        ydk::YLeaf last_connection_dn; //type: uint64
        ydk::YLeaf last_rmf_ready; //type: uint64
        ydk::YLeaf last_rmf_not_ready; //type: uint64
        ydk::YLeaf count_connection_up; //type: uint32
        ydk::YLeaf count_connection_dn; //type: uint32
        ydk::YLeaf count_rmf_ready; //type: uint32
        ydk::YLeaf count_rmf_not_ready; //type: uint32

}; // Pim::Active::Process::Nsr


class Pim::Active::Process::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf route_limit; //type: uint32
        ydk::YLeaf route_count; //type: uint32
        ydk::YLeaf route_low_water_mark; //type: uint32
        ydk::YLeaf is_route_limit_reached; //type: boolean
        ydk::YLeaf topology_interface_state_limit; //type: uint32
        ydk::YLeaf topology_interface_state_count; //type: uint32
        ydk::YLeaf rxi_low_water_mark; //type: uint32
        ydk::YLeaf rxi_limit_reached; //type: boolean
        ydk::YLeaf register_limit; //type: uint32
        ydk::YLeaf register_count; //type: uint32
        ydk::YLeaf register_limit_reached; //type: boolean
        ydk::YLeaf ranges_limit; //type: uint32
        ydk::YLeaf ranges_count; //type: uint32
        ydk::YLeaf ranges_threshold; //type: uint32
        ydk::YLeaf is_ranges_limit_reached; //type: boolean
        ydk::YLeaf bsr_ranges_limit; //type: uint32
        ydk::YLeaf bsr_ranges_count; //type: uint32
        ydk::YLeaf bsr_range_threshold; //type: uint32
        ydk::YLeaf is_bsr_ranges_threshold_reached; //type: boolean
        ydk::YLeaf bsr_candidate_rp_set_limit; //type: uint32
        ydk::YLeaf bsr_candidate_rp_set_count; //type: uint32
        ydk::YLeaf bsr_candidate_rp_set_threshold; //type: uint32
        ydk::YLeaf is_maximum_enforcement_disabled; //type: boolean
        ydk::YLeaf is_node_low_memory; //type: boolean
        ydk::YLeaf route_threshold; //type: uint32
        ydk::YLeaf global_auto_rp_ranges_limit; //type: uint32
        ydk::YLeaf is_global_auto_rp_ranges_limit_reached; //type: boolean
        ydk::YLeaf global_bsr_ranges_limit; //type: uint32
        ydk::YLeaf global_bsr_ranges_count; //type: uint32
        ydk::YLeaf global_bsr_ranges_threshold; //type: uint32
        ydk::YLeaf is_global_bsr_ranges_limit_reached; //type: boolean
        ydk::YLeaf global_bsr_candidate_rp_set_limit; //type: uint32
        ydk::YLeaf global_bsr_candidate_rp_set_count; //type: uint32
        ydk::YLeaf global_bsr_candidate_rp_set_threshold; //type: uint32
        ydk::YLeaf is_global_route_limit_reached; //type: boolean
        ydk::YLeaf topology_interface_state_threshold; //type: uint32
        ydk::YLeaf is_global_rxi_limit_reached; //type: boolean
        ydk::YLeaf register_threshold; //type: uint32
        ydk::YLeaf global_register_limit; //type: uint32
        ydk::YLeaf is_global_register_limit_reached; //type: boolean

}; // Pim::Active::Process::Summary


class Pim::Active::Process::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

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

        ydk::YLeaf configured_state; //type: boolean
        ydk::YLeaf nsf_state; //type: boolean
        ydk::YLeaf nsf_timeout; //type: uint32
        ydk::YLeaf nsf_time_left; //type: uint32
        ydk::YLeaf waiting_timer; //type: boolean
        ydk::YLeaf waiting_membership; //type: boolean
        ydk::YLeaf respawn_count; //type: uint32
        ydk::YLeaf last_nsf_on; //type: int64
        ydk::YLeaf last_nsf_off; //type: int64
        ydk::YLeaf last_nsf_on_sec; //type: int32
        ydk::YLeaf last_nsf_off_sec; //type: int32
        ydk::YLeaf last_icd_notif_recv; //type: int64
        ydk::YLeaf last_icd_notif_recv_sec; //type: int32

}; // Pim::Active::Process::Nsf


class Pim::Active::Process::Issu : public ydk::Entity
{
    public:
        Issu();
        ~Issu();

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

        ydk::YLeaf informationvalid; //type: boolean
        ydk::YLeaf role_ha; //type: int32
        ydk::YLeaf role_issu; //type: int32
        ydk::YLeaf phase_issu; //type: int32
        ydk::YLeaf last_ha_role_notification_received; //type: uint64
        ydk::YLeaf last_issu_role_notification_received; //type: uint64
        ydk::YLeaf last_issu_phase_notification_received; //type: uint64
        ydk::YLeaf is_eoc_received; //type: boolean
        ydk::YLeaf eoc_received_timestamp; //type: uint64
        ydk::YLeaf is_ihms_done_received; //type: boolean
        ydk::YLeaf ihms_received_timestamp; //type: uint64
        ydk::YLeaf is_rib_sync_received; //type: boolean
        ydk::YLeaf rib_sync_received_timestamp; //type: uint64
        ydk::YLeaf is_nbr_sync_received; //type: boolean
        ydk::YLeaf nbr_sync_received_timestamp; //type: uint64
        ydk::YLeaf is_checkpoint_idt_done; //type: boolean
        ydk::YLeaf checkpoint_idt_timestamp; //type: uint64

}; // Pim::Active::Process::Issu


class Pim::Active::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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

        class Vrf; //type: Pim::Active::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Pim::Active::Vrfs


class Pim::Active::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf vrf_name; //type: string
        class IfrsInterfaces; //type: Pim::Active::Vrfs::Vrf::IfrsInterfaces
        class Safs; //type: Pim::Active::Vrfs::Vrf::Safs
        class InterfaceStatistics; //type: Pim::Active::Vrfs::Vrf::InterfaceStatistics
        class TopologyRouteCount; //type: Pim::Active::Vrfs::Vrf::TopologyRouteCount
        class JpStatistics; //type: Pim::Active::Vrfs::Vrf::JpStatistics
        class MibDatabases; //type: Pim::Active::Vrfs::Vrf::MibDatabases
        class NeighborOldFormats; //type: Pim::Active::Vrfs::Vrf::NeighborOldFormats
        class IfrsSummary; //type: Pim::Active::Vrfs::Vrf::IfrsSummary
        class Ranges; //type: Pim::Active::Vrfs::Vrf::Ranges
        class InterfaceOldFormats; //type: Pim::Active::Vrfs::Vrf::InterfaceOldFormats
        class Bsr; //type: Pim::Active::Vrfs::Vrf::Bsr
        class RoutePolicy; //type: Pim::Active::Vrfs::Vrf::RoutePolicy
        class RpfSummary; //type: Pim::Active::Vrfs::Vrf::RpfSummary
        class Interfaces; //type: Pim::Active::Vrfs::Vrf::Interfaces
        class NetIoTunnels; //type: Pim::Active::Vrfs::Vrf::NetIoTunnels
        class BidirDfStates; //type: Pim::Active::Vrfs::Vrf::BidirDfStates
        class Topologies; //type: Pim::Active::Vrfs::Vrf::Topologies
        class BgpAfs; //type: Pim::Active::Vrfs::Vrf::BgpAfs
        class AutoRp; //type: Pim::Active::Vrfs::Vrf::AutoRp
        class TopologyInterfaceFlagRouteCounts; //type: Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts
        class GroupMapSources; //type: Pim::Active::Vrfs::Vrf::GroupMapSources
        class TrafficCounters; //type: Pim::Active::Vrfs::Vrf::TrafficCounters
        class GroupMapRpfs; //type: Pim::Active::Vrfs::Vrf::GroupMapRpfs
        class Summary; //type: Pim::Active::Vrfs::Vrf::Summary
        class Gre; //type: Pim::Active::Vrfs::Vrf::Gre
        class BidirDfWinners; //type: Pim::Active::Vrfs::Vrf::BidirDfWinners
        class TableContexts; //type: Pim::Active::Vrfs::Vrf::TableContexts
        class NeighborSummaries; //type: Pim::Active::Vrfs::Vrf::NeighborSummaries
        class Context; //type: Pim::Active::Vrfs::Vrf::Context
        class TopologyEntryFlagRouteCounts; //type: Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts
        class RpfRedirect; //type: Pim::Active::Vrfs::Vrf::RpfRedirect
        class Tunnels; //type: Pim::Active::Vrfs::Vrf::Tunnels
        class MulticastStaticRoutes; //type: Pim::Active::Vrfs::Vrf::MulticastStaticRoutes
        class Neighbors; //type: Pim::Active::Vrfs::Vrf::Neighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Safs> safs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::InterfaceStatistics> interface_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::TopologyRouteCount> topology_route_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::JpStatistics> jp_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::MibDatabases> mib_databases;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::NeighborOldFormats> neighbor_old_formats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::IfrsSummary> ifrs_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Ranges> ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::InterfaceOldFormats> interface_old_formats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Bsr> bsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RoutePolicy> route_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RpfSummary> rpf_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::NetIoTunnels> net_io_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::BidirDfStates> bidir_df_states;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Topologies> topologies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::BgpAfs> bgp_afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::AutoRp> auto_rp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts> topology_interface_flag_route_counts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::GroupMapSources> group_map_sources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::TrafficCounters> traffic_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::GroupMapRpfs> group_map_rpfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Gre> gre;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::BidirDfWinners> bidir_df_winners;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::TableContexts> table_contexts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::NeighborSummaries> neighbor_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Context> context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts> topology_entry_flag_route_counts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RpfRedirect> rpf_redirect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Tunnels> tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::MulticastStaticRoutes> multicast_static_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Neighbors> neighbors;
        
}; // Pim::Active::Vrfs::Vrf


class Pim::Active::Vrfs::Vrf::IfrsInterfaces : public ydk::Entity
{
    public:
        IfrsInterfaces();
        ~IfrsInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfrsInterface; //type: Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface

        ydk::YList ifrs_interface;
        
}; // Pim::Active::Vrfs::Vrf::IfrsInterfaces


class Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface : public ydk::Entity
{
    public:
        IfrsInterface();
        ~IfrsInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_address_mask; //type: uint8
        ydk::YLeaf is_enabled; //type: boolean
        ydk::YLeaf neighbor_count; //type: uint16
        ydk::YLeaf external_neighbor_count; //type: uint16
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf hello_expiry; //type: uint64
        ydk::YLeaf are_we_dr; //type: boolean
        ydk::YLeaf bfd_enabled; //type: boolean
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf virtual_interface; //type: boolean
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf neighbor_filter_name; //type: string
        ydk::YLeaf join_prune_interval; //type: uint16
        ydk::YLeaf prune_delay_enabled; //type: boolean
        ydk::YLeaf configured_propagation_delay; //type: uint16
        ydk::YLeaf propagation_delay; //type: uint16
        ydk::YLeaf configured_override_interval; //type: uint16
        ydk::YLeaf override_interval; //type: uint16
        ydk::YLeaf generation_id; //type: uint32
        ydk::YLeaf is_bidirectional_capable; //type: boolean
        ydk::YLeaf is_proxy_capable; //type: boolean
        ydk::YLeaf is_batch_asserts_capable; //type: boolean
        ydk::YLeaf idb_oor_enabled; //type: boolean
        ydk::YLeaf idb_acl_provided; //type: boolean
        ydk::YLeaf idb_max_count; //type: uint32
        ydk::YLeaf idb_threshold_count; //type: uint32
        ydk::YLeaf idb_current_count; //type: uint32
        ydk::YLeaf idb_acl_name; //type: string
        class DrAddress; //type: Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress
        class InterfaceAddress; //type: Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress> dr_address;
        ydk::YList interface_address;
        
}; // Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface


class Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress : public ydk::Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress


class Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress : public ydk::Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress


class Pim::Active::Vrfs::Vrf::Safs : public ydk::Entity
{
    public:
        Safs();
        ~Safs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Saf; //type: Pim::Active::Vrfs::Vrf::Safs::Saf

        ydk::YList saf;
        
}; // Pim::Active::Vrfs::Vrf::Safs


class Pim::Active::Vrfs::Vrf::Safs::Saf : public ydk::Entity
{
    public:
        Saf();
        ~Saf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf saf_name; //type: PimSafi
        ydk::YLeaf topology_name; //type: string
        class RpfHashSourceGroups; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups
        class RpfHashSources; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources
        class Rpfs; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups> rpf_hash_source_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources> rpf_hash_sources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs> rpfs;
        
}; // Pim::Active::Vrfs::Vrf::Safs::Saf


class Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups : public ydk::Entity
{
    public:
        RpfHashSourceGroups();
        ~RpfHashSourceGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpfHashSourceGroup; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup

        ydk::YList rpf_hash_source_group;
        
}; // Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups


class Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup : public ydk::Entity
{
    public:
        RpfHashSourceGroup();
        ~RpfHashSourceGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf mask_length; //type: uint32
        ydk::YLeaf mofrr; //type: uint32
        ydk::YLeaf next_hop_multipath_enabled; //type: boolean
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf secondary_next_hop_interface; //type: string
        class NextHopAddress; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress
        class SecondaryNextHopAddress; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress> next_hop_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress> secondary_next_hop_address;
        
}; // Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup


class Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress : public ydk::Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress


class Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress : public ydk::Entity
{
    public:
        SecondaryNextHopAddress();
        ~SecondaryNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress


class Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources : public ydk::Entity
{
    public:
        RpfHashSources();
        ~RpfHashSources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpfHashSource; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource

        ydk::YList rpf_hash_source;
        
}; // Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources


class Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource : public ydk::Entity
{
    public:
        RpfHashSource();
        ~RpfHashSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf mofrr; //type: uint32
        ydk::YLeaf next_hop_multipath_enabled; //type: boolean
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf secondary_next_hop_interface; //type: string
        class NextHopAddress; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress
        class SecondaryNextHopAddress; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress> next_hop_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress> secondary_next_hop_address;
        
}; // Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource


class Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress : public ydk::Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress


class Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress : public ydk::Entity
{
    public:
        SecondaryNextHopAddress();
        ~SecondaryNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress


class Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs : public ydk::Entity
{
    public:
        Rpfs();
        ~Rpfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rpf; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf

        ydk::YList rpf;
        
}; // Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs


class Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf : public ydk::Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf registered_address; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_preference; //type: uint32
        ydk::YLeaf is_connected; //type: uint8
        ydk::YLeaf is_rpf_bgp_route; //type: boolean
        class RegisteredAddressXr; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr
        class RpfPath; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr> registered_address_xr;
        ydk::YList rpf_path;
        
}; // Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf


class Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr : public ydk::Entity
{
    public:
        RegisteredAddressXr();
        ~RegisteredAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr


class Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath : public ydk::Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpf_interface_name; //type: string
        ydk::YLeaf is_rpf_interface_disabled; //type: boolean
        ydk::YLeaf is_via_lsm; //type: boolean
        ydk::YLeaf is_via_mlsm; //type: boolean
        ydk::YLeaf is_connector_attribute_present; //type: boolean
        ydk::YLeaf connector; //type: string
        ydk::YLeaf extranet_vrf_name; //type: string
        class RpfNeighbor; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor
        class RpfNexthop; //type: Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop> rpf_nexthop;
        
}; // Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath


class Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor : public ydk::Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor


class Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop : public ydk::Entity
{
    public:
        RpfNexthop();
        ~RpfNexthop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop


class Pim::Active::Vrfs::Vrf::InterfaceStatistics : public ydk::Entity
{
    public:
        InterfaceStatistics();
        ~InterfaceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceStatistic; //type: Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic

        ydk::YList interface_statistic;
        
}; // Pim::Active::Vrfs::Vrf::InterfaceStatistics


class Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic : public ydk::Entity
{
    public:
        InterfaceStatistic();
        ~InterfaceStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf input_hello; //type: uint32
        ydk::YLeaf output_hello; //type: uint32
        ydk::YLeaf input_register; //type: uint32
        ydk::YLeaf output_register; //type: uint32
        ydk::YLeaf input_register_stop; //type: uint32
        ydk::YLeaf output_register_stop; //type: uint32
        ydk::YLeaf input_jp; //type: uint32
        ydk::YLeaf output_jp; //type: uint32
        ydk::YLeaf input_bsr_message; //type: uint32
        ydk::YLeaf output_bsr_message; //type: uint32
        ydk::YLeaf input_assert; //type: uint32
        ydk::YLeaf output_assert; //type: uint32
        ydk::YLeaf input_graft_message; //type: uint32
        ydk::YLeaf output_graft_message; //type: uint32
        ydk::YLeaf input_graft_ack_message; //type: uint32
        ydk::YLeaf output_graft_ack_message; //type: uint32
        ydk::YLeaf input_candidate_rp_advertisement; //type: uint32
        ydk::YLeaf output_candidate_rp_advertisement; //type: uint32
        ydk::YLeaf input_df_election; //type: uint32
        ydk::YLeaf output_df_election; //type: uint32
        ydk::YLeaf input_miscellaneous; //type: uint32

}; // Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic


class Pim::Active::Vrfs::Vrf::TopologyRouteCount : public ydk::Entity
{
    public:
        TopologyRouteCount();
        ~TopologyRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_ranges; //type: uint32
        ydk::YLeaf active_group_ranges; //type: uint32
        ydk::YLeaf groute_count; //type: uint32
        ydk::YLeaf sg_route_count; //type: uint32
        ydk::YLeaf sgr_route_count; //type: uint32
        ydk::YLeaf is_node_low_memory; //type: boolean

}; // Pim::Active::Vrfs::Vrf::TopologyRouteCount


class Pim::Active::Vrfs::Vrf::JpStatistics : public ydk::Entity
{
    public:
        JpStatistics();
        ~JpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class JpStatistic; //type: Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic

        ydk::YList jp_statistic;
        
}; // Pim::Active::Vrfs::Vrf::JpStatistics


class Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic : public ydk::Entity
{
    public:
        JpStatistic();
        ~JpStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf transmitted; //type: uint32
        ydk::YLeaf transmitted100; //type: uint16
        ydk::YLeaf transmitted_1k; //type: uint16
        ydk::YLeaf transmitted_10k; //type: uint16
        ydk::YLeaf transmitted_50k; //type: uint16
        ydk::YLeaf received; //type: uint32
        ydk::YLeaf received100; //type: uint16
        ydk::YLeaf received_1k; //type: uint16
        ydk::YLeaf received_10k; //type: uint16
        ydk::YLeaf received_50k; //type: uint16

}; // Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic


class Pim::Active::Vrfs::Vrf::MibDatabases : public ydk::Entity
{
    public:
        MibDatabases();
        ~MibDatabases();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MibDatabase; //type: Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase

        ydk::YList mib_database;
        
}; // Pim::Active::Vrfs::Vrf::MibDatabases


class Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase : public ydk::Entity
{
    public:
        MibDatabase();
        ~MibDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf source_netmask; //type: uint32
        ydk::YLeaf upstream_assert_timer; //type: int32
        ydk::YLeaf assert_metric; //type: uint32
        ydk::YLeaf assert_metric_preference; //type: uint32
        ydk::YLeaf assert_rpt_bit; //type: boolean
        ydk::YLeaf spt_bit; //type: boolean
        ydk::YLeaf rpf_mask; //type: uint32
        ydk::YLeaf rpf_safi; //type: uint8
        ydk::YLeaf rpf_table_name; //type: string
        ydk::YLeaf rpf_drop; //type: boolean
        ydk::YLeaf rpf_extranet; //type: boolean
        ydk::YLeaf rpf_interface_name; //type: string
        ydk::YLeaf rpf_vrf_name; //type: string
        ydk::YLeaf bidirectional_route; //type: boolean
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf protocol; //type: PimShowProtocol
        class SourceAddressXr; //type: Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr
        class GroupAddressXr; //type: Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr
        class RpfNeighbor; //type: Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor
        class RpfRoot; //type: Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr> source_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot> rpf_root;
        
}; // Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase


class Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr : public ydk::Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr


class Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr : public ydk::Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr


class Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor : public ydk::Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor


class Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot : public ydk::Entity
{
    public:
        RpfRoot();
        ~RpfRoot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot


class Pim::Active::Vrfs::Vrf::NeighborOldFormats : public ydk::Entity
{
    public:
        NeighborOldFormats();
        ~NeighborOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborOldFormat; //type: Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat

        ydk::YList neighbor_old_format;
        
}; // Pim::Active::Vrfs::Vrf::NeighborOldFormats


class Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat : public ydk::Entity
{
    public:
        NeighborOldFormat();
        ~NeighborOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expires; //type: uint64
        ydk::YLeaf expiry_timer; //type: uint64
        ydk::YLeaf is_this_neighbor_us; //type: boolean
        ydk::YLeaf is_this_neighbor_dr; //type: boolean
        ydk::YLeaf is_dr_priority_capable; //type: boolean
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf is_bidirectional_capable; //type: boolean
        ydk::YLeaf is_proxy_capable; //type: boolean
        ydk::YLeaf is_batch_asserts_capable; //type: boolean
        ydk::YLeaf is_ecmp_redirect_capable; //type: boolean
        ydk::YLeaf is_bfd_state; //type: boolean
        ydk::YLeaf propagation_delay; //type: uint16
        ydk::YLeaf override_interval; //type: uint16
        class NeighborAddressXr; //type: Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr

        ydk::YList neighbor_address_xr;
        
}; // Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat


class Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr : public ydk::Entity
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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr


class Pim::Active::Vrfs::Vrf::IfrsSummary : public ydk::Entity
{
    public:
        IfrsSummary();
        ~IfrsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf configuration_count; //type: uint32

}; // Pim::Active::Vrfs::Vrf::IfrsSummary


class Pim::Active::Vrfs::Vrf::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Pim::Active::Vrfs::Vrf::Ranges::Range

        ydk::YList range;
        
}; // Pim::Active::Vrfs::Vrf::Ranges


class Pim::Active::Vrfs::Vrf::Ranges::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf client; //type: PimClient
        ydk::YLeaf protocol; //type: PimShowProtocol
        ydk::YLeaf client_xr; //type: PimShowRangeClient
        ydk::YLeaf expires; //type: uint64
        class RpAddressXr; //type: Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr
        class SourceOfInformation; //type: Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation
        class GroupRange; //type: Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr> rp_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation> source_of_information;
        ydk::YList group_range;
        
}; // Pim::Active::Vrfs::Vrf::Ranges::Range


class Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr : public ydk::Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr


class Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation : public ydk::Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation


class Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange : public ydk::Entity
{
    public:
        GroupRange();
        ~GroupRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expires; //type: uint64
        class Prefix; //type: Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix
        class SourceOfInformation; //type: Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation> source_of_information;
        
}; // Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange


class Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix


class Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation : public ydk::Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation


class Pim::Active::Vrfs::Vrf::InterfaceOldFormats : public ydk::Entity
{
    public:
        InterfaceOldFormats();
        ~InterfaceOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceOldFormat; //type: Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat

        ydk::YList interface_old_format;
        
}; // Pim::Active::Vrfs::Vrf::InterfaceOldFormats


class Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat : public ydk::Entity
{
    public:
        InterfaceOldFormat();
        ~InterfaceOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_name_xr; //type: string
        ydk::YLeaf interface_address_mask; //type: uint8
        ydk::YLeaf is_enabled; //type: boolean
        ydk::YLeaf neighbor_count; //type: uint16
        ydk::YLeaf external_neighbor_count; //type: uint16
        ydk::YLeaf hello_interval; //type: uint16
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf hello_expiry; //type: uint64
        ydk::YLeaf are_we_dr; //type: boolean
        ydk::YLeaf bfd_enabled; //type: boolean
        ydk::YLeaf bfd_interval; //type: uint32
        ydk::YLeaf bfd_multiplier; //type: uint32
        ydk::YLeaf virtual_interface; //type: boolean
        ydk::YLeaf passive_interface; //type: boolean
        ydk::YLeaf neighbor_filter_name; //type: string
        ydk::YLeaf join_prune_interval; //type: uint16
        ydk::YLeaf prune_delay_enabled; //type: boolean
        ydk::YLeaf configured_propagation_delay; //type: uint16
        ydk::YLeaf propagation_delay; //type: uint16
        ydk::YLeaf configured_override_interval; //type: uint16
        ydk::YLeaf override_interval; //type: uint16
        ydk::YLeaf generation_id; //type: uint32
        ydk::YLeaf is_bidirectional_capable; //type: boolean
        ydk::YLeaf is_proxy_capable; //type: boolean
        ydk::YLeaf is_batch_asserts_capable; //type: boolean
        ydk::YLeaf idb_oor_enabled; //type: boolean
        ydk::YLeaf idb_acl_provided; //type: boolean
        ydk::YLeaf idb_max_count; //type: uint32
        ydk::YLeaf idb_threshold_count; //type: uint32
        ydk::YLeaf idb_current_count; //type: uint32
        ydk::YLeaf idb_acl_name; //type: string
        class DrAddress; //type: Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress
        class InterfaceAddress; //type: Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress> dr_address;
        ydk::YList interface_address;
        
}; // Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat


class Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress : public ydk::Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress


class Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress : public ydk::Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress


class Pim::Active::Vrfs::Vrf::Bsr : public ydk::Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpCaches; //type: Pim::Active::Vrfs::Vrf::Bsr::RpCaches
        class CandidateRps; //type: Pim::Active::Vrfs::Vrf::Bsr::CandidateRps
        class BsrElections; //type: Pim::Active::Vrfs::Vrf::Bsr::BsrElections

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Bsr::RpCaches> rp_caches;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Bsr::CandidateRps> candidate_rps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Bsr::BsrElections> bsr_elections;
        
}; // Pim::Active::Vrfs::Vrf::Bsr


class Pim::Active::Vrfs::Vrf::Bsr::RpCaches : public ydk::Entity
{
    public:
        RpCaches();
        ~RpCaches();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpCache; //type: Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache

        ydk::YList rp_cache;
        
}; // Pim::Active::Vrfs::Vrf::Bsr::RpCaches


class Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache : public ydk::Entity
{
    public:
        RpCache();
        ~RpCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_prefix; //type: string
        ydk::YLeaf group_prefix_length; //type: uint32
        ydk::YLeaf candidate_rp_group_count; //type: uint32
        class GroupPrefixXr; //type: Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr
        class CandidateRpList; //type: Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr> group_prefix_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList> candidate_rp_list;
        
}; // Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache


class Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr : public ydk::Entity
{
    public:
        GroupPrefixXr();
        ~GroupPrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr


class Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList : public ydk::Entity
{
    public:
        CandidateRpList();
        ~CandidateRpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PimBsrCrpBag; //type: Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag

        ydk::YList pim_bsr_crp_bag;
        
}; // Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList


class Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag : public ydk::Entity
{
    public:
        PimBsrCrpBag();
        ~PimBsrCrpBag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf candidate_rp_holdtime; //type: uint16
        ydk::YLeaf candidate_rp_priority; //type: uint8
        ydk::YLeaf candidate_rp_up_time; //type: uint16
        ydk::YLeaf candidate_rp_expires; //type: uint16
        ydk::YLeaf protocol; //type: PimShowProtocol
        class CandidateRpAddress; //type: Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress> candidate_rp_address;
        
}; // Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_OPER_3_ */

