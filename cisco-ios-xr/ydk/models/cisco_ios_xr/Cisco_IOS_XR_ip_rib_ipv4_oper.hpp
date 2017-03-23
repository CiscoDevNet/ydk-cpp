#ifndef _CISCO_IOS_XR_IP_RIB_IPV4_OPER_
#define _CISCO_IOS_XR_IP_RIB_IPV4_OPER_

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


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes : public Entity
{
    public:
        BackupRoutes();
        ~BackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupRoute; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute> > backup_route;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute : public Entity
{
    public:
        BackupRoute();
        ~BackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath> route_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts : public Entity
{
    public:
        Adverts();
        ~Adverts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Advert; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert> > advert;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert : public Entity
{
    public:
        Advert();
        ~Advert();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8

        class Ipv4RibEdmAdvert; //type: RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert> > ipv4_rib_edm_advert;


}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert


class RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert : public Entity
{
    public:
        Ipv4RibEdmAdvert();
        ~Ipv4RibEdmAdvert();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_id; //type: uint32
        YLeaf client_id; //type: uint32
        YLeaf number_of_extended_communities; //type: uint32
        YLeaf extended_communities; //type: string
        YLeaf protocol_opaque_flags; //type: uint8
        YLeaf protocol_opaque; //type: uint32
        YLeaf code; //type: int8
        YLeaf instance_name; //type: string



}; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert


class RibStdby::RibTableIds : public Entity
{
    public:
        RibTableIds();
        ~RibTableIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RibTableId; //type: RibStdby::RibTableIds::RibTableId

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId> > rib_table_id;


}; // RibStdby::RibTableIds


class RibStdby::RibTableIds::RibTableId : public Entity
{
    public:
        RibTableId();
        ~RibTableId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tableid; //type: string

        class SummaryProtos; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos
        class RibTableItfHndls; //type: RibStdby::RibTableIds::RibTableId::RibTableItfHndls

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::RibTableItfHndls> rib_table_itf_hndls;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos> summary_protos;


}; // RibStdby::RibTableIds::RibTableId


class RibStdby::RibTableIds::RibTableId::SummaryProtos : public Entity
{
    public:
        SummaryProtos();
        ~SummaryProtos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SummaryProto; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto> > summary_proto;


}; // RibStdby::RibTableIds::RibTableId::SummaryProtos


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto : public Entity
{
    public:
        SummaryProto();
        ~SummaryProto();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protoid; //type: int32
        YLeaf name; //type: string
        YLeaf instance; //type: string

        class ProtoRouteCount; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount
        class RtypeNone; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone
        class RtypeOther; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther
        class RtypeOspfIntra; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra
        class RtypeOspfInter; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter
        class RtypeOspfExtern1; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1
        class RtypeOspfExtern2; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2
        class RtypeIsisSum; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum
        class RtypeIsisL1; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1
        class RtypeIsisL2; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2
        class RtypeIsisL1Ia; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia
        class RtypeBgpInt; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt
        class RtypeBgpExt; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt
        class RtypeBgpLoc; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc
        class RtypeOspfNssa1; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1
        class RtypeOspfNssa2; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2
        class RtypeIgrp2Int; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int
        class RtypeIgrp2Ext; //type: RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount> proto_route_count;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt> rtype_bgp_ext;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt> rtype_bgp_int;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc> rtype_bgp_loc;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext> rtype_igrp2_ext;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int> rtype_igrp2_int;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1> rtype_isis_l1;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia> rtype_isis_l1_ia;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2> rtype_isis_l2;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum> rtype_isis_sum;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone> rtype_none;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1> rtype_ospf_extern1;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2> rtype_ospf_extern2;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter> rtype_ospf_inter;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra> rtype_ospf_intra;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1> rtype_ospf_nssa1;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2> rtype_ospf_nssa2;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther> rtype_other;


}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount : public Entity
{
    public:
        ProtoRouteCount();
        ~ProtoRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone : public Entity
{
    public:
        RtypeNone();
        ~RtypeNone();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther : public Entity
{
    public:
        RtypeOther();
        ~RtypeOther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra : public Entity
{
    public:
        RtypeOspfIntra();
        ~RtypeOspfIntra();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter : public Entity
{
    public:
        RtypeOspfInter();
        ~RtypeOspfInter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1 : public Entity
{
    public:
        RtypeOspfExtern1();
        ~RtypeOspfExtern1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2 : public Entity
{
    public:
        RtypeOspfExtern2();
        ~RtypeOspfExtern2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum : public Entity
{
    public:
        RtypeIsisSum();
        ~RtypeIsisSum();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1 : public Entity
{
    public:
        RtypeIsisL1();
        ~RtypeIsisL1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2 : public Entity
{
    public:
        RtypeIsisL2();
        ~RtypeIsisL2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia : public Entity
{
    public:
        RtypeIsisL1Ia();
        ~RtypeIsisL1Ia();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt : public Entity
{
    public:
        RtypeBgpInt();
        ~RtypeBgpInt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt : public Entity
{
    public:
        RtypeBgpExt();
        ~RtypeBgpExt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc : public Entity
{
    public:
        RtypeBgpLoc();
        ~RtypeBgpLoc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1 : public Entity
{
    public:
        RtypeOspfNssa1();
        ~RtypeOspfNssa1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2 : public Entity
{
    public:
        RtypeOspfNssa2();
        ~RtypeOspfNssa2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int : public Entity
{
    public:
        RtypeIgrp2Int();
        ~RtypeIgrp2Int();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int


class RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext : public Entity
{
    public:
        RtypeIgrp2Ext();
        ~RtypeIgrp2Ext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext


class RibStdby::RibTableIds::RibTableId::RibTableItfHndls : public Entity
{
    public:
        RibTableItfHndls();
        ~RibTableItfHndls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RibTableItfHndl; //type: RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl> > rib_table_itf_hndl;


}; // RibStdby::RibTableIds::RibTableId::RibTableItfHndls


class RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl : public Entity
{
    public:
        RibTableItfHndl();
        ~RibTableItfHndl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf handle; //type: int32

        class ItfRoute; //type: RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute> > itf_route;


}; // RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl


class RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute : public Entity
{
    public:
        ItfRoute();
        ~ItfRoute();

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

        class RoutePath; //type: RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath> route_path;


}; // RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute


class RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath


class RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath

class Rib : public Entity
{
    public:
        Rib();
        ~Rib();

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



        class Vrfs; //type: Rib::Vrfs
        class RibTableIds; //type: Rib::RibTableIds

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds> rib_table_ids;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs> vrfs;


}; // Rib


class Rib::Vrfs : public Entity
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



        class Vrf; //type: Rib::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf> > vrf;


}; // Rib::Vrfs


class Rib::Vrfs::Vrf : public Entity
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

        class Afs; //type: Rib::Vrfs::Vrf::Afs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs> afs;


}; // Rib::Vrfs::Vrf


class Rib::Vrfs::Vrf::Afs : public Entity
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



        class Af; //type: Rib::Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af> > af;


}; // Rib::Vrfs::Vrf::Afs


class Rib::Vrfs::Vrf::Afs::Af : public Entity
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

        class Safs; //type: Rib::Vrfs::Vrf::Afs::Af::Safs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs> safs;


}; // Rib::Vrfs::Vrf::Afs::Af


class Rib::Vrfs::Vrf::Afs::Af::Safs : public Entity
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



        class Saf; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf> > saf;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf : public Entity
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

        class IpRibRouteTableNames; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames> ip_rib_route_table_names;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames : public Entity
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



        class IpRibRouteTableName; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName> > ip_rib_route_table_name;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName : public Entity
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

        class Routes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes
        class DeletedRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes
        class DestinationKw; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw
        class Opaques; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques
        class Protocol; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol
        class QRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes
        class BackupRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes
        class Adverts; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts> adverts;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes> backup_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes> deleted_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw> destination_kw;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques> opaques;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes> q_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes> routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes : public Entity
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



        class Route; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route> > route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes : public Entity
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



        class DeletedRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute> > deleted_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw : public Entity
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



        class DestBestRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes
        class DestQRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes
        class DestBackupRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes
        class DestNextHopRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes> dest_backup_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes> dest_best_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes> dest_next_hop_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes> dest_q_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes : public Entity
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



        class DestBestRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute> > dest_best_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes : public Entity
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



        class DestQRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute> > dest_q_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes : public Entity
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



        class DestBackupRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute> > dest_backup_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes : public Entity
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



        class DestNextHopRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute> > dest_next_hop_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques : public Entity
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



        class Opaque; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque> > opaque;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol : public Entity
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



        class Mobile; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile
        class Subscriber; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber
        class Connected; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected
        class Dagr; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr
        class Rip; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip
        class Ospf; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf
        class Static_; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_
        class Rpl; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl
        class Application; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application
        class TeClient; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient
        class Eigrp; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp
        class Local; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local
        class Bgp; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp
        class Isis; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application> application;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected> connected;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr> dagr;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local> local;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile> mobile;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip> rip;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl> rpl;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_> static_;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber> subscriber;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient> te_client;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile : public Entity
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



        class NonAs; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs> non_as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs : public Entity
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



        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber : public Entity
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



        class NonAs; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs> non_as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs : public Entity
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



        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected : public Entity
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



        class NonAs; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs> non_as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs : public Entity
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



        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr : public Entity
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



        class NonAs; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs> non_as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs : public Entity
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



        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip : public Entity
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



        class NonAs; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs> non_as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs : public Entity
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



        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf : public Entity
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



        class As; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As> > as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As : public Entity
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

        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_ : public Entity
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



        class NonAs; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs> non_as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs : public Entity
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



        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl : public Entity
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



        class As; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As> > as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As : public Entity
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

        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application : public Entity
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



        class NonAs; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs> non_as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs : public Entity
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



        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient : public Entity
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



        class NonAs; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs> non_as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs : public Entity
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



        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp : public Entity
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



        class As; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As> > as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As : public Entity
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

        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local : public Entity
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



        class Smiap; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap
        class Lspv; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv
        class NonAs; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv> lspv;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs> non_as;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap> smiap;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap : public Entity
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



        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv : public Entity
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



        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs : public Entity
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



        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp : public Entity
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



        class As; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As> > as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As : public Entity
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

        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis : public Entity
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



        class As; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As> > as;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As : public Entity
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

        class ProtocolRoutes; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes
        class Information; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information> information;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes> protocol_routes;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes : public Entity
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



        class ProtocolRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes : public Entity
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



        class QRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute> > q_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute : public Entity
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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes : public Entity
{
    public:
        BackupRoutes();
        ~BackupRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupRoute; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute> > backup_route;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute : public Entity
{
    public:
        BackupRoute();
        ~BackupRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class RoutePath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath> route_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts : public Entity
{
    public:
        Adverts();
        ~Adverts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Advert; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert> > advert;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert : public Entity
{
    public:
        Advert();
        ~Advert();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: uint8

        class Ipv4RibEdmAdvert; //type: Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert> > ipv4_rib_edm_advert;


}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert


class Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert : public Entity
{
    public:
        Ipv4RibEdmAdvert();
        ~Ipv4RibEdmAdvert();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_id; //type: uint32
        YLeaf client_id; //type: uint32
        YLeaf number_of_extended_communities; //type: uint32
        YLeaf extended_communities; //type: string
        YLeaf protocol_opaque_flags; //type: uint8
        YLeaf protocol_opaque; //type: uint32
        YLeaf code; //type: int8
        YLeaf instance_name; //type: string



}; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert


class Rib::RibTableIds : public Entity
{
    public:
        RibTableIds();
        ~RibTableIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RibTableId; //type: Rib::RibTableIds::RibTableId

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId> > rib_table_id;


}; // Rib::RibTableIds


class Rib::RibTableIds::RibTableId : public Entity
{
    public:
        RibTableId();
        ~RibTableId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tableid; //type: string

        class SummaryProtos; //type: Rib::RibTableIds::RibTableId::SummaryProtos
        class RibTableItfHndls; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls> rib_table_itf_hndls;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos> summary_protos;


}; // Rib::RibTableIds::RibTableId


class Rib::RibTableIds::RibTableId::SummaryProtos : public Entity
{
    public:
        SummaryProtos();
        ~SummaryProtos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SummaryProto; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto> > summary_proto;


}; // Rib::RibTableIds::RibTableId::SummaryProtos


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto : public Entity
{
    public:
        SummaryProto();
        ~SummaryProto();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protoid; //type: int32
        YLeaf name; //type: string
        YLeaf instance; //type: string

        class ProtoRouteCount; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount
        class RtypeNone; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone
        class RtypeOther; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther
        class RtypeOspfIntra; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra
        class RtypeOspfInter; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter
        class RtypeOspfExtern1; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1
        class RtypeOspfExtern2; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2
        class RtypeIsisSum; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum
        class RtypeIsisL1; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1
        class RtypeIsisL2; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2
        class RtypeIsisL1Ia; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia
        class RtypeBgpInt; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt
        class RtypeBgpExt; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt
        class RtypeBgpLoc; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc
        class RtypeOspfNssa1; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1
        class RtypeOspfNssa2; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2
        class RtypeIgrp2Int; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int
        class RtypeIgrp2Ext; //type: Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount> proto_route_count;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt> rtype_bgp_ext;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt> rtype_bgp_int;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc> rtype_bgp_loc;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext> rtype_igrp2_ext;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int> rtype_igrp2_int;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1> rtype_isis_l1;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia> rtype_isis_l1_ia;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2> rtype_isis_l2;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum> rtype_isis_sum;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone> rtype_none;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1> rtype_ospf_extern1;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2> rtype_ospf_extern2;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter> rtype_ospf_inter;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra> rtype_ospf_intra;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1> rtype_ospf_nssa1;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2> rtype_ospf_nssa2;
        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther> rtype_other;


}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount : public Entity
{
    public:
        ProtoRouteCount();
        ~ProtoRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone : public Entity
{
    public:
        RtypeNone();
        ~RtypeNone();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther : public Entity
{
    public:
        RtypeOther();
        ~RtypeOther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra : public Entity
{
    public:
        RtypeOspfIntra();
        ~RtypeOspfIntra();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter : public Entity
{
    public:
        RtypeOspfInter();
        ~RtypeOspfInter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1 : public Entity
{
    public:
        RtypeOspfExtern1();
        ~RtypeOspfExtern1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2 : public Entity
{
    public:
        RtypeOspfExtern2();
        ~RtypeOspfExtern2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum : public Entity
{
    public:
        RtypeIsisSum();
        ~RtypeIsisSum();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1 : public Entity
{
    public:
        RtypeIsisL1();
        ~RtypeIsisL1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2 : public Entity
{
    public:
        RtypeIsisL2();
        ~RtypeIsisL2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia : public Entity
{
    public:
        RtypeIsisL1Ia();
        ~RtypeIsisL1Ia();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt : public Entity
{
    public:
        RtypeBgpInt();
        ~RtypeBgpInt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt : public Entity
{
    public:
        RtypeBgpExt();
        ~RtypeBgpExt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc : public Entity
{
    public:
        RtypeBgpLoc();
        ~RtypeBgpLoc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1 : public Entity
{
    public:
        RtypeOspfNssa1();
        ~RtypeOspfNssa1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2 : public Entity
{
    public:
        RtypeOspfNssa2();
        ~RtypeOspfNssa2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int : public Entity
{
    public:
        RtypeIgrp2Int();
        ~RtypeIgrp2Int();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int


class Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext : public Entity
{
    public:
        RtypeIgrp2Ext();
        ~RtypeIgrp2Ext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf active_routes_count; //type: uint32
        YLeaf num_backup_routes; //type: uint32
        YLeaf num_active_paths; //type: uint32
        YLeaf num_backup_paths; //type: uint32



}; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext


class Rib::RibTableIds::RibTableId::RibTableItfHndls : public Entity
{
    public:
        RibTableItfHndls();
        ~RibTableItfHndls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RibTableItfHndl; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl> > rib_table_itf_hndl;


}; // Rib::RibTableIds::RibTableId::RibTableItfHndls


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl : public Entity
{
    public:
        RibTableItfHndl();
        ~RibTableItfHndl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf handle; //type: int32

        class ItfRoute; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute> > itf_route;


}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute : public Entity
{
    public:
        ItfRoute();
        ~ItfRoute();

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

        class RoutePath; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath> route_path;


}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath : public Entity
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



        class Ipv4RibEdmPath; //type: Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath


class Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath : public Entity
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



}; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath


}
}

#endif /* _CISCO_IOS_XR_IP_RIB_IPV4_OPER_ */
