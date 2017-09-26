#ifndef _CISCO_IOS_XR_IP_RIB_IPV4_OPER_2_
#define _CISCO_IOS_XR_IP_RIB_IPV4_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_rib_ipv4_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rib_ipv4_oper {


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes : public ydk::Entity
{
    public:
        DestNextHopRoutes();
        ~DestNextHopRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestNextHopRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute> > dest_next_hop_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute : public ydk::Entity
{
    public:
        DestNextHopRoute();
        ~DestNextHopRoute();

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
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes : public ydk::Entity
{
    public:
        DestQRoutes();
        ~DestQRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestQRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute> > dest_q_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute : public ydk::Entity
{
    public:
        DestQRoute();
        ~DestQRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques : public ydk::Entity
{
    public:
        Opaques();
        ~Opaques();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Opaque; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque> > opaque;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque : public ydk::Entity
{
    public:
        Opaque();
        ~Opaque();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opaque_clientid; //type: int32
        ydk::YLeaf opaque_protoid; //type: int32
        ydk::YLeaf opaque_key_type; //type: int32
        ydk::YLeaf opaque_key_size; //type: int32
        ydk::YLeaf opaque_data_size; //type: int32
        ydk::YLeaf opaque_string; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf data; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mobile; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile
        class Subscriber; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber
        class Connected; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected
        class Dagr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr
        class Rip; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip
        class Ospf; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf
        class Static_; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_
        class Rpl; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl
        class Application; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application
        class TeClient; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient
        class Eigrp; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp
        class Local; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local
        class Bgp; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp
        class Isis; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application> application;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected> connected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr> dagr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis> isis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile> mobile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf> ospf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip> rip;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl> rpl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_> static_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber> subscriber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient> te_client;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs> non_as;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class As; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As> > as;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: string
        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs> non_as;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr : public ydk::Entity
{
    public:
        Dagr();
        ~Dagr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs> non_as;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class As; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As> > as;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: string
        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class As; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As> > as;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: string
        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Smiap; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap
        class Lspv; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv
        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv> lspv;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs> non_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap> smiap;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv : public ydk::Entity
{
    public:
        Lspv();
        ~Lspv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap : public ydk::Entity
{
    public:
        Smiap();
        ~Smiap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile : public ydk::Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs> non_as;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class As; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As> > as;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: string
        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs> non_as;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl : public ydk::Entity
{
    public:
        Rpl();
        ~Rpl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class As; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As> > as;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: string
        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs> non_as;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr : public ydk::Entity
{
    public:
        RemoteBackupAddr();
        ~RemoteBackupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber : public ydk::Entity
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

        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs> non_as;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs : public ydk::Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes> protocol_routes;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_names; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf redistribution_client_count; //type: uint32
        ydk::YLeaf protocol_clients_count; //type: uint32
        ydk::YLeaf routes_counts; //type: uint32
        ydk::YLeaf active_routes_count; //type: uint32
        ydk::YLeaf deleted_routes_count; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf protocol_route_memory; //type: uint32
        ydk::YLeaf backup_routes_count; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

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
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length_xr; //type: uint8
        ydk::YLeaf route_version; //type: uint32
        ydk::YLeaf protocol_id; //type: uint32
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf instance; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf route_type; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf svd_type; //type: uint8
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf extended_flags; //type: uint64
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf diversion_distance; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf paths_count; //type: uint32
        ydk::YLeaf attribute_identity; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf route_precedence; //type: uint8
        ydk::YLeaf qos_group; //type: uint8
        ydk::YLeaf flow_tag; //type: uint8
        ydk::YLeaf fwd_class; //type: uint8
        ydk::YLeaf pic_count; //type: uint8
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf diversion; //type: boolean
        ydk::YLeaf diversion_proto_name; //type: string
        ydk::YLeaf route_age; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf tbl_version; //type: uint64
        ydk::YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public ydk::Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

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
        ydk::YLeaf information_source; //type: string
        ydk::YLeaf v6_nexthop; //type: string
        ydk::YLeaf v6_information_source; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf load_metric; //type: uint32
        ydk::YLeaf flags64; //type: uint64
        ydk::YLeaf flags; //type: uint16
        ydk::YLeaf private_flags; //type: uint16
        ydk::YLeaf looped; //type: boolean
        ydk::YLeaf next_hop_table_id; //type: uint32
        ydk::YLeaf next_hop_vrf_name; //type: string
        ydk::YLeaf next_hop_table_name; //type: string
        ydk::YLeaf next_hop_afi; //type: uint32
        ydk::YLeaf next_hop_safi; //type: uint32
        ydk::YLeaf route_label; //type: uint32
        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf pathid; //type: uint32
        ydk::YLeaf backup_pathid; //type: uint32
        ydk::YLeaf ref_cnt_of_backup; //type: uint32
        ydk::YLeaf number_of_extended_communities; //type: uint32
        ydk::YLeaf mvpn_present; //type: boolean
        ydk::YLeaf path_rt_present; //type: boolean
        ydk::YLeaf vrf_import_rt_present; //type: boolean
        ydk::YLeaf source_asrt_present; //type: boolean
        ydk::YLeaf source_rd_present; //type: boolean
        ydk::YLeaf segmented_nexthop_present; //type: boolean
        ydk::YLeaf next_hop_id; //type: uint32
        ydk::YLeaf next_hop_id_refcount; //type: uint32
        ydk::YLeaf ospf_area_id; //type: string
        ydk::YLeaf has_labelstk; //type: boolean
        ydk::YLeaf num_labels; //type: uint8
        ydk::YLeaf binding_label; //type: uint32
        ydk::YLeaf nhid_feid; //type: uint64
        ydk::YLeaf mpls_feid; //type: uint64
        class RemoteBackupAddr; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr
        class Labelstk; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk> > labelstk;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::RemoteBackupAddr> > remote_backup_addr;
        
}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk : public ydk::Entity
{
    public:
        Labelstk();
        ~Labelstk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath::Labelstk


}
}

#endif /* _CISCO_IOS_XR_IP_RIB_IPV4_OPER_2_ */

