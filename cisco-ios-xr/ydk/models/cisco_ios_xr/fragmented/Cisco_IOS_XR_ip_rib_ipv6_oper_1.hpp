#ifndef _CISCO_IOS_XR_IP_RIB_IPV6_OPER_1_
#define _CISCO_IOS_XR_IP_RIB_IPV6_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_rib_ipv6_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rib_ipv6_oper {


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes : public Entity
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

        class Route; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route> > route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route : public Entity
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
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes : public Entity
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

        class QRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute> > q_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute : public Entity
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
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes : public Entity
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

        class BackupRoute; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute> > backup_route;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute : public Entity
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
        class RoutePath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath> route_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath


class Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath

class Ipv6RibStdby : public Entity
{
    public:
        Ipv6RibStdby();
        ~Ipv6RibStdby();

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

        class RibTableIds; //type: Ipv6RibStdby::RibTableIds
        class Vrfs; //type: Ipv6RibStdby::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds> rib_table_ids;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs> vrfs;
        
}; // Ipv6RibStdby


class Ipv6RibStdby::RibTableIds : public Entity
{
    public:
        RibTableIds();
        ~RibTableIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RibTableId; //type: Ipv6RibStdby::RibTableIds::RibTableId

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId> > rib_table_id;
        
}; // Ipv6RibStdby::RibTableIds


