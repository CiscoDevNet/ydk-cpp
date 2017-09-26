#ifndef _CISCO_IOS_XR_IPV4_PIM_OPER_4_
#define _CISCO_IOS_XR_IPV4_PIM_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_pim_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_2.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_oper {


class Ipv6Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr


class Ipv6Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor


class Ipv6Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot


class Ipv6Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr


class Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes : public ydk::Entity
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

        class MulticastStaticRoute; //type: Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute> > multicast_static_route;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes


class Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf is_via_lsm; //type: boolean
        class Prefix; //type: Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix
        class Nexthop; //type: Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix> prefix;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute


class Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop : public ydk::Entity
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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop


class Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix


class Ipv6Pim::Standby::Vrfs::Vrf::NeighborOldFormats : public ydk::Entity
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

        class NeighborOldFormat; //type: Ipv6Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat> > neighbor_old_format;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::NeighborOldFormats


class Ipv6Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat : public ydk::Entity
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
        class NeighborAddressXr; //type: Ipv6Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr> > neighbor_address_xr;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat


class Ipv6Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr


class Ipv6Pim::Standby::Vrfs::Vrf::NeighborSummaries : public ydk::Entity
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

        class NeighborSummary; //type: Ipv6Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary> > neighbor_summary;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::NeighborSummaries


class Ipv6Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf number_of_neighbors; //type: int32
        ydk::YLeaf number_of_external_neighbors; //type: int32

}; // Ipv6Pim::Standby::Vrfs::Vrf::NeighborSummaries::NeighborSummary


class Ipv6Pim::Standby::Vrfs::Vrf::Neighbors : public ydk::Entity
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

        class Neighbor; //type: Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor> > neighbor;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Neighbors


class Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor : public ydk::Entity
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
        class NeighborAddressXr; //type: Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr> > neighbor_address_xr;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor


class Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr


class Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels : public ydk::Entity
{
    public:
        NetIoTunnels();
        ~NetIoTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NetIoTunnel; //type: Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel> > net_io_tunnel;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels


class Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel : public ydk::Entity
{
    public:
        NetIoTunnel();
        ~NetIoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        class SourceAddress; //type: Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress
        class RpAddress; //type: Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress
        class SourceAddressNetio; //type: Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio> group_address_netio;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio> source_address_netio;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel


class Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio


class Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress


class Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress


class Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio


class Ipv6Pim::Standby::Vrfs::Vrf::Ranges : public ydk::Entity
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

        class Range; //type: Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range> > range;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Ranges


class Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range : public ydk::Entity
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
        class RpAddressXr; //type: Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr
        class SourceOfInformation; //type: Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation
        class GroupRange; //type: Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange> > group_range;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr> rp_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation> source_of_information;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range


class Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange : public ydk::Entity
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
        class Prefix; //type: Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix
        class SourceOfInformation; //type: Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix> prefix;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation> source_of_information;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange


class Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix


class Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation


class Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr


class Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation


class Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy : public ydk::Entity
{
    public:
        RoutePolicy();
        ~RoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RoutePolicyStatistics; //type: Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics
        class RoutePolicyTests; //type: Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics> route_policy_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests> route_policy_tests;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy


class Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics : public ydk::Entity
{
    public:
        RoutePolicyStatistics();
        ~RoutePolicyStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf requests; //type: uint32
        ydk::YLeaf pass; //type: uint32
        ydk::YLeaf drop; //type: uint32
        ydk::YLeaf default_table; //type: uint32
        ydk::YLeaf any_table; //type: uint32

}; // Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics


class Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests : public ydk::Entity
{
    public:
        RoutePolicyTests();
        ~RoutePolicyTests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RoutePolicyTest; //type: Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest> > route_policy_test;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests


class Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest : public ydk::Entity
{
    public:
        RoutePolicyTest();
        ~RoutePolicyTest();

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
        ydk::YLeaf ext_comm; //type: string
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf extended_community_rt; //type: string
        ydk::YLeaf pass; //type: boolean
        ydk::YLeaf default_table; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf afi; //type: uint32
        ydk::YLeaf safi; //type: uint32
        ydk::YLeaf table_name; //type: string
        ydk::YLeaf table_exists; //type: boolean
        ydk::YLeaf table_active; //type: boolean
        class SourceAddressXr; //type: Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr
        class GroupAddressXr; //type: Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr> source_address_xr;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest


class Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr


class Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr


class Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect : public ydk::Entity
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

