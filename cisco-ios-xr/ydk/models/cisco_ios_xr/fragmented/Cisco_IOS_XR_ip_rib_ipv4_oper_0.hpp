#ifndef _CISCO_IOS_XR_IP_RIB_IPV4_OPER_0_
#define _CISCO_IOS_XR_IP_RIB_IPV4_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_rib_ipv4_oper {

class RibStdby : public Entity
{
    public:
        RibStdby();
        ~RibStdby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Vrfs; //type: RibStdby::Vrfs
        class RibTableIds; //type: RibStdby::RibTableIds

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds> rib_table_ids;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs> vrfs;


}; // RibStdby


class RibStdby::Vrfs : public Entity
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



        class Vrf; //type: RibStdby::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf> > vrf;


}; // RibStdby::Vrfs


class RibStdby::Vrfs::Vrf : public Entity
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

        class Afs; //type: RibStdby::Vrfs::Vrf::Afs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs> afs;


}; // RibStdby::Vrfs::Vrf


class RibStdby::Vrfs::Vrf::Afs : public Entity
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



        class Af; //type: RibStdby::Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af> > af;


}; // RibStdby::Vrfs::Vrf::Afs


class RibStdby::Vrfs::Vrf::Afs::Af : public Entity
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


        YLeaf af_name; //type: string

        class Safs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs> safs;


}; // RibStdby::Vrfs::Vrf::Afs::Af


class RibStdby::Vrfs::Vrf::Afs::Af::Safs : public Entity
{
    public:
        Safs();
        ~Safs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Saf; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf> > saf;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf : public Entity
{
    public:
        Saf();
        ~Saf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf saf_name; //type: string

        class IpRibRouteTableNames; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames> ip_rib_route_table_names;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames : public Entity
{
    public:
        IpRibRouteTableNames();
        ~IpRibRouteTableNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IpRibRouteTableName; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName> > ip_rib_route_table_name;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName : public Entity
{
    public:
        IpRibRouteTableName();
        ~IpRibRouteTableName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_table_name; //type: string

        class Routes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes
        class DeletedRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes
        class DestinationKw; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw
        class Opaques; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques
        class Protocol; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol
        class QRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes
        class BackupRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes
        class Adverts; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts> adverts;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes> backup_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes> deleted_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw> destination_kw;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques> opaques;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes> q_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes> routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes : public Entity
{
    public:
        Routes();
        ~Routes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Route; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route> > route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes : public Entity
{
    public:
        DeletedRoutes();
        ~DeletedRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DeletedRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute> > deleted_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute : public Entity
{
    public:
        DeletedRoute();
        ~DeletedRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw : public Entity
{
    public:
        DestinationKw();
        ~DestinationKw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DestBestRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes
        class DestQRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes
        class DestBackupRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes
        class DestNextHopRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes> dest_backup_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes> dest_best_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes> dest_next_hop_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes> dest_q_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes : public Entity
{
    public:
        DestBestRoutes();
        ~DestBestRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DestBestRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute> > dest_best_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute : public Entity
{
    public:
        DestBestRoute();
        ~DestBestRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes : public Entity
{
    public:
        DestQRoutes();
        ~DestQRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DestQRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute> > dest_q_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute : public Entity
{
    public:
        DestQRoute();
        ~DestQRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes : public Entity
{
    public:
        DestBackupRoutes();
        ~DestBackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DestBackupRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute> > dest_backup_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute : public Entity
{
    public:
        DestBackupRoute();
        ~DestBackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes : public Entity
{
    public:
        DestNextHopRoutes();
        ~DestNextHopRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DestNextHopRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute> > dest_next_hop_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute : public Entity
{
    public:
        DestNextHopRoute();
        ~DestNextHopRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques : public Entity
{
    public:
        Opaques();
        ~Opaques();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Opaque; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque> > opaque;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque : public Entity
{
    public:
        Opaque();
        ~Opaque();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf opaque_clientid; //type: int32
        YLeaf opaque_protoid; //type: int32
        YLeaf opaque_key_type; //type: int32
        YLeaf opaque_key_size; //type: int32
        YLeaf opaque_data_size; //type: int32
        YLeaf opaque_string; //type: string
        YLeaf key; //type: string
        YLeaf data; //type: string



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application> application;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected> connected;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr> dagr;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local> local;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile> mobile;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip> rip;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl> rpl;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_> static_;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber> subscriber;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient> te_client;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile : public Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs> non_as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber : public Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs> non_as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs> non_as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr : public Entity
{
    public:
        Dagr();
        ~Dagr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs> non_as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip : public Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs> non_as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class As; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As> > as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As : public Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as; //type: string

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs> non_as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl : public Entity
{
    public:
        Rpl();
        ~Rpl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class As; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As> > as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As : public Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as; //type: string

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs> non_as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient : public Entity
{
    public:
        TeClient();
        ~TeClient();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs> non_as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class As; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As> > as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As : public Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as; //type: string

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Smiap; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap
        class Lspv; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv
        class NonAs; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv> lspv;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs> non_as;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap> smiap;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap : public Entity
{
    public:
        Smiap();
        ~Smiap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv : public Entity
{
    public:
        Lspv();
        ~Lspv();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs : public Entity
{
    public:
        NonAs();
        ~NonAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class As; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As> > as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As : public Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as; //type: string

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class As; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As> > as;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As : public Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as; //type: string

        class ProtocolRoutes; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes
        class Information; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes> protocol_routes;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes : public Entity
{
    public:
        ProtocolRoutes();
        ~ProtocolRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute : public Entity
{
    public:
        ProtocolRoute();
        ~ProtocolRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
{
    public:
        Ipv4RibEdmPath();
        ~Ipv4RibEdmPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information : public Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes : public Entity
{
    public:
        QRoutes();
        ~QRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class QRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute> > q_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute : public Entity
{
    public:
        QRoute();
        ~QRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath


}
}

#endif /* _CISCO_IOS_XR_IP_RIB_IPV4_OPER_0_ */