class Ipv6RibStdby::RibTableIds::RibTableId : public Entity
{
    public:
        RibTableId();
        ~RibTableId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tableid; //type: string
        class SummaryProtos; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos
        class RibTableItfHndls; //type: Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls> rib_table_itf_hndls;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos> summary_protos;
        
}; // Ipv6RibStdby::RibTableIds::RibTableId


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos : public Entity
{
    public:
        SummaryProtos();
        ~SummaryProtos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SummaryProto; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto> > summary_proto;
        
}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto : public Entity
{
    public:
        SummaryProto();
        ~SummaryProto();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protoid; //type: int32
        YLeaf name; //type: string
        YLeaf instance; //type: string
        class ProtoRouteCount; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount
        class RtypeNone; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone
        class RtypeOther; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther
        class RtypeOspfIntra; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra
        class RtypeOspfInter; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter
        class RtypeOspfExtern1; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1
        class RtypeOspfExtern2; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2
        class RtypeIsisSum; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum
        class RtypeIsisL1; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1
        class RtypeIsisL2; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2
        class RtypeIsisL1Ia; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia
        class RtypeBgpInt; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt
        class RtypeBgpExt; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt
        class RtypeBgpLoc; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc
        class RtypeOspfNssa1; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1
        class RtypeOspfNssa2; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2
        class RtypeIgrp2Int; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int
        class RtypeIgrp2Ext; //type: Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount> proto_route_count;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt> rtype_bgp_ext;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt> rtype_bgp_int;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc> rtype_bgp_loc;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext> rtype_igrp2_ext;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int> rtype_igrp2_int;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1> rtype_isis_l1;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia> rtype_isis_l1_ia;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2> rtype_isis_l2;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum> rtype_isis_sum;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone> rtype_none;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1> rtype_ospf_extern1;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2> rtype_ospf_extern2;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter> rtype_ospf_inter;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra> rtype_ospf_intra;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1> rtype_ospf_nssa1;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2> rtype_ospf_nssa2;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther> rtype_other;
        
}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount : public Entity
{
    public:
        ProtoRouteCount();
        ~ProtoRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone : public Entity
{
    public:
        RtypeNone();
        ~RtypeNone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther : public Entity
{
    public:
        RtypeOther();
        ~RtypeOther();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra : public Entity
{
    public:
        RtypeOspfIntra();
        ~RtypeOspfIntra();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter : public Entity
{
    public:
        RtypeOspfInter();
        ~RtypeOspfInter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1 : public Entity
{
    public:
        RtypeOspfExtern1();
        ~RtypeOspfExtern1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2 : public Entity
{
    public:
        RtypeOspfExtern2();
        ~RtypeOspfExtern2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum : public Entity
{
    public:
        RtypeIsisSum();
        ~RtypeIsisSum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1 : public Entity
{
    public:
        RtypeIsisL1();
        ~RtypeIsisL1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2 : public Entity
{
    public:
        RtypeIsisL2();
        ~RtypeIsisL2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia : public Entity
{
    public:
        RtypeIsisL1Ia();
        ~RtypeIsisL1Ia();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt : public Entity
{
    public:
        RtypeBgpInt();
        ~RtypeBgpInt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt : public Entity
{
    public:
        RtypeBgpExt();
        ~RtypeBgpExt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc : public Entity
{
    public:
        RtypeBgpLoc();
        ~RtypeBgpLoc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1 : public Entity
{
    public:
        RtypeOspfNssa1();
        ~RtypeOspfNssa1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2 : public Entity
{
    public:
        RtypeOspfNssa2();
        ~RtypeOspfNssa2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int : public Entity
{
    public:
        RtypeIgrp2Int();
        ~RtypeIgrp2Int();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int


class Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext : public Entity
{
    public:
        RtypeIgrp2Ext();
        ~RtypeIgrp2Ext();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32

}; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext


class Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls : public Entity
{
    public:
        RibTableItfHndls();
        ~RibTableItfHndls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RibTableItfHndl; //type: Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl> > rib_table_itf_hndl;
        
}; // Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls


class Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl : public Entity
{
    public:
        RibTableItfHndl();
        ~RibTableItfHndl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf handle; //type: int32
        class ItfRoute; //type: Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute> > itf_route;
        
}; // Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl


class Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute : public Entity
{
    public:
        ItfRoute();
        ~ItfRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
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
        class RoutePath; //type: Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute


class Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath


class Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Ipv6RibStdby::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf> > vrf;
        
}; // Ipv6RibStdby::Vrfs


class Ipv6RibStdby::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Afs; //type: Ipv6RibStdby::Vrfs::Vrf::Afs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs> afs;
        
}; // Ipv6RibStdby::Vrfs::Vrf


class Ipv6RibStdby::Vrfs::Vrf::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Af; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af> > af;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: string
        class Safs; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs> safs;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs : public Entity
{
    public:
        Safs();
        ~Safs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Saf; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf> > saf;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf : public Entity
{
    public:
        Saf();
        ~Saf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf saf_name; //type: string
        class IpRibRouteTableNames; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames> ip_rib_route_table_names;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames : public Entity
{
    public:
        IpRibRouteTableNames();
        ~IpRibRouteTableNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpRibRouteTableName; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName> > ip_rib_route_table_name;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName : public Entity
{
    public:
        IpRibRouteTableName();
        ~IpRibRouteTableName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_table_name; //type: string
        class DestinationKw; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw
        class Adverts; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts
        class DeletedRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes
        class Protocol; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol
        class Routes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes
        class QRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes
        class BackupRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts> adverts;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes> backup_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes> deleted_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw> destination_kw;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes> q_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes> routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw : public Entity
{
    public:
        DestinationKw();
        ~DestinationKw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DestQRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes
        class DestBackupRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes
        class DestBestRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes
        class DestNextHopRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes> dest_backup_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes> dest_best_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes> dest_next_hop_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes> dest_q_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes : public Entity
{
    public:
        DestQRoutes();
        ~DestQRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DestQRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute> > dest_q_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute : public Entity
{
    public:
        DestQRoute();
        ~DestQRoute();

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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes : public Entity
{
    public:
        DestBackupRoutes();
        ~DestBackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DestBackupRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute> > dest_backup_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute : public Entity
{
    public:
        DestBackupRoute();
        ~DestBackupRoute();

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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes : public Entity
{
    public:
        DestBestRoutes();
        ~DestBestRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DestBestRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute> > dest_best_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute : public Entity
{
    public:
        DestBestRoute();
        ~DestBestRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes : public Entity
{
    public:
        DestNextHopRoutes();
        ~DestNextHopRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DestNextHopRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute> > dest_next_hop_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute : public Entity
{
    public:
        DestNextHopRoute();
        ~DestNextHopRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts : public Entity
{
    public:
        Adverts();
        ~Adverts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Advert; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert> > advert;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert : public Entity
{
    public:
        Advert();
        ~Advert();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8
        class Ipv6RibEdmAdvert; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert> > ipv6_rib_edm_advert;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert : public Entity
{
    public:
        Ipv6RibEdmAdvert();
        ~Ipv6RibEdmAdvert();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_id; //type: uint32
        YLeaf client_id; //type: uint32
        YLeaf number_of_extended_communities; //type: uint32
        YLeaf extended_communities; //type: string
        YLeaf protocol_opaque_flags; //type: uint8
        YLeaf protocol_opaque; //type: uint32
        YLeaf code; //type: int8
        YLeaf instance_name; //type: string

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes : public Entity
{
    public:
        DeletedRoutes();
        ~DeletedRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DeletedRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute> > deleted_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute : public Entity
{
    public:
        DeletedRoute();
        ~DeletedRoute();

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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Local; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local
        class Bgp; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp
        class Mobile; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile
        class Eigrp; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp
        class Rpl; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl
        class Static_; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_
        class TeClient; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient
        class Subscriber; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber
        class Ospf; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf
        class Connected; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected
        class Isis; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected> connected;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local> local;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile> mobile;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl> rpl;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_> static_;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber> subscriber;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient> te_client;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lspv; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv
        class NonAs; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv> lspv;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs> non_as;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv : public Entity
{
    public:
        Lspv();
        ~Lspv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes : public Entity
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

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute : public Entity
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes : public Entity
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

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp : public Entity
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

        class As; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As> > as;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As : public Entity
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
        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes : public Entity
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

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute : public Entity
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile : public Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NonAs; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs> non_as;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes : public Entity
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

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class As; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As> > as;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As : public Entity
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
        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes : public Entity
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

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute : public Entity
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl : public Entity
{
    public:
        Rpl();
        ~Rpl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class As; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As> > as;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As : public Entity
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
        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes : public Entity
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

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute : public Entity
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NonAs; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs> non_as;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes : public Entity
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

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient : public Entity
{
    public:
        TeClient();
        ~TeClient();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NonAs; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs> non_as;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes : public Entity
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

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber : public Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NonAs; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs> non_as;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes : public Entity
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

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class As; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As> > as;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As : public Entity
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
        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes : public Entity
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

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute : public Entity
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Vpn; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn
        class NonAs; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn> l2vpn;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs> non_as;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn : public Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes : public Entity
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

        class ProtocolRoute; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute> > protocol_route;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute : public Entity
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
        class RoutePath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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

        class Ipv6RibEdmPath; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath : public Entity
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

}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


class Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Information; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information
        class ProtocolRoutes; //type: Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes> protocol_routes;
        
}; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs


}
}

#endif /* _CISCO_IOS_XR_IP_RIB_IPV6_OPER_1_ */