        class RedirectRouteDatabases; //type: Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases
        class BundleInterfaces; //type: Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces> bundle_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases> redirect_route_databases;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect


class Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces : public ydk::Entity
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

        class BundleInterface; //type: Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface> > bundle_interface;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces


class Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface


class Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases : public ydk::Entity
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

        class RedirectRouteDatabase; //type: Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase> > redirect_route_database;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases


class Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase : public ydk::Entity
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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf uptime; //type: uint64
        class GroupAddressXr; //type: Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr
        class SourceAddressXr; //type: Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr
        class Interface; //type: Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr> group_address_xr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface> > interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr> source_address_xr;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase


class Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr


class Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf uptime; //type: uint64
        ydk::YLeaf expiry; //type: uint64
        ydk::YLeaf is_rpf_interface; //type: boolean
        ydk::YLeaf is_outgoing_interface; //type: boolean
        ydk::YLeaf is_snoop_interface; //type: boolean
        class RpfAddress; //type: Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress> rpf_address;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface


class Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress : public ydk::Entity
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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress


class Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr


class Ipv6Pim::Standby::Vrfs::Vrf::RpfSummary : public ydk::Entity
{
    public:
        RpfSummary();
        ~RpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_safi; //type: uint32
        ydk::YLeaf default_table_name; //type: string
        ydk::YLeaf is_mbgp_configured; //type: boolean
        ydk::YLeaf is_ospf_te_configured; //type: boolean
        ydk::YLeaf is_isis_te_configured; //type: boolean
        ydk::YLeaf is_isis_mtr_configured; //type: boolean
        ydk::YLeaf mo_frr_configured; //type: boolean
        ydk::YLeaf rib_mo_frr_configured; //type: boolean
        ydk::YLeaf rump_enabled; //type: boolean
        ydk::YLeaf rib_convergence_timeout; //type: uint32
        ydk::YLeaf rib_convergence_time_left; //type: uint32
        ydk::YLeaf is_multipath_enabled; //type: boolean
        ydk::YLeaf is_multipath_interface_hash_enabled; //type: boolean
        ydk::YLeaf is_multipath_source_hash_enabled; //type: boolean
        ydk::YLeaf is_multipath_source_next_hop_hash_enabled; //type: boolean
        ydk::YLeaf rpf_registrations; //type: uint32
        ydk::YLeaf is_rib_convergence; //type: boolean

}; // Ipv6Pim::Standby::Vrfs::Vrf::RpfSummary


class Ipv6Pim::Standby::Vrfs::Vrf::Safs : public ydk::Entity
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

        class Saf; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf> > saf;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf : public ydk::Entity
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
        class RpfHashSourceGroups; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups
        class RpfHashSources; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources
        class Rpfs; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups> rpf_hash_source_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources> rpf_hash_sources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs> rpfs;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups : public ydk::Entity
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

        class RpfHashSourceGroup; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup> > rpf_hash_source_group;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup : public ydk::Entity
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
        ydk::YLeaf mask_length; //type: int32
        ydk::YLeaf mofrr; //type: int32
        ydk::YLeaf next_hop_multipath_enabled; //type: boolean
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf secondary_next_hop_interface; //type: string
        class NextHopAddress; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress
        class SecondaryNextHopAddress; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress> next_hop_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress> secondary_next_hop_address;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources : public ydk::Entity
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

        class RpfHashSource; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource> > rpf_hash_source;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource : public ydk::Entity
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
        ydk::YLeaf mofrr; //type: int32
        ydk::YLeaf next_hop_multipath_enabled; //type: boolean
        ydk::YLeaf next_hop_interface; //type: string
        ydk::YLeaf secondary_next_hop_interface; //type: string
        class NextHopAddress; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress
        class SecondaryNextHopAddress; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress> next_hop_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress> secondary_next_hop_address;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs : public ydk::Entity
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

