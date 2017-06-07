#ifndef _CISCO_IOS_XR_IP_RIB_IPV6_OPER_2_
#define _CISCO_IOS_XR_IP_RIB_IPV6_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_rib_ipv6_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rib_ipv6_oper {


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_names; //type: string
        YLeaf instance; //type: string
        YLeaf version; //type: uint32
        YLeaf redistribution_client_count; //type: uint32
        YLeaf protocol_clients_count; //type: uint32
        YLeaf routes_counts; //type: uint32
        YLeaf active_routes_count; //type: uint32
        YLeaf deleted_routes_count; //type: uint32
        YLeaf paths_count; //type: uint32
        YLeaf protocol_route_memory; //type: uint32
        YLeaf backup_routes_count; //type: uint32

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf prefix; //type: string
        YLeaf prefix_length_xr; //type: uint8
        YLeaf route_version; //type: uint32
        YLeaf protocol_id; //type: uint32
        YLeaf protocol_name; //type: string
        YLeaf instance; //type: string
        YLeaf client_id; //type: uint32
        YLeaf route_type; //type: uint16
        YLeaf priority; //type: uint8
        YLeaf svd_type; //type: uint8
        YLeaf flags; //type: uint32
        YLeaf extended_flags; //type: uint64
        YLeaf tag; //type: uint32
        YLeaf distance; //type: uint32
        YLeaf diversion_distance; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf paths_count; //type: uint32
        YLeaf attribute_identity; //type: uint32
        YLeaf traffic_index; //type: uint8
        YLeaf route_precedence; //type: uint8
        YLeaf qos_group; //type: uint8
        YLeaf flow_tag; //type: uint8
        YLeaf fwd_class; //type: uint8
        YLeaf pic_count; //type: uint8
        YLeaf active; //type: boolean
        YLeaf diversion; //type: boolean
        YLeaf diversion_proto_name; //type: string
        YLeaf route_age; //type: uint32
        YLeaf route_label; //type: uint32
        YLeaf version; //type: uint32
        YLeaf tbl_version; //type: uint64
        YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf information_source; //type: string
        YLeaf v6_nexthop; //type: string
        YLeaf v6_information_source; //type: string
        YLeaf interface_name; //type: string
        YLeaf metric; //type: uint32
        YLeaf load_metric; //type: uint32
        YLeaf flags64; //type: uint64
        YLeaf flags; //type: uint16
        YLeaf private_flags; //type: uint16
        YLeaf looped; //type: boolean
        YLeaf next_hop_table_id; //type: uint32
        YLeaf next_hop_vrf_name; //type: string
        YLeaf next_hop_table_name; //type: string
        YLeaf next_hop_afi; //type: uint32
        YLeaf next_hop_safi; //type: uint32
        YLeaf route_label; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf pathid; //type: uint32
        YLeaf backup_pathid; //type: uint32
        YLeaf ref_cnt_of_backup; //type: uint32
        YLeaf number_of_extended_communities; //type: uint32
        YLeaf mvpn_present; //type: boolean
        YLeaf path_rt_present; //type: boolean
        YLeaf vrf_import_rt_present; //type: boolean
        YLeaf source_asrt_present; //type: boolean
        YLeaf source_rd_present; //type: boolean
        YLeaf segmented_nexthop_present; //type: boolean
        YLeaf next_hop_id; //type: uint32
        YLeaf next_hop_id_refcount; //type: uint32
        YLeaf ospf_area_id; //type: string
        YLeaf has_labelstk; //type: boolean
        YLeaf num_labels; //type: uint8
        YLeaf binding_label; //type: uint32
        YLeaf nhid_feid; //type: uint64
        YLeaf mpls_feid; //type: uint64
        YLeafList remote_backup_addr; //type: list of  string
        YLeafList labelstk; //type: list of  uint32

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class As; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As> > as;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As : public Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as; //type: string
        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_names; //type: string
        YLeaf instance; //type: string
        YLeaf version; //type: uint32
        YLeaf redistribution_client_count; //type: uint32
        YLeaf protocol_clients_count; //type: uint32
        YLeaf routes_counts; //type: uint32
        YLeaf active_routes_count; //type: uint32
        YLeaf deleted_routes_count; //type: uint32
        YLeaf paths_count; //type: uint32
        YLeaf protocol_route_memory; //type: uint32
        YLeaf backup_routes_count; //type: uint32

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf prefix; //type: string
        YLeaf prefix_length_xr; //type: uint8
        YLeaf route_version; //type: uint32
        YLeaf protocol_id; //type: uint32
        YLeaf protocol_name; //type: string
        YLeaf instance; //type: string
        YLeaf client_id; //type: uint32
        YLeaf route_type; //type: uint16
        YLeaf priority; //type: uint8
        YLeaf svd_type; //type: uint8
        YLeaf flags; //type: uint32
        YLeaf extended_flags; //type: uint64
        YLeaf tag; //type: uint32
        YLeaf distance; //type: uint32
        YLeaf diversion_distance; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf paths_count; //type: uint32
        YLeaf attribute_identity; //type: uint32
        YLeaf traffic_index; //type: uint8
        YLeaf route_precedence; //type: uint8
        YLeaf qos_group; //type: uint8
        YLeaf flow_tag; //type: uint8
        YLeaf fwd_class; //type: uint8
        YLeaf pic_count; //type: uint8
        YLeaf active; //type: boolean
        YLeaf diversion; //type: boolean
        YLeaf diversion_proto_name; //type: string
        YLeaf route_age; //type: uint32
        YLeaf route_label; //type: uint32
        YLeaf version; //type: uint32
        YLeaf tbl_version; //type: uint64
        YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf information_source; //type: string
        YLeaf v6_nexthop; //type: string
        YLeaf v6_information_source; //type: string
        YLeaf interface_name; //type: string
        YLeaf metric; //type: uint32
        YLeaf load_metric; //type: uint32
        YLeaf flags64; //type: uint64
        YLeaf flags; //type: uint16
        YLeaf private_flags; //type: uint16
        YLeaf looped; //type: boolean
        YLeaf next_hop_table_id; //type: uint32
        YLeaf next_hop_vrf_name; //type: string
        YLeaf next_hop_table_name; //type: string
        YLeaf next_hop_afi; //type: uint32
        YLeaf next_hop_safi; //type: uint32
        YLeaf route_label; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf pathid; //type: uint32
        YLeaf backup_pathid; //type: uint32
        YLeaf ref_cnt_of_backup; //type: uint32
        YLeaf number_of_extended_communities; //type: uint32
        YLeaf mvpn_present; //type: boolean
        YLeaf path_rt_present; //type: boolean
        YLeaf vrf_import_rt_present; //type: boolean
        YLeaf source_asrt_present; //type: boolean
        YLeaf source_rd_present; //type: boolean
        YLeaf segmented_nexthop_present; //type: boolean
        YLeaf next_hop_id; //type: uint32
        YLeaf next_hop_id_refcount; //type: uint32
        YLeaf ospf_area_id; //type: string
        YLeaf has_labelstk; //type: boolean
        YLeaf num_labels; //type: uint8
        YLeaf binding_label; //type: uint32
        YLeaf nhid_feid; //type: uint64
        YLeaf mpls_feid; //type: uint64
        YLeafList remote_backup_addr; //type: list of  string
        YLeafList labelstk; //type: list of  uint32

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes : public Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Route; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route> > route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf next_hop_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf prefix; //type: string
        YLeaf prefix_length_xr; //type: uint8
        YLeaf route_version; //type: uint32
        YLeaf protocol_id; //type: uint32
        YLeaf protocol_name; //type: string
        YLeaf instance; //type: string
        YLeaf client_id; //type: uint32
        YLeaf route_type; //type: uint16
        YLeaf priority; //type: uint8
        YLeaf svd_type; //type: uint8
        YLeaf flags; //type: uint32
        YLeaf extended_flags; //type: uint64
        YLeaf tag; //type: uint32
        YLeaf distance; //type: uint32
        YLeaf diversion_distance; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf paths_count; //type: uint32
        YLeaf attribute_identity; //type: uint32
        YLeaf traffic_index; //type: uint8
        YLeaf route_precedence; //type: uint8
        YLeaf qos_group; //type: uint8
        YLeaf flow_tag; //type: uint8
        YLeaf fwd_class; //type: uint8
        YLeaf pic_count; //type: uint8
        YLeaf active; //type: boolean
        YLeaf diversion; //type: boolean
        YLeaf diversion_proto_name; //type: string
        YLeaf route_age; //type: uint32
        YLeaf route_label; //type: uint32
        YLeaf version; //type: uint32
        YLeaf tbl_version; //type: uint64
        YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath : public Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf information_source; //type: string
        YLeaf v6_nexthop; //type: string
        YLeaf v6_information_source; //type: string
        YLeaf interface_name; //type: string
        YLeaf metric; //type: uint32
        YLeaf load_metric; //type: uint32
        YLeaf flags64; //type: uint64
        YLeaf flags; //type: uint16
        YLeaf private_flags; //type: uint16
        YLeaf looped; //type: boolean
        YLeaf next_hop_table_id; //type: uint32
        YLeaf next_hop_vrf_name; //type: string
        YLeaf next_hop_table_name; //type: string
        YLeaf next_hop_afi; //type: uint32
        YLeaf next_hop_safi; //type: uint32
        YLeaf route_label; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf pathid; //type: uint32
        YLeaf backup_pathid; //type: uint32
        YLeaf ref_cnt_of_backup; //type: uint32
        YLeaf number_of_extended_communities; //type: uint32
        YLeaf mvpn_present; //type: boolean
        YLeaf path_rt_present; //type: boolean
        YLeaf vrf_import_rt_present; //type: boolean
        YLeaf source_asrt_present; //type: boolean
        YLeaf source_rd_present; //type: boolean
        YLeaf segmented_nexthop_present; //type: boolean
        YLeaf next_hop_id; //type: uint32
        YLeaf next_hop_id_refcount; //type: uint32
        YLeaf ospf_area_id; //type: string
        YLeaf has_labelstk; //type: boolean
        YLeaf num_labels; //type: uint8
        YLeaf binding_label; //type: uint32
        YLeaf nhid_feid; //type: uint64
        YLeaf mpls_feid; //type: uint64
        YLeafList remote_backup_addr; //type: list of  string
        YLeafList labelstk; //type: list of  uint32

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes : public Entity
{
    public:
        QRoutes();
        ~QRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class QRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute> > q_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute : public Entity
{
    public:
        QRoute();
        ~QRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf prefix; //type: string
        YLeaf prefix_length_xr; //type: uint8
        YLeaf route_version; //type: uint32
        YLeaf protocol_id; //type: uint32
        YLeaf protocol_name; //type: string
        YLeaf instance; //type: string
        YLeaf client_id; //type: uint32
        YLeaf route_type; //type: uint16
        YLeaf priority; //type: uint8
        YLeaf svd_type; //type: uint8
        YLeaf flags; //type: uint32
        YLeaf extended_flags; //type: uint64
        YLeaf tag; //type: uint32
        YLeaf distance; //type: uint32
        YLeaf diversion_distance; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf paths_count; //type: uint32
        YLeaf attribute_identity; //type: uint32
        YLeaf traffic_index; //type: uint8
        YLeaf route_precedence; //type: uint8
        YLeaf qos_group; //type: uint8
        YLeaf flow_tag; //type: uint8
        YLeaf fwd_class; //type: uint8
        YLeaf pic_count; //type: uint8
        YLeaf active; //type: boolean
        YLeaf diversion; //type: boolean
        YLeaf diversion_proto_name; //type: string
        YLeaf route_age; //type: uint32
        YLeaf route_label; //type: uint32
        YLeaf version; //type: uint32
        YLeaf tbl_version; //type: uint64
        YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath : public Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf information_source; //type: string
        YLeaf v6_nexthop; //type: string
        YLeaf v6_information_source; //type: string
        YLeaf interface_name; //type: string
        YLeaf metric; //type: uint32
        YLeaf load_metric; //type: uint32
        YLeaf flags64; //type: uint64
        YLeaf flags; //type: uint16
        YLeaf private_flags; //type: uint16
        YLeaf looped; //type: boolean
        YLeaf next_hop_table_id; //type: uint32
        YLeaf next_hop_vrf_name; //type: string
        YLeaf next_hop_table_name; //type: string
        YLeaf next_hop_afi; //type: uint32
        YLeaf next_hop_safi; //type: uint32
        YLeaf route_label; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf pathid; //type: uint32
        YLeaf backup_pathid; //type: uint32
        YLeaf ref_cnt_of_backup; //type: uint32
        YLeaf number_of_extended_communities; //type: uint32
        YLeaf mvpn_present; //type: boolean
        YLeaf path_rt_present; //type: boolean
        YLeaf vrf_import_rt_present; //type: boolean
        YLeaf source_asrt_present; //type: boolean
        YLeaf source_rd_present; //type: boolean
        YLeaf segmented_nexthop_present; //type: boolean
        YLeaf next_hop_id; //type: uint32
        YLeaf next_hop_id_refcount; //type: uint32
        YLeaf ospf_area_id; //type: string
        YLeaf has_labelstk; //type: boolean
        YLeaf num_labels; //type: uint8
        YLeaf binding_label; //type: uint32
        YLeaf nhid_feid; //type: uint64
        YLeaf mpls_feid; //type: uint64
        YLeafList remote_backup_addr; //type: list of  string
        YLeafList labelstk; //type: list of  uint32

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes : public Entity
{
    public:
        BackupRoutes();
        ~BackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BackupRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute> > backup_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute : public Entity
{
    public:
        BackupRoute();
        ~BackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf protoid; //type: int32
        YLeaf prefix; //type: string
        YLeaf prefix_length_xr; //type: uint8
        YLeaf route_version; //type: uint32
        YLeaf protocol_id; //type: uint32
        YLeaf protocol_name; //type: string
        YLeaf instance; //type: string
        YLeaf client_id; //type: uint32
        YLeaf route_type; //type: uint16
        YLeaf priority; //type: uint8
        YLeaf svd_type; //type: uint8
        YLeaf flags; //type: uint32
        YLeaf extended_flags; //type: uint64
        YLeaf tag; //type: uint32
        YLeaf distance; //type: uint32
        YLeaf diversion_distance; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf paths_count; //type: uint32
        YLeaf attribute_identity; //type: uint32
        YLeaf traffic_index; //type: uint8
        YLeaf route_precedence; //type: uint8
        YLeaf qos_group; //type: uint8
        YLeaf flow_tag; //type: uint8
        YLeaf fwd_class; //type: uint8
        YLeaf pic_count; //type: uint8
        YLeaf active; //type: boolean
        YLeaf diversion; //type: boolean
        YLeaf diversion_proto_name; //type: string
        YLeaf route_age; //type: uint32
        YLeaf route_label; //type: uint32
        YLeaf version; //type: uint32
        YLeaf tbl_version; //type: uint64
        YLeaf route_modify_time; //type: uint64
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath : public Entity
{
    public:
        Ipv6RibEdmPath();
        ~Ipv6RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf information_source; //type: string
        YLeaf v6_nexthop; //type: string
        YLeaf v6_information_source; //type: string
        YLeaf interface_name; //type: string
        YLeaf metric; //type: uint32
        YLeaf load_metric; //type: uint32
        YLeaf flags64; //type: uint64
        YLeaf flags; //type: uint16
        YLeaf private_flags; //type: uint16
        YLeaf looped; //type: boolean
        YLeaf next_hop_table_id; //type: uint32
        YLeaf next_hop_vrf_name; //type: string
        YLeaf next_hop_table_name; //type: string
        YLeaf next_hop_afi; //type: uint32
        YLeaf next_hop_safi; //type: uint32
        YLeaf route_label; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf pathid; //type: uint32
        YLeaf backup_pathid; //type: uint32
        YLeaf ref_cnt_of_backup; //type: uint32
        YLeaf number_of_extended_communities; //type: uint32
        YLeaf mvpn_present; //type: boolean
        YLeaf path_rt_present; //type: boolean
        YLeaf vrf_import_rt_present; //type: boolean
        YLeaf source_asrt_present; //type: boolean
        YLeaf source_rd_present; //type: boolean
        YLeaf segmented_nexthop_present; //type: boolean
        YLeaf next_hop_id; //type: uint32
        YLeaf next_hop_id_refcount; //type: uint32
        YLeaf ospf_area_id; //type: string
        YLeaf has_labelstk; //type: boolean
        YLeaf num_labels; //type: uint8
        YLeaf binding_label; //type: uint32
        YLeaf nhid_feid; //type: uint64
        YLeaf mpls_feid; //type: uint64
        YLeafList remote_backup_addr; //type: list of  string
        YLeafList labelstk; //type: list of  uint32

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath


}
}

#endif /* _CISCO_IOS_XR_IP_RIB_IPV6_OPER_2_ */

