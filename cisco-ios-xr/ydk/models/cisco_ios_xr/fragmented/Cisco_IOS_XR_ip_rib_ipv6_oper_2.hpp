#ifndef _CISCO_IOS_XR_IP_RIB_IPV6_OPER_2_
#define _CISCO_IOS_XR_IP_RIB_IPV6_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_rib_ipv6_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rib_ipv6_oper {


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeafList remote_backup_addr; //type: list of  string
        ydk::YLeafList labelstk; //type: list of  uint32

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class As; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As> > as;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: string
        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes : public ydk::Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute : public ydk::Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeafList remote_backup_addr; //type: list of  string
        ydk::YLeafList labelstk; //type: list of  uint32

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes : public ydk::Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route> > route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf interface_name; //type: string
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeafList remote_backup_addr; //type: list of  string
        ydk::YLeafList labelstk; //type: list of  uint32

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes : public ydk::Entity
{
    public:
        QRoutes();
        ~QRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute> > q_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute : public ydk::Entity
{
    public:
        QRoute();
        ~QRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeafList remote_backup_addr; //type: list of  string
        ydk::YLeafList labelstk; //type: list of  uint32

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes : public ydk::Entity
{
    public:
        BackupRoutes();
        ~BackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute> > backup_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute : public ydk::Entity
{
    public:
        BackupRoute();
        ~BackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeaf protoid; //type: int32
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath : public ydk::Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath : public ydk::Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeafList remote_backup_addr; //type: list of  string
        ydk::YLeafList labelstk; //type: list of  uint32

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath


}
}

#endif /* _CISCO_IOS_XR_IP_RIB_IPV6_OPER_2_ */