        class Rpf; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf> > rpf;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf : public ydk::Entity
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
        class RegisteredAddressXr; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr
        class RpfPath; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr> registered_address_xr;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath> > rpf_path;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath : public ydk::Entity
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
        class RpfNeighbor; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor
        class RpfNexthop; //type: Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop> rpf_nexthop;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor


class Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop


class Ipv6Pim::Standby::Vrfs::Vrf::Summary : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Summary


class Ipv6Pim::Standby::Vrfs::Vrf::TableContexts : public ydk::Entity
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

        class TableContext; //type: Ipv6Pim::Standby::Vrfs::Vrf::TableContexts::TableContext

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::TableContexts::TableContext> > table_context;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::TableContexts


class Ipv6Pim::Standby::Vrfs::Vrf::TableContexts::TableContext : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::TableContexts::TableContext


class Ipv6Pim::Standby::Vrfs::Vrf::Topologies : public ydk::Entity
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

        class Topology; //type: Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology> > topology;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Topologies


class Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology : public ydk::Entity
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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf rpt; //type: int32
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
        class GroupAddressXr; //type: Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr
        class SourceAddressXr; //type: Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr
        class RpAddress; //type: Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress
        class RpfNeighbor; //type: Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor
        class SecondaryRpfNeighbor; //type: Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor
        class RpfRoot; //type: Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot
        class ProxyAddress; //type: Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress
        class OrigSrcAddress; //type: Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress
        class OutgoingInterface; //type: Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr> group_address_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress> orig_src_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface> > outgoing_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress> proxy_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot> rpf_root;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor> secondary_rpf_neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr> source_address_xr;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology


class Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::GroupAddressXr


class Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress : public ydk::Entity
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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress


class Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface : public ydk::Entity
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
        class AssertWinner; //type: Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner> assert_winner;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface


class Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner : public ydk::Entity
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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner


class Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress : public ydk::Entity
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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::ProxyAddress


class Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpAddress


class Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfNeighbor


class Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::RpfRoot


class Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor : public ydk::Entity
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

        ydk::YLeaf af_name; //type: PimAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor


class Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Topologies::Topology::SourceAddressXr


class Ipv6Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts : public ydk::Entity
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

        class TopologyEntryFlagRouteCount; //type: Ipv6Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount> > topology_entry_flag_route_count;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts


class Ipv6Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount : public ydk::Entity
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

        ydk::YLeaf entry_flag; //type: PimTopologyEntryFlag
        ydk::YLeaf group_ranges; //type: uint32
        ydk::YLeaf active_group_ranges; //type: uint32
        ydk::YLeaf groute_count; //type: uint32
        ydk::YLeaf sg_route_count; //type: uint32
        ydk::YLeaf sgr_route_count; //type: uint32
        ydk::YLeaf is_node_low_memory; //type: boolean

}; // Ipv6Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount


class Ipv6Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts : public ydk::Entity
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

        class TopologyInterfaceFlagRouteCount; //type: Ipv6Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount> > topology_interface_flag_route_count;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts


class Ipv6Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount : public ydk::Entity
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

        ydk::YLeaf interface_flag; //type: PimTopologyInterfaceFlag
        ydk::YLeaf group_ranges; //type: uint32
        ydk::YLeaf active_group_ranges; //type: uint32
        ydk::YLeaf groute_count; //type: uint32
        ydk::YLeaf sg_route_count; //type: uint32
        ydk::YLeaf sgr_route_count; //type: uint32
        ydk::YLeaf is_node_low_memory; //type: boolean

}; // Ipv6Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount


class Ipv6Pim::Standby::Vrfs::Vrf::TopologyRouteCount : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::TopologyRouteCount


class Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters : public ydk::Entity
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
        ydk::YLeaf output_data_register; //type: uint32
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
        class PacketQueue; //type: Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue> > packet_queue;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters


class Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue : public ydk::Entity
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

        ydk::YLeaf packet_queue_priority; //type: uint32
        class PacketQueueState; //type: Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState
        class PacketQueueStats; //type: Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState> packet_queue_state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats> packet_queue_stats;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue


class Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState : public ydk::Entity
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

        ydk::YLeaf max_queue_size; //type: uint32
        ydk::YLeaf queue_size_bytes; //type: uint32
        ydk::YLeaf queue_size_packets; //type: uint32

}; // Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState


class Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats : public ydk::Entity
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

