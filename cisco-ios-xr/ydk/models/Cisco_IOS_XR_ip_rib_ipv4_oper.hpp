#ifndef _CISCO_IOS_XR_IP_RIB_IPV4_OPER_
#define _CISCO_IOS_XR_IP_RIB_IPV4_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Vrfs : public Entity
    {
        public:
            Vrfs();
            ~Vrfs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Vrf : public Entity
        {
            public:
                Vrf();
                ~Vrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf vrf_name; //type: string

            class Afs : public Entity
            {
                public:
                    Afs();
                    ~Afs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Af : public Entity
                {
                    public:
                        Af();
                        ~Af();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf af_name; //type: string

                    class Safs : public Entity
                    {
                        public:
                            Safs();
                            ~Safs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Saf : public Entity
                        {
                            public:
                                Saf();
                                ~Saf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf saf_name; //type: string

                            class IpRibRouteTableNames : public Entity
                            {
                                public:
                                    IpRibRouteTableNames();
                                    ~IpRibRouteTableNames();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class IpRibRouteTableName : public Entity
                                {
                                    public:
                                        IpRibRouteTableName();
                                        ~IpRibRouteTableName();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf route_table_name; //type: string

                                    class Routes : public Entity
                                    {
                                        public:
                                            Routes();
                                            ~Routes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Route : public Entity
                                        {
                                            public:
                                                Route();
                                                ~Route();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


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

                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class Ipv4RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv4RibEdmPath();
                                                        ~Ipv4RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf address; //type: string
                                                        YLeaf information_source; //type: string
                                                        YLeaf v6_nexthop; //type: string
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


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath> route_path;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route> > route;


                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes


                                    class DeletedRoutes : public Entity
                                    {
                                        public:
                                            DeletedRoutes();
                                            ~DeletedRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class DeletedRoute : public Entity
                                        {
                                            public:
                                                DeletedRoute();
                                                ~DeletedRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


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

                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class Ipv4RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv4RibEdmPath();
                                                        ~Ipv4RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf address; //type: string
                                                        YLeaf information_source; //type: string
                                                        YLeaf v6_nexthop; //type: string
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


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath> route_path;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute> > deleted_route;


                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes


                                    class DestinationKw : public Entity
                                    {
                                        public:
                                            DestinationKw();
                                            ~DestinationKw();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class DestBestRoutes : public Entity
                                        {
                                            public:
                                                DestBestRoutes();
                                                ~DestBestRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class DestBestRoute : public Entity
                                            {
                                                public:
                                                    DestBestRoute();
                                                    ~DestBestRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


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

                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class Ipv4RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv4RibEdmPath();
                                                            ~Ipv4RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf address; //type: string
                                                            YLeaf information_source; //type: string
                                                            YLeaf v6_nexthop; //type: string
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


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath> route_path;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute> > dest_best_route;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes


                                        class DestQRoutes : public Entity
                                        {
                                            public:
                                                DestQRoutes();
                                                ~DestQRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class DestQRoute : public Entity
                                            {
                                                public:
                                                    DestQRoute();
                                                    ~DestQRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


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

                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class Ipv4RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv4RibEdmPath();
                                                            ~Ipv4RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf address; //type: string
                                                            YLeaf information_source; //type: string
                                                            YLeaf v6_nexthop; //type: string
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


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath> route_path;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute> > dest_q_route;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes


                                        class DestBackupRoutes : public Entity
                                        {
                                            public:
                                                DestBackupRoutes();
                                                ~DestBackupRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class DestBackupRoute : public Entity
                                            {
                                                public:
                                                    DestBackupRoute();
                                                    ~DestBackupRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


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

                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class Ipv4RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv4RibEdmPath();
                                                            ~Ipv4RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf address; //type: string
                                                            YLeaf information_source; //type: string
                                                            YLeaf v6_nexthop; //type: string
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


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath> route_path;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute> > dest_backup_route;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes


                                        class DestNextHopRoutes : public Entity
                                        {
                                            public:
                                                DestNextHopRoutes();
                                                ~DestNextHopRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class DestNextHopRoute : public Entity
                                            {
                                                public:
                                                    DestNextHopRoute();
                                                    ~DestNextHopRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


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

                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class Ipv4RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv4RibEdmPath();
                                                            ~Ipv4RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf address; //type: string
                                                            YLeaf information_source; //type: string
                                                            YLeaf v6_nexthop; //type: string
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


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath> route_path;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute> > dest_next_hop_route;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes


                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes> dest_backup_routes;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes> dest_best_routes;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes> dest_next_hop_routes;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes> dest_q_routes;


                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw


                                    class Opaques : public Entity
                                    {
                                        public:
                                            Opaques();
                                            ~Opaques();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Opaque : public Entity
                                        {
                                            public:
                                                Opaque();
                                                ~Opaque();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf opaque_clientid; //type: int32
                                                YLeaf opaque_protoid; //type: int32
                                                YLeaf opaque_key_type; //type: int32
                                                YLeaf opaque_key_size; //type: int32
                                                YLeaf opaque_data_size; //type: int32
                                                YLeaf opaque_string; //type: string
                                                YLeaf key; //type: string
                                                YLeaf data; //type: string



                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque> > opaque;


                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques


                                    class Protocol : public Entity
                                    {
                                        public:
                                            Protocol();
                                            ~Protocol();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Mobile : public Entity
                                        {
                                            public:
                                                Mobile();
                                                ~Mobile();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs> non_as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile


                                        class Subscriber : public Entity
                                        {
                                            public:
                                                Subscriber();
                                                ~Subscriber();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs> non_as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber


                                        class Connected : public Entity
                                        {
                                            public:
                                                Connected();
                                                ~Connected();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs> non_as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected


                                        class Dagr : public Entity
                                        {
                                            public:
                                                Dagr();
                                                ~Dagr();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs> non_as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr


                                        class Rip : public Entity
                                        {
                                            public:
                                                Rip();
                                                ~Rip();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs> non_as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip


                                        class Ospf : public Entity
                                        {
                                            public:
                                                Ospf();
                                                ~Ospf();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf as; //type: string

                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As> > as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf


                                        class Static_ : public Entity
                                        {
                                            public:
                                                Static_();
                                                ~Static_();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs> non_as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_


                                        class Rpl : public Entity
                                        {
                                            public:
                                                Rpl();
                                                ~Rpl();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf as; //type: string

                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As> > as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl


                                        class Application : public Entity
                                        {
                                            public:
                                                Application();
                                                ~Application();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs> non_as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application


                                        class TeClient : public Entity
                                        {
                                            public:
                                                TeClient();
                                                ~TeClient();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs> non_as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient


                                        class Eigrp : public Entity
                                        {
                                            public:
                                                Eigrp();
                                                ~Eigrp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf as; //type: string

                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As> > as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp


                                        class Local : public Entity
                                        {
                                            public:
                                                Local();
                                                ~Local();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class Smiap : public Entity
                                            {
                                                public:
                                                    Smiap();
                                                    ~Smiap();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap


                                            class Lspv : public Entity
                                            {
                                                public:
                                                    Lspv();
                                                    ~Lspv();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv> lspv;
                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs> non_as;
                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap> smiap;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local


                                        class Bgp : public Entity
                                        {
                                            public:
                                                Bgp();
                                                ~Bgp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf as; //type: string

                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As> > as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp


                                        class Isis : public Entity
                                        {
                                            public:
                                                Isis();
                                                ~Isis();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf as; //type: string

                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes> protocol_routes;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As> > as;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis


                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application> application;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp> bgp;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected> connected;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr> dagr;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp> eigrp;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis> isis;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local> local;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile> mobile;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf> ospf;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip> rip;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl> rpl;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_> static_;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber> subscriber;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient> te_client;


                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol


                                    class QRoutes : public Entity
                                    {
                                        public:
                                            QRoutes();
                                            ~QRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class QRoute : public Entity
                                        {
                                            public:
                                                QRoute();
                                                ~QRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


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

                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class Ipv4RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv4RibEdmPath();
                                                        ~Ipv4RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf address; //type: string
                                                        YLeaf information_source; //type: string
                                                        YLeaf v6_nexthop; //type: string
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


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath> route_path;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute> > q_route;


                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes


                                    class BackupRoutes : public Entity
                                    {
                                        public:
                                            BackupRoutes();
                                            ~BackupRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class BackupRoute : public Entity
                                        {
                                            public:
                                                BackupRoute();
                                                ~BackupRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


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

                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class Ipv4RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv4RibEdmPath();
                                                        ~Ipv4RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf address; //type: string
                                                        YLeaf information_source; //type: string
                                                        YLeaf v6_nexthop; //type: string
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


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath> route_path;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute> > backup_route;


                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes


                                    class Adverts : public Entity
                                    {
                                        public:
                                            Adverts();
                                            ~Adverts();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Advert : public Entity
                                        {
                                            public:
                                                Advert();
                                                ~Advert();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string
                                                YLeaf prefix_length; //type: uint8

                                            class Ipv4RibEdmAdvert : public Entity
                                            {
                                                public:
                                                    Ipv4RibEdmAdvert();
                                                    ~Ipv4RibEdmAdvert();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf protocol_id; //type: uint32
                                                    YLeaf client_id; //type: uint32
                                                    YLeaf number_of_extended_communities; //type: uint32
                                                    YLeaf extended_communities; //type: string
                                                    YLeaf protocol_opaque_flags; //type: uint8
                                                    YLeaf protocol_opaque; //type: uint32
                                                    YLeaf code; //type: int8
                                                    YLeaf instance_name; //type: string



                                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert> > ipv4_rib_edm_advert;


                                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert> > advert;


                                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts


                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts> adverts;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes> backup_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes> deleted_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw> destination_kw;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques> opaques;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol> protocol;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes> q_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes> routes;


                                }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName> > ip_rib_route_table_name;


                            }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames


                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames> ip_rib_route_table_names;


                        }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf> > saf;


                    }; // RibStdby::Vrfs::Vrf::Afs::Af::Safs


                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af::Safs> safs;


                }; // RibStdby::Vrfs::Vrf::Afs::Af


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs::Af> > af;


            }; // RibStdby::Vrfs::Vrf::Afs


                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf::Afs> afs;


        }; // RibStdby::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs::Vrf> > vrf;


    }; // RibStdby::Vrfs


    class RibTableIds : public Entity
    {
        public:
            RibTableIds();
            ~RibTableIds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class RibTableId : public Entity
        {
            public:
                RibTableId();
                ~RibTableId();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf tableid; //type: string

            class SummaryProtos : public Entity
            {
                public:
                    SummaryProtos();
                    ~SummaryProtos();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class SummaryProto : public Entity
                {
                    public:
                        SummaryProto();
                        ~SummaryProto();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf protoid; //type: int32
                        YLeaf name; //type: string
                        YLeaf instance; //type: string

                    class ProtoRouteCount : public Entity
                    {
                        public:
                            ProtoRouteCount();
                            ~ProtoRouteCount();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount


                    class RtypeNone : public Entity
                    {
                        public:
                            RtypeNone();
                            ~RtypeNone();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone


                    class RtypeOther : public Entity
                    {
                        public:
                            RtypeOther();
                            ~RtypeOther();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther


                    class RtypeOspfIntra : public Entity
                    {
                        public:
                            RtypeOspfIntra();
                            ~RtypeOspfIntra();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra


                    class RtypeOspfInter : public Entity
                    {
                        public:
                            RtypeOspfInter();
                            ~RtypeOspfInter();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter


                    class RtypeOspfExtern1 : public Entity
                    {
                        public:
                            RtypeOspfExtern1();
                            ~RtypeOspfExtern1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1


                    class RtypeOspfExtern2 : public Entity
                    {
                        public:
                            RtypeOspfExtern2();
                            ~RtypeOspfExtern2();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2


                    class RtypeIsisSum : public Entity
                    {
                        public:
                            RtypeIsisSum();
                            ~RtypeIsisSum();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum


                    class RtypeIsisL1 : public Entity
                    {
                        public:
                            RtypeIsisL1();
                            ~RtypeIsisL1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1


                    class RtypeIsisL2 : public Entity
                    {
                        public:
                            RtypeIsisL2();
                            ~RtypeIsisL2();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2


                    class RtypeIsisL1Ia : public Entity
                    {
                        public:
                            RtypeIsisL1Ia();
                            ~RtypeIsisL1Ia();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia


                    class RtypeBgpInt : public Entity
                    {
                        public:
                            RtypeBgpInt();
                            ~RtypeBgpInt();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt


                    class RtypeBgpExt : public Entity
                    {
                        public:
                            RtypeBgpExt();
                            ~RtypeBgpExt();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt


                    class RtypeBgpLoc : public Entity
                    {
                        public:
                            RtypeBgpLoc();
                            ~RtypeBgpLoc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc


                    class RtypeOspfNssa1 : public Entity
                    {
                        public:
                            RtypeOspfNssa1();
                            ~RtypeOspfNssa1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1


                    class RtypeOspfNssa2 : public Entity
                    {
                        public:
                            RtypeOspfNssa2();
                            ~RtypeOspfNssa2();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2


                    class RtypeIgrp2Int : public Entity
                    {
                        public:
                            RtypeIgrp2Int();
                            ~RtypeIgrp2Int();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int


                    class RtypeIgrp2Ext : public Entity
                    {
                        public:
                            RtypeIgrp2Ext();
                            ~RtypeIgrp2Ext();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext


                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount> proto_route_count;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt> rtype_bgp_ext;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt> rtype_bgp_int;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc> rtype_bgp_loc;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext> rtype_igrp2_ext;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int> rtype_igrp2_int;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1> rtype_isis_l1;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia> rtype_isis_l1_ia;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2> rtype_isis_l2;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum> rtype_isis_sum;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone> rtype_none;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1> rtype_ospf_extern1;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2> rtype_ospf_extern2;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter> rtype_ospf_inter;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra> rtype_ospf_intra;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1> rtype_ospf_nssa1;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2> rtype_ospf_nssa2;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther> rtype_other;


                }; // RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto> > summary_proto;


            }; // RibStdby::RibTableIds::RibTableId::SummaryProtos


            class RibTableItfHndls : public Entity
            {
                public:
                    RibTableItfHndls();
                    ~RibTableItfHndls();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class RibTableItfHndl : public Entity
                {
                    public:
                        RibTableItfHndl();
                        ~RibTableItfHndl();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf handle; //type: int32

                    class ItfRoute : public Entity
                    {
                        public:
                            ItfRoute();
                            ~ItfRoute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


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

                        class RoutePath : public Entity
                        {
                            public:
                                RoutePath();
                                ~RoutePath();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Ipv4RibEdmPath : public Entity
                            {
                                public:
                                    Ipv4RibEdmPath();
                                    ~Ipv4RibEdmPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf address; //type: string
                                    YLeaf information_source; //type: string
                                    YLeaf v6_nexthop; //type: string
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


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                        }; // RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath


                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath> route_path;


                    }; // RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute> > itf_route;


                }; // RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl> > rib_table_itf_hndl;


            }; // RibStdby::RibTableIds::RibTableId::RibTableItfHndls


                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::RibTableItfHndls> rib_table_itf_hndls;
                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId::SummaryProtos> summary_protos;


        }; // RibStdby::RibTableIds::RibTableId


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds::RibTableId> > rib_table_id;


    }; // RibStdby::RibTableIds


        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::RibTableIds> rib_table_ids;
        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby::Vrfs> vrfs;


}; // RibStdby

class Rib : public Entity
{
    public:
        Rib();
        ~Rib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Vrfs : public Entity
    {
        public:
            Vrfs();
            ~Vrfs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Vrf : public Entity
        {
            public:
                Vrf();
                ~Vrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf vrf_name; //type: string

            class Afs : public Entity
            {
                public:
                    Afs();
                    ~Afs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Af : public Entity
                {
                    public:
                        Af();
                        ~Af();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf af_name; //type: string

                    class Safs : public Entity
                    {
                        public:
                            Safs();
                            ~Safs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Saf : public Entity
                        {
                            public:
                                Saf();
                                ~Saf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf saf_name; //type: string

                            class IpRibRouteTableNames : public Entity
                            {
                                public:
                                    IpRibRouteTableNames();
                                    ~IpRibRouteTableNames();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class IpRibRouteTableName : public Entity
                                {
                                    public:
                                        IpRibRouteTableName();
                                        ~IpRibRouteTableName();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf route_table_name; //type: string

                                    class Routes : public Entity
                                    {
                                        public:
                                            Routes();
                                            ~Routes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Route : public Entity
                                        {
                                            public:
                                                Route();
                                                ~Route();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


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

                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class Ipv4RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv4RibEdmPath();
                                                        ~Ipv4RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf address; //type: string
                                                        YLeaf information_source; //type: string
                                                        YLeaf v6_nexthop; //type: string
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


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath> route_path;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route> > route;


                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes


                                    class DeletedRoutes : public Entity
                                    {
                                        public:
                                            DeletedRoutes();
                                            ~DeletedRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class DeletedRoute : public Entity
                                        {
                                            public:
                                                DeletedRoute();
                                                ~DeletedRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


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

                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class Ipv4RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv4RibEdmPath();
                                                        ~Ipv4RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf address; //type: string
                                                        YLeaf information_source; //type: string
                                                        YLeaf v6_nexthop; //type: string
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


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath> route_path;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute> > deleted_route;


                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes


                                    class DestinationKw : public Entity
                                    {
                                        public:
                                            DestinationKw();
                                            ~DestinationKw();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class DestBestRoutes : public Entity
                                        {
                                            public:
                                                DestBestRoutes();
                                                ~DestBestRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class DestBestRoute : public Entity
                                            {
                                                public:
                                                    DestBestRoute();
                                                    ~DestBestRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


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

                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class Ipv4RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv4RibEdmPath();
                                                            ~Ipv4RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf address; //type: string
                                                            YLeaf information_source; //type: string
                                                            YLeaf v6_nexthop; //type: string
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


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath> route_path;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute> > dest_best_route;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes


                                        class DestQRoutes : public Entity
                                        {
                                            public:
                                                DestQRoutes();
                                                ~DestQRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class DestQRoute : public Entity
                                            {
                                                public:
                                                    DestQRoute();
                                                    ~DestQRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


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

                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class Ipv4RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv4RibEdmPath();
                                                            ~Ipv4RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf address; //type: string
                                                            YLeaf information_source; //type: string
                                                            YLeaf v6_nexthop; //type: string
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


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath> route_path;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute> > dest_q_route;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes


                                        class DestBackupRoutes : public Entity
                                        {
                                            public:
                                                DestBackupRoutes();
                                                ~DestBackupRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class DestBackupRoute : public Entity
                                            {
                                                public:
                                                    DestBackupRoute();
                                                    ~DestBackupRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


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

                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class Ipv4RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv4RibEdmPath();
                                                            ~Ipv4RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf address; //type: string
                                                            YLeaf information_source; //type: string
                                                            YLeaf v6_nexthop; //type: string
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


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath> route_path;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute> > dest_backup_route;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes


                                        class DestNextHopRoutes : public Entity
                                        {
                                            public:
                                                DestNextHopRoutes();
                                                ~DestNextHopRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class DestNextHopRoute : public Entity
                                            {
                                                public:
                                                    DestNextHopRoute();
                                                    ~DestNextHopRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


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

                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class Ipv4RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv4RibEdmPath();
                                                            ~Ipv4RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


                                                            YLeaf address; //type: string
                                                            YLeaf information_source; //type: string
                                                            YLeaf v6_nexthop; //type: string
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


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath> route_path;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute> > dest_next_hop_route;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes


                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes> dest_backup_routes;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes> dest_best_routes;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes> dest_next_hop_routes;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes> dest_q_routes;


                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw


                                    class Opaques : public Entity
                                    {
                                        public:
                                            Opaques();
                                            ~Opaques();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Opaque : public Entity
                                        {
                                            public:
                                                Opaque();
                                                ~Opaque();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf opaque_clientid; //type: int32
                                                YLeaf opaque_protoid; //type: int32
                                                YLeaf opaque_key_type; //type: int32
                                                YLeaf opaque_key_size; //type: int32
                                                YLeaf opaque_data_size; //type: int32
                                                YLeaf opaque_string; //type: string
                                                YLeaf key; //type: string
                                                YLeaf data; //type: string



                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques::Opaque> > opaque;


                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques


                                    class Protocol : public Entity
                                    {
                                        public:
                                            Protocol();
                                            ~Protocol();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Mobile : public Entity
                                        {
                                            public:
                                                Mobile();
                                                ~Mobile();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs> non_as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile


                                        class Subscriber : public Entity
                                        {
                                            public:
                                                Subscriber();
                                                ~Subscriber();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs> non_as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber


                                        class Connected : public Entity
                                        {
                                            public:
                                                Connected();
                                                ~Connected();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs> non_as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected


                                        class Dagr : public Entity
                                        {
                                            public:
                                                Dagr();
                                                ~Dagr();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr::NonAs> non_as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr


                                        class Rip : public Entity
                                        {
                                            public:
                                                Rip();
                                                ~Rip();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip::NonAs> non_as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip


                                        class Ospf : public Entity
                                        {
                                            public:
                                                Ospf();
                                                ~Ospf();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf as; //type: string

                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As> > as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf


                                        class Static_ : public Entity
                                        {
                                            public:
                                                Static_();
                                                ~Static_();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs> non_as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_


                                        class Rpl : public Entity
                                        {
                                            public:
                                                Rpl();
                                                ~Rpl();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf as; //type: string

                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As> > as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl


                                        class Application : public Entity
                                        {
                                            public:
                                                Application();
                                                ~Application();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application::NonAs> non_as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application


                                        class TeClient : public Entity
                                        {
                                            public:
                                                TeClient();
                                                ~TeClient();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs> non_as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient


                                        class Eigrp : public Entity
                                        {
                                            public:
                                                Eigrp();
                                                ~Eigrp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf as; //type: string

                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As> > as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp


                                        class Local : public Entity
                                        {
                                            public:
                                                Local();
                                                ~Local();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class Smiap : public Entity
                                            {
                                                public:
                                                    Smiap();
                                                    ~Smiap();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap


                                            class Lspv : public Entity
                                            {
                                                public:
                                                    Lspv();
                                                    ~Lspv();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv> lspv;
                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs> non_as;
                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Smiap> smiap;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local


                                        class Bgp : public Entity
                                        {
                                            public:
                                                Bgp();
                                                ~Bgp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf as; //type: string

                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As> > as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp


                                        class Isis : public Entity
                                        {
                                            public:
                                                Isis();
                                                ~Isis();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;



                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf as; //type: string

                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;



                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;


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

                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;



                                                            class Ipv4RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv4RibEdmPath();
                                                                    ~Ipv4RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;


                                                                    YLeaf address; //type: string
                                                                    YLeaf information_source; //type: string
                                                                    YLeaf v6_nexthop; //type: string
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


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


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


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes> protocol_routes;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As> > as;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis


                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Application> application;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp> bgp;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected> connected;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Dagr> dagr;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp> eigrp;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis> isis;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local> local;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile> mobile;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf> ospf;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rip> rip;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl> rpl;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_> static_;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber> subscriber;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient> te_client;


                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol


                                    class QRoutes : public Entity
                                    {
                                        public:
                                            QRoutes();
                                            ~QRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class QRoute : public Entity
                                        {
                                            public:
                                                QRoute();
                                                ~QRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


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

                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class Ipv4RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv4RibEdmPath();
                                                        ~Ipv4RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf address; //type: string
                                                        YLeaf information_source; //type: string
                                                        YLeaf v6_nexthop; //type: string
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


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath> route_path;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute> > q_route;


                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes


                                    class BackupRoutes : public Entity
                                    {
                                        public:
                                            BackupRoutes();
                                            ~BackupRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class BackupRoute : public Entity
                                        {
                                            public:
                                                BackupRoute();
                                                ~BackupRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


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

                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;



                                                class Ipv4RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv4RibEdmPath();
                                                        ~Ipv4RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                        YLeaf address; //type: string
                                                        YLeaf information_source; //type: string
                                                        YLeaf v6_nexthop; //type: string
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


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath> route_path;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute> > backup_route;


                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes


                                    class Adverts : public Entity
                                    {
                                        public:
                                            Adverts();
                                            ~Adverts();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Advert : public Entity
                                        {
                                            public:
                                                Advert();
                                                ~Advert();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string
                                                YLeaf prefix_length; //type: uint8

                                            class Ipv4RibEdmAdvert : public Entity
                                            {
                                                public:
                                                    Ipv4RibEdmAdvert();
                                                    ~Ipv4RibEdmAdvert();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                    YLeaf protocol_id; //type: uint32
                                                    YLeaf client_id; //type: uint32
                                                    YLeaf number_of_extended_communities; //type: uint32
                                                    YLeaf extended_communities; //type: string
                                                    YLeaf protocol_opaque_flags; //type: uint8
                                                    YLeaf protocol_opaque; //type: uint32
                                                    YLeaf code; //type: int8
                                                    YLeaf instance_name; //type: string



                                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv4RibEdmAdvert> > ipv4_rib_edm_advert;


                                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert> > advert;


                                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts


                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts> adverts;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes> backup_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes> deleted_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw> destination_kw;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Opaques> opaques;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol> protocol;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes> q_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes> routes;


                                }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName> > ip_rib_route_table_name;


                            }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames


                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames> ip_rib_route_table_names;


                        }; // Rib::Vrfs::Vrf::Afs::Af::Safs::Saf


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs::Saf> > saf;


                    }; // Rib::Vrfs::Vrf::Afs::Af::Safs


                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af::Safs> safs;


                }; // Rib::Vrfs::Vrf::Afs::Af


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs::Af> > af;


            }; // Rib::Vrfs::Vrf::Afs


                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf::Afs> afs;


        }; // Rib::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs::Vrf> > vrf;


    }; // Rib::Vrfs


    class RibTableIds : public Entity
    {
        public:
            RibTableIds();
            ~RibTableIds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class RibTableId : public Entity
        {
            public:
                RibTableId();
                ~RibTableId();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf tableid; //type: string

            class SummaryProtos : public Entity
            {
                public:
                    SummaryProtos();
                    ~SummaryProtos();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class SummaryProto : public Entity
                {
                    public:
                        SummaryProto();
                        ~SummaryProto();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf protoid; //type: int32
                        YLeaf name; //type: string
                        YLeaf instance; //type: string

                    class ProtoRouteCount : public Entity
                    {
                        public:
                            ProtoRouteCount();
                            ~ProtoRouteCount();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount


                    class RtypeNone : public Entity
                    {
                        public:
                            RtypeNone();
                            ~RtypeNone();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone


                    class RtypeOther : public Entity
                    {
                        public:
                            RtypeOther();
                            ~RtypeOther();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther


                    class RtypeOspfIntra : public Entity
                    {
                        public:
                            RtypeOspfIntra();
                            ~RtypeOspfIntra();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra


                    class RtypeOspfInter : public Entity
                    {
                        public:
                            RtypeOspfInter();
                            ~RtypeOspfInter();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter


                    class RtypeOspfExtern1 : public Entity
                    {
                        public:
                            RtypeOspfExtern1();
                            ~RtypeOspfExtern1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1


                    class RtypeOspfExtern2 : public Entity
                    {
                        public:
                            RtypeOspfExtern2();
                            ~RtypeOspfExtern2();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2


                    class RtypeIsisSum : public Entity
                    {
                        public:
                            RtypeIsisSum();
                            ~RtypeIsisSum();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum


                    class RtypeIsisL1 : public Entity
                    {
                        public:
                            RtypeIsisL1();
                            ~RtypeIsisL1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1


                    class RtypeIsisL2 : public Entity
                    {
                        public:
                            RtypeIsisL2();
                            ~RtypeIsisL2();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2


                    class RtypeIsisL1Ia : public Entity
                    {
                        public:
                            RtypeIsisL1Ia();
                            ~RtypeIsisL1Ia();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia


                    class RtypeBgpInt : public Entity
                    {
                        public:
                            RtypeBgpInt();
                            ~RtypeBgpInt();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt


                    class RtypeBgpExt : public Entity
                    {
                        public:
                            RtypeBgpExt();
                            ~RtypeBgpExt();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt


                    class RtypeBgpLoc : public Entity
                    {
                        public:
                            RtypeBgpLoc();
                            ~RtypeBgpLoc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc


                    class RtypeOspfNssa1 : public Entity
                    {
                        public:
                            RtypeOspfNssa1();
                            ~RtypeOspfNssa1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1


                    class RtypeOspfNssa2 : public Entity
                    {
                        public:
                            RtypeOspfNssa2();
                            ~RtypeOspfNssa2();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2


                    class RtypeIgrp2Int : public Entity
                    {
                        public:
                            RtypeIgrp2Int();
                            ~RtypeIgrp2Int();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int


                    class RtypeIgrp2Ext : public Entity
                    {
                        public:
                            RtypeIgrp2Ext();
                            ~RtypeIgrp2Ext();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf active_routes_count; //type: uint32
                            YLeaf num_backup_routes; //type: uint32
                            YLeaf num_active_paths; //type: uint32
                            YLeaf num_backup_paths; //type: uint32



                    }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext


                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount> proto_route_count;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt> rtype_bgp_ext;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt> rtype_bgp_int;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc> rtype_bgp_loc;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext> rtype_igrp2_ext;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int> rtype_igrp2_int;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1> rtype_isis_l1;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia> rtype_isis_l1_ia;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2> rtype_isis_l2;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum> rtype_isis_sum;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone> rtype_none;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1> rtype_ospf_extern1;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2> rtype_ospf_extern2;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter> rtype_ospf_inter;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra> rtype_ospf_intra;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1> rtype_ospf_nssa1;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2> rtype_ospf_nssa2;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther> rtype_other;


                }; // Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto> > summary_proto;


            }; // Rib::RibTableIds::RibTableId::SummaryProtos


            class RibTableItfHndls : public Entity
            {
                public:
                    RibTableItfHndls();
                    ~RibTableItfHndls();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class RibTableItfHndl : public Entity
                {
                    public:
                        RibTableItfHndl();
                        ~RibTableItfHndl();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf handle; //type: int32

                    class ItfRoute : public Entity
                    {
                        public:
                            ItfRoute();
                            ~ItfRoute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


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

                        class RoutePath : public Entity
                        {
                            public:
                                RoutePath();
                                ~RoutePath();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Ipv4RibEdmPath : public Entity
                            {
                                public:
                                    Ipv4RibEdmPath();
                                    ~Ipv4RibEdmPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf address; //type: string
                                    YLeaf information_source; //type: string
                                    YLeaf v6_nexthop; //type: string
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


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv4RibEdmPath> > ipv4_rib_edm_path;


                        }; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath


                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath> route_path;


                    }; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute> > itf_route;


                }; // Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl> > rib_table_itf_hndl;


            }; // Rib::RibTableIds::RibTableId::RibTableItfHndls


                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::RibTableItfHndls> rib_table_itf_hndls;
                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId::SummaryProtos> summary_protos;


        }; // Rib::RibTableIds::RibTableId


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds::RibTableId> > rib_table_id;


    }; // Rib::RibTableIds


        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::RibTableIds> rib_table_ids;
        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib::Vrfs> vrfs;


}; // Rib



}
}

#endif /* _CISCO_IOS_XR_IP_RIB_IPV4_OPER_ */