        ydk::YLeaf enqueued_packets; //type: uint32
        ydk::YLeaf dequeued_packets; //type: uint32
        ydk::YLeaf high_water_mark_packets; //type: uint32
        ydk::YLeaf high_water_mark_bytes; //type: uint32
        ydk::YLeaf tail_drops; //type: uint32

}; // Ipv6Pim::Standby::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats


class Ipv6Pim::Standby::Vrfs::Vrf::Tunnels : public ydk::Entity
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

        class Tunnel; //type: Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel> > tunnel;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Tunnels


class Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel : public ydk::Entity
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

        ydk::YLeaf tunnel_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        class SourceAddress; //type: Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress
        class RpAddress; //type: Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress
        class SourceAddressNetio; //type: Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio> group_address_netio;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress> rp_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio> source_address_netio;
        
}; // Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel


class Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio


class Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::RpAddress


class Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress


class Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio : public ydk::Entity
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

}; // Ipv6Pim::Standby::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio

class Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

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

        class Standby; //type: Pim::Standby
        class Active; //type: Pim::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active> active;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby> standby;
        
}; // Pim


class Pim::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class DefaultContext; //type: Pim::Active::DefaultContext
        class Process; //type: Pim::Active::Process
        class Vrfs; //type: Pim::Active::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext> default_context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Process> process;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs> vrfs;
        
}; // Pim::Active


class Pim::Active::DefaultContext : public ydk::Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

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

        class GlobalInterfaces; //type: Pim::Active::DefaultContext::GlobalInterfaces
        class IfrsInterfaces; //type: Pim::Active::DefaultContext::IfrsInterfaces
        class Safs; //type: Pim::Active::DefaultContext::Safs
        class InterfaceStatistics; //type: Pim::Active::DefaultContext::InterfaceStatistics
        class TopologyRouteCount; //type: Pim::Active::DefaultContext::TopologyRouteCount
        class JpStatistics; //type: Pim::Active::DefaultContext::JpStatistics
        class MibDatabases; //type: Pim::Active::DefaultContext::MibDatabases
        class NeighborOldFormats; //type: Pim::Active::DefaultContext::NeighborOldFormats
        class IfrsSummary; //type: Pim::Active::DefaultContext::IfrsSummary
        class Ranges; //type: Pim::Active::DefaultContext::Ranges
        class InterfaceOldFormats; //type: Pim::Active::DefaultContext::InterfaceOldFormats
        class Bsr; //type: Pim::Active::DefaultContext::Bsr
        class RoutePolicy; //type: Pim::Active::DefaultContext::RoutePolicy
        class RpfSummary; //type: Pim::Active::DefaultContext::RpfSummary
        class Interfaces; //type: Pim::Active::DefaultContext::Interfaces
        class NetIoTunnels; //type: Pim::Active::DefaultContext::NetIoTunnels
        class BidirDfStates; //type: Pim::Active::DefaultContext::BidirDfStates
        class Topologies; //type: Pim::Active::DefaultContext::Topologies
        class BgpAfs; //type: Pim::Active::DefaultContext::BgpAfs
        class AutoRp; //type: Pim::Active::DefaultContext::AutoRp
        class TopologyInterfaceFlagRouteCounts; //type: Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts
        class GroupMapSources; //type: Pim::Active::DefaultContext::GroupMapSources
        class TrafficCounters; //type: Pim::Active::DefaultContext::TrafficCounters
        class GroupMapRpfs; //type: Pim::Active::DefaultContext::GroupMapRpfs
        class Summary; //type: Pim::Active::DefaultContext::Summary
        class Gre; //type: Pim::Active::DefaultContext::Gre
        class BidirDfWinners; //type: Pim::Active::DefaultContext::BidirDfWinners
        class TableContexts; //type: Pim::Active::DefaultContext::TableContexts
        class NeighborSummaries; //type: Pim::Active::DefaultContext::NeighborSummaries
        class Context; //type: Pim::Active::DefaultContext::Context
        class TopologyEntryFlagRouteCounts; //type: Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts
        class RpfRedirect; //type: Pim::Active::DefaultContext::RpfRedirect
        class Tunnels; //type: Pim::Active::DefaultContext::Tunnels
        class MulticastStaticRoutes; //type: Pim::Active::DefaultContext::MulticastStaticRoutes
        class Neighbors; //type: Pim::Active::DefaultContext::Neighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::AutoRp> auto_rp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BgpAfs> bgp_afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfStates> bidir_df_states;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfWinners> bidir_df_winners;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr> bsr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context> context;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GlobalInterfaces> global_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre> gre;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs> group_map_rpfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources> group_map_sources;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::IfrsSummary> ifrs_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::InterfaceOldFormats> interface_old_formats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::InterfaceStatistics> interface_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::JpStatistics> jp_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::MibDatabases> mib_databases;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::MulticastStaticRoutes> multicast_static_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::NeighborOldFormats> neighbor_old_formats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::NeighborSummaries> neighbor_summaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::NetIoTunnels> net_io_tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Ranges> ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RoutePolicy> route_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect> rpf_redirect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfSummary> rpf_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Safs> safs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TableContexts> table_contexts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies> topologies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts> topology_entry_flag_route_counts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts> topology_interface_flag_route_counts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TopologyRouteCount> topology_route_count;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TrafficCounters> traffic_counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Tunnels> tunnels;
        
}; // Pim::Active::DefaultContext


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BgpAfs::BgpAf> > bgp_af;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BgpAfs::BgpAf::Group> group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BgpAfs::BgpAf::Source> source;
        
}; // Pim::Active::DefaultContext::BgpAfs::BgpAf


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfStates::BidirDfState> > bidir_df_state;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner> > bidir_df_winner;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner> df_winner;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr> rp_address_xr;
        
}; // Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner


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


class Pim::Active::DefaultContext::Bsr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RpCaches; //type: Pim::Active::DefaultContext::Bsr::RpCaches
        class CandidateRps; //type: Pim::Active::DefaultContext::Bsr::CandidateRps
        class BsrElections; //type: Pim::Active::DefaultContext::Bsr::BsrElections

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::BsrElections> bsr_elections;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::CandidateRps> candidate_rps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::RpCaches> rp_caches;
        
}; // Pim::Active::DefaultContext::Bsr


class Pim::Active::DefaultContext::Bsr::BsrElections : public ydk::Entity
{
    public:
        BsrElections();
        ~BsrElections();

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

        class BsrElection; //type: Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection> > bsr_election;
        
}; // Pim::Active::DefaultContext::Bsr::BsrElections


class Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection : public ydk::Entity
{
    public:
        BsrElection();
        ~BsrElection();

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

        ydk::YLeaf pim_scope; //type: int32
        ydk::YLeaf bsr_priority; //type: uint8
        ydk::YLeaf bsr_mask_length; //type: uint8
        ydk::YLeaf bsr_up_time; //type: uint16
        ydk::YLeaf bootstrap_timeout; //type: uint16
        ydk::YLeaf candidate_bsr_state; //type: uint32
        ydk::YLeaf bsr_election_state; //type: uint32
        ydk::YLeaf bsr_scope; //type: uint16
        ydk::YLeaf candidate_bsr_flag; //type: boolean
        ydk::YLeaf candidate_bsr_priority; //type: uint8
        ydk::YLeaf candidate_bsr_mask_length; //type: uint8
        class BsrAddress; //type: Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress
        class CandidateBsrAddress; //type: Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress> bsr_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress> candidate_bsr_address;
        
}; // Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection


class Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress : public ydk::Entity
{
    public:
        BsrAddress();
        ~BsrAddress();

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

}; // Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress


class Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress : public ydk::Entity
{
    public:
        CandidateBsrAddress();
        ~CandidateBsrAddress();

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

}; // Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress


class Pim::Active::DefaultContext::Bsr::CandidateRps : public ydk::Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

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

        class CandidateRp; //type: Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp> > candidate_rp;
        
}; // Pim::Active::DefaultContext::Bsr::CandidateRps


class Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp : public ydk::Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

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
        ydk::YLeaf candidate_rp_mode; //type: PimShowProtocol
        ydk::YLeaf candidate_rp_scope; //type: int32
        ydk::YLeaf crp_priority; //type: uint8
        ydk::YLeaf crp_holdtime; //type: uint16
        ydk::YLeaf candidate_rp_advance_interval; //type: uint16
        ydk::YLeaf candidate_rp_uptime; //type: uint16
        ydk::YLeaf acl_name; //type: string
        class CandidateRp_; //type: Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_
        class CrpAccess; //type: Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_> candidate_rp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess> > crp_access;
        
}; // Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp


class Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_ : public ydk::Entity
{
    public:
        CandidateRp_();
        ~CandidateRp_();

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

}; // Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_


class Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess : public ydk::Entity
{
    public:
        CrpAccess();
        ~CrpAccess();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf candidate_rp_mode; //type: PimShowProtocol
        ydk::YLeaf acl_name; //type: string

}; // Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess


class Pim::Active::DefaultContext::Bsr::RpCaches : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RpCache; //type: Pim::Active::DefaultContext::Bsr::RpCaches::RpCache

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::RpCaches::RpCache> > rp_cache;
        
}; // Pim::Active::DefaultContext::Bsr::RpCaches


class Pim::Active::DefaultContext::Bsr::RpCaches::RpCache : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf group_prefix; //type: string
        ydk::YLeaf group_prefix_length; //type: uint32
        ydk::YLeaf candidate_rp_group_count; //type: uint32
        class GroupPrefixXr; //type: Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr
        class CandidateRpList; //type: Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList> candidate_rp_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr> group_prefix_xr;
        
}; // Pim::Active::DefaultContext::Bsr::RpCaches::RpCache


class Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList : public ydk::Entity
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

        class PimBsrCrpBag; //type: Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag> > pim_bsr_crp_bag;
        
}; // Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList


class Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag : public ydk::Entity
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
        class CandidateRpAddress; //type: Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress> candidate_rp_address;
        
}; // Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag


class Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress : public ydk::Entity
{
    public:
        CandidateRpAddress();
        ~CandidateRpAddress();

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

}; // Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress


class Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr : public ydk::Entity
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

}; // Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::AnycastRpRange> > anycast_rp_range;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::ExportRouteTarget> > export_route_target;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::ImportRouteTarget> > import_route_target;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::RemoteDefaultGroup> remote_default_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::RpfDefaultTable> rpf_default_table;
        
}; // Pim::Active::DefaultContext::Context


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


class Pim::Active::DefaultContext::GlobalInterfaces : public ydk::Entity
{
    public:
        GlobalInterfaces();
        ~GlobalInterfaces();

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

        class GlobalInterface; //type: Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface> > global_interface;
        
}; // Pim::Active::DefaultContext::GlobalInterfaces


class Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface : public ydk::Entity
{
    public:
        GlobalInterface();
        ~GlobalInterface();

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
        class DrAddress; //type: Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress
        class InterfaceAddress; //type: Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress> dr_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress> > interface_address;
        
}; // Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface


class Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress : public ydk::Entity
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

}; // Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress


class Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress : public ydk::Entity
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

}; // Pim::Active::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreHashes::GreHash> > gre_hash;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop> > gre_next_hop;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath> > gre_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress> registered_address;
        
}; // Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf> > group_map_rpf;
        
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
        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf client; //type: PimClient
        ydk::YLeaf protocol; //type: PimProtocol
        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf rp_priority; //type: int32
        ydk::YLeaf are_we_rp; //type: boolean
        ydk::YLeaf rpf_interface_name; //type: string
        ydk::YLeaf rpf_vrf_name; //type: string
        class RpfNeighbor; //type: Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor
        class GroupMapInformation; //type: Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation> group_map_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor> rpf_neighbor;
        
}; // Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources::GroupMapSource> > group_map_source;
        
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
        ydk::YLeaf prefix_length; //type: int32
        ydk::YLeaf client; //type: PimClient
        ydk::YLeaf protocol; //type: PimProtocol
        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf priority; //type: int32
        ydk::YLeaf holdtime; //type: int32
        ydk::YLeaf expires; //type: uint64
        ydk::YLeaf uptime; //type: uint64
        class SourceOfInformation; //type: Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation
        class GroupMapInformation; //type: Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation> group_map_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation> source_of_information;
        
}; // Pim::Active::DefaultContext::GroupMapSources::GroupMapSource


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_OPER_4_ */

